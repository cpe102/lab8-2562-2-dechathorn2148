#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    double loan;
    double rate;
    double pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	int end = 1;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	for(;end <= 15;end++)
	{
		    double inter = rate/100*loan;
	        double total = inter+loan;
	        double New = total-pay;
	        if(New < 0)
	        {
	        	New = 0.00;
			}
			if(pay > New)
			{
				pay=total;
			}
			cout << fixed << setprecision(2); 
	        cout << setw(13) << left << end; 
	        cout << setw(13) << left << loan;
	        cout << setw(13) << left << inter;
	        cout << setw(13) << left << total;
	        cout << setw(13) << left << pay;
	        cout << setw(13) << left << New;
	        loan=New;
	        cout << "\n";
	}
		
	
	return 0;
}
