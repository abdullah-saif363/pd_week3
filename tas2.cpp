#include<iostream>
using namespace std;
int main(){
	int m,fs,tf ;
	cout<<"Enter number of Minutes:  ";
	cin>> m;
	cout<<"Enter number of Frames per second: ";
	cin>> fs;
	tf = m*60*fs;
	cout<<"Total Number of Frames: " << tf;
}