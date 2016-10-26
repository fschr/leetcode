/* https://leetcode.com/problems/add-two-numbers/
   You are given two linked lists representing two non-negative numbers.
   The digits are stored in reverse order and each of their nodes contain
   a single digit. Add the two numbers and return it as a linked list.

   Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
   Output: 7 -> 0 -> 8
*/

class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode(0);
    ListNode* current = result, *tail = result;
    bool keepLast = false;
    while (l1 != NULL || l2 != NULL) {
      int x = 0;
      if (l1 != NULL) {
	x += l1->val;
	l1 = l1->next;
      }
      if (l2 != NULL) {
	x += l2->val;
	l2 = l2->next;
      }
      current->val += x;
      keepLast = (current->val / 10 != 0) ? true : false;
      current->next = new ListNode(current->val / 10);
      current->val %= 10;
      tail = current;
      current = current->next;
    }
    if (!keepLast) {
      tail->next = NULL;
      delete current;
      return result;
    }
    while (current->val / 10 != 0) {
      current->next = new ListNode(current->val / 10);
      current->val %= 10;
      current = current->next;
    }
    return result;
  }
};
