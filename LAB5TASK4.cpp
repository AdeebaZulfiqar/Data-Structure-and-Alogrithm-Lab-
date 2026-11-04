#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Insert at beginning
void insertAtStart(Node*& head)
{
    Node* newNode = new Node;

    cout << "Enter value: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(Node*& head)
{
    Node* newNode = new Node;

    cout << "Enter value: ";
    cin >> newNode->data;

    newNode->next =NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// Insert in middle
void insertInMiddle(Node*& head)
{
    int afterValue;
    int newValue;

    cout << "Enter value after which you want to insert: ";
    cin >> afterValue;

    cout << "Enter new value: ";
    cin >> newValue;

    Node* temp = head;

    while (temp != NULL && temp->data != afterValue)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Value not found.\n";
        return;
    }

    Node* newNode = new Node;

    newNode->data = newValue;

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Value inserted successfully.\n";
}

// Display list
void displayList(Node* head)
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;

    int choice;

    do
    {
        cout << "\n MENU "<<endl;
        cout << "1. Insert at Start"<<endl;
        cout << "2. Insert at End"<<endl;
        cout << "3. Insert in Middle"<<endl;
        cout << "4. Display List"<<endl;
        cout << "5. Exit"<<endl;

        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertAtStart(head);
                break;

            case 2:
                insertAtEnd(head);
                break;

            case 3:
                insertInMiddle(head);
                break;

            case 4:
                displayList(head);
                break;

            case 5:
                cout << "Program ended.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 5);

    return 0;
}
