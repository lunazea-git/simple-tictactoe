#include <iostream>

int fields[9] = { 0,0,0,0,0,0,0,0,0 }; //fields of the board

std::string player_a; //nickname for player A
std::string player_b; //nickname for player B
int tie_chek = 0;

void table() {

    std::cout << fields[0] << " " << fields[1] << " " << fields[2] << " " << "\n" << fields[3] << " " << fields[4] << " " << fields[5] << "\n" << fields[6] << " " << fields[7] << " " << fields[8]; //drawing a table
}

void checking() {
    //checking vertically for player A and B
    for (int o = 0; o < 3; o++) {

        if (fields[o] == fields[o + 3] && fields[o + 3] == fields[o + 6] && fields[o + 6] == 2){
            std::cout << "\nA win\n";
            system("pause");
    }
        else
            tie_chek += 10;

        if (fields[o] == fields[o + 3] && fields[o + 3] == fields[o + 6] && fields[o + 6] == 3){
            std::cout << "\nB win\n";
            system("pause");
    }
        else
            tie_chek += 10;
    }
    //checking horizontally for player A and B
    for (int o = 0; o < 3; o += 3) {

        if (fields[o] == fields[o + 1] && fields[o + 1] == fields[o + 2] && fields[o + 2] == 2) {
            std::cout << "\nA win\n";
            system("pause");
    }
        else
            tie_chek += 10;

        if (fields[o] == fields[o + 1] && fields[o + 1] == fields[o + 2] && fields[o + 2] == 3){
            std::cout << "\nB win\n";
            system("pause");
    }
        else
            tie_chek += 10;
    }
    //checking on a slant v1
    if (fields[2] == 3 && fields[4] == 3 && fields[6] == 3){
        std::cout << "\nB win\n";
        system("pause");
}
    else
        tie_chek += 10;
    if (fields[2] == 2 && fields[4] == 2 && fields[6] == 2){
        std::cout << "\nA win\n";
        system("pause");
}
    else
        tie_chek += 10;
    //checking on a slant v2
    if (fields[0] == 3 && fields[4] == 3 && fields[8] == 3){
        std::cout << "\nB win\n";
        system("pause");
}
    else
        tie_chek += 10;
        
    if (fields[0] == 2 && fields[4] == 2 && fields[8] == 2) {

        std::cout << "\nA win\n";
        system("pause");
    }
    else
        tie_chek += 10;

    //checking the tie
    if (tie_chek == 120) {
        std::cout << "\n\nT I E.try again ;/\n";
        system("pause");
    }
}

void nickname() {
    std::cout << "choose a nickname for player A:\n";
    std::cin >> player_a;
    std::cout << "choose a nickname for player B:\n";
    std::cin >> player_b;
    system("cls");
}

void game() {

    system("cls");

    nickname();

    //assigning values in a table

    for (int p = 0; p < 4; p++) {

        system("cls");

        int player_selection_a;
        int player_selection_b;

        table();

        do {
            std::cout << "\nplayer " << player_a << " select the field[0-8]:";
            std::cin >> player_selection_a;

        } while (fields[player_selection_a] != 0);
        fields[player_selection_a] += 2;

        table();

        do {
            std::cout << "\nplayer " << player_b << " select the field[0-8]:";
            std::cin >> player_selection_b;

        } while (fields[player_selection_b] != 0);
        fields[player_selection_b] += 3;

        table();
    }
    checking();
}

void start() {
    //is responsible for the initial MENU
    system("title ticktacktoe");
    system("color 6");
    std::string choice;
    std::cout << "Hello player!\n\nplayer A = 2 player B =3\n\nto start the game write START:";
    std::cin >> choice;
    if (choice == "start" or choice == "START") {
        game();
    }
    else {
        system("cls");
        start();
    }
}

int main() {
    start();
}
