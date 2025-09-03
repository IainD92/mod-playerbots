/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU GPL v2 license, you may redistribute it
 * and/or modify it under version 2 of the License, or (at your option), any later version.
 */

#ifndef _PLAYERBOT_LOOTNONCOMBATSTRATEGY_H
#define _PLAYERBOT_LOOTNONCOMBATSTRATEGY_H

#include "Strategy.h"

class PlayerbotAI;

class LootNonCombatStrategy : public Strategy
{
public:
    LootNonCombatStrategy(PlayerbotAI* botAI) : Strategy(botAI) {}

    void InitTriggers(std::vector<TriggerNode*>& triggers) override;
    std::string const getName() override { return "loot"; }
};

class GatherStrategy : public Strategy
{
public:
    GatherStrategy(PlayerbotAI* botAI) : Strategy(botAI) {}

    void InitTriggers(std::vector<TriggerNode*>& triggers) override;
    std::string const getName() override { return "gather"; }
};

class RevealStrategy : public Strategy
{
public:
    RevealStrategy(PlayerbotAI* botAI) : Strategy(botAI) {}

    void InitTriggers(std::vector<TriggerNode*>& triggers) override;
    std::string const getName() override { return "reveal"; }
};

class BobberStrategy : public Strategy
{
public:
    BobberStrategy(PlayerbotAI* botAI) : Strategy(botAI){}
    uint32 GetType() const override { return STRATEGY_TYPE_NONCOMBAT; }
    void InitTriggers(std::vector<TriggerNode*>& triggers) override;
    std::string const getName() override {return "usebobber";}
};

#endif
