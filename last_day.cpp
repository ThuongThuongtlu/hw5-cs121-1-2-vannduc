#include <iostream>
using namespace std;
int leapyear(int month,int year)
{	
	switch (month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if(year%4==0 & year%100!=0 or year%400==0)	
				return 29;
			else
				return 28;
		default:
			return -1;
	}
	return 0;
}
int main()
{	int month,year;
	
	char h;
	do{
		cout<<"enter month and year: ";
		cin>>month;
		cin>>year;
		cout<<"days in month:";
		cout<<leapyear(month,year)<<endl;
		cout<<"continue? (y/n): ";
		cin>>h;
	}while(h!='n');
	return 0;

}