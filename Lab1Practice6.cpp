#include<iostream>
using namespace std;

struct Product
{
	 int pID;
	 string pName;
    int  pPrice;
	 int  pQuantity;
};

int main()
{
	Product p1;
	cout<<"\n Enter product ID :";
	cin>>p1.pID;
	cout<<"\n Enter product Name :";
	cin>>p1.pName;
	cout<<"\n Enter product Price :";
	cin>>p1.pPrice;
	cout<<"\n Enter product Quantity :";
	cin>>p1.pQuantity;

int totalPrice;

   totalPrice= p1.pPrice * p1.pQuantity;
   	
   cout<<"\n Total Price:"<<totalPrice;
	
	return 0;
}
