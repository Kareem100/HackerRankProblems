/*
Problem Title: Sales by Match
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int sockMerchant(int n, vector<int> ar) {
    int freq[101], pairs = 0; memset(freq, 0, sizeof freq);
    for (int i = 0; i < n; ++i)
        freq[ar[i]]++;
    for (int i = 1; i < 101; ++i)
        pairs += freq[i]/2;
    return pairs;
}