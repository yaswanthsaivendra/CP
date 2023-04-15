#include <iostream>

using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int _data, TreeNode* left=NULL, TreeNode* right=NULL) {
        data = _data;
        left = _left;
        right = _right;
    }
};

// struct TreeNode {
//     int data;
//     TreeNode* left;
//     TreeNode* right;
// };




int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);


    return 0;
}

   
