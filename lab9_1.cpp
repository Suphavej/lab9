#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
    
    double loan, interestRate, annualPayment;
    
    
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> annualPayment;
    
    
    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    
    cout << fixed << setprecision(2);
    
    int year = 1; 
    double prevBalance = loan;

    while (prevBalance > 0) {
        double interest = (interestRate / 100.0) * prevBalance; 
        double total = prevBalance + interest; 
        double payment = (total < annualPayment) ? total : annualPayment; 
        double newBalance = total - payment; 

        
        cout << setw(13) << left << year;
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        
        prevBalance = newBalance;
        year++;
    }
    return 0;
}
