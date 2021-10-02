/*
Problem Title: Jesse and Cookies
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-jesse-and-cookies/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int cookies(int k, vector<int> A) {
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < A.size(); ++i)
        pq.push(A[i]);
        
    int minOperations = 0;
    while(true) {
        int min1 = pq.top();
        if (min1 >= k) break;
        pq.pop();
        
        if (pq.empty()) return -1;
        
        int min2 = pq.top();
        pq.pop();
        
        int newMix = min1 + min2 * 2;
        pq.push(newMix);
        minOperations++;
    }
    
    return minOperations;
}

