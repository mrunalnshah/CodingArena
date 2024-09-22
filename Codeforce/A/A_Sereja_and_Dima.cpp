/*
Codeforce : A. Sereja and Dima
Author   : Shah Mrunal Nirajkumar
Date     : 20 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int input;
  cin >> input;

  int arr[input];

  for (int i = 0; i < input; i++) {
    cin >> arr[i];
  }

  int sereja = 0, dima = 0;

  int i = 0;
  int j = input - 1;
  int change = 0;

  while (i <= j) {
    if (change == 0) {
      if (arr[i] > arr[j]) {
        sereja = sereja + arr[i];
        i++;
      } else {
        sereja = sereja + arr[j];
        j--;
      }
      change = 1;
    } else {
      if (arr[i] > arr[j]) {
        dima = dima + arr[i];
        i++;
      } else {
        dima = dima + arr[j];
        j--;
      }
      change = 0;
    }
  }
  cout << sereja << " " << dima << endl;
}

int main() {
  solve();

  return 0;
}