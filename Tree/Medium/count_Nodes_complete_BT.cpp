class Solution {
public:
    int lHeight(TreeNode* root){
        int ans=0;
        
        while(root){
            ans++;
            root=root->left;
        }
        return ans;
        
        
    }
    int rHight(TreeNode* root){
        int ans=0;
       
        while(root){
            ans++;
            root=root->right;
        }
        return ans;
             
    }
    
    int countNodes(TreeNode* root) {
        int ans=0;
        int l=lHeight(root);
        int r=rHight(root);
        if(l==r){
            return pow(2,l)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};