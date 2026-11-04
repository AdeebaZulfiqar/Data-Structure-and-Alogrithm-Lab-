#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;

    int even = 0;
    int odd = 0;

    cout << "Enter five integers: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        if(*ptr % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        ptr++;
    }

    cout << "\nTotal even numbers: " << even;
    cout << "\nTotal odd numbers: " << odd;

    return 0;
}
