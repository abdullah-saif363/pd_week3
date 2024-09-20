#include <iostream>
using namespace std;
main(){
	float wl,d;
	string n;
	cout<<"Enter your name: ";
	cin>> n;
	cout<<"Enter the target weight loss in kilograms:  ";
	cin>>wl;
	d = wl*15;
	cout<<n<<" need "<<d<<"  days to lose " << wl << " by following doctor suggestions";
}
