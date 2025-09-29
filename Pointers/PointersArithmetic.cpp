// 1. Incrementing and decrementing in cpp pointers
#include <iostream>
using namespace std;

int main() {

    int n = 27;
    
    // Storing address of n in ptr
    int* ptr = &n;

    // Print size of int
    cout << "Size of int: " << sizeof(int) << endl;

    // Print the address stored at ptr
    cout << "Before Increment: " << ptr << endl;
    
    // Increment pointer
    ptr++;
    cout << "After Increment: " << ptr << endl;

    // Print the address stored at ptr
    cout << "Before Decrement: " << ptr << endl;
    
    // Decrement pointer
    ptr--;
    cout << "After Decrement: " << ptr;

    return 0;
}

// 2. Addition of Constant to Pointers
/*
let take: ptr + 5
It will calculate the new address as:
 = 1000 + (5 * 4(size of an integer)) = 1020
*/
// CPP program to demonstrate the addition of a constant to
// a pointer
#include <iostream>
using namespace std;

int main()
{

    int n = 20;
    int* ptr = &n;

    cout << "Address stored in ptr: " << ptr << endl;

    // Adding the integer value 1 to the pointer ptr
    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << ptr << endl;

    // Adding the integer value 2 to the pointer ptr
    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << ptr;

    return 0;
}

// 3. Subtraction of Constant from Pointers
/*
ptr - 5
It will calculate the new address as:
 = 1000 - (5 * 4(size of an integer)) = 980
*/
#include <iostream>
using namespace std;

int main()
{

    int n = 100;

    int* ptr = &n;

    cout << "Address stored in ptr: " << ptr << endl;

    // Subtracting the integer value 1 from pointer ptr
    ptr = ptr - 1;
    cout << "Subtract 1 from ptr: " << ptr;

    return 0;
}

// 4. Subtraction of Two Pointers of the Same Datatype
// ptr2 - ptr1

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int* ptr1 = &arr[2];

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = &arr[4];

    // Subtracting ptr2 from ptr1
    cout << ptr2 - ptr1;

    return 0;
}

// 5. Comparison of Pointers
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int* ptr1 = &n;
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;

    // comparing equality
    if (ptr1 == ptr3) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3;
    }
    return 0;
}

// Comparison to NULL
#include <iostream>
using namespace std;

int main() {
    int n = 10;
  
    // Assigning null in case we dont use pointer
    int* ptr = NULL;
    ptr = &n;

    // Checking if the pointer is in use or not
    if (ptr == NULL) {
        cout << "No value is pointed";
    }
    else {
        cout << *ptr;
    }
    return 0;
}