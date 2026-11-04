#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter first number :";
	cin>>x;
	cout<<"\nEnter second number :";
	cin>>y;
	
	int * ptr1 = &x;
	int * ptr2 = &y;
	
	cout<<"\n Before swapping ,the values are :";
	cout<<"\n x  :" <<x;
	cout<<"\n y  : "<<y;
		
int temp;
 temp  = *ptr1;
 *ptr1 = *ptr2;
 *ptr2 = temp;
 
	cout<<"\n After  swapping ,the values are :";
	
	cout<<"\n x : " <<x;
	cout<<"\n y : "<<y;
	return 0;
}
