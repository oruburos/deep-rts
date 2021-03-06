//
// Created by Per-Arne on 24.02.2017.
//

#ifndef WARC2SIM_SPAWNING_H
#define WARC2SIM_SPAWNING_H



#include "BaseState.h"

class Spawning: public BaseState{

public:
    Spawning():BaseState(Constants::State::Spawning){
        name = "Spawning";
    }
    virtual void update(Unit & unit)const;
    virtual void init(Unit & unit)const;
    virtual void end(Unit & unit)const;
};


#endif //WARC2SIM_SPAWNING_H
