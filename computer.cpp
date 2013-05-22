#include "computer.h"


int Computer::categorize() {

  if (outcome1 == true && change == false && outcome2 == true)
    return 1;
  if (outcome1 == true && change == false && outcome2 == false)
    return 2;
  if (outcome1 == true && change == true && outcome2 == true)
    return 3;
  if (outcome1 == true && change == true && outcome2 == false)
    return 4;
  if (outcome1 == false && change == false && outcome2 == true)
    return 5;
  if (outcome1 == false && change == false && outcome2 == false)
    return 6;
  if (outcome1 == false && change == true && outcome2 == true)
    return 7;
  if (outcome1 == false && change == true && outcome2 == false)
    return 8;
}


void Computer::update_memory(bool next_move) {

  int condition = categorize();
  next_move == player_guess_two? 
    likeliness[condition-1]++:
    likeliness[condition-1]--;
  
  outcome1 = outcome2;
  outcome2 = guess != next_move;
  player_guess_one = player_guess_two;
  player_guess_two = next_move;
  change = player_guess_one != player_guess_two;

  return;

}


bool Computer::decide() {

  int val = (rand() % 1024) - 512 + ALPHA * likeliness[categorize()-1] ;

  guess = (val>0)?
    player_guess_two:
    !player_guess_two;
 
 
  return guess;

}
