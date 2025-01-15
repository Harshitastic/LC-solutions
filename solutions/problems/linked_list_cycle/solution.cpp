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
    bool hasCycle(ListNode *head) {
        // If the list is empty or has only one node, it cannot have a cycle.
        if (!head || !head->next) {
            return false;
        }
        
        // Initialize two pointers: slow and fast.
        ListNode *slow = head;
        ListNode *fast = head->next;

        // Traverse the list with two pointers.
        while (slow != fast) {
            // If fast or fast->next is NULL, the list has no cycle.
            if (!fast || !fast->next) {
                return false;
            }
            
            // Move slow one step and fast two steps forward.
            slow = slow->next;
            fast = fast->next->next;
        }

        // If slow and fast meet, a cycle exists.
        return true;
    }
};
