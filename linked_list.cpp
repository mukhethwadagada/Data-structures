#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

void printList(Node* head) {
    cout << "Linked List: ";
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int countOccurrences(Node* head, int key) {
    int count = 0;
    while (head) {
        if (head->data == key) {
            count++;
        }
        head = head->next;
    }
    return count;
}

void deleteList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void linkedListDemo() {
    Node* head = nullptr;
    int choice, value;

    do {
        cout << "\nLinked List Operations Menu:" << endl;
        cout << "1. Insert element" << endl;
        cout << "2. Print list" << endl;
        cout << "3. Count occurrences" << endl;
        cout << "4. Delete list" << endl;
        cout << "5. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter integer to insert: ";
                cin >> value;
                insertAtEnd(head, value);
                break;
            case 2:
                printList(head);
                break;
            case 3:
                cout << "Enter value to count: ";
                cin >> value;
                cout << "Occurrences of " << value << ": " << countOccurrences(head, value) << endl;
                break;
            case 4:
                deleteList(head);
                head = nullptr;
                cout << "List deleted." << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    deleteList(head);
}
