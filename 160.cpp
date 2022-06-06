/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
		ListNode *ptr1 = a;
		ListNode *ptr2 = b;
		while(ptr1 != ptr2){
			if(ptr1 == NULL){
				ptr1 = b;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = a;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}
		return ptr1;
	}
};