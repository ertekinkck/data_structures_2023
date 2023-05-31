using namespace std;
#include <iostream>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

void printPreOrder(Node* newNode)
{
    if(newNode == nullptr)
        return;
    
    cout << newNode->data << " ";

    printPreOrder(newNode->left);
    printPreOrder(newNode->right);
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreOrder(root);
    
}