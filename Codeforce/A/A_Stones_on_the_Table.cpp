/*
Codeforce : A. Stones on the Table
Author   : Shah Mrunal Nirajkumar
Date     : 25 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve(){
  int stringLength;
  cin >> stringLength;

  char s[stringLength];
  cin >> s;

  int numberOfNeighbour = 0;

  for(int i = 0; i < stringLength - 1; i++){
    if(s[i] == s[i+1]){
      numberOfNeighbour++;
    }
  }
  cout << numberOfNeighbour << endl;
}

int main() {
  solve();

  return 0;
}