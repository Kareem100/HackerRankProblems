/*
Problem Title: Lonely Integer
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-lonely-integer/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

// complexity: O(N)
int lonelyinteger(vector<int> a) {
    int cnt[102]; memset(cnt, 0, sizeof cnt);
    for (int i = 0; i < a.size(); ++i)
        cnt[a[i]]++;
    for (int i = 0; i < 101; ++i)
        if (cnt[i] == 1) return i;
    return 0;
}