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
    ListNode* findtail(ListNode* head,int n){
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            if(cnt==n) break;
            temp=temp->next;

        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        ListNode* tail=head;
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode* newtail=findtail(head,len-k);
        head=newtail->next;
        newtail->next=NULL;
        return head;
    }
};