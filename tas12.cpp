#include <iostream>
using namespace std;
main(){
	int n,w,h,tnw;
	cout<<"Enter the number of square meters you can paint: ";
	cin>> n ;
	cout<<"Enter the width of single wall in meters: ";
	cin>> w ;
	cout<<"Enter the height of single wall in meters: ";
	cin>> h	 ;
	tnw = n/(w*h);
	cout<<"Number of walls you can paint: "<< tnw;
}

