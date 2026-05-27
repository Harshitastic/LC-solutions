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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int pos=cnt-n+1;
        if(pos==1){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        cnt=0;
        temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            cnt++;
            if(cnt==pos){
                
                prev->next=prev->next->next;
                delete temp;
                break;

            }
            prev=temp;
            temp=temp->next;

        }
        return head;
    }
};