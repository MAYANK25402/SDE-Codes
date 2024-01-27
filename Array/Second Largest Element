#include <iostream>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        std::cerr << "Array should have at least two elements\n";
        return -1;  // Assuming -1 indicates an error or absence of the second-largest element
    }

    int first = arr[0];
    int second = INT_MIN;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        std::cerr << "There is no second-largest element\n";
        return -1;  // Assuming -1 indicates an error or absence of the second-largest element
    }

    return second;
}

int main() {
    // Example usage:
    int array[] = {12, 5, 8, 19, 6};
    int size = sizeof(array) / sizeof(array[0]);
    
    int secondLargest = findSecondLargest(array, size);
    
    if (secondLargest != -1) {
        std::cout << "Second Largest Element: " << secondLargest << std::endl;
    }

    return 0;
}
