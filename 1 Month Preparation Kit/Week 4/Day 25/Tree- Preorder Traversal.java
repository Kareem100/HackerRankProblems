/*
Problem Title: Tree: Preorder Traversal
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-tree-preorder-traversal/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: Java
Category: One Month Preparation
*/

/*
class Node {
    int data;
    Node left;
    Node right;
}
*/

    public static void preOrder(Node root) {
        if (root == null) return;
        
        System.out.printf("%d ", root.data);
        preOrder(root.left);
        preOrder(root.right);
    }

