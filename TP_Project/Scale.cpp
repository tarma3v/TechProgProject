#pragma once

#include "Scale.h"

Scale::Scale(int current_value, int upper_limit)
: current_value(current_value)
, upper_limit(upper_limit) {}

void Scale::update_current_value(int delta) {
    current_value += delta;
}

void Scale::draw(int coordinates) {
    // TODO
}

int Scale::get_current_value() {
    return current_value;
}
