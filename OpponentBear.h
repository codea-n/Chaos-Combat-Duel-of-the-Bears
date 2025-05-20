#ifndef OPPONENTBEAR_H
#define OPPONENTBEAR_H

#include "GummyBear.h"
#include <string>

class OpponentBear : public GummyBear {
private:
    std::string opname;
    std::string identifier;

public:
    OpponentBear();
    OpponentBear(int o_lv, int o_hl, int o_as, int o_ds, int o_ss, std::string o_name, std::string o_iden);

    std::string GetColor();
    void SetName(std::string op);
    std::string GetName();
    void SetIdentifier(std::string ID);
    std::string GetID();
};

#endif
