#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"\n Enter an integer :";
	cin>>x;
	int * pointer = &x;
	
	cout<<"\n The value of x before  modification :"<<x;
	
	*pointer  = 3 ;
	cout<<"\n The value of x after modification :"<<*pointer;
	return 0;
}
