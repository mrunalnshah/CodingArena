/*
LeetCode : 206. Reverse Linked List
Author   : Shah Mrunal Nirajkumar
Date     : 25 September 2024

Method : Maintained prevNode, nextNode, and curNode to parse through the linked
list to change the values.

    $1      $2      $3      $4       $5
   1, $2   2, $3   3, $4   4, $5    5, NULL

   nextNode = nullptr
   prevNode = nullptr

  Execute:
  Step 1:
   nextNode = nullptr
   prevNode = nullptr
    $1      $2      $3      $4       $5
   1, $2   2, $3   3, $4   4, $5    5, NULL

  Step 2:
   nextNode = $2
   prevNode = $1
    $1         $2      $3      $4       $5
   1, NULL   2, $3   3, $4   4, $5    5, NULL

  Step 3:
   nextNode = $3
   prevNode = $2
    $1         $2      $3      $4       $5
   1, NULL   2, $1   3, $4   4, $5    5, NULL
  and so on...
*/

#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    if (head == NULL) {
      return nullptr;
    }
    ListNode* nextNode = nullptr;
    ListNode* prevNode = nullptr;

    ListNode* curNode = head;
    while (curNode != nullptr) {
      nextNode = curNode->next;
      curNode->next = prevNode;
      prevNode = curNode;
      curNode = nextNode;
    }
    return prevNode;
  }
};

int main() {
  Solution mySolution;

  /*
  // Test Case 1
  ListNode val5(5, NULL);
  ListNode val4(4, &val5);
  ListNode val3(3, &val4);
  ListNode val2(2, &val3);
  ListNode val1(1, &val2);

  ListNode* head = &val1;

  */

  /*
   // Test Case 2
   ListNode val2(2,NULL);
   ListNode val1(1, &val2);

   ListNode* head = &val1;

 */

  // Test Case 3
  ListNode* head = NULL;

  cout << "Before" << endl;
  ListNode* curNode = head;
  while (curNode != nullptr) {
    cout << curNode->val << endl;
    curNode = curNode->next;
  }

  cout << "After" << endl;
  ListNode* result = mySolution.reverseList(head);
  while (result != nullptr) {
    cout << result->val << endl;
    result = result->next;
  }

  return 0;
}