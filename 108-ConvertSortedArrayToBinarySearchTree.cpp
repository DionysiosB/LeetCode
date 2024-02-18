/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedVecToBST(nums, 0, nums.size());
    }

    TreeNode* sortedVecToBST(vector<int>& nums, int start, int stop){
        if(start >= stop){return nullptr;}
        const int middle = (start + stop - 1) / 2;
        TreeNode * tn = new TreeNode(nums[middle], sortedVecToBST(nums, start, middle), sortedVecToBST(nums, middle + 1, stop));
        return tn;
    }

};
