/*
  Codeforce : A. Anton and Danik

  Difficulty : Easy

  Author : Mrunal Nirajkumar Shah
  Date   : 11 September 2024
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int input;
  cin >> input;

  char whoWon;
  int anton = 0;
  int danik = 0;

  while (input) {
    cin >> whoWon;
    if (whoWon == 'A') {
      anton++;
    } else {
      danik++;
    }
    input--;
  }
  if (anton > danik) {
    cout << "Anton" << endl;
  }
  if (anton < danik) {
    cout << "Danik" << endl;
  }
  if (anton == danik) {
    cout << "Friendship" << endl;
  }
}

int main() {
  solve();

  return 0;
}