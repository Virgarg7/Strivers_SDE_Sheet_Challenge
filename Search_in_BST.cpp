#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

bool searchInBST(BinaryTreeNode<int> *root, int key) {
    
   BinaryTreeNode<int> *temp = root;

    if (temp == NULL)
    {
        return false;
    }

    while (temp != NULL)
    {

        if (temp->data == key)
        {
            return true;
        }
        else if (temp->data > key)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    return false;


}
