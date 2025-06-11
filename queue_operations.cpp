#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Queue {
private:
    queue<string> items;

public:
    void enqueue(const string& item) {
        items.push(item);
        cout << "Enqueued: " << item << endl;
    }

    void dequeue() {
        if (!isEmpty()) {
            cout << "Dequeued: " << items.front() << endl;
            items.pop();
        } else {
            cout << "Queue is empty - cannot dequeue" << endl;
        }
    }

    void displayFront() {
        if (!isEmpty()) {
            cout << "Front element: " << items.front() << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    void displayRear() {
        if (!isEmpty()) {
            queue<string> temp = items;
            while (temp.size() > 1) {
                temp.pop();
            }
            cout << "Rear element: " << temp.front() << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    void size() {
        cout << "Queue size: " << items.size() << endl;
    }

    bool isEmpty() {
        return items.empty();
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue contents:" << endl;
        queue<string> temp = items;
        while (!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }
    }
};

void queueDemo() {
    Queue numberQueue;
    int choice;
    string item;

    // Prepopulate some data
    numberQueue.enqueue("001");
    numberQueue.enqueue("002");
    numberQueue.enqueue("003");

    do {
        cout << "\nQueue Operations Menu:" << endl;
        cout << "1. Enqueue item" << endl;
        cout << "2. Dequeue item" << endl;
        cout << "3. View front item" << endl;
        cout << "4. View rear item" << endl;
        cout << "5. Display queue size" << endl;
        cout << "6. Display all queue items" << endl;
        cout << "7. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter item to enqueue: ";
                getline(cin, item);
                numberQueue.enqueue(item);
                break;
            case 2:
                numberQueue.dequeue();
                break;
            case 3:
                numberQueue.displayFront();
                break;
            case 4:
                numberQueue.displayRear();
                break;
            case 5:
                numberQueue.size();
                break;
            case 6:
                numberQueue.display();
                break;
            case 7:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);
}
