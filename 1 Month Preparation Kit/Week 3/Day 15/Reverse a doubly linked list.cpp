/*
Problem Title: Reverse a doubly linked list
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-reverse-a-doubly-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

/*
 * For reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* temp;
    while (true) {
        temp = llist-> next;
        llist->next = llist->prev;
        if (temp == NULL) {
            llist->prev = NULL;
            break;
        }
        llist = temp;
    }
    return llist;
}



