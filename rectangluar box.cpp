#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

class box{
    public:
        bool isOpen;
        double weight;
        double contents_wieght;
        double l,w,h;
        double v = l*w*h;
    public:
    box(bool isOpen1,double weight1, double contents_wieght1, double l1, double w1, double h1)
    {
        isOpen = isOpen1;
        weight = weight1;
        contents_wieght = contents_wieght1;
        l = l1;
        w = w1;
        h = h1;
        v = l*w*h;
    }
    bool getisOpen()
    {
        return isOpen;
    }
    double Getweight()
    {
        return weight;
    }
    double Getcontents_weight()
    {
        return contents_wieght;
    }
    double Getl()
    {
        return l;
    }
    double Getw()
    {
        return w;
    }
    double Geth()
    {
        return h;
    }
    double Getv()
    {
        return l*w*h;
    }
    double GetTotalweight()
    {
        int total = weight + contents_wieght;
        return total;
    }
    void changeWeight(int dweight)
    {
        weight = dweight;
    }
    void changeContentWeight(int dcontentweight)
    {
        contents_wieght = dcontentweight;
    }
    void changel(int dl)
    {
        l = dl;
    }
    void changew(int dw)
    {
        w = dw;
    }
    void changeh(int dh)
    {
        h = dh;
    }
    void openbox()
    {
        isOpen = true;
    }
    void closebox()
    {
        isOpen = false;
    }
    void addelephant()
    {
        contents_wieght = contents_wieght+1000;
    }
};
int main(int argc, const char * argv[])
{
    double box1weight, box1contentweight, box1l, box1w, box1h;
    bool box1open;
    srand(time(NULL));
    cout << "Choose the properties of box 1,type ok or type skip to get random numbers" << endl;
    string skip;
    cin >> skip;
    if(skip == "skip")
    {
        if((rand()%100)%2 == 1)
        {
            box1open = true;
        }
        else
        {
            box1open = false;
        }
        box1weight = rand()%100;
        box1contentweight = rand()%50;
        box1l = rand()%40+1;
        box1w = rand()%40+1;
        box1h = rand()%40+1;
    }
    else
    {
        string yesorno;
        cout << "Is this box open?(yes or no):";
        cin >> yesorno;
        if(yesorno == "yes")
        {
            box1open = true;
        }
        else
        {
            box1open = false;
        }
        cout << "What is the weight of this box(grams):";
        cin >> box1weight;
        cout << "What is the weight of the contents in this box(grams):";
        cin >> box1contentweight;
        cout << "What is the length of this box(cm):";
        cin >> box1l;
        cout << "What is the width of this box(cm):";
        cin >> box1w;
        cout << "What is the height of this box(cm):";
        cin >> box1h;
    }
    double box2weight, box2contentweight, box2l, box2w, box2h;
    bool box2open;
    cout << "Do you want to choose the properties of box 2,type ok or type skip to get random numbers" << endl;
    string skip2;
    cin >> skip2;
    if(skip2 == "skip")
    {
        if((rand()%100)%2 == 1)
        {
            box2open = true;
        }
        else
        {
            box2open = false;
        }
        box2weight = rand()%100;
        box2contentweight = rand()%50;
        box2l = rand()%40+1;
        box2w = rand()%40+1;
        box2h = rand()%40+1;
    }
    else
    {
        string yesorno2;
        cout << "Is this box open?(yes or no):";
        cin >> yesorno2;
        if(yesorno2 == "yes")
        {
            box2open = true;
        }
        else
        {
            box2open = false;
        }
        cout << "What is the weight of this box(grams):";
        cin >> box2weight;
        cout << "What is the weight of the contents in this box(grams):";
        cin >> box2contentweight;
        cout << "What is the length of this box(cm):";
        cin >> box2l;
        cout << "What is the width of this box(cm):";
        cin >> box2w;
        cout << "What is the height of this box(cm):";
        cin >> box2h;
    }
    double box3weight, box3contentweight, box3l, box3w, box3h;
    bool box3open;
    cout << "Do you want to choose the properties of box 3,type ok or type skip to get random numbers" << endl;
    string skip3;
    cin >> skip3;
    if(skip3 == "skip")
    {
        if((rand()%100)%2 == 1)
        {
            box3open = true;
        }
        else
        {
            box3open = false;
        }
        box3weight = rand()%100;
        box3contentweight = rand()%50;
        box3l = rand()%40+1;
        box3w = rand()%40+1;
        box3h = rand()%40+1;
    }
    else
    {
        string yesorno3;
        cout << "Is this box open?(yes or no):";
        cin >> yesorno3;
        if(yesorno3 == "yes")
        {
            box3open = true;
        }
        else
        {
            box3open = false;
        }
        cout << "what is the weight of this box(grams):";
        cin >> box3weight;
        cout << "what is the weight of the contents in this box(grams):";
        cin >> box3contentweight;
        cout << "what is the length of this box(cm):";
        cin >> box3l;
        cout << "what is the width of this box(cm):";
        cin >> box3w;
        cout << "what is the height of this box(cm):";
        cin >> box3h;
    }
    box b1(box1open,box1weight,box1contentweight,box1l,box1w,box1h);
    box b2(box2open,box2weight,box2contentweight,box2l,box2w,box2h);
    box b3(box3open,box3weight,box3contentweight,box3l,box3w,box3h);
    while(1)
    {
        int n;
        cout << "What do you want to do with this box?" << endl << "1.Compare Sizes" << endl <<"2.Compare Weights" << endl << "3.Show Properties" << endl << "4.Change Weight" << endl << "5.Change Wieght of Contents" << endl <<  "6.change length" << endl << "7.Change width" << endl << "8.Change Height" <<  endl << "9.Open/Close the Box" << endl << "Press any other number to add an elephant" << endl << "0.Exit" << endl;
        cin >> n;
        if(n==1)
        {
            if(b1.Getv() > b2.Getv() and b1.Getv()>b3.Getv())
            {
                cout << "box 1 is the biggest" << endl;
            }
            else if(b2.Getv() > b1.Getv() and b2.Getv()>b3.Getv())
            {
                cout << "box 2 is the biggest" << endl;
            }
            else
            {
                cout << "box 3 is the biggest" << endl;
            }
            if(b1.Getv() < b2.Getv() and b1.Getv()<b3.Getv())
            {
                cout << "box 1 is the smallest" << endl;
            }
            else if(b2.Getv() < b1.Getv() and b2.Getv()<b3.Getv())
            {
                cout << "box 2 is the smallest" << endl;
            }
            else
            {
                cout << "box 3 is the smallest" << endl;
            }
        }
        else if(n==2)
        {
            
            if(b1.GetTotalweight()>b2.GetTotalweight() and b1.GetTotalweight() > b3.GetTotalweight())
            {
                cout << "box 1 is the heaviest" << endl;
            }
            else if(b2.GetTotalweight()>b1.GetTotalweight() and b2.GetTotalweight() > b3.GetTotalweight())
            {
                cout << "box 2 is the heaviest" << endl;
            }
            else
            {
                cout << "box 3 is the heaviest" << endl;
            }
            if(b1.GetTotalweight() < b2.GetTotalweight() and b1.GetTotalweight()<b3.GetTotalweight())
            {
                cout << "box 1 is the lightest" << endl;
            }
            else if(b2.GetTotalweight() < b1.GetTotalweight() and b2.GetTotalweight()<b3.GetTotalweight())
            {
                cout << "box 2 is the lightest" << endl;
            }
            else
            {
                cout << "box 3 is the lightest" << endl;
            }
        }
        else if(n==3)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl <<  "4.All of them" << endl;
            int n1;
            cin >> n1;
            if(n1 == 1)
            {
                if(b1.getisOpen()==true)
                {
                    cout << "The box is open, it's weight is " << b1.Getweight() << " grams, and contents weight is " << b1.Getcontents_weight() << " grams. Its total weight is " << b1.GetTotalweight() << " grams. The boxes length is " << b1.Getl() << "cm, its width is " << b1.Getw() << "cm, and its height is " << b1.Geth() << ". It's volume is " << b1.Getv() << " cm squared" << endl;
                }
                if(b1.getisOpen()==false)
                {
                    cout << "The box is closed, it's weight is " << b1.Getweight() << " grams, and contents weight is " << b1.Getcontents_weight() << " grams. Its total weight is " << b1.GetTotalweight() << " grams. The boxes length is " << b1.Getl() << "cm, its width is " << b1.Getw() << "cm, and its height is " << b1.Geth() << "cm. It's volume is " << b1.Getv() << " cm squared" << endl;
                }
            }
            if(n1 == 2)
            {
                if(b2.getisOpen()==true)
                {
                    cout << "The box is open, it's wieght is " << b2.Getweight() << " grams, and contents weight is " << b2.Getcontents_weight() << " grams. Its total weight is " << b2.GetTotalweight() << " grams. The boxes length is " << b2.Getl() << "cm, its width is " << b2.Getw() << "cm, and its height is " << b2.Geth() << "cm. It's volume is " << b2.Getv() << " cm squared" << endl;
                }
                if(b2.getisOpen()==false)
                {
                    cout << "The box is closed, it's wieght is " << b2.Getweight() << " grams, and contents weight is " << b2.Getcontents_weight() << " grams. Its total weight is " << b2.GetTotalweight() << " grams. The boxes length is " << b2.Getl() << "cm, its width is " << b2.Getw() << "cm, and its height is " << b2.Geth() << ". It's volume is " << b2.Getv() << " cm squared" <<endl;
                }
            }
            if(n1 == 3)
            {
                if(b3.getisOpen()==true)
                {
                    cout << "The box is open, it's wieght is " << b3.Getweight() << " grams, and contents weight is " << b3.Getcontents_weight() << " grams. Its total weight is " << b3.GetTotalweight() << " grams. The boxes length is " << b3.Getl() << "cm, its width is " << b3.Getw() << "cm, and its height is " << b3.Geth() << "cm. It's volume is " << b3.Getv() << " cm squared."<< endl;
                }
                if(b3.getisOpen()==false)
                {
                    cout << "The box is closed, it's wieght is " << b3.Getweight() << " grams, and contents weight is " << b3.Getcontents_weight() << " grams. Its total weight is " << b3.GetTotalweight() << " grams. The boxes length is " << b3.Getl() << "cm, its width is " << b3.Getw() << "cm, and its height is " << b3.Geth() << "cm. It's volume is " << b3.Getv() << " cm squared" << endl;
                }
            }
            if(n1 == 4)
            {
                if(b1.getisOpen()==true)
                {
                    cout << "Box 1 is open, it's wieght is " << b1.Getweight() << " grams, and contents weight is " << b1.Getcontents_weight() << " grams. Its total weight is " << b1.GetTotalweight() << " grams. The boxes length is " << b1.Getl() << "cm, its width is " << b1.Getw() << "cm, and its height is " << b1.Geth() << ". It's volume is " << b1.Getv() << " cm squared" << endl << endl;
                }
                if(b1.getisOpen()==false)
                {
                    cout << "Box 1 is closed, it's weight is " << b1.Getweight() << " grams, and contents weight is " << b1.Getcontents_weight() << " grams. Its total weight is " << b1.GetTotalweight() << " grams. The boxes length is " << b1.Getl() << "cm, its width is " << b1.Getw() << "cm, and its height is " << b1.Geth() << "cm. It's volume is " << b1.Getv() << " cm squared" << endl << endl;
                }
                if(b2.getisOpen()==true)
                {
                    cout << "Box 2 is open, it's weight is " << b2.Getweight() << " grams, and contents weight is " << b2.Getcontents_weight() << " grams. Its total weight is " << b2.GetTotalweight() << " grams. The boxes length is " << b2.Getl() << "cm, its width is " << b2.Getw() << "cm, and its height is " << b2.Geth() << "cm. It's volume is " << b2.Getv() << " cm squared" << endl << endl;
                }
                if(b2.getisOpen()==false)
                {
                    cout << "Box 2 is closed, it's weight is " << b2.Getweight() << " grams, and contents weight is " << b2.Getcontents_weight() << " grams. Its total weight is " << b2.GetTotalweight() << " grams. The boxes length is " << b2.Getl() << "cm, its width is " << b2.Getw() << "cm, and its height is " << b2.Geth() << ". It's volume is " << b2.Getv() << " cm squared" <<endl << endl;
                }
                if(b3.getisOpen()==true)
                {
                    cout << "Box 3 is open, it's weight is " << b3.Getweight() << " grams, and contents weight is " << b3.Getcontents_weight() << " grams. Its total weight is " << b3.GetTotalweight() << " grams. The boxes length is " << b3.Getl() << "cm, its width is " << b3.Getw() << "cm, and its height is " << b3.Geth() << "cm. It's volume is " << b3.Getv() << " cm squared."<< endl << endl;
                }
                if(b3.getisOpen()==false)
                {
                    cout << "Box 3 is closed, it's wieght is " << b3.Getweight() << " grams, and contents weight is " << b3.Getcontents_weight() << " grams. Its total weight is " << b3.GetTotalweight() << " grams. The boxes length is " << b3.Getl() << "cm, its width is " << b3.Getw() << "cm, and its height is " << b3.Geth() << "cm. It's volume is " << b3.Getv() << " cm squared" << endl << endl;;
                }
            }
        }
        else if(n==4)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2==1)
            {
                int newweight1;
                cout << "What do you want your new weight to be:";
                cin >> newweight1;
                b1.changeWeight(newweight1);
            }
            if(n2==2)
            {
                int newweight2;
                cout << "What do you want your new weight to be:";
                cin >> newweight2;
                b2.changeWeight(newweight2);
            }
            if(n2==3)
            {
                int newweight3;
                cout << "What do you want your new weight to be:";
                cin >> newweight3;
                b3.changeWeight(newweight3);
            }
        }
        else if(n==5)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2==1)
            {
                int newweight1;
                cout << "What do you want your new content weight to be:";
                cin >> newweight1;
                b1.changeContentWeight(newweight1);
            }
            if(n2==2)
            {
                int newweight2;
                cout << "What do you want your new content weight to be:";
                cin >> newweight2;
                b2.changeContentWeight(newweight2);
            }
            if(n2==3)
            {   
                int newweight3;
                cout << "What do you want your new content weight to be:";
                cin >> newweight3;
                b3.changeContentWeight(newweight3);
            }
        }
        else if(n==6)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2==1)
            {
                int newweight1;
                cout << "What do you want your new length to be:";
                cin >> newweight1;
                b1.changel(newweight1);
            }
            if(n2==2)
            {
                int newweight2;
                cout << "What do you want your new length to be:";
                cin >> newweight2;
                b2.changel(newweight2);
            }
            if(n2==3)
            {
                int newweight3;
                cout << "What do you want your new length to be:";
                cin >> newweight3;
                b3.changel(newweight3);
            }
        }
        else if(n==7)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2==1)
            {
                int newweight1;
                cout << "What do you want your new width to be:";
                cin >> newweight1;
                b1.changew(newweight1);
            }
            if(n2==2)
            {
                int newweight2;
                cout << "What do you want your new width to be:";
                cin >> newweight2;
                b2.changew(newweight2);
            }
            if(n2==3)
            {
                int newweight3;
                cout << "What do you want your new width to be:";
                cin >> newweight3;
                b3.changew(newweight3);
            }
        }
        else if(n==8)
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2==1)
            {
                int newweight1;
                cout << "What do you want your new height to be:";
                cin >> newweight1;
                b1.changeh(newweight1);
            }
            if(n2==2)
            {
                int newweight2;
                cout << "What do you want your new height to be:";
                cin >> newweight2;
                b2.changeh(newweight2);
            }
            if(n2==3)
            {
                int newweight3;
                cout << "What do you want your new height to be:";
                cin >> newweight3;
                b3.changeh(newweight3);
            }
        }
        else if(n==9)
        {
            int n3;
            cout << "Open or close?" << endl << "1.Open" << endl << "2.Close" << endl;
            cin >> n3;
            if(n3 == 1)
            {
                cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
                int n2;
                cin >> n2;
                if(n2==1)
                {
                    b1.openbox();
                    cout << "OPEN SESAME!" << endl;
                }
                if(n2==2)
                {
                    b2.openbox();
                    cout << "OPEN SESAME!" << endl;
                }
                if(n2==3)
                {
                    b3.openbox();
                    cout << "OPEN SESAME!" << endl;
                }

            }
            if(n3 == 2)
            {
                cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
                int n2;
                cin >> n2;
                if(n2==1)
                {
                    b1.closebox();
                    cout << "CLOSE SESAME!" << endl;
                }
                if(n2==2)
                {
                    b2.closebox();
                    cout << "CLOSE SESAME!" << endl;
                }
                if(n2==3)
                {
                    b3.closebox();
                    cout << "CLOSE SESAME!" << endl;
                }
            }
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout << "Which Box?" << endl << "1.Box 1" << endl << "2.Box 2" << endl << "3.Box 3" << endl;
            int n2;
            cin >> n2;
            if(n2 == 1)
            {
                b1.addelephant();
                cout << "moo" << endl;
            }
            if(n2 == 2)
            {
                b2.addelephant();
                cout << "meow" << endl;
            }
            if(n2 == 3)
            {
                b3.addelephant();
                cout << "woof" << endl;
            }
        }
    }
}

