#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //  A blob starts off at size 1. At each time interval, it has a 35% chance of growing. If a blob does grow, it can grow anywhere between 1 and 3 sizes (integers only). Output the sizes of 100 blobs after 1000 time intervals, sorted from least to greatest.
    int blobs[100];
    int ticks = 1000;
    srand(time(NULL));
    for(int i=0; i<100; i++)
    {
        blobs[i] = 1;
    }
    for(int i=0; i<100; i++)
    {
        for(int j=0;j<ticks;j++)
        {
            if(rand()%100 <= 35)
            {
                blobs[i] = blobs[i]+rand()%3;
            }
        }
    }
    for(int i=0; i<100; i++)
    {
        cout << blobs[i] << " ";
    }
}

