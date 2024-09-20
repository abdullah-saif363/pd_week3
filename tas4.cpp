#include <iostream>
using namespace std;
main(){
	float i,p;
	int cp;
	cout<<"Enter imposter count: ";
	cin>> i;
	cout<<"Enter Player count: ";
	cin>> p;
	cp = 100*(i/p);
	cout <<"Chance of being an imposter:  "  <<cp <<"%";
}










