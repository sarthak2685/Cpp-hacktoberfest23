#include <iostream>

void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }

    insertionSort(arr, length);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
