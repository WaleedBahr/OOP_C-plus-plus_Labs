// C++ program to sort an array using different algorithms with the same function name
#include <iostream>
using namespace std;

// First namespace declaration
namespace SelectionSort {
    void sort(int size, int arr[]) {
        cout << "Array elements after selection sort: ";
        for (int i= 0; i < size; i++) {
            for (int j = i + 1; j< size; j++) {
                if (arr[i] > arr[j]) {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            cout << arr[i] << " ";
        }
    }
}

// Second namespace declaration
namespace BubbleSort {
    void sort(int size, int arr[]) {
        int sorted;
        do {
            sorted= 1;
            for (int i = 0; i < size - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    int temp ;
                   temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    sorted=0;
                }
            }
        } while (sorted == 0);

        cout << "Array elements after bubble    sort: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
}

int main() {
    int arraySize = 0;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    if (arraySize <= 0) {
        cout << "Invalid size";
        return 0;
    }

    int arrayElements[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arrayElements[i];
    }

    SelectionSort::sort(arraySize, arrayElements);
    cout << endl;
    BubbleSort::sort(arraySize, arrayElements);

    return 0;
}
