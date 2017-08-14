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
		// ���ж�����ͷ�ڵ��Ƿ�ΪҪɾ���Ľڵ�  
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
		if(curr->next == NULL){ //�������һ��Ԫ��ΪҪɾ����Ԫ��
		pre->next = NULL; //ֱ���õ����ڶ���Ԫ��ָ��NULL
		break; // ע��while��ѭ����������䲻д��һֱѭ�� ��Ϊbreak(���ţ����ж�һ��)��ɡ� curr = NULL
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