/*
Problem Title: Merge two sorted linked lists
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-merge-two-sorted-linked-lists/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

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


/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;
    
    SinglyLinkedListNode* merged;
    if (head2->data < head1->data) {
        merged = head2;
        head2 = head2->next;
    } else {
        merged = head1;
        head1 = head1->next;
    }
    SinglyLinkedListNode* temp = merged;
    
    while(head1 != NULL && head2 != NULL) {
        if (head2->data < head1->data) {
            temp->next = head2;
            head2 = head2->next;
        }
        else {
            temp->next = head1;
            head1 = head1->next;
        }
        temp = temp->next;
    }
    
    if (head1 == NULL)
        temp->next = head2;
    else 
        temp->next = head1;
    
    return merged;
}


