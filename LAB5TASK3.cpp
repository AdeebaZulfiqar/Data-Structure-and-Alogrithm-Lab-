#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp;
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Build the linked list
    for (int i = 0; i < n; i++)
    {
        Node* newNode = new Node;

        cout << "Enter value: ";
        cin >> newNode->data;

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    int afterValue;
    int newValue;

    cout << "Enter value after which you want to insert: ";
    cin >> afterValue;

    cout << "Enter new value: ";
    cin >> newValue;

    Node* newNode = new Node;

    newNode->data = newValue;

    temp = head;

    // Search for the given value
    while (temp != NULL && temp->data != afterValue)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Value not found.";
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Value inserted successfully.";
    }

    // Display list
    cout << "\nLinked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
