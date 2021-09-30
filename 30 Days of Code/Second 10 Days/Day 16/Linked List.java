/*
Problem Title: Linked List
Problem URL: https://www.hackerrank.com/challenges/30-linked-list/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public static Node insert(Node head,int data) {
    Node newNode = new Node(data);
    if (head == null) return newNode;
    Node headCopy = head;
    while(head.next != null)
        head = head.next;
    head.next = newNode;
    return headCopy;
}