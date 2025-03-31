#include <iostream>
using namespace std;

void print(void* Ptr, char type) {
    switch (type) {
    case 'i':  // Corrected case comparison
        cout << *((int*)Ptr) << endl;
        break;
    case 'c':
        cout << *((char*)Ptr) << endl;
        break;  // Added break to prevent fall-through
    default:
        cout << "Invalid type!" << endl;
    }
}

int main() {
    int num = 5;
    char ch = 'A';

    print(&num, 'i');  // Prints 5
    print(&ch, 'c');   // Prints A

    return 0;
}
