#include "tic_tac_toe.h"

#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string;

int main() 
{
  TicTacToe game;
  string first_player;
  char user_choice = 'y';

  do
    {
      cout << "enter first player: ";
      cin >> first_player;

      game.start_game(first_player);

      int position;

      while(!game.game_over())
        {
          cout << "enter position: ";
          cin >> position;
          game.mark_board(position);
          game.display_board();
        }

        cout << "play again? (y/n): ";
        cin >> user_choice;

      
    }while(user_choice == 'y' || 'Y');

  return 0;
}
