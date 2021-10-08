/*
Problem Title: Highest Value Palindrome
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-richie-rich/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string highestValuePalindrome(string s, int n, int k) {
    
    if (k >= n) return string(n, '9');
    
    int changes = 0, iter = n/2, i;
    for (i = 0; i < iter; ++i)
        if (s[i] != s[n-i-1]) changes++;
            
    if (changes > k) return "-1";
    
    changes = k - changes;
    for (i = 0; i < iter; ++i)
        if (s[i] != s[n-i-1]) 
        {
            if (changes > 0 && max(s[i], s[n-i-1]) != '9') 
            {
                s[i] = s[n-i-1] = '9';
                changes--;
            } 
            else 
                s[i] = s[n-i-1] = max(s[i], s[n-i-1]);   
        } 
        
        else if (changes > 1 && s[i] != '9') {
            s[i] = s[n-i-1] = '9';
            changes-=2;
        }
    
    if (changes > 0 && n%2 != 0) s[n/2] = '9';
    
    return s;
}

