/*
Problem Title: QHEAP1
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-qheap1/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    
    int q; cin >> q;
    set<int> st;
    
    while (q--) {
        int op; cin >> op;
        int x;
        
        if (op == 1) {
            cin >> x;
            st.insert(x);
        } 
        else if (op == 2) {
            cin >> x;
            auto it = st.find(x);
            st.erase(it); 
        }
        else 
            cout << *st.begin() << '\n';
    }
    
    return 0;
}

