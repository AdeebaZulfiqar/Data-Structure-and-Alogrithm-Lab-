#include <iostream>
using namespace std;
int main()
{
   int rows ,cols;
   
   //Take rows and columns
   cout<<"\nEnter number of rows :";
   cin>>rows;
   cout<<"\nEnter number of columns :";
   cin>>cols;
   
   //create an array of pointers for rows
   
   int **arr = new int *[rows];
   
   //Alloate memory for each row
   for(int i=0;i<rows;i++)
   {
   	arr[i]= new int [cols];
   }
    
   //Take input
   cout<<"\nEnter elements:";
   for (int i=0;i<rows;i++)
   {
   	for(int j=0;j<cols;j++)
   	{
   		cin>> arr[i][j];
   		
	}
   }
   
   //Display matrix
   
   cout<<"\nMatrix:"<<endl;
   for(int i=0 ; i<rows ; i++)
   {
   	for(int j=0; j<cols ; j++)
   	{
   	cout<< arr[i][j]<<" ";
	}
	
	cout<<endl;
   }
   
   //Free memory of eah row 
   for(int i=0 ; i< rows ;i++)
   {
   	delete [] arr[i];   
	   
   }
   
   
   //free array of pointers
   
   delete [] arr;
   
   return 0;
    	
}
