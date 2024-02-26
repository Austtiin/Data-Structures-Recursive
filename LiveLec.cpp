

#include <iostream>
#include <cstdlib>
#include <stack>
#include <bits/stdc++.h>
using namespace std;





struct node
{
    int data;
    node* left;
    node* right;

};




struct node* createNode(int value)
{
    //create instance
    struct node* temp = new node();
    //populate
    //set data

    temp->data = value;

    temp->left = NULL;
    temp->right = NULL;

}


//nodes t5o be inserted into the tree
struct node* insertNode(struct node* node, int value)
{
    if (node = NULL)
        return createNode(value);
    else if (value < node->data)
        node->left = insertNode(node->left, value);
    else if (value > node->data)
        node->right = insertNode(node->right, value);

        return node;

};


void inorder(struct  node* root)
{
    if (root != NULL)
    {
        inorder(root->left); // left node sub
        cout << root->data << " "; //root
        inorder(root->right);//right node sub
    }
    
};


int main()
{

    struct node* root = NULL;

    root = insertNode(root, 6);
    root = insertNode(root, 4);
    root = insertNode(root, 8);
    root = insertNode(root, 1);
    root = insertNode(root, 5);



cout << "Inorder Traversal: \n";
inorder(root);

    return 0;

}