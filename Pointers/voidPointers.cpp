/*
A void pointer (void*) is a special type of pointer in C++ that has no associated data type. It can hold the address of any data type, making it useful for generic programming. However, since the type is unknown, the compiler doesn't know how many bytes to read or how to interpret the data. Therefore, a void pointer cannot be directly dereferenced. It must first be explicitly typecast to the appropriate pointer type.
*/

// code:
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    
    // void pointer holding address of an int
    void* ptr = &x; 

    // Error: cannot dereference void pointer
    // cout << *ptr; 

    // Typecast before dereferencing
    cout << "Value pointed by void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}
// Output
// Value pointed by void pointer: 42