//Norbert Acedański
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int a, b;
int main()
{
	cout<<setprecision(100000);
	cout<<"Program that finds GCD of 2 numbers\n";
	cout<<"Input first number: ";
	cin>>a;
	cout<<"Input second number: ";
	cin>>b;
	if(a<=0 || b<=0)
	{
		cout<<"Input positive numbers\n";
		system("pause");
		return 0;
	}
	cout<<"GCD of "<<a<<" and "<<b<<" is: ";
	for(int i=0; a!=b; i++)
		if(a>b)
			a-=b;
		else
			b-=a;
	if(a==1)
		cout<<a<< ". These are relatively prime numbers.\n";
	else
		cout<<a<<endl;
	system("pause");
	return 0;
}
