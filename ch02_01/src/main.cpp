#include <iostream>
using namespace std;
// dereferencing the pointer
int main()
{
    double testScore[5], sum = 0;
    double *pTestScores;
    pTestScores = testScore;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter test Score:\t" << endl;
        cin >> *(pTestScores + i); // use pointer to point to the pointer --> derefencing the pointer
        sum += *(pTestScores + i);
    }
    cout << "Test Score:\t" << testScore << endl;
    cout << "Total for all students:\t" << sum << endl;
    cout << "Average scores:\t" << sum / 5 << endl;
    return 0;
}