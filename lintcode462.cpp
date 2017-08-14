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
	/**
	* @param head a ListNode
	* @param val an integer
	* @return a ListNode
	*/
	ListNode *removeElements(ListNode *head, int val) {
		// Write your code here
		if (head == NULL)
			return NULL;
		// 先判断链表头节点是否为要删除的节点  
		while (head->val == val){
			head = head->next;
			if (head == NULL)
				return NULL;
		}
		//ListNode *curr = head->next;  
		ListNode *pre = head;
		while (pre->next != NULL){
			if (pre->next->val == val)
				pre->next = pre->next->next;
			else
				pre = pre->next;
		}
		/*
		while(curr != NULL){
		if(curr->val == val){
		if(curr->next == NULL){ //链表最后一个元素为要删除的元素
		pre->next = NULL; //直接让倒数第二个元素指向NULL
		break; // 注意while的循环条件，这句不写会一直循环 改为break(更优，少判断一次)亦可。 curr = NULL
		}
		else{
		curr->val = curr->next->val;
		curr->next = curr->next->next;
		}
		}
		else{
		pre = pre->next;
		curr = curr->next;
		}
		}
		*/
		return head;
	}
};