#include <string>
#include <iostream>
using namespace std;
int main()
{
    string thing;
    cout << "How are you today?" << endl;
    cin >> thing;
    while(1)
    {
        cout << "Why?" << endl;
        cin >> thing;
    }
}

