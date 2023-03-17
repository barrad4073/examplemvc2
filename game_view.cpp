//
// Created by student on 17.03.2023.
//

#include "game_view.h"
game_view::game_view(game_model& model) : model(model){
}

void game_view::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout << "points: " << this->model.get_points() << std::endl;
    std::cout << "Haslo motywujace: " << this->model.get_haslo_motywujace() << std::endl;

}
