/*
Codeforce : A. Boy or Girl
Author   : Shah Mrunal Nirajkumar
Date     : 18 September 2024

Difficulty : Easy

Method : created a hashmap to store unique characters, and then got size of
hashmap to find distinct character to check boy or girl.
*/

#include <bits\stdc++.h>

using namespace std;

int solve() {
  string username;
  cin >> username;

  unordered_map<char, int> umap;
  for (int i = 0; i < username.size(); i++) {
    umap[username[i]]++;
  }

  int distinctChar = umap.size();

  if (distinctChar % 2 != 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int result = solve();

  if (result == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}