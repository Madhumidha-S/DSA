/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> left;
        if (!root) return left; 
        queue<Node *> q;
        q.push(root);
        while(!(q.empty()))
        {
            int qsize = q.size();
            for(int i = 0; i < qsize; ++i)
            {
                Node* curr = q.front();
                q.pop();
                if(i == 0) left.push_back(curr->data);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return left;
    }
};