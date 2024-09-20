#include <iostream>
using namespace std;
main(){
	float atp,ctp, nats,ncts,pdc,tagt,dc,rad;
	string mn,movie;
	cout<<"Enter the movie name: ";
	cin>>mn;
	cout<<"Enter the adult ticket price:$ ";
	cin>>atp;
	cout<<"Enter the child ticket price:$ ";
	cin>>ctp;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>nats;
	cout<<"Enter the number of child tickets sold: ";
	cin>>ncts;
	cout<<"Enter the percentage of the amount donated to the charity: ";
	cin>>pdc;
	movie = mn;
	cout<<"Movie: "<< movie <<endl;;
	tagt = nats*atp + ncts*ctp ;
	cout<<"Total amount generated from ticket sales:$ "<<tagt << endl;
	dc = tagt/10 ;
	cout<<"Donation to charity : "<< dc << endl;
	rad = tagt-dc;
	cout<<"Remaining amount after donation:$ "<<rad;
}