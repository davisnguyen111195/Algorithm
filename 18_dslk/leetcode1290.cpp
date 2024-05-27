/**
 * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
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
    int getDecimalValue(ListNode* head) {
        long long cnt = 0;
        ListNode * tmp = head;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        long long sum = 0;
        cnt--;
        while(head != NULL){
            sum += head->val * pow(2, cnt);
            --cnt;
            head = head->next;
        }
        return sum;
    }
};
