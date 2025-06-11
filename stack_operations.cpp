#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
private:
    vector<string> items;

public:
    void push(const string& item) {
        items.push_back(item);
        cout << "Pushed: " << item << endl;
    }

    void pop() {
        if (!isEmpty()) {
            string popped = items.back();
            items.pop_back();
            cout << "Popped: " << popped << endl;
        } else {
            cout << "Stack is empty - cannot pop" << endl;
        }
    }

    void peek() {
        if (!isEmpty()) {
            cout << "Top element: " << items.back() << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void size() {
        cout << "Stack size: " << items.size() << endl;
    }

    bool isEmpty() {
        return items.empty();
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack contents:" << endl;
        for (int i = static_cast<int>(items.size()) - 1; i >= 0; i--) {
            cout << items[i] << endl;
        }
    }
};

void stackDemo() {
    Stack bookStack;
    int choice;
    string item;

    // Prepopulate some data
    bookStack.push("Intro to C++");
    bookStack.push("English Fundamentals");
    bookStack.push("Advanced C# Programming");

    do {
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push item to stack" << endl;
        cout << "2. Pop item from stack" << endl;
        cout << "3. View top item" << endl;
        cout << "4. Display stack size" << endl;
        cout << "5. Display all stack items" << endl;
        cout << "6. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter book title to push: ";
                getline(cin, item);
                bookStack.push(item);
                break;
            case 2:
                bookStack.pop();
                bookStack.peek();
                break;
            case 3:
                bookStack.peek();
                break;
            case 4:
                bookStack.size();
                break;
            case 5:
                bookStack.display();
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}
