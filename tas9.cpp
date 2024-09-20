#include <iostream>
using namespace std;
main(){
	int n ,s;
	cout<<"Enter your 4 digit integer: ";
	cin>>n;
	s = (n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10);
	cout<<"sum of individual numbers: "<< s;
}