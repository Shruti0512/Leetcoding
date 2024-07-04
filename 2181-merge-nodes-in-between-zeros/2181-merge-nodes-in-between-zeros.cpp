/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* h) {
        ListNode* prev=NULL,*head=h;
        int sum=0;
        while(head){
            if(head->val==0){
                if(sum==0){
                    prev=head;
                }
                else{
                    prev->next=head;
                    prev=prev->next;
                    prev->val=sum;
                }
                sum=0;
            }
            else{
                sum+=head->val;
            }
            head=head->next;
        }
        return h->next;     
    }
};