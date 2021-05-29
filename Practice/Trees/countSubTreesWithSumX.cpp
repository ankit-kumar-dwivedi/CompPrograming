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

vector<int> splitString(string s, string delimiter) {
	size_t last = 0;
	size_t next = 0;
	vector<int> output;
	// while delimiter exist after the last marker
	while((next = s.find(delimiter, last)) != string::npos) {
		output.push_back(stoi(s.substr(last, next - last)));
		last = next + 1;
	}
	output.push_back(stoi(s.substr(last)));
	return output;
}

int countSubTreeWithGivenSumSolver(TreeNode* root, int& count, int target) {
	if(root == nullptr) {
		return 0;
	}
	int ls = countSubTreeWithGivenSumSolver(root->left, count, target);
	int rs = countSubTreeWithGivenSumSolver(root->right, count, target);
	int sum = ls + rs + root->data;
	if(sum == target) {
		count++;
	}
	return sum; 
}


int countSubTrees(TreeNode* root, int target) {
	if(root == nullptr) {
		return 0;
	}
	int count = 0;
	int leftSum = countSubTreeWithGivenSumSolver(root->left, count, target);
	int rightSum = countSubTreeWithGivenSumSolver(root->right, count, target);
	if(leftSum + rightSum + root->data == target) {
		count++;
	}
	return count;
}


int main() {
    string s,delimiter;
    getline(cin,s);
    delimiter = " ";
    int target;
    cin>>target;
    vector<int> arr = splitString(s,delimiter);
    TreeNode* root = createTree(arr);
    cout<<countSubTrees(root,target)<<" subtrees with sum "<<target<<"\n";
	return 0;
}
