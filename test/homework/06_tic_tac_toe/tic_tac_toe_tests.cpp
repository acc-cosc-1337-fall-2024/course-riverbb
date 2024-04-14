#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
  REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(3); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(7); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(6); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(8); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
  TicTacToe game;
  game.start_game("X");
  
  REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
  TicTacToe game;
  game.start_game("O");

  REQUIRE(game.get_player() == "O");
}

// column wins ///////////////////////

TEST_CASE("Test win by first column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(7); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(2); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(1); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(8); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(3); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(6); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

// row wins ///////////////////////

TEST_CASE("Test win by first row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(3); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(4); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(1); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(6); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(7); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(8); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

// diagonal wins ///////////////////////

TEST_CASE("Test win diagonally from top left")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(1); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(9); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
  TicTacToe game;
  game.start_game("X");

  game.mark_board(7); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(2); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(5); // X
  REQUIRE(game.game_over() == false);
  game.mark_board(4); // O
  REQUIRE(game.game_over() == false);
  game.mark_board(3); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
}

////////////////////////////////////////

/*
  here's the new stuff. idk whats wrong.

TEST_CASE("Test tic_tac_toe_manager get winner total") {
    TicTacToeManager manager;
    TicTacToe game1, game2, game3;

    // simulating games with different winners
    game1.start_game("X");
    game1.mark_board(1); // X
    game1.mark_board(2); // O
    game1.mark_board(4); // X
    game1.mark_board(5); // O
    game1.mark_board(7); // X

    game2.start_game("O");
    game2.mark_board(1); // O
    game2.mark_board(4); // X
    game2.mark_board(2); // O
    game2.mark_board(5); // X
    game2.mark_board(3); // O

    game3.start_game("X");
    game3.mark_board(1); // X
    game3.mark_board(2); // O
    game3.mark_board(3); // X
    game3.mark_board(4); // O
    game3.mark_board(5); // X
    game3.mark_board(7); // O
    game3.mark_board(6); // X
    game3.mark_board(9); // O
    game3.mark_board(8); // X

    manager.save_game(game1);
    manager.save_game(game2);
    manager.save_game(game3);

    int x_win, o_win, ties;
    manager.get_winner_total(o_win, x_win, ties);

    REQUIRE(x_win == 1);
    REQUIRE(o_win == 1);
    REQUIRE(ties == 1);
}

*/
