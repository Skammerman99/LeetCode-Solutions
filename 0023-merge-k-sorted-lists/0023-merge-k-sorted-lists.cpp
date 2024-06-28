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
        ListNode* newHead = nullptr;
        ListNode* newIndex = newHead;
        if(head1 != nullptr || head2 != nullptr){
            newHead = new ListNode;
            newIndex = newHead;
        }else{
            return nullptr;
        }
        while(head1 != nullptr && head2 != nullptr){
            if(head1->val < head2->val){
                newIndex->val = head1->val;
                head1 = head1->next;
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }else{
                newIndex->val = head2->val;
                head2 = head2->next;
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }
        }
        while(head1 != nullptr){
            newIndex->val = head1->val;
            head1 = head1->next;
            if(head1 != nullptr){
                newIndex->next = new ListNode;
                newIndex = newIndex->next;
            }
        }
        while(head2 != nullptr){
            newIndex->val = head2->val;
            head2 = head2->next;
            if(head2 != nullptr){
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