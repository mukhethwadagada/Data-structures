#include <iostream>
#include <vector>

using namespace std;

void displayArray(const vector<int>& arr, const string& message = "Array elements:") {
    cout << message << " ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int sequentialSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void removeElement(vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        arr.erase(arr.begin() + index);
        cout << "Element removed successfully." << endl;
    } else {
        cout << "Invalid index. Removal failed." << endl;
    }
}

void sequentialSearchDemo() {
    vector<int> numbers = {34, 77, 89, 20, 44, 79, 10, 15, 99, 56};
    int target, index;

    displayArray(numbers, "Original array:");
    
    cout << "Enter number to search: ";
    cin >> target;
    
    index = sequentialSearch(numbers, target);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    cout << "Enter index of element to remove (0-" << numbers.size()-1 << "): ";
    cin >> index;
    removeElement(numbers, index);
    displayArray(numbers, "Array after removal:");
}
