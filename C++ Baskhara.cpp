#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cout << "Please enter the a value: ";
  	cin >> a;
  	cout << "Please enter the a value: ";
  	cin >> b;
  	cout << "Please enter the a value: ";
  	cin >> c;
	double delta, x1, x2;
	if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            cout <<"Nao tem raizes reais\n";
        }
        else if (delta==0){
            x1=(-b)/(2*a);
            cout << "Possui apenas uma raiz real: "<< x1<<endl;
        }else{
            x2=(-b - sqrt(delta))/(2*a);
            x2=(-b + sqrt(delta))/(2*a);
            cout << "Raiz 1: "<< x1 <<endl;
            cout << "Raiz 2: "<< x2 <<endl;
        }
    }else{
        cout <<"a=0, nao e uma equacao do segundo grau\n";
    }
	return 0;
}
