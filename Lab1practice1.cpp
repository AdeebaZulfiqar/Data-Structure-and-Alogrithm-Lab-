#include<iostream>
using namespace std;
int main()
{
	int num[5];
	int sum=0;
	float average;
	cout<<"\nEnter a 5 number: ";
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
		sum=sum+num[i];
		
	}
	average= sum/5.0;
	cout<<"\nSum:"<<sum;
	cout<<"\nAverage:"<<average;
	return 0;
}
