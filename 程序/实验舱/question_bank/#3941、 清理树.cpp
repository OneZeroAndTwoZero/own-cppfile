bool check(TreeNode *root){
	if (root == nullptr) return 1;
	bool res = (root -> val == 0);
	if (check(root -> left)){
		root -> left = nullptr;
	}else{
		res = 0;
	}
	if (check(root -> right)){
		root -> right = nullptr;
	}else{
		res = 0;
	}
	return res;
}

TreeNode *prune(TreeNode *root){
	if (root == nullptr) return root;
	if (check(root)) root = nullptr;
	return root;
}
