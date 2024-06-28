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
    
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2){
        ListNode* index1 = head1;
        ListNode* index2 = head2;
        ListNode* newHead = nullptr;
        ListNode* newIndex = newHead;
        if(head1 != nullptr || head2 != nullptr){
            newHead = new ListNode;
            newIndex = newHead;
        }else{
            return nullptr;
        }
        while(index1 != nullptr && index2 != nullptr){
            if(index1->val < index2->val){
                newIndex->val = index1->val;
                index1 = index1->next;
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }else{
                newIndex->val = index2->val;
                index2 = index2->next;
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }
        }
        while(index1 != nullptr){
            newIndex->val = index1->val;
            index1 = index1->next;
            if(index1 != nullptr){
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }
        }
        while(index2 != nullptr){
            newIndex->val = index2->val;
            index2 = index2->next;
            if(index2 != nullptr){
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }
            
        }
        return newHead;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){
            return nullptr;
        }
        while(lists.size() > 1){
            lists.push_back(mergeTwoLists(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists[0];
    }
};