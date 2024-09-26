/*
Codeforce : A. Games
Author   : Shah Mrunal Nirajkumar
Date     : 26 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int arr[n][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0];
    cin >> arr[i][1];
  }
  int hostTeamGuestUniform = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      if (arr[i][0] == arr[j][1]) {
        hostTeamGuestUniform++;
      }
    }
  }
  cout << hostTeamGuestUniform << endl;
}

int main() {
  solve();

  return 0;
}