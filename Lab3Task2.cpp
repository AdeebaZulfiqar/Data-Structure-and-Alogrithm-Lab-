#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocate memory for one character
    char* ptr = new char;

    // Store a character
    cout << "Enter a character: ";
    cin >> *ptr;

    // Print the character
    cout << "Stored character: " << *ptr << endl;

    // Deallocate memory
    delete ptr;

    // Set pointer to NULL
    ptr = NULL;

    return 0;
}
