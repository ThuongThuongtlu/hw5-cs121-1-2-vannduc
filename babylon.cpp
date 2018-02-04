#include <iostream>
#include <math.h>
using namespace std;

double babylonianRoot(double n);

int main()
{
	int n;
	char h;
	do{
		cout<<"enter a value: ";
		cin>>n;
		cout<<"square root of "<<n<<" is "<<babylonianRoot(n)<<endl;
		cout<<"continue? (y/n): ";
		cin>>h;
	}while(h != 'n');
	
	return 0;
}

double babylonianRoot(double n)
{
	return sqrt(n);
}