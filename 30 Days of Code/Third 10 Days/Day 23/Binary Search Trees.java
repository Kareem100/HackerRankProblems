/*
Problem Title: Binary Search Trees
Problem URL: https://www.hackerrank.com/challenges/30-binary-search-trees/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public static int getHeight(Node root){
      if(root == null) return -1;
      return Math.max(getHeight(root.left), getHeight(root.right)) + 1;
}