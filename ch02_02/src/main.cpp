#include <iostream>
using namespace std;
// dereferencing the pointer

// function skeleton
void outputOfAddress();
void implementation();
int main()
{
    // outputOfAddress();
    implementation();

    return 0;
}

/**
 * Sample output
 * g++ src/main.cpp -o src/out && ./src/out && rm src/out
 * Address of num:         0x7fff1f7102d4
 * Address store in numPtr:        0x7fff1f7102d4
 * Address store in numPtrPtr:     0x7fff1f7102d8
 */
void outputOfAddress()
{
    int num = 0;
    int *numPtr = &num;
    int **numPtrPtr = &numPtr; // pointer of the pointer

    cout << "Address of num: \t" << &num << endl;
    cout << "Address store in numPtr:\t" << numPtr << endl;
    cout << "Address store in numPtrPtr:\t" << numPtrPtr << endl;
}

void implementation()
{
    int Scores[10] = {10,
                      68,
                      79,
                      99,
                      95,
                      88,
                      85,
                      76,
                      40,
                      57};
    int *scoresPtr[10];
    for (int i = 0; i < 10; i++)
    {
        scoresPtr[i] = &(Scores[i]);
        cout << *(scoresPtr[i]) << endl; // deferencing a pointer
        cout << **(scoresPtr + i) << endl;
    }
}