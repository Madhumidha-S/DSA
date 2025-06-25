class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool check(Node* root, int &prev) //inorder
    {
        if(root == NULL) 
            return 1;
        if(!check(root->left, prev)) 
            return 0;
        if(root->data <= prev)
            return 0;
        prev = root->data;
        return check(root->right, prev);
    }
    
    bool isBST(Node* root) {
        int prev = INT_MIN;
        return check(root, prev);
    }
};