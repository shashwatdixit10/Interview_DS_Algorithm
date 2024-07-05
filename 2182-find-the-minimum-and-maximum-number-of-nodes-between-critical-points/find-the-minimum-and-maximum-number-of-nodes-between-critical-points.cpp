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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans{-1,-1};
        int count = 1;
        ListNode* prev = head;
        vector<int> result;
        ListNode* temp = head->next;
        ListNode* nextt = temp->next;
        while(nextt!=NULL){
             if( (prev->val < temp->val && temp->val > nextt->val) || (prev->val > temp->val && temp->val < nextt->val)){
                result.push_back(count);
             }
            prev = temp;
            temp = nextt;
            nextt = nextt->next;
            count++;
        }
        if(result.size()<2)
        return ans;
        int maxi = result.back() - result.front(); 
        int minDistance = INT_MAX;
        for (int i = 1; i < result.size(); ++i) {
            minDistance = min(minDistance, result[i] - result[i - 1]);
        }

        ans[0] = minDistance;
        ans[1] = maxi;
        return ans;
    }
};