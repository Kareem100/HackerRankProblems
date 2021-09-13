/*
Problem Title: XOR Strings 2
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-strings-xor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i])
            res += '0';
        else
            res += '1';
    }

    return res;
}