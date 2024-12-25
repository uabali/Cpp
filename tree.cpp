#include <iostream>

using namespace std;

struct Node{

    int data;
    Node* right;
    Node* left;

};

Node* createNode(int data){

    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int main()
{

    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    return 0;
}