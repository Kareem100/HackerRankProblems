/*
Problem Title: Simple Text Editor
Problem URL: hackerrank.com/challenges/one-month-preparation-kit-simple-text-editor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int Q; cin >> Q; 
    string S="";
    stack<string> lastOperations;
    
    while(Q--) {
        int op, k; cin >> op; 
        string addedString;
        switch (op) {
            case 1:
                cin >> addedString;
                lastOperations.push(S);
                S += addedString;
            break;
            case 2:
                cin >> k;
                lastOperations.push(S);
                S.erase(S.size()-k);
            break;
            case 4:
                S = lastOperations.top();
                lastOperations.pop();
            break;
            default:
                cin >> k;
                cout << S[k-1] << '\n';
        }
    }
    
    return 0;
}


