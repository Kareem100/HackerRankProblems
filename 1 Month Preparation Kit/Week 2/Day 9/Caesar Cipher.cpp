/*
Problem Title: Caesar Cipher
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-caesar-cipher-1/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string caesarCipher(string s, int k) {
    k %= 26;
    for (int i = 0; i < s.size(); ++i)
        if (isalpha(s[i]))
        {
            if (islower(s[i])) {
                if (int(s[i]) + k > 'z')
                    s[i] = 'a' + ((int(s[i]) + k) % 'z') - 1;
                else s[i] += k;
            }
            else {
                if (int(s[i]) + k > 'Z')
                    s[i] = 'A' + ((int(s[i]) + k) % 'Z') - 1;
                else s[i] += k;
            }
        }

    return s;  
}