#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double princpial;
  double annual_rate;
  double rate;
  double amount;
  double interest_earned;
  int times_compounded;

  cout << "Enter the principal balance: $";
  cin >> principal;

  cout << "Enter the annual interest rate (%): ";
  cin >> annual_rate;

  cout << "Enter the number of times interest is compounded per year: ";
  cin >> times_compounded; 

  rate = annual_rate / 100.0;
  amount = principal * pow(1.0 + rate / times_compounded, times_compounded);
  interest_earned = amount - principal;

  cout << fixed << setprecision(2);

  cout << "\n Compound Interest Report/n";
  cout << "----------------------------------------\n";
  cout << left << setw(25) << "Annual Interest Rate:" << right << setw(12) << annual_rate << "%\n";
  cout << left << setw(25) << "Times Compounded:" << right << setw(12) << times_compounded << "%\n";
  cout << left << setw(25) << "Principal:" << right << setw(12) << principal << "%\n";
  cout << left << setw(25) << "Interest Earned" << right << setw(12) << interest_earned << "%\n";
  cout << left << setw(25) << "Amount in Savings:" << right << setw(12) << amount << "%\n";

  return 0;
}
