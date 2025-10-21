#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  
}

int main() {
    int n;
    cout << "Enter number of int elements: ";
    cin >> n;
    vector<int> arrInt(n);
    cout << "Enter " << n << " int elements:\n";
    for (int i = 0; i < n; i++) cin >> arrInt[i];

    cout << "Original int array: ";
    printArray(arrInt.data(), n);
    bubbleSort(arrInt.data(), n);
    cout << "Sorted int array: ";
    printArray(arrInt.data(), n);

    int m;
    cout << "\nEnter number of float elements: ";
    cin >> m;
    vector<float> arrFloat(m);
    cout << "Enter " << m << " float elements:\n";
    for (int i = 0; i < m; i++) cin >> arrFloat[i];

    cout << "Original float array: ";
    printArray(arrFloat.data(), m);
    bubbleSort(arrFloat.data(), m);
    cout << "Sorted float array: ";
    printArray(arrFloat.data(), m);

    int o;
    cout << "\nEnter number of character elements: ";
    cin >> o;
    vector<char> arrChar(o);
    cout << "Enter " << o << " character elements:\n";
    for (int i = 0; i < o; i++) cin >> arrChar[i];

    cout << "Original char array: ";
    printArray(arrChar.data(), o);
    bubbleSort(arrChar.data(), o);
    cout << "Sorted char array: ";
    printArray(arrChar.data(), o);

    return 0;
}
