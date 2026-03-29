#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
    double netBalance, payment, interestRate;
    int d1, d2;

    cout << "Enter net balance: ";
    cin >> netBalance;

    cout << "Enter payment amount: ";
    cin >> payment;

    cout << "Enter number of days in billing cycle (d1): ";
    cin >> d1;

    cout << "Enter number of days payment is made before cycle (d2): ";
    cin >> d2;

    cout << "Enter interest rate per month in decimal form: ";
    cin >> interestRate;

    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    double interest = averageDailyBalance * interestRate;

    cout << fixed << setprecision(2);
    locale loc("");
    cout.imbue(loc);

    cout << "\nAverage Daily Balance is: $" << averageDailyBalance << endl;
    cout << "Interest is: $" << interest << endl;

    return 0;
}
