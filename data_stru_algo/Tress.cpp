#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
    
};

void printPostorder(struct Node* node) {
    if (node == NULL) 
        return;
    // first recur on left subreee
    printPostorder(node->left);
    
    // then recur on right subtree
    printPostorder(node->right);

    // Now deal with whe node
    cout << node->data << " ";

}

void printInorder(struct Node* node) {
    if (node == NULL)
        return;
    
    // first recur on left child
    printInorder(node->left);

    // then print the data of node
    cout << node->data << " ";

    // now recur on right of node
    printInorder(node->right);
    
}


void printPreorder(struct Node* node) {
    if (node == NULL) 
        return;
    // first print data of node
    cout << node->data << " ";

    // then recur on left subtree
    printPreorder(node->left);

    // now recur on right subtree
    printPreorder(node->right);
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);


    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
    return 0;
}