/*
Problem Title: Binary Search Tree: Lowest Common Ancestor
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-binary-search-tree-lowest-common-ancestor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/


/*class Node {
    int data;
    Node* left;
    Node* right;
};
*/
  
Node *lca(Node *root, int v1,int v2) {

    if (root == NULL) return NULL;

    if (v1 < root->data && v2 < root->data)
        return lca(root->left, v1, v2);

    if (v1 > root->data && v2 > root->data)
        return lca(root->right, v1, v2);

    return root;
}

