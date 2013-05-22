#ifndef COMPUTER_H_
#define COMPUTER_H_ 0

#include <cstdlib>
#include <iostream>
#include <cmath>

struct Computer {

  static const int ALPHA = 128;

  bool outcome1;
  bool outcome2;
  bool player_guess_one;
  bool player_guess_two;
  bool change;
  int categorize();

  bool guess;
  int likeliness[8];

  void update_memory(bool next_move);
  bool decide();

  Computer () {
    srand(time(NULL));
    outcome1 = false;
    outcome2 = false;
    player_guess_one = false;
    player_guess_two = false;
    change = false;
    for(int i = 0; i < 8; ++i)
      likeliness[i] = 0;
  }

};

#endif
