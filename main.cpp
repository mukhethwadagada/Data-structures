#include <iostream>

using namespace std;

void insertionSortDemo();
void sequentialSearchDemo();
void stackDemo();
void queueDemo();
void linkedListDemo();

int main() {
    int choice;

    do {
        cout << "\nMain Menu:" << endl;
        cout << "1. Insertion Sort Demo" << endl;
        cout << "2. Sequential Search Demo" << endl;
        cout << "3. Stack Operations Demo" << endl;
        cout << "4. Queue Operations Demo" << endl;
        cout << "5. Linked List Operations Demo" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertionSortDemo(); // Insertion sort
                break;
            case 2:
                sequentialSearchDemo();  // Sequential search
            case 3:
                stackDemo(); // Stack operations
                break;
            case 4:
                queueDemo(); // Queue operations
                break;
            case 5:
                linkedListDemo(); // Linked list
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
