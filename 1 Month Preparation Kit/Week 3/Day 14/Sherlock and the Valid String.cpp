/*
Problem Title: Sherlock and the Valid String
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-valid-string/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string isValid(string s) {
    int target = 0, targetIdx=-1;
    int freq[26]; memset(freq, 0, sizeof freq);
    
    for (int i = 0; i < s.size(); ++i)
        freq[s[i]-'a']++;
    
    for (int i = 0; i < 26; ++i)
        if (freq[i]!=0)
            if (freq[i]>target){target=freq[i]; targetIdx = i;}
    
    bool yes = true;
    for (int i = 0; i < 26; ++i)
        if (freq[i] != 0 && freq[i]!=target) {
            yes = false;
            break;
        }
    if (yes) return "YES";
    
    yes = true;
    for (int i = 0; i < 26; ++i)
        if (freq[i] != 0 && i != targetIdx && target - freq[i] != 1) {
            yes = false;
            break;
        }
    if (yes) return "YES";
    
    yes = true; int onesCount=0;
    for (int i = 0; i < 26; ++i)
        if (freq[i]) {
            if (freq[i] == 1) 
                onesCount++;
            else if (freq[i] != target && freq[i] != 1)
                return "NO";
        }
    if (onesCount == 1) return "YES";
    
    return "NO";
}



