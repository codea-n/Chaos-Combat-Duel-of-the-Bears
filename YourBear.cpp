#include "YourBear.h"

YourBear::YourBear() {
    yourname = "";
    identifier = "";
}

YourBear::YourBear(int y_lv, int y_hl, int y_as, int y_ds, int y_ss, string y_name, string y_iden)
    : GummyBear(y_lv, y_hl, y_as, y_ds, y_ss) {
    yourname = y_name;
    identifier = y_iden;
}

string YourBear::GetColor() {
    return "Green";
}

void YourBear::SetName(string n) {
    yourname = n;
}

string YourBear::GetName() {
    return yourname;
}

void YourBear::SetIdentifier(string ID) {
    identifier = ID;
}

string YourBear::GetID() {
    return identifier;
}
