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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        int count = 0;
        while(temp->next!=NULL){
            if(temp->next->val!=0){
                count = count + temp->next->val;
                temp = temp->next;
            }
            else{
                ans.push_back(count);
                count = 0;
                temp = temp->next;
            }
        }
        int n = ans.size();
        temp = head;
        count = 1;
        ListNode *nex = temp->next;
        int i=1;
        temp->val = ans[0];
        while(count<n){
            if(nex->val == 0){
                temp->next = nex;
                temp = nex;
                temp->val = ans[i];
                i++;
                count++;
                nex = nex->next;
            }
            else
            nex = nex->next;
            }
        temp->next = NULL;
        return head;
    }
};