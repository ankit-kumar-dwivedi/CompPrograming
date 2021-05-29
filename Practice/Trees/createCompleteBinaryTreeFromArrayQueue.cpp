#include <bits/stdc++.h>
using namespace std;
class TreeNode {
	
public:
	int data;
	TreeNode* right = nullptr;
	TreeNode* left = nullptr;
	TreeNode(int d) {
		data = d;
		left = right = nullptr;
	}
};

TreeNode* createTree(vector<int> arr) {
	if(arr.size()==0) {
		return nullptr;
	}
	TreeNode* root = new TreeNode(arr[0]);
	int i = 1;
	queue<TreeNode*> q;
	q.push(root);

	while(!q.empty() && i<arr.size()) {
		TreeNode* node = q.front();
		q.pop();
		node->left = new TreeNode(arr[i++]);
		q.push(node->left);
		if(i>=arr.size()) {
			break;
		} else {
			node->right = new TreeNode(arr[i++]);
			q.push(node->right);
		}
	}
	return root;
} 

// Function to print tree nodes in
// InOrder fashion
void inOrder(TreeNode* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data <<" ";
        inOrder(root->right);
    }
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 6, 6, 6 };
    TreeNode* root = createTree(arr);
    inOrder(root);
	  return 0;
}
