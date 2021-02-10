#include <iostream>
#include <vector>
#include <functional>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
bool helper(TreeNode *leftTree,TreeNode* rightTree){
        if(leftTree == NULL && rightTree != NULL)
            return false;

        if(leftTree != NULL && rightTree == NULL)
            return false;

        if(leftTree == NULL && rightTree == NULL)
            return true;

        if(leftTree->val != rightTree->val)
            return false;

        return helper(leftTree->left, rightTree->right) && helper(leftTree->right, rightTree->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;

        return helper(root->left, root->right);
    }
};