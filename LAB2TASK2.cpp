#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"\nEnter an integer:";
	cin>>x;
	
	int * ptr = &x;
	
	cout<<"\n Original Value before modification :"<<x;
	int **pp=& ptr;
	
	**pp = 100;
	
	cout<<"\n  Value  After  modification :"<<**pp;
	
	return 0;
}
