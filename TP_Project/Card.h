//
// Created by shatar on 20.03.2022.
//
#include <vector>
#include <string>

#ifndef TP_PROJECT_CARD_H
#define TP_PROJECT_CARD_H


class Card {
public:
    Card(std::vector<int> deltas, int cost,
         std::string text, std::string name)
         : deltas(deltas)
         , cost(cost)
         , text(text)
         , name(name) {}
    const std::vector<int> deltas;
    const int cost;
    const std::string color;
    const std::string text;
    const std::string name;
private:
    void draw(int coordinates);
    virtual void appear();
};

class Incident: public Card {
    std::string color = "Black";
    void appear();
};

class Action: public Card {
    std::string color = "Blue";
    void appear();
};

#endif //TP_PROJECT_CARD_H
