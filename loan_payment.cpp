#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double loan_amount, annual_rate, monthly_rate;
    double monthly_payment, amount_paid_back, interest_paid;
    double growth_factor;
    int number_of_payments;

    cout << "Enter loan amount: $";
    cin >> loan_amount;

    cout << "Enter annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter number of monthly payments: ";
    cin >> number_of_payments;

    monthly_rate = annual_rate / 100.0 / 12.0;
    growth_factor = pow(1.0 + monthly_rate, number_of_payments);

    if (monthly_rate == 0.0) {
        monthly_payment = loan_amount / number_of_payments;
    } else {
        monthly_payment = loan_amount * monthly_rate * growth_factor
                          / (growth_factor - 1.0);
    }

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);
    cout << "\nMonthly Loan Payment Report\n";
    cout << left << setw(25) << "Loan Amount:"
         << right << loan_amount << "\n";
    cout << left << setw(25) << "Monthly Interest Rate:"
         << right << monthly_rate * 100.0 << "%\n";
    cout << left << setw(25) << "Number of Payments:"
         << right << number_of_payments << "\n";
    cout << left << setw(25) << "Monthly Payment:"
         << right << monthly_payment << "\n";
    cout << left << setw(25) << "Amount Paid Back:"
         << right << amount_paid_back << "\n";
    cout << left << setw(25) << "Interest Paid:"
         << right << interest_paid << "\n";

    return 0;
}
