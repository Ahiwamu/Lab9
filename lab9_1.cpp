#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double PrevBalance, Interest, Total, Payment, NewBalance = 1;
    double loan, interestperyear, payperyear;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestperyear;
	cout << "Enter amount you can pay per year: ";
	cin >> payperyear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 1;
	NewBalance = loan;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
	    PrevBalance = NewBalance;
	    Interest = PrevBalance * interestperyear / 100.0;
	    Total = PrevBalance + Interest;
	    
	    if(payperyear > Total){
	        Payment = Total;
	    }
	    else{
	        Payment = payperyear;
	    }
	    
	    NewBalance = Total - Payment;
	    
	    cout << fixed << setprecision(2); 
    	cout << setw(13) << left << year; 
	    cout << setw(13) << left << PrevBalance;
    	cout << setw(13) << left << Interest;
    	cout << setw(13) << left << Total;
	    cout << setw(13) << left << Payment;
    	cout << setw(13) << left << NewBalance;
    	cout << "\n";	
    	
    	year++;
    	
	}while(NewBalance != 0);
	
	
	return 0;
}
