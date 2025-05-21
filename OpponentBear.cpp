#include "OpponentBear.h"

OpponentBear::OpponentBear() {
    opname = "";
    identifier = "";
}

OpponentBear::OpponentBear(int o_lv, int o_hl, int o_as, int o_ds, int o_ss, std::string o_name, std::string o_iden)
    : GummyBear(o_lv, o_hl, o_as, o_ds, o_ss) {
    opname = o_name;
    identifier = o_iden;
}

std::string OpponentBear::GetColor() {
    return "Red";
}

void OpponentBear::SetName(std::string op) {
    opname = op;
}

std::string OpponentBear::GetName() {
    return opname;
}

void OpponentBear::SetIdentifier(std::string ID) {
    identifier = ID;
}

std::string OpponentBear::GetID() {
    return identifier;
}
