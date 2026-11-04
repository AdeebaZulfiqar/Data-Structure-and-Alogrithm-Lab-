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

        if (head ==NULL)
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
    int beforeValue;
    int newValue;
    cout << "Enter value before which you want to insert: ";
    cin >> beforeValue;

    cout << "Enter new value: ";
    cin >> newValue;

    Node* newNode = new Node;

    newNode->data = newValue;
    // Special case: insert before first node
    if (head != NULL && head->data == beforeValue)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node* previous =NULL;
        temp = head;
        // Find the node before target
        while (temp != NULL && temp->data != beforeValue)
        {
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Value not found.";
            delete newNode;
        }
        else
        {
            newNode->next = temp;
            previous->next = newNode;

            cout << "Value inserted successfully.";
        }
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
