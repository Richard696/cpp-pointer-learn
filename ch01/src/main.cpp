#include <iostream>
using namespace std;

int main()
{
    // get the address of the variable
    int number = 10;
    int *numPtr;
    numPtr = &number; // reference the pointer to the address of the variable
    cout << "The address of the number is " << numPtr << endl;
    cout << "\n\n";
    // check the size of the data type
    cout << "Size of Boolean:\t" << sizeof(bool) << endl;
    cout << "Size of char:\t" << sizeof(char) << endl;
    cout << "Size of int:\t" << sizeof(int) << endl;
    cout << "Size of float:\t" << sizeof(float) << endl;
    cout << "Size of long:\t" << sizeof(long) << endl;
    cout << "Size of double:\t" << sizeof(double) << endl;
    cout << "\n\n";
    bool *boolPtr;
    char *charPtr;
    int *intPtr;
    float *floatPtr;
    long *longPtr;
    double doublePtr;
    cout << "Size of Bool Ptr:\t" << sizeof(boolPtr) << endl;
    cout << "Size of char Ptr:\t" << sizeof(charPtr) << endl;
    cout << "Size of int Ptr:\t" << sizeof(intPtr) << endl;
    cout << "Size of float Ptr:\t" << sizeof(floatPtr) << endl;
    cout << "Size of long Ptr:\t" << sizeof(longPtr) << endl;
    cout << "Size of double Ptr:\t" << sizeof(doublePtr) << endl;

    return 0;
}