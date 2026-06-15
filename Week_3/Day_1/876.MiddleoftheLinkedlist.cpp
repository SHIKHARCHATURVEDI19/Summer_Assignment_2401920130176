/*876. Middle of the Linked List
Solved
Easy
Topics
premium lock icon
Companies
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:

The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100*/


/**
 * Definition for singly-linked list.*/
#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    int linkedListLength(struct ListNode *head){
        if(head==NULL){
            return 0;
        }
        struct ListNode *ptr=NULL;
        ptr=head;
        int count=0;
        while(ptr!=NULL){
             count++;
             ptr=ptr->next;
        }
        return count;
    } 
    ListNode* middleNode(ListNode* head) {
        
        int mid=(linkedListLength(head))/2;
        ListNode* curr = head;
        for(int i=0;i<mid;i++){
            curr=curr->next;
        }
     return curr;
    }
};