#ifndef TRAINING_H
#define TRAINING_H

#include "YourBear.h"

class Training
{

public:
    YourBear *objGT; // Pointer to YourBear class's object.
    Training(YourBear &your_gummy);
    void Train_attack();
    void Train_defense();
    void Train_speed();
    void Train_health();
};

#endif
