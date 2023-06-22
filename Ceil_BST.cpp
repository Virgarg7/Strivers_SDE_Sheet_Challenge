int findCeil(BinaryTreeNode<int> *node, int input){
    // Smallest value of maxi which is >= input
    int maxi = -1;
    
    // Special case when all nodes are lesser than input , then there will be no ciel
    BinaryTreeNode<int> *temp = node;

    while (temp != NULL)
    {
        if (temp->data == input)
        {
            return input;
        }
        else if (temp->data > input)
        {
            maxi = temp->data;
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    return maxi;
}
