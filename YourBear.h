#ifndef YOURBEAR_H
#define YOURBEAR_H

#include "GummyBear.h"
#include <string>
using namespace std;

class YourBear : public GummyBear {
private:
    string yourname;
    string identifier;

public:
    YourBear(); // Default constructor
    YourBear(int y_lv, int y_hl, int y_as, int y_ds, int y_ss, string y_name, string y_iden); // Overloaded constructor

    string GetColor();

    void SetName(string n);
    string GetName();

    void SetIdentifier(string ID);
    string GetID();
};

#endif // YOURBEAR_H
