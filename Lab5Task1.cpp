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
    int n, value;

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

    // Insert at beginning
    Node* newNode = new Node;

    cout << "Enter value to insert at beginning: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;

    // Display list
    cout << "Linked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
