#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int count = 0;

void swap(int *a, int *b) {
    count++;
    int temp = *a;
    count++;
    *a = *b;
    count++;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    count++;
    int pivot = arr[high];
    count++;
    int i = low - 1;
    count++;
    for (int j = low; j <= high - 1; j++) {
        count++;
        count++;
        if (arr[j] < pivot) {
            count++;
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    count++;
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    count++;
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    ifstream fin("data.csv"); // Open the CSV file
    vector<int> inputArray;
    int num;

    while (fin >> num) {
        inputArray.push_back(num); // Read integers from the file
    }

    fin.close(); // Close the file

    int n = inputArray.size();
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = inputArray[i]; // Copy data to the array
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Total steps (comparisons + swaps): " << count << endl;

    return 0;
}
