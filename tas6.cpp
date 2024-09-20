#include <iostream>
using namespace std;
main(){
	float sb,cb,ab,cfp,cfs;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>> sb;
	cout<<"Enter the cost of bag:$ ";
	cin>> cb;
	cout<<"Enter the area in square foot that can be covered by the bag: ";
	cin>> ab;
	cfp = cb/sb;
	cout<<"cost of fertilizer per pound: "<<cfp <<endl ;
	cfs = cb/ab;
	cout<<"the cost of fertilizing the area per square foot: "<<cfs;
}
