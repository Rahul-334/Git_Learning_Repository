#include<iostream>
using namespace std;

int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}



int main()
{
	int n1,n2;

	cout<<"Enter two no's: ";
	cin>>n1>>n2;

	cout<<"Addition: "<<add(n1, n2)<<endl;
	cout<<"Subtraction: "<<sub(n1, n2)<<endl;

	return 0;
}