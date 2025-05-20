#include "Training.h"
#include <iostream>

using namespace std;

Training::Training(YourBear &your_gummy)
{
        objGT = &your_gummy; // assigns memory address of your_gummy to pointer
}

void Training::Train_attack()
{
    int attackss = 3;
        int current_attackss = objGT->GetAttackStat();
        objGT->SetAttackStat(attackss + current_attackss);
        cout << "Your pet's new attack power is " << objGT->GetAttackStat() << endl;
        cout << "Disclaimer! An increase in attack stat may increase your chances to win! " << endl
             << endl;
        // this function increases the attack stat of the player's pet by 3.
}

void Training::Train_defense()
{
    int defensess = 2;
        int current_defensess = objGT->GetDefenseStat();
        objGT->SetDefenseStat(defensess + current_defensess);
        cout << "Your pet's defense after training is: " << objGT->GetDefenseStat() << endl;
        cout << "Disclaimer! An increase in defense stat may increase your chances to win! " << endl
             << endl;

        // this function increases the defense stat of the player's pet by 2.
    
}

void Training::Train_health()
{
    int train = 15;
        int currentHealth = objGT->GetHealth();
        objGT->SetHealth(currentHealth + train);
        cout << "Your health after training: " << objGT->GetHealth() << endl;
        cout << "Disclaimer! An increase in health may increase your chances to win! " << endl
             << endl;
        // this function increases the health stat of the player's pet by 15.
}

void Training::Train_speed()
{
            int speedss = 5;
        int current_speedss = objGT->GetSpeedStat();
        objGT->SetSpeedStat(speedss + current_speedss);
        cout << "Your pet's speed after training is: " << objGT->GetSpeedStat() << endl;
        cout << "Disclaimer! An increase in speed stat may increase your chances to win! " << endl
             << endl;
        // this function increases the speed stat of the player's pet by 5.

}