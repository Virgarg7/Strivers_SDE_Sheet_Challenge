int floorInBST(TreeNode<int> * root, int input)
{
    int maxi = -1;
    TreeNode<int> *temp = root;

    while (temp != NULL)
    {
        if (temp->val == input)
        {
            return input;
        }
        else if (temp->val > input)
        {
            temp = temp->left;
        }
        else
        {
            maxi = temp->val;
            temp = temp->right;
        }
    }

    return maxi;
}
