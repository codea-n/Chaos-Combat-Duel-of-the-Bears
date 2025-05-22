#include <iostream>
#include <string>
#include <fstream>
#include "YourBear.h"
#include "OpponentBear.h"
#include "Action.h"
#include "Training.h"
#include "GummyBear.h"

using namespace std;
// Instead of using camelCase, used underscore(_) for better comprehension.

int main()
{

    int choice;
    cout << "Welcome to the Gummy Bear Arena " << endl;

    cout << "Press 1 to enter the game, or press any other number or letter to exit " << endl;
    cin >> choice;

    if (choice != 1) // if the user enters anything other than 1, the program will exit.
    {
        cout << "You either entered a wrong number or a string. You will now be exiting the game! " << endl;
        return 1;
    }

    string name;
    cout << "Enter the first name of your bear: " << endl;
    cin >> name;
    cout << endl;

    string identifier;
    cout << "Enter the 5-character (max) identifier name " << endl;
    cin >> identifier;
    if (identifier.length() > 5) // if the length of the identifier is greater than 5, the program exits.
    {
        cout << "Your identifier did not meet the requirements. This game will now exit. " << endl;
        return 10;
    }
    cout << endl;

    YourBear your_gummy(2, 5, 6, 6, 7, name, identifier); // predefined stats for the user's character
    cout << "Here are your gummy bear stats: " << endl;
    cout << "Your name is: " << your_gummy.GetName() << endl;
    cout << "Your identifier is: " << your_gummy.GetID() << endl;
    cout << "The color of your bear is: " << your_gummy.GetColor() << endl;
    cout << "Your level is: " << your_gummy.GetLevel() << endl;
    cout << "Your health is: " << your_gummy.GetHealth() << endl;
    cout << "Your attack stat is: " << your_gummy.GetAttackStat() << endl;
    cout << "Your defense stat is: " << your_gummy.GetDefenseStat() << endl;
    cout << "Your speed stat is: " << your_gummy.GetSpeedStat() << endl
         << endl
         << endl;

    cout << "     **         **     " << endl;
    cout << "    *  *       *  *    " << endl;
    cout << "     **         **     " << endl;
    cout << "      **********       " << endl;
    cout << "     *          *      " << endl;
    cout << "    *  (*)  (*)  *     " << endl;
    cout << "   *              *    " << endl;
    cout << "   *              *    " << endl;
    cout << "   *    ******    *    " << endl;
    cout << "    *    ****     *    " << endl;
    cout << "     *           *     " << endl;
    cout << "      ***********      " << endl;
    cout << "      ||        ||      " << endl;
    cout << "      <>        <>      " << endl
         << endl
         << endl;

    cout << endl;
    cout << "Your Enemy stats are as follows: " << endl;
    OpponentBear opp(6, 30, 6, 2, 1, "The Destroyer", "WIP"); // predefined stats for the opponent character

    cout << "Opponent name is: " << opp.GetName() << endl;
    cout << "Opponent identifier is: " << opp.GetID() << endl;
    cout << "The color of opponent bear is: " << opp.GetColor() << endl;
    cout << "Opponent level is: " << opp.GetLevel() << endl;
    cout << "Opponent health is: " << opp.GetHealth() << endl;
    cout << "Opponent attack stat is: " << opp.GetAttackStat() << endl;
    cout << "Opponent defense stat is: " << opp.GetDefenseStat() << endl;
    cout << "Opponent speed stat is: " << opp.GetSpeedStat() << endl;

    do // using a do-while loop.
    {
        cout << endl;
        cout << "Menu: " << endl;
        cout << "1 - Attack Opponent " << endl;
        cout << "2 - Defend from Opponent's Attack " << endl;
        cout << "3 - Train your pet " << endl;
        cout << "4 - Save existing data and exit" << endl;
        cout << "5 - Load from previous file " << endl;
        cout << "0 - End game " << endl
             << endl;

        cout << "Choose your choice: " << endl;

        cin >> choice;
        switch (choice)
        {
        case (1):
        {
            cout << endl;
            cout << "****************************************************************" << endl;
            cout << "                 /]----------------------------------" << endl;
            cout << "[****************[]                                  |" << endl;
            cout << "[****************[]                                  |" << endl;
            cout << "                 /]----------------------------------" << endl;

            cout << "      /|" << endl;
            cout << "     / |" << endl;
            cout << "    /  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "    |  |" << endl;
            cout << "[[]][][][][][]]" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    * *" << endl;
            cout << "    ***" << endl;

            Action att(your_gummy, opp); // using this created an object of type action which passes the memory address of your_gummy and opponent as parameters to the constructor which are assigned to the pointers in the action class.
            cout << "You will now attack the opponent! " << endl;
            int a_val = att.Attack(); // if the health of opponent is less than 0, the player wins.
            if (a_val <= 0)
            {
                cout << "You won. Thank you for playing " << endl
                     << endl
                     << endl;
                cout << "     **         **     " << endl;
                cout << "    *  *       *  *    " << endl;
                cout << "     **         **     " << endl;
                cout << "      ***********       " << endl;
                cout << "     *           *      " << endl;
                cout << "    *  (*)  (*)   *     " << endl;
                cout << "   *               *    " << endl;
                cout << "   *               *    " << endl;
                cout << "   *     \\___/     *    " << endl;
                cout << "    *             *     " << endl;
                cout << "     *           *      " << endl;
                cout << "      ***********       " << endl;
                cout << "      ||        ||       " << endl;
                cout << "      <>        <>       " << endl;

                return 2;
            }

            break;
        }
        case (2):
        {
            cout << endl;
            cout << "****************************************************************" << endl;
            Action def(your_gummy, opp); // using the same idea but for the purpose of defending from opponent's attack.
            cout << "You will now defend from opponent attack" << endl;
            cout << " _________________" << endl;
            cout << "|       | |       |" << endl;
            cout << "|       | |       |" << endl;
            cout << "|       | |       |" << endl;
            cout << "| ______| |_______|" << endl;
            cout << "| _______  _______|" << endl;
            cout << "|       | |       |" << endl;
            cout << "|       | |       |" << endl;
            cout << " \\      | |      /" << endl;
            cout << "  \\     | |     /" << endl;
            cout << "   \\    | |    /" << endl;
            cout << "    \\   | |   /" << endl;
            cout << "     \\  | |  /" << endl;
            cout << "      \\ | | /" << endl;
            cout << endl;
            cout << "****************************************************************" << endl;

            cout << "You will now defend from opponent attack" << endl;
            int value = def.defend(); // if the health of user's character is less than 0, then the user lost the game.
            if (value <= 0)
            {
                cout << "You lost. Thank you for playing " << endl
                     << endl
                     << endl;

                cout << "     **         **     " << endl;
                cout << "    *  *       *  *    " << endl;
                cout << "     **         **     " << endl;
                cout << "      ***********       " << endl;
                cout << "     *           *      " << endl;
                cout << "    *  (*)  (*)   *     " << endl;
                cout << "   *               *    " << endl;
                cout << "   *      ___      *    " << endl;
                cout << "   *     /   \\     *    " << endl;
                cout << "    *             *    " << endl;
                cout << "     *           *     " << endl;
                cout << "      ***********      " << endl;
                cout << "      ||        ||      " << endl;
                cout << "      <>        <>      " << endl;

                return 3;
            }
            break;
        }

        case (3):
        {
            cout << endl;
            cout << "****************************************************************" << endl;
            Training trn(your_gummy); // this creates an object of type training and passes the memory address of your_gummy as a parameter to be used by the constructor to be assigned to a pointer in the class.
            cout << "Train your pet " << endl;
            cout << "Enter a number between 1-5 for a random stat boost " << endl;
            int ran = 0;
            cin >> ran; // user enters random number to change the stats of their pet.

            if (ran == 1)
            {
                trn.Train_attack();
            }
            else if (ran == 2)
            {
                trn.Train_defense();
            }

            else if (ran == 3)
            {
                trn.Train_speed();
            }

            else if (ran == 4)
            {
                trn.Train_health();
            }

            else if (ran >= 5 || ran < 0)
            {
                cout << "Sorry no stat was changed" << endl;
            }

            break;
        }

        case (0):
        {
            cout << "Thank you for playing the game!!" << endl;
            return 4;
        }

        case (4):
        {
            ofstream fout(name + ".txt"); // declares ofstream variable fout to save to a file.

            fout << your_gummy.GetName() << endl;
            fout << your_gummy.GetID() << endl;
            fout << your_gummy.GetLevel() << endl;
            fout << your_gummy.GetHealth() << endl;
            fout << your_gummy.GetAttackStat() << endl;
            fout << your_gummy.GetDefenseStat() << endl;
            fout << your_gummy.GetSpeedStat() << endl;

            cout << "Your file has been saved successfully. The name of the file is: " << name + ".txt" << endl;

            cout << "These are the saved stats : " << endl;
            cout << "Your name is: " << your_gummy.GetName() << endl;
            cout << "Your identifier is: " << your_gummy.GetID() << endl;
            cout << "Your level is: " << your_gummy.GetLevel() << endl;
            cout << "Your health is: " << your_gummy.GetHealth() << endl;
            cout << "Your attack stat is: " << your_gummy.GetAttackStat() << endl;
            cout << "Your defense stat is: " << your_gummy.GetDefenseStat() << endl;
            cout << "Your speed stat is: " << your_gummy.GetSpeedStat() << endl;

            cout << "Thank you for playing the game! " << endl;
            fout.close();
            return 5;
        }

        case (5):
        {
            ifstream fin; // declares ifstream variable fin to load from file.
            string fname;
            cout << "Enter the previous name of the Bear you used to load that file " << endl;
            cin >> fname;
            fin.open(fname + ".txt");
            if (!fin.is_open())
            {
                cout << "File not found. The game will now exit " << endl;
                return 6;
            }

            while (!fin.eof())
            {
                int level;
                int health;
                int attack_stat;
                int defense_stat;
                int speed_stat;
                string name;
                string identifier;

                fin >> name;
                fin >> identifier;
                fin >> level;
                fin >> health;
                fin >> attack_stat;
                fin >> defense_stat;
                fin >> speed_stat;

                your_gummy.SetName(name);
                your_gummy.SetIdentifier(identifier);
                your_gummy.SetLevel(level);
                your_gummy.SetHealth(health);
                your_gummy.SetAttackStat(attack_stat);
                your_gummy.SetDefenseStat(defense_stat);
                your_gummy.SetSpeedStat(speed_stat);

                cout << "Here are your gummy bear stats from an older version: " << endl
                     << endl;
                cout << "Your name is: " << your_gummy.GetName() << endl;
                cout << "Your identifier is: " << your_gummy.GetID() << endl;
                cout << "Your level is: " << your_gummy.GetLevel() << endl;
                cout << "Your health is: " << your_gummy.GetHealth() << endl;
                cout << "Your attack stat is: " << your_gummy.GetAttackStat() << endl;
                cout << "Your defense stat is: " << your_gummy.GetDefenseStat() << endl;
                cout << "Your speed stat is: " << your_gummy.GetSpeedStat() << endl;

                fin.close();
                break;
            }
        }
        }

    } while (choice != 0);

    // delete basic_info;

    cout << "You have exited the game " << endl;

    return 0;
}
