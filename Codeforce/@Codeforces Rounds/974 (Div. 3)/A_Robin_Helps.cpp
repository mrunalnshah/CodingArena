/*
Codeforce : A. Robin Helps
Author   : Shah Mrunal Nirajkumar
Date     : 21 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int robinGold = 0;
  int timesRobinGiveOutGold = 0;

  int n;  // number of people
  int k;  // threshold at which robin hood takes the gold
  cin >> n >> k;

  int gold;
  for (int i = 0; i < n; i++) {
    cin >> gold;
    if (gold >= k) {
      robinGold = robinGold + gold;
    } else if (gold == 0 && robinGold != 0) {
      robinGold--;
      timesRobinGiveOutGold++;
    }
  }
  cout << timesRobinGiveOutGold << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}