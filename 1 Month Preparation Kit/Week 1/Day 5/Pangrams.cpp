/*
Problem Title: Pangrams
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-pangrams/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string pangrams(string s) {
    bool freq[26]; memset(freq, false, sizeof freq);
    for (int i = 0; i < s.size(); ++i)
    {
        int x = tolower(s[i])-'a'; freq[x] = true;
    }
    for (int i = 0; i < 26; ++i)
        if (!freq[i]) return "not pangram";
    return "pangram";
}