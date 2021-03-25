#include <iostream>
using namespace std;

void firstFunction()
{
    int *Ptr(new int(100));
    cout << *Ptr << endl;
    delete Ptr;
}

void secondFunction()
{
    int *arrPtr(new int[10]{1990, 8902, 5566, 43, 33, 56, 99, 44, 12312, 423434});
    *(arrPtr + 1) *= 5;
    cout << *arrPtr << ", " << *(arrPtr + 1) << endl;
    delete arrPtr;
}
int main()
{
    firstFunction();
    secondFunction();
    return 0;
}