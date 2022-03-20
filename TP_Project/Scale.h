//
// Created by shatar on 20.03.2022.
//

#ifndef TP_PROJECT_SCALE_H
#define TP_PROJECT_SCALE_H

class Scale {
public:
    Scale(int current_value, int upper_limit);

    void update_current_value(int delta);
    void draw(int coordinates);
    int get_current_value();

private:
    int current_value;
    const int upper_limit;
};

#endif //TP_PROJECT_SCALE_H
