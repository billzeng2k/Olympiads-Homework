#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
class golbin
{
    public:
    int attack = rand()%10+25;
    double health = 40;
    int armor = 0;
    int expgain = 40;
    int moneygain = 25;
    int getattack()
    {
        return attack;
    }
    int getarmor()
    {
        return armor;
    }
    int gethealth()
    {
        return health;
    }
    int getexpgain()
    {
        return expgain;
    }
    int getmoneygain()
    {
        return moneygain;
    }
    void newhealth(int healthx)
    {
        health = health - healthx;
    }
};
class alphagoblin
{
    public:
    int attack = rand()%10+35;
    int health = 50;
    int armor = rand()%10;
    int expgain = 60;
    int moneygain = 50;
    int getattack()
    {
        return attack;
    }
    int getarmor()
    {
        return armor;
    }
    int gethealth()
    {
        return health;
    }
    int getexpgain()
    {
        return expgain;
    }
    int getmoneygain()
    {
        return moneygain;
    }
    void newhealth(int healthx)
    {
        health = health - healthx;
    }
};
class omegagoblin
{
    public:
    int attack = rand()%10+45;
    int health = 70;
    int armor = rand()%15;
    int expgain = 80;
    int moneygain = 100;
    int getattack()
    {
        return attack;
    }
    int getarmor()
    {
        return armor;
    }
    int gethealth()
    {
        return health;
    }
    int getexpgain()
    {
        return expgain;
    }
    int getmoneygain()
    {
        return moneygain;
    }
    void newhealth(int healthx)
    {
        health = health - healthx;
    }
};
class character
{
    public:
        //warrior
        int strike;
        int bladeflurry;
        int focus;
        //mage
        int fireball;
        int permafrost;
        int thunderbolt;
        //rogue
        int consecutivestrikes;
        int bladeshower;
        int deceive;
        int level;
        int health;
        int exp;
        int money;
        int armor;
        string classname;
    character(int move1, int move2, int move3, string CLASS, int armor1)
    {
        if(CLASS == "warrior")
        {
            strike = move1;
            bladeflurry = move2;
            focus = move3;
            armor = armor1;
        }
        if(CLASS == "mage")
        {
            fireball = move1;
            permafrost = move2;
            thunderbolt = move3;
            armor = armor1;
        }
        if(CLASS == "rogue")
        {
            consecutivestrikes = move1;
            bladeshower = move2;
            deceive = move3;
            armor = armor1;
        }
        level = 0;
        health = 100;
        exp = 0;
        money = 25;
        classname = CLASS;
    }
    string getclass()
    {
        return classname;
    }
    int getarmor()
    {
        return armor;
    }
    int gets()
    {
        return strike;
    }
    int getbf()
    {
        return bladeflurry;
    }
    int getf()
    {
        return focus;
    }
    int getfire()
    {
        return fireball;
    }
    int getfrost()
    {
        return permafrost;
    }
    int getthunder()
    {
        return thunderbolt;
    }
    int getcs()
    {
        return consecutivestrikes;
    }
    int getbs()
    {
        return bladeshower;
    }
    int getd()
    {
        return deceive;
    }
    int getmoney()
    {
        return money;
    }
    int getlevel()
    {
        return level;
    }
    int getexp()
    {
        return exp;
    }
    int gethealth()
    {
        return health;
    }
    void ups(int x)
    {
        strike += x;
    }
    void upbf(int x)
    {
        bladeflurry += x;
    }
    void upf(int x)
    {
        focus += x;
    }
    void upfire(int x)
    {
        fireball += x;
    }
    void upfrost(int x)
    {
        permafrost += x;
    }
    void upthunder(int x)
    {
        thunderbolt += x;
    }
    void upcs(int x)
    {
        consecutivestrikes += x;
    }
    void upbs(int x)
    {
        bladeshower += x;
    }
    void upd(int x)
    {
        deceive += x;
    }
    void changeexp(int exp1)
    {
        exp = exp+exp1;
    }
    void changemoney(int money1)
    {
        money = money+money1;
    }
    void healthdmg(int dmg)
    {
        health = health - dmg;
    }
    void expreset()
    {
        exp = 0;
    }
    void levelup()
    {
        level++;
    }
};
int main(int argc, const char * argv[])
{
    int m1, m2, m3, a1, chance, choice1, choice2, choice3;
    srand(time(NULL));
    string playername, cl;
    int Class;
    int day = 1;
    cout << "Hello player! Welcome to my game, please tell me your name:";
    getline(cin,playername);
    cout << "Welcome " << playername << endl << "What class would you like to be?" << endl << "1.Warrior(Strength)" << endl << "2.Mage(Elements)" << endl << "3.Rogue(Crits and more attacks)" << endl;
    cin >> Class;
    if(Class==1)
    {
        m1 = 20;
        m2 = 15;
        m3 = 10;
        a1 = 15;
        cl = "warrior";
    }
    else if(Class==2)
    {
        m1 =20;
        m2 =20;
        m3 =20;
        a1 = 10;
        cl = "mage";
    }
    else if(Class==3)
    {
        m1 = 10;
        m2 = 15;
        m3 = 20;
        a1 = 10;
        cl = "rogue";
    }
    character player(m1, m2, m3, cl, a1);
    cout << "Congratulations  " << playername << ", the game will commence now" << endl;
    
    //end of loading screen
    //start of the forest
    
    cout << "(Wakes up)" << endl << playername << ": Aw man how'd I end up in this forest?" <<endl;
    while(day < 10 and player.gethealth()>0)
    {
        if(player.getexp() >= 100)
        {
            player.levelup();
            player.expreset();
            if(player.getclass() == "warrior")
            {
                int upgrade;
                cout << "Upgrade a skill" << endl << "1.Strike+5" << endl << "2.Blade Flurry+5" << endl << "3.Focus+5" << endl;
                cin >> upgrade;
                if(upgrade == 1)
                {
                    player.ups(5);
                }
                if(upgrade == 2)
                {
                    player.upbf(5);
                }
                if(upgrade == 3)
                {
                    player.upf(5);
                }
            }
            if(player.getclass() == "mage")
            {
                int upgrade;
                cout << "Upgrade a skill" << endl << "1.Fireball+5" << endl << "2.Permafrost+5" << endl << "3.Thunderbolt" << endl;
                cin >> upgrade;
                if(upgrade == 1)
                {
                    player.upfire(5);
                }
                if(upgrade == 2)
                {
                    player.upfrost(5);
                }
                if(upgrade == 3)
                {
                    player.upthunder(5);
                }
            }
            if(player.getclass() == "rogue")
            {
                int upgrade;
                cout << "Upgrade a skill" << endl << "1.Consecutive Strikes +5" << endl << "2.Blade Shower+5" << endl << "3.Decieve+5" << endl;
                cin >> upgrade;
                if(upgrade == 1)
                {
                    player.upcs(5);
                }
                if(upgrade == 2)
                {
                    player.upbs(5);
                }
                if(upgrade == 3)
                {
                    player.upd(5);
                }
            }
        }
        bool turn = true;
        int focus = 0;
        cout << "DAY " << day << " Choose an action:" << endl << "1.look for trouble" << endl << "2.Use item" << endl << "3.Wait until next day" << endl << "4.View Character info" << endl << "0.Suicide" << endl;
        cin >> choice1;
        if(choice1 == 2)
        {
            cout << "BILL PROGRAM THIS PART" << endl;
        }
        if(choice1 == 4)
        {
            cout << playername << " the level " << player.getlevel()  << " " << player.getclass() << " has " << player.getexp() << " exp, " << player.getmoney() << " gold, and " << player.gethealth() << " health." <<  endl;
            if(player.getclass()=="warrior")
            {
                cout << "Strike:" << player.gets() << endl << "Blade Flurry:" << player.getbf() << endl << "Focus:" << player.getf() << endl;
            }
            if(player.getclass()=="mage")
            {
                cout << "Fireball:" << player.getfire() << endl << "Permafrost:" << player.getfrost() << endl << "Thunderbolt:" << player.getthunder() << endl;
            }
            if(player.getclass()=="rogue")
            {
                cout << "Consecutive Strikes:" << player.getcs() << endl << "Blade Shower:" << player.getbs() << endl << "Decieve:" << player.getd() << endl;
            }
        }
        if(choice1 == 0)
        {
            player.healthdmg(100000000);
        }
        if(choice1 == 3)
        {
            if(rand()%3 == 1)
            {
                choice1 = 1;
            }
            else
            {
                day++;
                cout << "Day skipped" << endl;
            }
            
        }
        if(choice1 == 1)
        {
            chance = rand()%10+1;
            if(chance == 9)
            {
                omegagoblin g;
                cout << "YOU HAVE ENCOUNTERED AN OMEGA GOBLIN" << endl;
                if(player.getclass() == "warrior")
                {
                    while(g.gethealth()>0)
                    {
                        if(turn == false)
                        {
                            if(rand()%2==1)
                            {
                                player.healthdmg(g.getattack()-player.getarmor());
                                cout << "You got hit! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                            }
                            else
                            {
                                cout << "You dodged the goblins attack! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                            
                            }
                        }
                        cout << "Make your move:" << endl << "1.attack" << endl << "2.Use item" << endl << "3.Try to run" << endl;
                            cin >> choice2;
                            if(choice2 == 3)
                            {
                                if(rand()%10 == 9)
                                {
                                g.newhealth(100);
                                    cout << "You ran away" << endl;
                                }
                                else
                                {
                                    cout << "you failed to run away" << endl;
                                    turn = false;
                                }
                            }
                            if(choice2 == 2)
                            {
                                cout << "TOO BAD" << endl;
                                turn = false;
                            }
                            if(choice2 == 1)
                            {  
                                cout << "Which attack?" << endl << "1.Strike(Deals " << player.gets() << ", hits only once)" << endl << "2.Blade Flurry(Deals " << player.getbf() << ", but can hit 3 times)" << endl << "3.Focus(Increases Strength by " << player.getf() << ")" << endl;
                                cin >> choice3;
                            if(choice3 == 1)
                            {
                                g.newhealth(player.gets()+focus-g.getarmor());
                                cout << "The OMEGA GOBLIN now has " << g.gethealth() << " hp" <<endl;
                                turn = false;
                            }
                            if(choice3 == 2)
                            {
                                int n;
                                for(int i=0;i<3;i++)
                                {
                                    cout << "type in a random number:";
                                    cin >> n;
                                    if(n%4 != rand()%4)
                                        {
                                            g.newhealth(player.getbf()+focus-g.getarmor());
                                        }
                                    cout << "The OMEGA GOBLIN now has " << g.gethealth() << " hp" << endl;
                                }
                                turn = false;
                            }
                            if(choice3 == 3)
                                {
                                    focus = focus+player.getf();
                                    cout << "Damage increased by " << player.getf() << "!" << endl;
                                    turn = false;
                                }
                            }
                        if(g.gethealth() <= 0)
                        {
                            cout << "You have slain the OMEGA GOBLIN" << endl << "You get " << g.getexpgain() << " exp and " << g.getmoneygain() << " gold!" << endl;
                            player.changeexp(g.getexpgain());
                            player.changemoney(g.getmoneygain());
                            day++;
                        }

                    }
                }
            }
            else if(chance < 5)
            {
                golbin g;
                cout << "YOU HAVE ENCOUNTERED AN GOBLIN" << endl;
                if(player.getclass() == "warrior")
                {
                    while(g.gethealth()>0)
                    {
                        if(turn == false)
                        {
                            if(rand()%4==1)
                            {
                                player.healthdmg(g.getattack()-player.getarmor());
                                cout << "You got hit! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                            }
                            else
                            {
                                cout << "You dodged the goblins attack! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                                
                            }
                        }
                        cout << "Make your move:" << endl << "1.attack" << endl << "2.Use item" << endl << "3.Try to run" << endl;
                        cin >> choice2;
                        if(choice2 == 3)
                        {
                            if(rand()%10 == 9)
                            {
                                g.newhealth(100);
                                cout << "You ran away" << endl;
                            }
                            else
                            {
                                cout << "you failed to run away" << endl;
                                turn = false;
                            }
                        }
                        if(choice2 == 2)
                        {
                            cout << "TOO BAD" << endl;
                            turn = false;
                        }
                        if(choice2 == 1)
                        {
                            cout << "Which attack?" << endl << "1.Strike(Deals " << player.gets() << ", hits only once)" << endl << "2.Blade Flurry(Deals " << player.getbf() << ", but can hit 3 times)" << endl << "3.Focus(Increases Strength by " << player.getf() << ")" << endl;
                            cin >> choice3;
                            if(choice3 == 1)
                            {
                                g.newhealth(player.gets()+focus-g.getarmor());
                                cout << "The GOBLIN now has " << g.gethealth() << " hp" <<endl;
                                turn = false;
                            }
                            if(choice3 == 2)
                            {
                                int n;
                                for(int i=0;i<3;i++)
                                {
                                    cout << "type in a random number:";
                                    cin >> n;
                                    if(n%4 != rand()%4)
                                    {
                                        g.newhealth(player.getbf()+focus-g.getarmor());
                                    }
                                    cout << "The GOBLIN now has " << g.gethealth() << " hp" << endl;
                                }
                                turn = false;
                            }
                            if(choice3 == 3)
                            {
                                focus = focus+player.getf();
                                cout << "Damage increased by " << player.getf() << "!" << endl;
                                turn = false;
                            }
                            if(g.gethealth() <= 0)
                            {
                                cout << "You have slain the GOBLIN" << endl << "You get " << g.getexpgain() << " exp and " << g.getmoneygain() << " gold!" << endl;
                                player.changeexp(g.getexpgain());
                                player.changemoney(g.getmoneygain());
                                day++;
                            }
                        }
                    }
                }
            }
            else
            {
                alphagoblin g;
                cout << "YOU HAVE ENCOUNTERED AN ALPHA GOBLIN" << endl;
                if(player.getclass() == "warrior")
                {
                    while(g.gethealth()>0)
                    {
                        if(turn == false)
                        {
                            if(rand()%3==1)
                            {
                                player.healthdmg(g.getattack()-player.getarmor());
                                cout << "You got hit! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                            }
                            else
                            {
                                cout << "You dodged the goblins attack! You now have " << player.gethealth() << " hp." << endl;
                                turn = true;
                                
                            }
                        }
                        cout << "Make your move:" << endl << "1.attack" << endl << "2.Use item" << endl << "3.Try to run" << endl;
                        cin >> choice2;
                        if(choice2 == 3)
                        {
                            if(rand()%10 == 9)
                            {
                                g.newhealth(100);
                                cout << "You ran away" << endl;
                            }
                            else
                            {
                                cout << "you failed to run away" << endl;
                                turn = false;
                            }
                        }
                        if(choice2 == 2)
                        {
                            cout << "TOO BAD" << endl;
                            turn = false;
                        }
                        if(choice2 == 1)
                        {
                            cout << "Which attack?" << endl << "1.Strike(Deals " << player.gets() << ", hits only once)" << endl << "2.Blade Flurry(Deals " << player.getbf() << ", but can hit 3 times)" << endl << "3.Focus(Increases Strength by " << player.getf() << ")" << endl;
                            cin >> choice3;
                            if(choice3 == 1)
                            {
                                g.newhealth(player.gets()+focus-g.getarmor());
                                cout << "The ALPHA GOBLIN now has " << g.gethealth() << " hp" <<endl;
                                turn = false;
                            }
                            if(choice3 == 2)
                            {
                                int n;
                                for(int i=0;i<3;i++)
                                {
                                    cout << "type in a random number:";
                                    cin >> n;
                                    if(n%4 != rand()%4)
                                    {
                                        g.newhealth(player.getbf()+focus-g.getarmor());
                                    }
                                    cout << "The ALPHA GOBLIN now has " << g.gethealth() << " hp" << endl;
                                }
                                turn = false;
                            }
                            if(choice3 == 3)
                            {
                                focus = focus+player.getf();
                                cout << "Damage increased by " << player.getf() << "!" << endl;
                                turn = false;
                            }
                            if(g.gethealth() <= 0)
                            {
                                cout << "You have slain the ALPHA GOBLIN" << endl << "You get " << g.getexpgain() << " exp and " << g.getmoneygain() << " gold!" << endl;
                                player.changeexp(g.getexpgain());
                                player.changemoney(g.getmoneygain());
                                day++;
                            }
                        }
                    }
                }
            }
        }
        if(player.gethealth()<0)
        {
            cout << "You are dead :(" << endl;
        }
    }
}


