//
// Created by student on 17.03.2023.
//

#ifndef EXAMPLEMVC_GAME_MODEL_H
#define EXAMPLEMVC_GAME_MODEL_H

#include <iostream>
#include <string.h>

class game_model {
public:
    int get_points();
    std::string get_haslo_motywujace();
    void add_points(int p);

private:
    int points;
    std::string hasla_motywujace[7]={"brawo","Graj dalej", "Jeszcze tylko troche", "Ostatnia prosta", "Daj z siebie wszystko", "Dajesz malina", "Ogieeeen!!!!"};
};


#endif //EXAMPLEMVC_GAME_MODEL_H
