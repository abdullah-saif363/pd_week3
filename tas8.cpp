#include <iostream>
using namespace std;
main(){
	float vp,fp,tkv,tkf,ter;
	cout<<"Enter vegetable price per kilogram (in coins):  ";
	cin>> vp;
	cout<<"Enter fruit price per kilogram (in coins):  ";
	cin>> fp;
	cout<<"Enter total kilogram of  vegetables :  ";
	cin>> tkv;
	cout<<"Enter total kilogram of  fruits :  ";
	cin>> tkf;
	ter = ( vp*tkv + fp*tkf)/1.94;
	cout<<"Total earnings in Rupees:  "<<ter;
}


