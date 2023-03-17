//
// Created by student on 17.03.2023.
//

#include "game_model.h"
#include <cstdlib>
#include <ctime>



int game_model::get_points() {
    return this->points;
}
std::string game_model::get_haslo_motywujace() {
    srand(time(NULL));
    return this->hasla_motywujace[rand()%7];
}

void game_model::add_points(int p) {
    this->points +=p;
}
