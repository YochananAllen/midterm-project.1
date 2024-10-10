// midterm-project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen 
// Date: 10/10/2024
//

#include <iostream>

using namespace std;

int main() {
    double sales, advancedPay;

    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advancedPay;

    double commissionRate, commission;

    if (sales < 10000) {
        commissionRate = 0.05;
    }
    else if (sales < 15000) {
        commissionRate = 0.10;
    }
    else if (sales < 18000) {
        commissionRate = 0.12;
    }
    else if (sales < 22000) {
        commissionRate = 0.14;
    }
    else {
        commissionRate = 0.16;
    }

    commission = sales * commissionRate;

    double remainingPay = commission - advancedPay;

    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advancedPay << endl;

    if (remainingPay > 0) {
        cout << "Remaining Pay: $" << remainingPay << endl;
    }
    else {
        cout << "Amount to reimburse Crazy Al's: $" << -remainingPay << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
