/*
Problem Title: Insert a node at a specific position in a linked list
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-insert-a-node-at-a-specific-position-in-a-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 *     SinglyLinkedListNode(int node_data);
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = llist;
    
    if (position==0) {
        newNode->next = llist;
        return newNode;
    }
    
    while(true) {
        if (position == 1) {
            cout << temp->data << '\n';
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        position--;
    }
    
    return llist;
}



