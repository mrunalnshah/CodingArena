/*
Codeforce : A. Robin Helps
Author   : Shah Mrunal Nirajkumar
Date     : 21 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int input;
  cin >> input;

  int sum = 0;
  int count = 0;
  while (input) {
    int n;
    int k;
    cin >> n >> k;

    int valuePeople;
    for (int i = 0; i < n; i++) {
      cin >> valuePeople;
      if (valuePeople >= k) {
        sum = sum + valuePeople;
      } else if (valuePeople == 0) {
        if (sum != 0) {
          sum--;
          count++;
        }
      }
    }
    cout << count << endl;
    sum = 0;
    count = 0;
    input--;
  }
}

int main() {
  solve();

  return 0;
}