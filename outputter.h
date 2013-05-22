#ifndef OUTPUTTER_H_
#define OUTPUTTER_H_ 0

#include <iostream>

using namespace std;

struct Outputter {
  static const char SCORE_CHAR = '=';
  static const char BLANK_CHAR = ' ';
  static const char FINISH_CHAR = 'F';
  static const int MAX_SCORE = 50;

  int score1;
  int score2;

  Outputter(int sc1 = 0, int sc2 = 0) :
    score1(sc1),
    score2(sc2) {} 

  void print();
  bool has_finished();

};

#endif
