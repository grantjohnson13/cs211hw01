#include <iostream>
using namespace std;

int main()
{

    // Declare the variables
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    // Input the integers for each input
    cout << "Please enter the number of \n";
    cout << "Quarters:";
    cin >> quarters;
    cout << "Dimes:";
    cin >> dimes;
    cout << "Nickes:";
    cin >> nickels;
    cout << "Pennies:";
    cin >> pennies;

    // Display the total amount of cents
    int total = quarters * 25 + dimes * 10 + nickels * 5 + pennies; //multiplies the variables by thier worth in cents
    cout << "You have " << total << "cents\n";

    return 0;
}
