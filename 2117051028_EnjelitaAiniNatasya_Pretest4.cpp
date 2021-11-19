#include <iostream>
using namespace std;

int main() {
	int p, q;
	
	cout << "Angka = ";
	cin >> p;
	q = 2;
	
	do{
	if(p==2 || p==3 || p==5 || p==7){
		cout << p << " Adalah Bilangan Prima";
		break;
			
	}else if(p%2==0 || p%3==0 || p%5==0 || p%7==0 || p%11==0 || p%13==0 || p%17==0 || p%19==0 || p%29==0 || p%31==0 || p%37==0 || p%41==0 || p%43==0 || p%47 || p==0 || p==1 || p<0){
		cout << p << " Adalah Bukan Bilangan Prima";
		break;
			
	}else {
		cout << p << " Adalah Bilangan Prima";
		break;
	
	} q++;
	}while (q<p);
}
