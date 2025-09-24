#include <iostream>
using namespace std;

int main() {
    double hours, wage, grossPay, taxes, netPay;

    // Input
    cout << "Enter hours worked in a week: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> wage;

    // Gross Pay Calculation
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        double overtimeHours = hours - 40;
        grossPay = (40 * wage) + (overtimeHours * wage * 1.5);
    }

    // Taxes Calculation
    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    // Net Pay
    netPay = grossPay - taxes;

    // Output
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}

