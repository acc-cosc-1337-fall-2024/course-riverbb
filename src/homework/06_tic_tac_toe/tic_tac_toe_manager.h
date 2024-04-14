#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

class TicTacToeManager
{
  public:
    void save_game(TicTacToe); //add the TicTacToe to games vector with push_back, call update winner count pass the winner from TicTacToe to update x, o, or tie totals.
    void get_winner_total(int& o, int& x, int& t); //Use references to get the winners 
  private:
    //vector of TicTacToe: Create a vector of TicTacToe named games
    std::vector<TicTacToe> games;
    int x_win{0}; //initialise x_win to 0
    int o_win{0}; //initialise o_win to 0
    int ties{0};  //initialise ties to 0
    void update_winner_count(std::string winner); //if winner X increment x_win, if winner O increment o_win, and else increment ties 
  
};

#endif
