#include "Action.h"
#include <iostream>

using namespace std;

Action::Action(YourBear& your_gummy, OpponentBear& opponent) {
    objG = &your_gummy;
    objP = &opponent;
}

int Action::defend() {
    int damage = 5;
    int current_speed = objG->GetSpeedStat();
    int current_defense_stat = objG->GetDefenseStat();
    int current_health = objG->GetHealth();

    if (current_speed < 5 || current_defense_stat < 6) {
        objG->SetHealth(current_health - damage);
    } else if (current_speed >= 5 || current_defense_stat > 10) {
        damage -= 2;
        objG->SetHealth(current_health - damage);
    }

    cout << "Based on your speed, your health after defending: " << objG->GetHealth() << endl;
    cout << "****************************************************************" << endl;

    return objG->GetHealth();
}

int Action::Attack() {
    int damage = 12;
    int current_health = objP->GetHealth();
    int opponent_level = objP->GetLevel();
    int your_attack_stat = objG->GetAttackStat();

    if (opponent_level > 5) {
        if (your_attack_stat < 9) {
            damage -= 7;
        } else {
            damage -= 3;
        }
    } else {
        if (your_attack_stat < 9) {
            damage += 3;
        } else {
            damage += 6;
        }
    }

    objP->SetHealth(current_health - damage);

    cout << "Based on your attack stat and opponent's level, the opponent's health after being attacked: " << objP->GetHealth() << endl;
    cout << "****************************************************************" << endl;

    return objP->GetHealth();
}
