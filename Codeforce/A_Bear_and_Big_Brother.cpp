/*
  Codeforce : A. Bear and Big Brother

  Difficulty : Easy

  Author : Mrunal Nirajkumar Shah
  Date   : 12 September 2024
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int limakWeight;
  int bobWeight;
  int count = 0;

  cin >> limakWeight;
  cin >> bobWeight;

  while (limakWeight <= bobWeight) {
    count++;
    limakWeight = limakWeight * 3;
    bobWeight = bobWeight * 2;
  }

  cout << count << endl;
}

int main() {
  solve();

  return 0;
}