/*
Problem Title: More Linked Lists
Problem URL: https://www.hackerrank.com/challenges/30-linked-list-deletion/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public static Node removeDuplicates(Node head) {
        Node trans = head;
        Node prev;
        
        while(trans != null) {
            Node temp = trans.next;
            prev = trans;
            
            while(temp != null) {
                if (temp.data == trans.data)
                    prev.next = temp.next;
                else 
                    prev = temp;
                temp = temp.next;
            }
            
            trans = trans.next;
        }
        
        return head;
    }