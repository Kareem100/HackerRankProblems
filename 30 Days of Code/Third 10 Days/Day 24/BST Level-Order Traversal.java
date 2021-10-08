/*
Problem Title: BST Level-Order Traversal
Problem URL: https://www.hackerrank.com/challenges/30-binary-trees/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

static void levelOrder(Node root){
      Queue<Node> queue = new LinkedList<>();
      queue.add(root);
      
      while(queue.size() != 0) {
            Node node = queue.poll();
            System.out.printf("%d ", node.data);
          
            if (node.left != null)
                queue.add(node.left);
            if (node.right != null)
                queue.add(node.right);
      }
      
    }