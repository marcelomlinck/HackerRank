//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int getHeight(Node* root) {
        if(root != NULL) 
            return max(getHeight(root->left), getHeight(root->right)) + 1;
        else
            return -1;
    }
  