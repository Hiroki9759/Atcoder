#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
//Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
	    vector<int> vals;
	    if (!root)
		    return vals;
	    stack<TreeNode*> stk;
	    stk.push(root);
	    bool goRight = false;

	    while (!stk.empty())
	    {
		    TreeNode *tmp = stk.top();
		    if (goRight)
		    {
			    vals.push_back(tmp->val);
			    stk.pop();
			    if (tmp->right)
			    {
				    stk.push(tmp->right);
				    goRight = false;
			    }
		    }
		    else
		    {
			    if (tmp->left)
			    {
				    stk.push(tmp->left);
			    }
			    else
			    {
				    goRight = true;
			    }
		    }
	    }
	    return vals;
    }
};