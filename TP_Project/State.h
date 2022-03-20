//
// Created by shatar on 20.03.2022.
//

#include <vector>
#include <string>
#include <map>
#include "Card.cpp"
#include "Scale.cpp"

#ifndef TP_PROJECT_STATE_H
#define TP_PROJECT_STATE_H


class State {
public:
    State(int difficulty);
    void apply_effect(Card card);
    std::vector<Card> get_hand();
    std::map<std::string, Scale> get_scale_values();
    int get_budget();
private:
    std::vector<Card> hand;
    std::map<std::string, Scale> scale_values;
    int budget;
};


#endif //TP_PROJECT_STATE_H
