/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int m = 0;

int diameterOfBinaryTree(struct TreeNode* root) {

    if(root != NULL){
        
        int l = f_path(root->left);
        int r = f_path(root->right);
        
        if(l + r > m){
            m = l + r;
        }
        return m;
        
    }
    return 0;
    
}

int f_path(struct TreeNode* node){
    
    if(node != NULL){
        int lpath = f_path(node->left);
        int rpath = f_path(node->right);
        
        int maxp = (lpath>rpath?lpath:rpath) + 1;
        
        if(lpath + rpath > m){
            m = lpath + rpath;
        }
        
        return maxp;
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}