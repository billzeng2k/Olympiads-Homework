#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[])
{
    cout << "This is the chance of each number getting rolled after x number of rolls rolls" << endl;
    int rolls[6];
    int n;
    cout << "You can change x here :";
    cin >> n;
    for(int i = 0; i<6; i++)
    {
        rolls[i] = 0;
        
        srand(time(NULL));
    }
    for(int i= 0; i<n; i++)
    {
        rolls[rand()%6]++;
    }
    for(int i= 0; i<6; i++)
    {
        cout << i+1 << ": " << 100* (double)rolls[i]/n << "%" << endl;
    }
}

