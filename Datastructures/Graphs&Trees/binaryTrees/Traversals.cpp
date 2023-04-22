#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* CreateNode(int data) {
    TreeNode* temp = new TreeNode;
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

void printPreorder(TreeNode* node) {
    if(node == NULL) return;

    cout<< node -> data<<" ";
    printPreorder(node -> left);
    printPreorder(node -> right);
}

void printInorder(TreeNode* node) {
    if(node == NULL) return;

    printInorder(node -> left);
    cout<< node -> data<<" ";
    printInorder(node -> right);
}

void printPostorder(TreeNode* node) {
    if(node == NULL) return;

    printPostorder(node -> left);
    printPostorder(node -> right);
    cout<< node -> data<<" ";
}


void printLevelOrder(TreeNode* root) {

    queue<TreeNode*> q;
    q.push(root);
    vector<int> ans;

    while(!q.empty()) {
        TreeNode* current_node = q.front();
        ans.push_back(current_node -> data);
        if(current_node -> left) q.push(current_node->left);
        if(current_node -> right) q.push(current_node->right);
        q.pop();
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<"\n";
}



int main(){
    TreeNode* root = CreateNode(10);
    TreeNode* one = CreateNode(8);
    TreeNode* two = CreateNode(4);
    TreeNode* three = CreateNode(9);
    TreeNode* four = CreateNode(2);
    TreeNode* five = CreateNode(6);
    TreeNode* six = CreateNode(0);

    root -> left = one;
    root -> right = two;
    one -> left = three;
    one -> right = four;
    two -> left = five;
    two -> right = six;

    cout<<"Pre Traversal"<<" ";
    printPreorder(root);
    cout<<"\n";

    cout<<"Inorder Traversal"<<" ";
    printInorder(root);
    cout<<"\n";

    cout<<"Postorder Traversal"<<" ";
    printPostorder(root);
    cout<<"\n";

    cout<<"Level Order Traversal"<<" ";
    printLevelOrder(root);
    cout<<"\n";

    return 0;
}