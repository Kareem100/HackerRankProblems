/*
Problem Title: Permuting Two Arrays
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-two-arrays/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string twoArrays(int k, vector<int> A, vector<int> B) {
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < n; ++i)
        if (A[i] + B[n-i-1] < k) return "NO";
    return "YES";
}