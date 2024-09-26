/*
LeetCode : 21. Merge Two Sorted Lists
Author   : Shah Mrunal Nirajkumar
Date     : 26 September 2024

Method : Created a new Linked List and stored values in ascending order in new
Linked List and returned head.
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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) {
      return list2;
    }
    if (list2 == nullptr) {
      return list1;
    }

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    while (list1 != nullptr && list2 != nullptr) {
      ListNode* newNode = new ListNode();
      newNode->next = nullptr;
      if (list1->val <= list2->val) {
        newNode->val = list1->val;
        list1 = list1->next;
      } else {
        newNode->val = list2->val;
        list2 = list2->next;
      }
      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
    }
    while (list1 != nullptr) {
      ListNode* newNode = new ListNode();
      newNode->next = nullptr;
      newNode->val = list1->val;

      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      list1 = list1->next;
    }
    while (list2 != nullptr) {
      ListNode* newNode = new ListNode();
      newNode->next = nullptr;
      newNode->val = list2->val;

      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      list2 = list2->next;
    }

    return head;
  }
};

int main() {
  Solution mySolution;
  /*
    // Test Case 1
    ListNode val13(4, nullptr);
    ListNode val12(2, &val13);
    ListNode val11(1, &val12);
    ListNode* list1 = &val11;

    ListNode val23(4, nullptr);
    ListNode val22(3, &val23);
    ListNode val21(1, &val22);
    ListNode* list2 = &val21;
  */

  /*   // Test Case 2
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;
  */

  // Test Case 3
  ListNode* list1 = nullptr;

  ListNode val21(0, nullptr);
  ListNode* list2 = &val21;

  ListNode* result = mySolution.mergeTwoLists(list1, list2);
  while (result != nullptr) {
    cout << result->val << endl;
    result = result->next;
  }

  return 0;
}