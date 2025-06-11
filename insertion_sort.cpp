#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) { // O(n) - outer loop runs n-1 times
        int key = arr[i]; 
        int j = i - 1;    
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j--;                
        }
        arr[j + 1] = key; 
    }
    // O(n) in best case
}

void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void insertionSortDemo() {
    vector<int> numbers = {7, 12, 38, 50, 61, 64, 5, 80, 25};
    
    cout << "Original array: ";
    displayArray(numbers);
    
    insertionSort(numbers);
    
    cout << "Sorted array: ";
    displayArray(numbers);
}
