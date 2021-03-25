#include <iostream>
using namespace std;
double avgCost(double *priceArr, int count);
int main()
{
    double prices[5]{88, 107, 30, 20, 20};
    double avg = avgCost(prices, sizeof(prices));
    cout << "Average cost is:\t MYR " << avg << endl;
    return 0;
}

double avgCost(double *priceArr, int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(priceArr + i);
    }
    return sum / count;
}