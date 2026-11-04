#include <iostream>
using namespace std;
int main()
{
	int countP=0;
	int countN=0;
	int countZ=0;
	int integers [10];
	cout<<"\nEnter 10 integers:";
	for(int i=0;i<=9;i++)
	{
		cin>>integers[i];
		if(integers[i]>0)
		{
			countP=countP+1;
		}
		else if (integers[i]<0)
		{
			countN=countN+1;
		}
		
		else 
		{
			countZ=countZ+1;
		}
	}
	 cout<<"\nThe number of positive integers are :"<<countP;
	  cout<<"\nThe number of negatve integers are :"<<countN;
	   cout<<"\nThe number of zeros are :"<<countZ;

	 return 0;
	
}
