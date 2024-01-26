#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array with all the elements : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nArray with repeating elements : ";
    for (int i = 0; i < size; i++)

        for (int j = i + 1; j < size; j++)

            if (arr[i] == arr[j])

                cout << arr[i] << " ";
    return 0;
}

# It will give you the output as:
# Array with all the elements : 1 2 3 4 5 6 7 8 9 2 3 4 5 
# Array with repeating elements : 2 3 4 5
