//cpp
#include "tic_tac_toe.h"
using std::cout;

////////////////////////////////////////////////////////////////////////
//public functions//////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

bool TicTacToe::game_over()
{
  /*
  update class function to determine a win by checking for row, column, or diagonal win. (use conditional structure), 
  Example:
  if winner by row, column, or diagonal
  call the set winner function and return true
  else
  check board full equal true indicates a tie 
    If no winner by row, column, or diagonal set   winner variable to C and return true.
  else
  return false-if no winner n board not full
  */

  if(check_row_win() || check_column_win() || check_diagonal_win())
  {
    set_winner();
    return true;
  }
  else if (check_board_full())
  {
    winner = 'C';
    return true;
  }
  else
  {
    return false;
  }
}

void TicTacToe::start_game(std::string first_player)
{
  player = first_player;
  clear_board();
}

void TicTacToe::mark_board(int position)
{
  pegs[position-1] = player;
  set_next_player();
}

void TicTacToe::display_board() const
{
  for(long unsigned int i=0; i < pegs.size(); i += 3)
    {
      cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
    }
}

////////////////////////////////////////////////////////////////////////
//private functions/////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void TicTacToe::clear_board()
{
  for(auto& peg: pegs)
    {
      peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
      player = "O";
    }
    else
    {
      player = "X";
    }
}

bool TicTacToe::check_board_full()
{
  for(long unsigned int i = 0; i < pegs.size(); i++)
    {
      if(pegs[i] == " ")
      {
        return false;
      }
    }

  return true;
}

//NEW//////////////////////////////////////////////////////////////

bool TicTacToe::check_column_win()
{
  //column wins 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs
  for (int i=0; i<3; i++)
    {
      if (pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6])
      {
        return true;
      }
    }
  return false;
}

bool TicTacToe::check_row_win()
{
  //row wins 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
  for (int i=0; i<9; i+=3)
    {
      if (pegs[i] != " " && pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2])
      {
        return true;
      }
    }
  return false;
}

bool TicTacToe::check_diagonal_win()
{
  //diagonal wins 1,5,9 or 3,5,7 with all Os or Xs
  if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
  {
    return true;
  }

  if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6])
  {
    return true;
  }
  
  return false;
}

void TicTacToe::set_winner()
{
  //If player is X set winner to O otherwise set winner to X
  if(player == "X")
  {
    winner = "O";
  }
  else
  {
    winner = "X";
  }
}
