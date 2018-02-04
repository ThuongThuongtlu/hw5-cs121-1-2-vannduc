#include <iostream>
using namespace std;
bool isleapyear(int n);
int main()
{
	int n;
	char x;
	do{
		cout<<" enter a year value:"; 
		cin>>n;
		if (isleapyear(n) == true)
		{
			cout<<n<< " is a leap year"<<endl;
		}
		else
		{
			cout<<n<< " is not a leap year"<<endl;
		}
		cout<<"Continue? (y/n) " ;
		cin>>x;
	}while(x != 'n');
	return 0;

}
bool isleapyear(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
}