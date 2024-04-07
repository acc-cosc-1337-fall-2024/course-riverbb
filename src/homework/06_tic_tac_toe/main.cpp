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
      do
        {
          cout << "enter first player: ";
          cin >> first_player;
          if (first_player != "X" && first_player != "O")
          {
            cout << "invalid input :|\n";
          }
        }while (first_player != "X" && first_player != "O");
      
      game.start_game(first_player);

      int position;

      while(!game.game_over())
        {
          cout << "enter position: ";
          cin >> position;
          game.mark_board(position);
          game.display_board();
        }

      if (game.get_winner() == "C")
      {
        cout << "it's a tie :0 \n";
      }
      else
      {
        cout << game.get_winner() << " wins! :D \n";
      }

        cout << "play again? (y/n): ";
        cin >> user_choice;

      
    }while(user_choice == 'y' || user_choice == 'Y');

  return 0;
}
