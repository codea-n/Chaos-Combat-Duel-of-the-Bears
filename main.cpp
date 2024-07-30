#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//Instead of using camelCase, used underscore(_) for better comprehension.
class GummyBear
{
protected:
    int level;        // stores the value of level of the gummybears.
    int health;       // stores the value of health of the gummybears.
    int attack_stat;  // stores the value of attack stat of the gummybears.
    int defense_stat; // stores the value of the defense stat of the gummybears.
    int speed_stat;   // stores the speed stat of the gummybears in the variable

public:
    void SetLevel(int L) // assigns L to level and sets the level.
    {
        level = L;
    }

    int GetLevel() // returns the value of the level.
    {
        return level;
    }
    void SetHealth(int H) // assigns H to health and sets the health.
    {
        health = H;
    }
    int GetHealth() // returns the value of the health.
    {
        return health;
    }
    void SetAttackStat(int AS) // assigns AS to attack_stat and sets the attack stat.
    {
        attack_stat = AS;
    }
    int GetAttackStat() // returns the value of attack stat.
    {
        return attack_stat;
    }
    void SetDefenseStat(int DS) // assigns DS to defense_stat and sets the defense stat.
    {
        defense_stat = DS;
    }
    int GetDefenseStat() // returns the value of defense_stat.
    {
        return defense_stat;
    }
    void SetSpeedStat(int SS) // assigns SS to speed_stat and sets the speed stat.
    {
        speed_stat = SS;
    }
    int GetSpeedStat() // returns the value of speed_stat.
    {
        return speed_stat;
    }
    GummyBear(int lv, int hl, int as, int ds, int ss) // overloaded constructor with 5 parameters to set the stats of the GummyBear as predefined.
    {
        level = lv;
        health = hl;
        attack_stat = as;
        defense_stat = ds;
        speed_stat = ss;
    }

    // virtual string GetColor() // polymorphism to put color for Opponent and YourBear.
    // {
    //     return "Blue";
    // }Not required

    GummyBear() // A default constructor for the GummyBear base class. Uses principles of object oriented programming
    {
        // since integer values, using 0 instead of decimal. Also, stats are mostly in integer.
        level = 0;
        health = 0;
        attack_stat = 0;
        defense_stat = 0;
        speed_stat = 0;
    }
};

/********************************** Derived class YourBear ************************************************/
