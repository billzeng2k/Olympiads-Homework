#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
class kinggoblin
{
    //next time put in enemy class
public:
    int attack = rand()%10+55;
    double health = 200;
    int armor = 15;
    int expgain = 100;
    int moneygain = 120;
    int fireresist = rand()%15-15;
    int frostresist = rand()%2+5;
    int thunderresist = rand()%10;
    int chance = 2;
    int code = 4;
    int getchance()
    {
        return chance;
    }
    int getfrostresist()
    {
        return frostresist;
    }
    int getthunderresist()
    {
        return thunderresist;
    }
    int getfireresist()
    {
        return fireresist;
    }
    void dead()
    {
        health = health-1000;
    }
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
        if(healthx < 0)
        {
            healthx = 1;
        }
        health = health - healthx;
    }
};
class enemy
{
public:
    int attack;
    double health;
    int armor;
    int expgain;
    int moneygain;
    int chance;
    int fireresist;
    int frostresist;
    int thunderresist;
    int code;
    string goblinname;
    enemy(string a)
    {
        {
            if(a == "g")
            {
                attack = rand()%10+25;
                health = 50;
                armor = 0;
                expgain = 40;
                moneygain = 20;
                chance = 5;
                fireresist = rand()%10-10;
                frostresist = rand()%5;
                thunderresist = 0;
                code = 0;
                goblinname = "GOBLIN";
            }
            if(a == "ag")
            {
                attack = rand()%10+45;
                health = 80;
                armor = rand()%7;
                expgain = 80;
                moneygain = 60;
                chance = 2;
                fireresist = rand()%5-10;
                frostresist = rand()%5+5;
                thunderresist = 0;
                code = 3;
                goblinname = "ALPHA GOBLIN";
            }
            if(a == "og")
            {
                attack = rand()%10+35;
                health = 60;
                armor = rand()%7;
                expgain = 60;
                moneygain = 30;
                chance = 3;
                fireresist = rand()%10-10;
                frostresist = rand()%10;
                thunderresist = 0;
                code = 1;
                goblinname = "OMEGA GOBLIN";
            }
            if(a == "bg")
            {
                attack = rand()%10+40;
                health = 70;
                armor = rand()%7;
                expgain = 70;
                moneygain = 40;
                chance = 4;
                fireresist = rand()%5-5;
                frostresist = rand()%10;
                thunderresist = 0;
                code = 2;
                goblinname = "BETA GOBLIN";
            }
        }
    }
    void dead()
    {
        health = health-100;
    }
    int getfrostresist()
    {
        return frostresist;
    }
    int getthunderresist()
    {
        return thunderresist;
    }
    int getfireresist()
    {
        return fireresist;
    }
    int getchance()
    {
        return chance;
    }
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
    string getgoblinname()
    {
        return goblinname;
    }
    void newhealth(int healthx)
    {
        if(healthx < 0)
        {
            healthx = 1;
        }
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
    int healthpot;
    int strengthpot;
    int unknownpot;
    int maxhealth;
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
        healthpot = 1;
        strengthpot = 0;
        unknownpot = 0;
        maxhealth = 100;
    }
    string getclass()
    {
        return classname;
    }
    int gethpot()
    {
        return healthpot;
    }
    int getspot()
    {
        return strengthpot;
    }
    int getupot()
    {
        return unknownpot;
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
    void heal(int heal)
    {
        health += heal;
        if(health > maxhealth)
        {
            health = maxhealth;
        }
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
    void moneyspent(int money1)
    {
        money = money - money1;
    }
};
int main(int argc, const char * argv[])
{
    int mm[5] = {0};
    bool merchant;
    int m1, m2, m3, a1, chance, choice1, choice2, choice3, dodge;
    srand(time(NULL));
    string playername, cl;
    bool fire;
    bool thunder;
    bool deceive;
    bool useitem;
    int Class;
    int day = 1;
    cout << "Hello player! Welcome to my game, please tell me your name:";
    getline(cin,playername);
    cout << "Welcome " << playername << endl << "What class would you like to be?" << endl << "1.Warrior(Strength)" << endl << "2.Mage(Elements)" << endl << "3.Rogue(Crits and more attacks)" << endl;
    cin >> Class;
    if(Class==1)
    {
        m1 = 20;
        m2 = 10;
        m3 = 10;
        a1 = 15;
        cl = "warrior";
    }
    else if(Class==2)
    {
        m1 = 15;
        m2 = 15;
        m3 = 15;
        a1 = 10;
        cl = "mage";
    }
    else
    {
        m1 = 12;
        m2 = 15;
        m3 = 12;
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
        fire = false;
        thunder = false;
        deceive = false;
        if(merchant == true)
        {
            if(rand()%3==1)
            {
                cout << "You have encountered a wandering merchant! You can buy items from him!" << endl;
                while(1)
                {
                    int n;
                    cout << "You have " << player.getmoney() << " gold." << endl << "l.Health Potion (60 gold)" << endl << "2.Strength Potion (60 gold)" << endl << "3.Unknown Potion (40 gold)" << endl<< "0.Exit Shop" << endl;
                    cin >> n;
                    if(n==1)
                    {
                        if(player.getmoney()<60)
                        {
                            cout << "Insufficent funds!" << endl;
                        }
                        else
                        {
                            cout << "Purchased item!" << endl;
                            player.healthpot++;
                            player.moneyspent(60);
                        }
                    }
                    if(n==2)
                    {
                        if(player.getmoney()<60)
                        {
                            cout << "Insufficent funds!" << endl;
                        }
                        else
                        {
                            cout << "Purchased item!" << endl;
                            player.strengthpot++;
                            player.moneyspent(60);
                        }
                    }
                    if(n==3)
                    {
                        if(player.getmoney()<40)
                        {
                            cout << "Insufficent funds!" << endl;
                        }
                        else
                        {
                            cout << "Purchased item!" << endl;
                            player.unknownpot++;
                            player.moneyspent(40);
                        }
                    }
                    if(n==0)
                    {
                        break;
                        merchant = false;
                    }
                }
            }
        }
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
                cout << "Upgrade a skill" << endl << "1.Fireball+5" << endl << "2.Permafrost+5" << endl << "3.Thunderbolt+5" << endl;
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
        bool item = true;
        int focus = 0;
        cout << "DAY " << day << " Choose an action:" << endl << "1.Look for trouble" << endl << "2.Use item" << endl << "3.Wait until next day" << endl << "4.View Character info" << endl << "5.Monster Manual" << endl << "0.Suicide" << endl;
        cin >> choice1;
        if(choice1==5)
        {
            if(mm[0] > 0)
            {
                cout << "GOBLIN:" << endl << "Health: 50" << endl << "Attack: 25-35" << endl << "Armor: 0" << endl << "Fire resistance: -10-0" << endl << "Frost Resistance:0-5" << endl << "Lighing Resistance:0" << endl;
            }
            if(mm[1] > 0)
            {
                cout << "OMEGA GOBLIN:" << endl << "Health:60 " << endl << "Attack:35-45 " << endl << "Armor:0-7 " << endl << "Fire resistance:-10-0 " << endl << "Frost Resistance:0-10 " << endl << "Lighing Resistance:0 " << endl;
            }
            if(mm[2] > 0)
            {
                cout << "BETA GOBLIN:" << endl << "Health:70 " << endl << "Attack:40-50" << endl << "Armor:0-7 " << endl << "Fire resistance:-5-0 " << endl << "Frost Resistance:0-10 " << endl << "Lighing Resistance:0 " << endl;
            }
            if(mm[3] > 0)
            {
                cout << "ALPHA GOBLIN:" << endl << "Health:80 " << endl << "Attack:45-55 " << endl << "Armor:0-7 " << endl << "Fire resistance:-10-0 " << endl << "Frost Resistance:0-10 " << endl << "Lighing Resistance:0 " << endl;
            }
            if(mm[4] > 0)
            {
                cout << "KING GOBLIN:" << endl << "Health:200 " << endl << "Attack:55-65 " << endl << "Armor:5-7 " << endl << "Fire resistance:-15-0 " << endl << "Frost Resistance:10-20 " << endl << "Lighing Resistance:0-10 " << endl;
            }
            int sum = 0;
            for(int i=0;i<5;i++)
            {
                sum += mm[i];
            }
            if(sum==0)
            {
                cout << "You have not faced any monsters yet!" << endl;
            }
        }
        if(choice1 == 2)
        {
            if(useitem == true)
            {
                merchant = false;
                int n;
                cout << "What item would you like to use?" << endl << "1.Health Potion" << endl <<  "2.Strength Potion" << endl << "3.Unknown Potion" << endl << "0.Back" << endl;
                cin >> n;
                if(n==0)
                {
                    cout << endl;
                }
                if(n==1)
                {
                    if(player.gethealth()<player.maxhealth)
                    {
                        if(player.gethpot()==0)
                        {
                            cout << "You are out of health potions." << endl;
                        }
                        else
                        {
                            int rand1 = rand()%10+15;
                            player.heal(rand1);
                            player.healthpot--;
                            cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp." << endl;
                            useitem = false;
                        }
                    }
                    else
                    {
                        cout << "Already max health!" << endl;
                    }
                }
                if(n==2)
                {
                    if(player.getspot()==0)
                    {
                        cout << "You are out of strength potions." << endl;
                    }
                    else
                    {
                        cout << "Cannot be used at this time" << endl;
                    }
                }
                if(n==3)
                {
                    if(player.getupot()==0)
                    {
                        cout << "You are out of unknown potions." << endl;
                    }
                    else
                    {
                        if(rand()%5 == 0)
                        {
                            if(player.health < player.maxhealth)
                            {
                                player.unknownpot--;
                                int rand1 = rand()%10+15;
                                player.heal(rand1);
                                cout << "You have been healed by " << rand1 << " hp." << endl;
                                useitem = false;
                            }
                            else
                            {
                                cout << "Already max health!" << endl;
                            }
                        }
                        else if(rand()%5 == 1)
                        {
                            if(player.health < player.maxhealth)
                            {
                                player.unknownpot--;
                                int rand1 = rand()%10+25;
                                player.heal(rand1);
                                cout << "You have been healed by " << rand1 << " hp." << endl;
                                useitem = false;
                            }
                            else
                            {
                                cout << "Already max health!" << endl;
                            }
                        }
                        else if(rand()%5 == 2 or rand()%5 == 3)
                        {
                            player.unknownpot--;
                            int dmg = rand()%10+5;
                            player.healthdmg(dmg);
                            cout << "You have been hit by " << dmg << " hp." << endl;
                            useitem = false;
                        }
                        else
                        {
                            player.unknownpot--;
                            int rand1 = rand()%10+15;
                            player.heal(rand1);
                            cout << "You have been healed by " << rand1 << " hp." << endl;
                            useitem = false;
                        }
                    }
                }
            }
            else
            {
                cout << "You cannot use another potion until the next day." << endl;
            }
        }
        if(choice1 == 4)
        {
            merchant = false;
            cout << playername << " the level " << player.getlevel()  << " " << player.getclass() << endl << "Exp:" << player.getexp() << endl << "Gold:" << player.getmoney() << endl << "Health:" << player.gethealth() << endl << "Armor:" << player.getarmor() << endl << "Health Potions:" << player.gethpot() << endl << "Strength Potions:" << player.getspot() << endl << "Unknown Potions:" << player.getupot() << endl;
            if(player.getclass()=="warrior")
            {
                cout << "Decisive Strike:" << player.gets() << endl << "Blade Flurry:" << player.getbf() << endl << "Focus:" << player.getf() << endl << endl;
            }
            if(player.getclass()=="mage")
            {
                cout << "Fireball:" << player.getfire() << endl << "Permafrost:" << player.getfrost() << endl << "Thunderbolt:" << player.getthunder() << endl << endl;
            }
            if(player.getclass()=="rogue")
            {
                cout << "Consecutive Strikes:" << player.getcs() << endl << "Blade Shower:" << player.getbs() << endl << "Decieve:" << player.getd() << endl << endl;
            }
        }
        if(choice1 == 0)
        {
            player.healthdmg(100000000);
        }
        if(choice1 == 3)
        {
            if(rand()%2== 1)
            {
                cout << "AMBUSH!" << endl;
                choice1 = 1;
                useitem = true;
            }
            else
            {
                day++;
                merchant = true;
                cout << "Day skipped" << endl;
                useitem = true;
            }
            
        }
        if(choice1 == 1)
        {
            string a;
            chance = rand()%15+1;
            if(chance <= 6)
            {
                a = "g";
                cout << "YOU HAVE ENCOUNTERED A GOBLIN" << endl;
            }
            else if(chance == 12)
            {
                a = "ag";
                cout << "YOU HAVE ENCOUNTERED AN ALPHA GOBLIN" << endl;
            }
            if(chance > 6 and chance < 12)
            {
                a = "og";
                cout << "YOU HAVE ENCOUNTERED AN OMEGA GOBLIN" << endl;
            }
            else
            {
                a = "bg";
                cout << "YOU HAVE ENCOUNTERED AN BETA GOBLIN" << endl;
            }
            enemy g(a);
            dodge = g.getchance();
            while(g.gethealth()>0)
            {
                if(turn == false)
                {
                    if(thunder == false)
                    {
                        if(deceive == false)
                        {
                            if(rand()%dodge==1)
                            {
                                player.healthdmg(g.getattack()-player.getarmor());
                                cout << "You got hit! You now have " << player.gethealth() << " hp." << endl;
                            }
                            else
                            {
                                cout << "You dodged the " << g.getgoblinname() << " attack! You now have " << player.gethealth() << " hp." << endl;
                            }
                        }
                        else
                        {
                            g.newhealth(g.attack/4);
                            cout << "The " << g.goblinname << " is confused! Deals " << g.attack/4 << " to itself!" << endl;
                        }
                    }
                    else
                    {
                        cout << "The " << g.goblinname << " is paralized" << endl;
                    }
                    if(fire == true)
                    {
                        cout << "The " << g.goblinname << " is set ablaze! " << endl << g.goblinname << " takes " << player.getfire()/4 << " damage!" << endl;
                        g.newhealth(player.getfire()/4);
                    }
                    turn = true;
                    item = true;
                    fire = false;
                    thunder = false;
                    deceive = false;
                    dodge = g.getchance();
                }
                if(player.gethealth()<=0)
                {
                    break;
                }
                cout << g.getgoblinname() << " has " << g.gethealth() << " hp left." << endl;
                cout << "Make your move:" << endl << "1.Attack" << endl << "2.Use item" << endl << "3.Try to run" << endl;
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
                    if(item == false)
                    {
                        cout << "You cannot use items twice in one turn" << endl;
                    }
                    else
                    {
                        int n;
                        cout << "What item would you like to use?" << endl << "1.Health Potion" << endl <<  "2.Strength Potion" << endl << "3.Unknown Potion" << endl;
                        cin >> n;
                        if(n==1)
                        {
                            if(player.gethealth()<player.maxhealth)
                            {
                                if(player.gethpot()==0)
                                {
                                    cout << "You are out of health potions." << endl;
                                }
                                else
                                {
                                    int rand1 = rand()%10+15;
                                    player.healthpot--;
                                    player.heal(rand1);
                                    cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp." << endl;
                                    useitem = false;
                                }
                            }
                            else
                            {
                                cout << "Already max health!" << endl;
                            }                        }
                        if(n==2)
                        {
                            if(player.getspot()==0)
                            {
                                cout << "You are out of strength potions." << endl;
                            }
                            else
                            {
                                int rand1 = rand()%10+5;
                                player.strengthpot--;
                                focus += rand1;
                                cout << "You have stronger by " << rand1 << endl;
                                item = false;
                            }
                        }
                        if(n==3)
                        {
                            if(player.getupot()==0)
                            {
                                cout << "You are out of unknown potions." << endl;
                            }
                            else
                            {
                                if(rand()%5 == 0)
                                {
                                    if(player.gethealth()<player.maxhealth)
                                    {
                                        player.unknownpot--;
                                        int rand1 = rand()%10+15;
                                        player.heal(rand1);
                                        item = false;
                                        cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp" << endl;
                                    }
                                    else
                                    {
                                        cout << "Already max health!" << endl;
                                    }
                                }
                                else if(rand()%5 == 1)
                                {
                                    if(player.gethealth()<player.maxhealth)
                                    {
                                        player.unknownpot--;
                                        int rand1 = rand()%10+25;
                                        player.heal(rand1);
                                        item = false;
                                        cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp" << endl;
                                    }
                                    else
                                    {
                                        cout << "Already max health!" << endl;
                                    }
                                }
                                else if(rand()%5 == 2 or rand()%5 == 3)
                                {
                                    player.unknownpot--;
                                    int dmg = rand()%10+5;
                                    player.healthdmg(dmg);
                                    item = false;
                                    cout << "You have been hit by " << dmg << " hp." << endl;
                                }
                                else
                                {
                                    player.unknownpot--;
                                    int rand1 = rand()%10+5;
                                    focus += rand1;
                                    item = false;
                                    cout << "You have stronger by " << rand1 << endl;
                                }
                            }
                        }
                    }
                }
                if(choice2 == 1)
                {
                    if(player.getclass() == "warrior")
                    {
                        cout << "Which attack?" << endl << "1.Decisive Strike(Deals " << player.gets() << ",hits only once, cannot miss)" << endl << "2.Blade Flurry(Deals " << player.getbf() << ",and can hit 3 times)" << endl << "3.Focus(Increases Strength by " << player.getf() << ")" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            g.newhealth(player.gets()+focus-g.getarmor());
                            cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" <<endl;
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
                                cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" << endl;
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
                    if(player.getclass() == "mage")
                    {
                        cout << "Which attack?" << endl << "1.Fireball(Deals " << player.getfire() << ",chance of burn)" << endl << "2.Permafrost(Deals " << player.getfrost() << ",causes enemy to miss more)" << endl << "3.Lightningbolt(Deals " << player.getthunder() << ",slight chance to paralize)" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            g.newhealth(player.getfire()+focus-g.getfireresist());
                            cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" <<endl;
                            turn = false;
                            if(rand()%3 == 0)
                            {
                                fire = true;
                            }
                        }
                        if(choice3 == 2)
                        {
                            g.newhealth(player.getfrost()+focus-g.getfrostresist());
                            cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" << endl;
                            turn = false;
                            if(rand()%4 == 1)
                            {
                                cout << "The " << g.goblinname << " is slowed" << endl;
                                dodge++;
                            }
                        }
                        if(choice3 == 3)
                        {
                            g.newhealth(player.getthunder()+focus-g.getthunderresist());
                            cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" << endl;
                            turn = false;
                            if(rand()%5==0)
                            {
                                thunder = true;
                            }
                        }
                    }
                    if(player.getclass() == "rogue")
                    {
                        cout << "Which attack?" << endl << "1.Consecutive Strikes(Deals " << player.getcs() << ",can hit up to 5 times)" << endl << "2.Blade Shower(Deals " << player.getbs() << ",and can hit up to 3 times)" << endl << "3.Decieve(Deals " << player.getd() << ",and can make the enemy hit itself)" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            int n;
                            for(int i=0;i<5;i++)
                            {
                                cout << "type in a random number:";
                                cin >> n;
                                if(n%3 != rand()%3)
                                {
                                    if(rand()%5 == 0)
                                    {
                                        g.newhealth(player.getcs()*1.5+focus-g.getarmor());
                                        cout << "CRITICAL HIT" << endl;
                                    }
                                    else
                                    {
                                        g.newhealth(player.getcs()+focus-g.getarmor());
                                    }
                                }
                                cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" << endl;
                            }
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
                                    if(rand()%5==0)
                                    {
                                        g.newhealth(player.getbs()*1.5+focus-g.getarmor());
                                        cout << "CRITICAL HIT" << endl;
                                    }
                                    else
                                    {
                                        g.newhealth(player.getbs()+focus-g.getarmor());
                                    }
                                }
                                cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" << endl;
                            }
                            turn = false;
                        }
                        if(choice3 == 3)
                        {
                            if(rand()%5==0)
                            {
                                g.newhealth(player.getd()*2+focus-g.getarmor());
                                cout << "CRITICAL HIT" << endl;
                            }
                            else
                            {
                                g.newhealth(player.getd()+focus-g.getarmor());
                            }
                            if(rand()%5==0)
                            {
                                deceive = true;
                            }
                            cout << "The " << g.getgoblinname() << " now has " << g.gethealth() << " hp" <<endl;
                            turn = false;
                        }
                    }
                }
                if(player.gethealth()<= 0)
                {
                    break;
                }
                if(g.gethealth() <= 0)
                {
                    cout << "You have slain the " << g.getgoblinname() << endl << "You get " << g.getexpgain() << " exp and " << g.getmoneygain() << " gold!" << endl;
                    player.changeexp(g.getexpgain());
                    player.changemoney(g.getmoneygain());
                    merchant = true;
                    day++;
                    mm[g.code]++;
                    useitem = true;
                    if(rand()%g.getchance()==1)
                    {
                        if(rand()%3==2)
                        {
                            cout << "You got an health potion!" << endl;
                            player.healthpot++;
                        }
                        else if(rand()%3==1)
                        {
                            cout << "You got an strength potion!" << endl;
                            player.strengthpot++;
                        }
                        else
                        {
                            cout << "You got an unknown potion!" << endl;
                            player.unknownpot++;
                        }
                    }
                }
                
            }
        }
        if(day == 10)
        {
            kinggoblin g;
            dodge = g.getchance();
            cout << "YOU HAVE ENCOUNTERED THE KING GOBLIN" << endl;
            turn = true;
            while(g.gethealth()>0)
            {
                int posion;
                if(turn == false)
                {
                    if(thunder == false)
                    {
                        if(deceive == false)
                        {
                            if(rand()%dodge==1)
                            {
                                if(rand()%4!=0)
                                {
                                    player.healthdmg(g.getattack()-player.getarmor());
                                    cout << "You got hit! You now have " << player.gethealth() << " hp." << endl;
                                }
                                player.healthdmg(g.getattack());
                                cout << "The GOBLIN KING use CHOMP! Ignores armor!" << endl << "You now have " << player.gethealth() << " hp." << endl << "You are now poisioned for 2 turns.";
                                posion = 2;
                            }
                            else
                            {
                                cout << "You dodged the KING GOBLIN attack! You now have " << player.gethealth() << " hp." << endl;
                            }
                        }
                        else
                        {
                            g.newhealth(g.attack/4);
                            cout << "The KING GOBLIN is confused! Deals " << g.attack/4 << " to itself!" << endl;
                        }
                    }
                    else
                    {
                        cout << "The KING GOBLIN is paralized" << endl;
                    }
                    if(fire == true)
                    {
                        cout << "The KING GOBLIN is set ablaze! " << endl <<  "KING GOBLIN takes " << player.getfire()/4 << " damage!" << endl;
                        g.newhealth(player.getfire()/4);
                    }
                    turn = true;
                    item = true;
                    fire = false;
                    thunder = false;
                    deceive = false;
                    dodge = g.getchance();
                }
                if(player.gethealth()<= 0)
                {
                    break;
                }
                cout << "The KING GOBLIN has " << g.gethealth() << " hp left." << endl;
                cout << "Make your move:" << endl << "1.Attack" << endl << "2.Use item" << endl << "3.Try to run" << endl;
                cin >> choice2;
                if(choice2 == 3)
                {
                    cout << "you can't run away from the KING GOBLIN." << endl;
                }
                if(choice2 == 2)
                {
                    if(item == false)
                    {
                        cout << "You cannot use items twice in one turn" << endl;
                    }
                    else
                    {
                        int n;
                        cout << "What item would you like to use?" << endl << "1.Health Potion" << endl <<  "2.Strength Potion" << endl << "3.Unknown Potion" << endl;
                        cin >> n;
                        if(n==1)
                        {
                            if(player.gethealth()<player.maxhealth)
                            {
                                if(player.gethpot()==0)
                                {
                                    cout << "You are out of health potions." << endl;
                                }
                                else
                                {
                                    player.healthpot--;
                                    int rand1 = rand()%10+15;
                                    player.heal(rand1);
                                    cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp." << endl;
                                    useitem = false;
                                }
                            }
                            else
                            {
                                cout << "Already max health!" << endl;
                            }
                        }
                        if(n==2)
                        {
                            if(player.getspot()==0)
                            {
                                cout << "You are out of strength potions." << endl;
                            }
                            else
                            {
                                int rand1 = rand()%10+5;
                                player.strengthpot--;
                                focus += rand1;
                                item = false;
                                cout << "You have stronger by " << rand1 << endl;
                            }
                        }
                        if(n==3)
                        {
                            if(player.getupot()==0)
                            {
                                cout << "You are out of unknown potions." << endl;
                            }
                            else
                            {
                                if(rand()%5 == 0)
                                {
                                    if(player.gethealth()<player.maxhealth)
                                    {
                                        player.unknownpot--;
                                        int rand1 = rand()%10+15;
                                        player.heal(rand1);
                                        item = false;
                                        cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp" << endl;
                                    }
                                    else
                                    {
                                        cout << "Already max health!" << endl;
                                    }
                                }
                                else if(rand()%5 == 1)
                                {
                                    if(player.gethealth()<player.maxhealth)
                                    {
                                        player.unknownpot--;
                                        int rand1 = rand()%10+25;
                                        player.heal(rand1);
                                        item = false;
                                        cout << "You have been healed by " << rand1 << " hp." << endl << "You now have " << player.gethealth() << " hp" << endl;
                                    }
                                    else
                                    {
                                        cout << "Already max health!" << endl;
                                    }
                                }
                                else if(rand()%5 == 2 or rand()%5 == 3)
                                {
                                    player.unknownpot--;
                                    int dmg = rand()%10+5;
                                    player.healthdmg(dmg);
                                    item = false;
                                    cout << "You have been hit by " << dmg << " hp." << endl;
                                }
                                else
                                {
                                    player.unknownpot--;
                                    int rand1 = rand()%10+5;
                                    focus += rand1;
                                    item = false;
                                    cout << "You have stronger by " << rand1 << endl;
                                }
                            }
                        }
                    }
                }
                
                if(choice2 == 1)
                {
                    if(player.getclass() == "warrior")
                    {
                        cout << "Which attack?" << endl << "1.Decisive Strike(Deals " << player.gets() << ",hits only once, cannot miss)" << endl << "2.Blade Flurry(Deals " << player.getbf() << ",and can hit 3 times)" << endl << "3.Focus(Increases Strength by " << player.getf() << ")" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            g.newhealth(player.gets()+focus-g.getarmor());
                            cout << "The KING GOBLIN now has " << g.gethealth() << " hp" <<endl;
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
                                cout << "The KING GOBLIN now has " << g.gethealth() << " hp" << endl;
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
                    if(player.getclass() == "mage")
                    {
                        cout << "Which attack?" << endl << "1.Fireball(Deals " << player.getfire() << ",chance of burn)" << endl << "2.Permafrost(Deals " << player.getfrost() << ",causes enemy to miss more)" << endl << "3.Lightningbolt(Deals " << player.getthunder() << ",slight chance to paralize)" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            g.newhealth(player.getfire()+focus-g.getfireresist());
                            cout << "The KING GOBLIN now has " << g.gethealth() << " hp" <<endl;
                            turn = false;
                            if(rand()%3 == 0)
                            {
                                fire = true;
                            }
                        }
                        if(choice3 == 2)
                        {
                            g.newhealth(player.getfrost()+focus-g.getfrostresist());
                            cout << "The KING GOBLIN now has " << g.gethealth() << " hp" << endl;
                            turn = false;
                            if(rand()%4 == 1)
                            {
                                cout << "The KING GOBLIN is slowed" << endl;
                                dodge++;
                            }
                        }
                        if(choice3 == 3)
                        {
                            g.newhealth(player.getthunder()+focus-g.getthunderresist());
                            cout << "The KING GOBLIN now has " << g.gethealth() << " hp" << endl;
                            turn = false;
                            if(rand()%5==0)
                            {
                                thunder = true;
                            }
                        }
                    }
                    if(player.getclass() == "rogue")
                    {
                        cout << "Which attack?" << endl << "1.Consecutive Strikes(Deals " << player.getcs() << ",can hit up to 5 times)" << endl << "2.Blade Shower(Deals " << player.getbs() << ",and can hit up to 3 times)" << endl << "3.Decieve(Deals " << player.getd() << ",and can make the enemy hit itself)" << endl;
                        cin >> choice3;
                        if(choice3 == 1)
                        {
                            int n;
                            for(int i=0;i<5;i++)
                            {
                                cout << "type in a random number:";
                                cin >> n;
                                if(n%3 != rand()%3)
                                {
                                    if(rand()%5 == 0)
                                    {
                                        g.newhealth(player.getcs()*1.5+focus-g.getarmor());
                                        cout << "CRITICAL HIT" << endl;
                                    }
                                    else
                                    {
                                        g.newhealth(player.getcs()+focus-g.getarmor());
                                    }
                                }
                                cout << "The KING GOBLIN now has " << g.gethealth() << " hp" << endl;
                            }
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
                                    if(rand()%5==0)
                                    {
                                        g.newhealth(player.getbs()*1.5+focus-g.getarmor());
                                        cout << "CRITICAL HIT" << endl;
                                    }
                                    else
                                    {
                                        g.newhealth(player.getbs()+focus-g.getarmor());
                                    }
                                }
                                cout << "The KING GOBLIN now has " << g.gethealth() << " hp" << endl;
                            }
                            turn = false;
                        }
                        if(choice3 == 3)
                        {
                            if(rand()%5==0)
                            {
                                g.newhealth(player.getd()*2+focus-g.getarmor());
                                cout << "CRITICAL HIT" << endl;
                            }
                            else
                            {
                                g.newhealth(player.getd()+focus-g.getarmor());
                            }
                            if(rand()%5==0)
                            {
                                deceive = true;
                            }
                            cout << "The KING GOBLIN now has " << g.gethealth() << " hp" <<endl;
                            turn = false;
                        }
                    }
                }
                if(posion > 0)
                {
                    cout << "You take 5 damage from the posion!" << endl << "You now have " << player.gethealth() << " health!" << endl;
                    player.healthdmg(5);
                    posion--;
                }
            }
        }
        if(player.gethealth()<0)
        {
            cout << "You are dead :(" << endl;
        }
    }
    cout << "Thank you for playing the forest wait for part 2";
}




