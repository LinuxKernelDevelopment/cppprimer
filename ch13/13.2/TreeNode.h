class TreeNode {
public:
	TreeNode() : value(""), count(0), left(nullptr), right(nullptr) { }
	TreeNode(const TreeNode &orig) : value(orig.value), count(orig.count), left(orig.left), right(orig.right) { }
	TreeNode& operator=(const TreeNode &rhs)
	{
		value = rhs.value;
		count = rhs.count;
		left = rhs.left;
		right = rhs.right;
	}
private:
	std::string value;
	int	count;
	TreeNode  	*left;
	TreeNode	*right;
};

class BinStrTree {
public:
	BinStrTree() : root(nullptr) { }
	BinStrTree(const BinStrTree &orig) : root(orig.root) { }
	BinStrTree& operator=(const BinStrTree &rhs) 
	{
		root = rhs.root;
	}
private:
	TreeNode *root;
};
