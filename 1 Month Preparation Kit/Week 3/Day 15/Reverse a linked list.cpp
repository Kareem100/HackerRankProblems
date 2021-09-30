/*
Problem Title: Reverse a linked list
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-reverse-a-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* previous = NULL;
    SinglyLinkedListNode* newHead = llist;
    while (llist != NULL) {
        llist = llist->next;
        newHead->next = previous;
        previous = newHead;
        if (llist != NULL)
            newHead = llist;
    }
    return newHead;
}



