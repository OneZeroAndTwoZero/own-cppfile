void addnode(TreeNode *root){
	if (root -> left != nullptr){
		addnode(root -> left);
		TreeNode *cur = new TreeNode;
		cur -> val = __gcd(root -> val, root -> left -> val);
		cur -> left = root -> left;
		root -> left = cur;
	}
	if (root -> right != nullptr){
		addnode(root -> right);
		TreeNode *cur = new TreeNode;
		cur -> val = __gcd(root -> val, root -> right -> val);
		cur -> right = root -> right;
		root -> right = cur;
	}
}

TreeNode *expTree(TreeNode *root){
	if (root != nullptr) addnode(root);
	return root;
}
