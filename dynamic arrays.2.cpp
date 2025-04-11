#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    // Dynamically allocate array
    int* myarray = new int[size];

    // Take input
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> myarray[i];
    }

    // Print using pointer notation
    cout << "My array using *(ptr + i): ";
    for(int i = 0; i < size; i++) {
        cout << *(myarray + i) << " ";
    }
    cout << endl;

    // Print using array notation
    cout << "My array using myarray[i]: ";
    for(int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl;

    // Free memory
    delete[] myarray;
    myarray = nullptr; // Safe practice

    // Don't access the array after deletion!
    cout << "Memory deleted. Do not access myarray now." << endl;

    return 0;
}
