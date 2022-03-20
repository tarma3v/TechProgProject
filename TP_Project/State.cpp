//
// Created by shatar on 20.03.2022.
//

#include "State.h"

State::State(int difficulty) {
    //TODO
}

void State::apply_effect(Card card) {
    //TODO
}

std::vector<Card> State::get_hand() {
    return hand;
}

std::map<std::string, Scale> State::get_scale_values() {
    return scale_values;
}

int State::get_budget() {
    return budget;
}
