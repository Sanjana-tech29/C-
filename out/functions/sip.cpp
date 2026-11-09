#include <iostream>
#include <cmath>
using namespace std;

double calculateSIP(double monthlyInvestment, double annualRate, int years)
{
    double r = annualRate / 12 / 100;
    int n = years * 12;

    double amount = monthlyInvestment *
                    ((pow(1 + r, n) - 1) / r) *
                    (1 + r);

    return amount;
}

int main()
{
    double investment, rate;
    int years;

    cout << "Enter monthly investment: ";
    cin >> investment;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Future Value = "
         << calculateSIP(investment, rate, years);

    return 0;
}