#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    //this program will take a string and output it in alphabetical order and remove any repeating letters.
    string a;
    cin >> a;
    int x, y;
    for(int i = 1; i < a.length(); i++) {
        x = a[i];
        y = i;
        while(y > 0 && a[y-1] > x)         {
            a[y] = a[y-1];
            y--;
        }
        a[y] = x;
    }
  for(int j = 0; j < a.length(); j++)
  {
      if(a[j]==a[j+1])
      {
          a.erase(j,1);
      }
          
  }
    cout << a;
}

