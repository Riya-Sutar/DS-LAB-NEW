#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* root = NULL;

Node* insert(Node* node, int x) {
    if(node == NULL) return new Node(x);
    if(x < node->data) node->left = insert(node->left, x);
    else node->right = insert(node->right, x);
    return node;
}

Node* search(Node* node, int key) {
    if(node == NULL || node->data == key) return node;
    if(key < node->data) return search(node->left, key);
    return search(node->right, key);
}

int main() {
    int n, x, key;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " nodes: ";
    for(int i=0; i<n; i++) {
        cin >> x;
        root = insert(root, x);
    }
    
    cout << "Enter key to search: ";
    cin >> key;
    
    Node* result = search(root, key);
    if(result) cout << key << " found in BST!\n";
    else cout << key << " not found!\n";
    return 0;
}