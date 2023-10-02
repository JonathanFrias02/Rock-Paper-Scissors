#include <iostream>
using namespace std; 
int main() {
  char p1, p2; 
  cout << "Let's Play Rock Paper Scissors!" << endl; 
  cout << "Player1: Choose R/P/S" << endl; 
  cin >> p1; 
  cout << "Player2: Choose R/P/S" << endl;
  cin >> p2; 
  //conditions
  if ((p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P'))
    cout << "Player 1 Wins!" << endl;
    //combine statements as single statement for all possibilities of player 1 winning
  else if ((p1 == 'R' && p2 == 'P') || (p1 == 'P' && p2 == 'S') || (p1 == 'S' && p2 == 'R'))
    cout << "Player 2 Wins!" << endl; 
    //same thing as player 1

  else if (p1 == p2)
    cout << "Tie!" << endl; 
  else 
    cout << "Incorrect Input! Try Again!" << endl; 
  cout << endl;