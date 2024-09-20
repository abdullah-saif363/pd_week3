#include <iostream>
using namespace std;
main(){
	int age,nt,avn;
	cout<<"Enter the person's age: ";
	cin>> age;
	cout<<"Enter the number of times they 've moved: ";
	cin>> nt;
	avn = age/(nt+1);
	cout<<"Average number of years lived in same house: "<<avn;
}