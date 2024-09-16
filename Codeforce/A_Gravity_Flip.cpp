/*
Codeforce : A. Gravity Flip
Author   : Shah Mrunal Nirajkumar
Date     : 16 September 2024

Difficulty : Easy

Method : Sorting in Ascending Order.
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int size;
  cin >> size;

  int value;
  vector<int> myArr;
  for (int i = 0; i < size; i++) {
    cin >> value;
    myArr.push_back(value);
  }

  sort(myArr.begin(), myArr.end());

  for (int i = 0; i < myArr.size(); i++) {
    cout << myArr[i] << " ";
  }
}

int main() {
  solve();

  return 0;
}