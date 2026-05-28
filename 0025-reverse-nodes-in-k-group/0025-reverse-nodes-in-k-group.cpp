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
    ListNode* FindkNode(ListNode* curr, int k) {
        k--;
        while (curr && k > 0) {
            k--;
            curr = curr->next;
            
        }
        return curr;
    }
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        head=prev;
        return head;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* kNode=FindkNode(temp,k);
            
            if(kNode==NULL){
                prev->next=temp;
                break;
            }
            ListNode* nextNode=kNode->next;
            kNode->next=nullptr;
            reverse(temp);
            
            if(temp==head) head=kNode;
            else{
                 prev->next=kNode;

            }
            prev=temp;
            temp=nextNode;

        }
        return head;
        
    }
};