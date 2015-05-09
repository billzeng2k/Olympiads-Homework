#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Welcome to my anagram code, type in first the number of letters you want to test, followed by the letters. I will then tell you how many changes will be needed to make it an anagram. If the number is a odd number, the result will be -1" << endl;
    int t;
    cin >> t;
    string s, a, b;
    int pos;
    int changes = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> s;
        changes = 0;
        
        if(s.length() % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        
        a = s.substr(0,s.length()/2);
        b = s.substr(s.length()/2, s.length());
        
        for(int j = 0; j < a.length(); j++)
        {
            
            pos = b.find(a[j]);
            
            if(pos == -1)
            {
                changes++;
            }
            
            else
            {
                b[pos] = ' ';
            }
        }
        
        cout << changes << endl;
    }
}


