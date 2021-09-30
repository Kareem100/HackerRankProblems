/*
Problem Title: Queue using Two Stacks
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-queue-using-two-stacks/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int q, type, x; cin >> q;
    stack<int> val1, val2;
    stack<char> op1, op2;
    
    while (q--) {
        cin >> type;
        switch (type) {
            case 1:
                cin >> x;
                val1.push(x);
                break;
            case 2:
                op1.push('D'); // Dequeue
                break;
            default:
                op1.push('P'); // print
        }
    }
    
    while(!val1.empty()) {
        val2.push(val1.top());
        val1.pop();
    }
    
    while(!op1.empty()) {
        op2.push(op1.top());
        op1.pop();
    }
    
    while(!op2.empty()) {
        if (op2.top() == 'D') // Dequeue
            val2.pop();
        else // Print
            cout << val2.top() << '\n';
        op2.pop();
    }
    
    return 0;
}

