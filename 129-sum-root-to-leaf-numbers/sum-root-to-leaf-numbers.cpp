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

int dfs(TreeNode* root , string path){
     if(root == NULL) return 0; //no root
     
     path += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL){
            return stoi(path);
        } 

      int leftsum =   dfs(root->left , path);
      int rightsum =  dfs(root->right, path);
      
return leftsum + rightsum;
   
}

    int sumNumbers(TreeNode* root) {
       
         return dfs(root , "");    
    }
};