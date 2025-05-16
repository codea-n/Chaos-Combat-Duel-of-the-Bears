#ifndef GUMMYBEAR_H
#define GUMMYBEAR_H

#include <string>
using namespace std;

class GummyBear {
protected:
    int level;
    int health;
    int attack_stat;
    int defense_stat;
    int speed_stat;

public:
    GummyBear(); // Default constructor
    GummyBear(int lv, int hl, int as, int ds, int ss); // Overloaded constructor

    void SetLevel(int L);
    int GetLevel();

    void SetHealth(int H);
    int GetHealth();

    void SetAttackStat(int AS);
    int GetAttackStat();

    void SetDefenseStat(int DS);
    int GetDefenseStat();

    void SetSpeedStat(int SS);
    int GetSpeedStat();
};

#endif // GUMMYBEAR_H
