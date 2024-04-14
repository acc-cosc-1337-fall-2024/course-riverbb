//cpp
#include "tic_tac_toe_manager.h"
using std::cout;

////////////////////////////////////////////////////////////////////////
//public functions//////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void TicTacToeManager::save_game(TicTacToe game)
{
  //add the TicTacToe to games vector with push_back, call update winner count pass the winner from TicTacToe to update x, o, or tie totals.
  games.push_back(game);

  update_winner_count(game.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
  //Use references to get the winners 

  x = x_win;
  o = o_win;
  t = ties;
}

////////////////////////////////////////////////////////////////////////
//private functions/////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void TicTacToeManager::update_winner_count(std::string winner)
{
  //if winner X increment x_win, if winner O increment o_win, and else increment ties

  if (winner == "X")
  {
    x_win++;
  }
  else if (winner == "O")
  {
    o_win++;
  }
  else
  {
    ties++;
  }
}
