class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size()){
            return nullptr;
        }
        vector<int> compiledList;
        for(auto list : lists){
            if(list != nullptr){
                compiledList.push_back(list->val);
                while(list->next != nullptr){
                    list = list->next;
                    compiledList.push_back(list->val);
                }
            }
        }
        if(!compiledList.size()){
            return nullptr;
        }
        std::sort(compiledList.begin(), compiledList.end());
        ListNode* resultHead = new ListNode;
        ListNode* resultIndex = resultHead;
        int count = 0;
        for(auto num : compiledList){
            resultIndex->val = num;
            count++;
            if(count != compiledList.size()){
                resultIndex->next = new ListNode;
                resultIndex = resultIndex->next;
            }
        }
        resultIndex = nullptr;
        return resultHead;
    }
};