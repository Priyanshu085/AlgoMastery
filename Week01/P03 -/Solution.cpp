class Solution {
private:
    // Using hare and turtle pointer
    bool solve(ListNode *head){
        ListNode *slow_pointer = head, *fast_pointer = head;
        while (fast_pointer != nullptr && fast_pointer->next != nullptr) {
            slow_pointer = slow_pointer->next;
            fast_pointer = fast_pointer->next->next;
            if (slow_pointer == fast_pointer) {
                return true;
            }
        }
        return false;
    }

public:
    bool hasCycle(ListNode *head) {
        return solve(head);
    }
};