// Restaurant Menu System
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

struct MenuItem {
    string name;
    double price;
};

struct Reservation {
    string customerName;
    int seats;
};

const int totalSeats = 10;
const int menuSize = 6;
Reservation reservations[totalSeats];
int reservedCount = 0;
MenuItem breakfastMenu[menuSize] = { {"Paratha & Tea", 250}, {"Halwa Puri", 300}, {"Omelette & Toast", 200},
                                     {"Aloo Paratha", 280}, {"Channa Bhatura", 320}, {"Paye & Naan", 500} };
MenuItem lunchMenu[menuSize] = { {"Chicken Biryani", 400}, {"Beef Korma", 500}, {"Daal Chawal", 250},
                                 {"Karahi", 800}, {"Palak Paneer", 450}, {"Chicken Handi", 750} };
MenuItem dinnerMenu[menuSize] = { {"Mutton Karahi", 1200}, {"BBQ Platter", 1000}, {"Fish Fry", 900},
                                  {"Butter Chicken", 850}, {"Prawn Masala", 950}, {"Rogan Josh", 1100} };

double totalRevenue = 0;

void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displayRestaurantName() {
    setConsoleColor(10); // Green color
    cout << "\n\t\t===============================" << endl;
    cout << "\t\t   WELCOME TO DESI DELIGHT   " << endl;
    cout << "\t\t===============================\n" << endl;
    setConsoleColor(7); // Reset to default
}

void displayMenu(MenuItem menu[], string type) {
    cout << "\n====== " << type << " Menu ======" << endl;
    for (int i = 0; i < menuSize; i++) {
        cout << i + 1 << ". " << menu[i].name << " - PKR " << fixed << setprecision(2) << menu[i].price << endl;
    }
}

void reserveTable() {
    if (reservedCount >= totalSeats) {
        cout << "All seats are full. You have been added to the waiting list.\n";
        return;
    }
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, reservations[reservedCount].customerName);
    reservations[reservedCount].seats = 1;
    reservedCount++;
    cout << "Reservation successful!\n";
}

void cancelReservation() {
    string name;
    cout << "Enter your name to cancel reservation: ";
    cin.ignore();
    getline(cin, name);
    for (int i = 0; i < reservedCount; i++) {
        if (reservations[i].customerName == name) {
            for (int j = i; j < reservedCount - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            reservedCount--;
            cout << "Reservation canceled successfully!\n";
            return;
        }
    }
    cout << "No reservation found under this name.\n";
}

void processBilling() {
    int foodChoice;
    cout << "Choose a meal type:\n1. Breakfast\n2. Lunch\n3. Dinner\n4. Exit to Main Menu\n";
    cin >> foodChoice;
    if (foodChoice == 4) return;

    MenuItem *selectedMenu = nullptr;
    string type;
    switch (foodChoice) {
        case 1: selectedMenu = breakfastMenu; type = "Breakfast"; break;
        case 2: selectedMenu = lunchMenu; type = "Lunch"; break;
        case 3: selectedMenu = dinnerMenu; type = "Dinner"; break;
        default: cout << "Invalid choice!\n"; return;
    }
    
    displayMenu(selectedMenu, type);
    double total = 0;
    int choice;
    do {
        cout << "Enter item number to order (0 to finish): ";
        cin >> choice;
        if (choice == 0) break;
        if (choice > 0 && choice <= menuSize) {
            total += selectedMenu[choice - 1].price;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
        
        cout << "Do you want to add more items? (1 for Yes, 2 for No): ";
        int moreChoice;
        cin >> moreChoice;
        if (moreChoice == 2) break;
    } while (true);
    
    double tax = total * 0.08;
    double grandTotal = total + tax;
    cout << "\nTotal Bill: PKR " << fixed << setprecision(2) << grandTotal << " (Including tax)\n";
    
    int paymentChoice;
    cout << "Choose Payment Method:\n1. Card\n2. Cash\n3. Exit\n";
    cin >> paymentChoice;
    if (paymentChoice == 3) return;
    if (paymentChoice == 1) {
        cout << "Payment of PKR " << grandTotal << " has been deducted from your card.\n";
    } else {
        double cashGiven;
        cout << "Enter cash amount given: ";
        cin >> cashGiven;
        while (cashGiven < grandTotal) {
            cout << "You have to pay PKR " << grandTotal - cashGiven << " more. Enter the remaining amount: ";
            double additional;
            cin >> additional;
            cashGiven += additional;
        }
        cout << "You got PKR " << (cashGiven - grandTotal) << " as change.\n";
    }
    totalRevenue += grandTotal;
}

void managerDashboard() {
    cout << "\n===== Manager Dashboard =====" << endl;
    cout << "Total Revenue: PKR " << fixed << setprecision(2) << totalRevenue << endl;
    cout << "Total Reservations: " << reservedCount << " / " << totalSeats << endl;
}

void showMenu() {
    displayRestaurantName();
    int choice;
    do {
        cout << "\n1. Reserve Table\n2. Cancel Reservation\n3. Order Food\n4. Manager Dashboard\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: reserveTable(); break;
            case 2: cancelReservation(); break;
            case 3: processBilling(); break;
            case 4: managerDashboard(); break;
            case 5: cout << "Thank you for visiting!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
}

int main() {
    showMenu();
    return 0;
}

