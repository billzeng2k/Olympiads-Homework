#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
class food{
    private:
    int cal;
    int sug;
    int fat;
    int car;
    public:
    int taste;
    int disgust;
    int portion;
    food(int calx, int sugx, int fatx, int carx, int tastex, int disgustx, int portionx)
    {
        cal = calx;
        sug = sugx;
        fat = fatx;
        car = carx;
        taste = tastex;
        disgust = disgustx;
        portion = portionx;
    }
    int getcal()
    {
        return cal;
    }
    int getsug()
    {
        return sug;
    }
    int getfat()
    {
        return fat;
    }
    int getcar()
    {
        return car;
    }
    int gettaste()
    {
        return taste;
    }
    int getdisgust()
    {
        return disgust;
    }
    int getportion()
    {
        return portion;
    }
    void newcal(int cal1)
    {
        cal = cal1;
    }
    void newsug(int sug1)
    {
        sug = sug1;
    }
    void newfat(int fat1)
    {
        fat = fat1;
    }
    void newcar(int car1)
    {
        car = car1;
    }
    void newtaste(int taste1)
    {
        taste = taste1;
    }
    void newdisgust(int disgust1)
    {
        disgust = disgust1;
    }
    void newportion(int portion1)
    {
        portion = portion1;
    }
};
int main()
{
    string foodname = "food1";
    int cal;
    int sug;
    int fat;
    int car;
    int taste;
    int disgust;
    int portion;
    srand(time(NULL));
    cout << "Set the properties and attributes of this food item, type skip to get random numbers, or press anything else" << endl;
    string skip;
    cin >> skip;
    if(skip == "skip")
    {
        cal = rand()%50;
        sug = rand()%50;
        fat = rand()%50;
        car = rand()%50;
        taste = rand()%10;
        disgust = rand()%10;
        portion = rand()%10;
    }
    else
    {
        cout << "Calories: ";
        cin >> cal;
        cout << "Sugar: ";
        cin >> sug;
        cout << "Fat: ";
        cin >> fat;
        cout << "Carbohydrates: ";
        cin >> car;
        cout << "Tastiness on a scale of 1 to 10: ";
        cin >> taste;
        cout << "Disgustingness on a scale of 1 to 10: ";
        cin >> disgust;
        cout << "Portion Size";
        cin >> portion;
    }
    food f1(cal, sug, fat, car, taste, disgust, portion);
    while(1)
    {
        cout << "What would you like to do?" << endl << "1.Show Facts" << endl<< "2.Rename" << endl << "3.Change Calories" << endl << "4.Change Sugar" << endl << "5.Change Fat" << endl << "6.Change Carbohydrates" << endl << "7.Change Tastiness" << endl << "8.Change Disgustingness" << endl << "9.Change Portion Size" << endl << "0.Exit" << endl;
        int n;
        cin >> n;
        if(n==1)
        {
            cout << foodname << " has " << f1.getcal() << " Calories, " << f1.getsug() << " grams of sugar, " << f1.getfat() << " grams of fat, and " << f1.getcar() << " Carbohydrates. On a scale from 1 to 10 it's a " << f1.gettaste() << " in tastiness and a " << f1.getdisgust() << " in disgustingness. The portion size is " << f1.getportion() << "." << endl;
            
        }
        else if(n==2)
        {
            cout << "New name:";
            cin.ignore();
            getline(cin,foodname);
        }
        else if(n==3)
        {
            cout << "New Calories:";
            int x;
            cin >> x;
            f1.newcal(x);
        }
        else if(n==4)
        {
            cout << "New Sugar:";
            int x;
            cin >> x;
            f1.newsug(x);
        }
        else if(n==5)
        {
            cout << "New Fat:";
            int x;
            cin >> x;
            f1.newfat(x);
        }
        else if(n==6)
        {
            cout << "New Carbohydrates:";
            int x;
            cin >> x;
            f1.newcar(x);
        }
        else if(n==7)
        {
            cout << "New Tastiness:";
            int x;
            cin >> x;
            f1.newtaste(x);
        }
        else if(n==8)
        {
            cout << "New Disgustingness:";
            int x;
            cin >> x;
            f1.newdisgust(x);
        }
        else if(n==9)
        {
            cout << "New Portion Size:";
            int x;
            cin >> x;
            f1.newportion(x);
        }
        else if(n==0)
        {
            break;
        }
    }
    
}

