#include<iostream>
using namespace std;
 main(){

	int a,fv,iv,t;
	cout<<"Enter Initial Velocity: ";
	cin>> iv;
	cout<<"Enter Accelaration: ";
	cin>> a;
	cout<<"Enter Time: ";
	cin>> t;
	fv = a*t + iv ;
	cout<<"Final Velocity is: " << fv;
}