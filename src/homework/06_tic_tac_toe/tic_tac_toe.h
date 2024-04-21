//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
  bool game_over();
  void start_game(std::string first_player);
  void mark_board(int position);
  std::string get_player() const{return player;}
  void display_board() const;
  std::string get_winner() const{return winner;} //return private variable winner

  TicTacToe(int size) : pegs(size * size, " ") {}

protected:
  std::vector<std::string> pegs;
  bool check_column_win(); 
  bool check_row_win(); 
  bool check_diagonal_win(); 

private:
  std::string player;
  std::string winner;
  void clear_board();
  void set_next_player();
  bool check_board_full();
  void set_winner(); 
  

};


#endif
