/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
    bool isBalanced(Node* root) {
        return checkHeight(root) != -1;
    }

  private:
    int checkHeight(Node* root) {
        if (root == nullptr)
            return 0;

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1) 
            return -1;

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1) 
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        return 1 + max(leftHeight, rightHeight);
    }
};
