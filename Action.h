#ifndef ACTION_H
#define ACTION_H

#include "YourBear.h"
#include "OpponentBear.h"

class Action {
public:
    YourBear* objG;
    OpponentBear* objP;

    Action(YourBear& your_gummy, OpponentBear& opponent);

    int defend();
    int Attack();
};

#endif
