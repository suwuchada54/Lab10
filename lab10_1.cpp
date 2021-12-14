#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double capital,interest,rebate,total,newbalamnce,perinterest;
	cout << "Enter initial loan: ";
	cin>>capital;
	cout << "Enter interest rate per year (%): ";
	cin>>perinterest;
	cout << "Enter amount you can pay per year: ";
	cin>>rebate;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for(int i = 1;capital>0;i++){
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i; 
			cout << setw(13) << left << capital;
			interest=capital*(perinterest/100);
			cout << setw(13) << left << interest;
			total=interest+capital;
			cout << setw(13) << left << total;
				if(rebate>total){rebate=total;}
			cout << setw(13) << left << rebate;	
			newbalamnce= total - rebate;
			cout << setw(13) << left << newbalamnce;
			cout << "\n";
			capital=newbalamnce;
	}
	return 0;
}
