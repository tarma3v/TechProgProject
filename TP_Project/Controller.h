//
// Created by shatar on 20.03.2022.
//

#include "Card.cpp"
#include "Scale.cpp"
#include "State.cpp"


#ifndef TP_PROJECT_CONTROLLER_H
#define TP_PROJECT_CONTROLLER_H



class Controller {
public:
    void update_hand();
    void update_scale_values();
    Card generate_card();
};


#endif //TP_PROJECT_CONTROLLER_H
