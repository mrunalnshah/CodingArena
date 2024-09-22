/*
Codeforce : A. Team
Author   : Shah Mrunal Nirajkumar
Date     : 13 September 2024

Difficulty : Easy
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int input;
  cin >> input;

  int PVT;  // Can Petya, Vasya and Tonya Solve the current problem.
  int sum = 0;
  int solution = 0;

  while (input) {
    cin >> PVT;
    sum = sum + PVT;
    cin >> PVT;
    sum = sum + PVT;
    cin >> PVT;
    sum = sum + PVT;

    if (sum >= 2) {
      solution++;
    }
    sum = 0;
    input--;
  }
  cout << solution << endl;
}

int main() {
  solve();

  return 0;
}