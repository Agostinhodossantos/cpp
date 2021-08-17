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
    
    // first recur on left subtree
    printPostorder(node->left);
    cout << "left"<< endl;
    // then recur on right subtree 
    printPostorder(node->right);
    cout << "right" << endl;
    // now deal with the node
    cout << node->data << " ";
}

void test(int num) {
    if (num == NULL)
        return;
    cout << num << endl;
    test(NULL);

    test(4);
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // printPostorder(root);
    test(10);

    return 0;
}