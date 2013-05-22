#include "outputter.h"

void Outputter::print() {

  string sc1 = "";
  string sc2 = "";
  
  for(int i = 0; i < MAX_SCORE; ++i)
    if (i < score1)
      sc1 += SCORE_CHAR;
    else
      sc1 += BLANK_CHAR;
  sc1 += ' ';
  sc1 += FINISH_CHAR;

  for(int i = 0; i < MAX_SCORE; ++i)
    if (i < score2)
      sc2 += SCORE_CHAR;
    else
      sc2 += BLANK_CHAR;
  sc2 += ' ';
  sc2 += FINISH_CHAR;

  cout << "Human   : " << sc1 << endl;
  cout << "Computer: " << sc2 << endl << endl;

  if (score1 >= MAX_SCORE)
    cout << "YOU WIN" << endl;
  else if (score2 >= MAX_SCORE)
    cout << "YOU LOSE" << endl;

}

bool Outputter::has_finished() {
  return score1 >= MAX_SCORE || score2 >= MAX_SCORE;
}
