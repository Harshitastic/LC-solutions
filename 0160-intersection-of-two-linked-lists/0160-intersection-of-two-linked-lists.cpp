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
    ListNode* pt(ListNode *headA, ListNode *headB,int n){
        ListNode* t2=headB;
        while(n--){
            t2=t2->next;
        }
        ListNode* t1=headA;
        while(t1!=NULL && t2!=NULL){
            if(t1==t2) return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        int n1=0,n2=0;
        while(t1!=NULL){
            n1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            n2++;
            t2=t2->next;
        }
         
        if(n1<n2) return pt(headA,headB,n2-n1);
        else return pt(headB,headA,n1-n2);
    }
};