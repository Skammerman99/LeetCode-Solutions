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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* current;
        ListNode* i1 = list1; 
        ListNode* i2 = list2;
        
        if(list1 != nullptr or list2 != nullptr){
            head = new ListNode;
            current = head;
        }
        
        while(i1 != nullptr and i2 != nullptr){
            if(i1 -> val <= i2 -> val){
                current -> val = i1 -> val;
                current -> next = new ListNode;
                current = current -> next;
                i1 = i1 -> next;
            }
            else{
                current -> val = i2 -> val;
                current -> next = new ListNode;
                current = current -> next;
                i2 = i2 -> next;
            }
        }
        
        while(i1 != nullptr){
            current -> val = i1 -> val;
            i1 = i1 -> next;
            if(i1 != nullptr){
                current -> next = new ListNode;
                current = current -> next;
            }

        }
        
        while(i2 != nullptr){
            current -> val = i2 -> val;
            i2 = i2 -> next;
            if(i2 != nullptr){
                current -> next = new ListNode;
                current = current -> next;
            }
        }
        
        
        return head;
        
    }
};