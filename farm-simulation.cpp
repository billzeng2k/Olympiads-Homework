#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main()
{
// A farmer is growing wheat. Every year, he can produce between 3000-6000 bushels of wheat. The price for a bushel of wheat varies from $1.10-$2.60 each year. It costs the farmer $4000 to run the farm each year. Output the net profit/loss of the farmer after 10 years.
    srand(time(NULL));
    int bushels[10];
    double price[10];
    double networth = 0;
    for(int i=0;i<10;i++)
    {
        bushels[i] = rand()%3000 + 3000;
        price[i] = rand()%150 + 110;
        price[i] = price[i]/100;
        networth += price[i]*bushels[i];
    }
    cout << "The farmers net profit/loss is $" << networth - 40000 ;
}

