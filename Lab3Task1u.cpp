#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string name;
    int code;
    float price;

    void input()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter product code: ";
        cin >> code;

        cout << "Enter product price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically allocate array of products
    Product* products = new Product[n];

    // Input products
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        products[i].input();
    }

    // Display products
    cout << "\nProduct List";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << ":\n";
        products[i].display();
    }

    // Free dynamically allocated memory
    delete[] products;

    return 0;
}
