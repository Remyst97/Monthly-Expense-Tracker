/******************************************************************************
Mario's take home every week from his job is $1800.55 (he is a salaried employee). He wants to create a table of
expenses to determine how much he can allocate for personal expenses and savings.
He lives alone with 2 cats.

Here's Mario's expenses for the month of October

Expenses                    Payment due                 Amount

                                    Beginning Balance

Monthly rental payment      Oct 1                       $1500.00
Phone Bill                  Oct 10                      $88.95
Food for the month          Oct                         $400.00
Clothing                    Oct                         $200.00
Misc expense                Oct                         $500.00
Pet food                    Oct                         $200.00
Pet medical Expenses        Oct                         $75.00
funtime with friends        Oct                         $500.00
Utility Bill                Oct 1                       $450.00
Car insurance               Oct                         $167.00
Car fuel                    Oct                         $400.00

                                    Ending Balance

Determine Mario's net money at the end of October.
Note: Mario would like to use this program for the subsequent months after October


*******************************************************************************/
#include <iostream>
#include <limits> // Include the <limits> header for numeric_limits
using namespace std;

float getValidInput() {
    float value;
    while (true) {

        cin >> value;

        // Check if the input is a valid float
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Enter a valid number: ";
        }
        else {
            break; // Exit the loop if the input is valid
        }
    }
    return value; // Return the valid input
}

int main() {
    const float MONTHLY_EARNINGS = 1800.55 * 4;
    char choice;
    float rent, phone, food, clothing, miscExp, petFood, petCare, funFund, utility, carIns, carFuel;

    // User input for expenses
    do {
        cout << "Enter your rent for this month: $";
        rent = getValidInput();

        cout << "Enter your phone bill for this month: $";
        phone = getValidInput();

        cout << "Enter your food expenses for this month: $";
        food = getValidInput();

        cout << "Enter your clothing expenses for this month: $";
        clothing = getValidInput();

        cout << "Enter your miscellaneous expenses for this month: $";
        miscExp = getValidInput();

        cout << "Enter your pet food expenses for this month: $";
        petFood = getValidInput();

        cout << "Enter your pet care expenses for this month: $";
        petCare = getValidInput();

        cout << "Enter your funtime expenses for this month: $";
        funFund = getValidInput();

        cout << "Enter your monthly utility bill expense for this month: $";
        utility = getValidInput();

        cout << "Enter your monthly car insurance for this month: $";
        carIns = getValidInput();

        cout << "Enter your fuel expenses for this month: $";
        carFuel =  getValidInput();

        // Calculate and display expenses table
        cout << "\nBeginning Balance  $" << MONTHLY_EARNINGS << endl;
        cout << "Expenses                Date Due           Amount" << endl;
        

        // Display each expense
        cout << "Rental payment            Oct 1              $" << rent << endl;
        cout << "Phone Bill                Oct 10             $" << phone << endl;
        // Add similar lines for the remaining expenses

        // Calculate and display ending balance
        float endBalance = MONTHLY_EARNINGS - (rent + phone + clothing + miscExp + petFood + petCare + funFund + utility + carIns + carFuel);
        cout << "                          Ending Balance   $" << endBalance << endl;

        cout << "Would you like to continue: (y/n)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}