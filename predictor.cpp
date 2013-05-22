#include <iostream>
#include <cstdio>

#include "computer.h"
#include "outputter.h"

using namespace std;


int main (int argc, char** argv) {

  bool display = false;

  if (argc > 2)
    display = true;

  cout << "Shannon's Mind Reading Machine" << endl;
  cout << "   Kevin Vece" << endl << endl;

  Computer comp;
  Outputter screen;


  while(!screen.has_finished()) {
    bool guess;
    char c;
    bool compd = comp.decide();
    if (display)
      cout << "Computer Guesses You Say: " << !compd << endl;

    cout << "Input Your Guess: " << flush;
    system("stty raw echo");
    c = getchar();
    system("stty cooked echo");
    cout << endl;

    guess = c == '0';
    comp.update_memory(guess);
    comp.outcome2?
      screen.score1++:
      screen.score2++;
    screen.print();
  }


  return 0;
  
}
