/*
Problem Title: Tree: Tree Huffman Decoding
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-tree-huffman-decoding/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: Java
Category: One Month Preparation
*/

/*  
	class Node
		public  int frequency; // the frequency of this tree
    	public  char data;
    	public  Node left, right;
    
*/ 

void decode(String s, Node root) {
    Node temp = root;

    for (int i = 0; i < s.length(); ++i) {
        if (s.charAt(i) == '0')
            temp = temp.left;
        else 
            temp = temp.right;

        if (temp.left == null && temp.right == null) {
            System.out.print(temp.data);
            temp = root;
        }
    }
}

