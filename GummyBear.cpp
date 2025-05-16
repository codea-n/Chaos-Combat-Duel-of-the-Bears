#include "GummyBear.h"

GummyBear::GummyBear() {
    level = 0;
    health = 0;
    attack_stat = 0;
    defense_stat = 0;
    speed_stat = 0;
}

GummyBear::GummyBear(int lv, int hl, int as, int ds, int ss) {
    level = lv;
    health = hl;
    attack_stat = as;
    defense_stat = ds;
    speed_stat = ss;
}

void GummyBear::SetLevel(int L) {
    level = L;
}

int GummyBear::GetLevel() {
    return level;
}

void GummyBear::SetHealth(int H) {
    health = H;
}

int GummyBear::GetHealth() {
    return health;
}

void GummyBear::SetAttackStat(int AS) {
    attack_stat = AS;
}

int GummyBear::GetAttackStat() {
    return attack_stat;
}

void GummyBear::SetDefenseStat(int DS) {
    defense_stat = DS;
}

int GummyBear::GetDefenseStat() {
    return defense_stat;
}

void GummyBear::SetSpeedStat(int SS) {
    speed_stat = SS;
}

int GummyBear::GetSpeedStat() {
    return speed_stat;
}
