/*
Codeforce : A. Word
Author   : Shah Mrunal Nirajkumar
Date     : 19 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  string word;
  cin >> word;

  int size = word.size();
  int numberOfUpperChar = 0;

  for (int i = 0; i < size; i++) {
    if (word[i] >= 65 && word[i] <= 90) {
      numberOfUpperChar++;
    }
  }
  if ((size - numberOfUpperChar) >= numberOfUpperChar) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
  } else {
    transform(word.begin(), word.end(), word.begin(), ::toupper);
  }
  cout << word << endl;
}

int main() {
  solve();

  return 0;
}