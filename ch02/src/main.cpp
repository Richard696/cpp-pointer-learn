#include <iostream>
using namespace std;

int main()
{
    char initial = 'I';
    char *initialPtr = &initial;
    // cout << "Mem address of initial 'I' >> " << initialPtr << endl; // output I1! (the compiler think we are pointing to the char instead of address)
    cout << "Mem address of initial 'I' >> " << (void *)initialPtr << endl;              // use casting to get the adddress of the 'char' --> output: 0x7ffd6b7b482f; notes: mem address will change for every run
    cout << "Mem address of initial 'I' >> " << static_cast<void *>(initialPtr) << endl; // get the pointer value

    return 0;
}