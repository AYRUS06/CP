#include <iostream>
using namespace std;

struct Node
{
    int value;
    int frequency;
    Node *left;
    Node *right;
};

Node *newNode(int value)
{
    Node *node = new Node;
    node->value = value;
    node->frequency = 1;
    node->left = node->right = NULL;
    return node;
}

void insert(Node *&root, int value)
{
    if (!root)
    {
        root = newNode(value);
        return;
    }

    if (value < root->value)
        insert(root->left, value);
    else if (value > root->value)
        insert(root->right, value);
    else // value == root->value
        root->frequency++;
}

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->value << " : " << root->frequency << endl;
        inorder(root->right);
    }
}

int main()
{
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;

    // int arr[n];
    // cout << "Enter the elements: ";
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    // Node *root = NULL;
    // for (int i = 0; i < n; i++)
    //     insert(root, arr[i]);

    // cout << "Distinct items and their count:" << endl;
    // inorder(root);
    int a[6] = {1};
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}