// https://leetcode.com/problems/root-equals-sum-of-children/description/

/*
****python - 
class Solution:
    def checkTree(self, root: Optional[TreeNode]) -> bool:
        if root.left.val + root.right.val == root.val:
            return True
        else:
            return False
        
****cpp -
class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root->left -> val+root -> right->val == root->val) 
            return true;
        else 
            return false;
    }
};
*/