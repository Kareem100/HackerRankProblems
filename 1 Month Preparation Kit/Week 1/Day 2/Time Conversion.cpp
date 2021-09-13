/*
Problem Title: Time Conversion
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-time-conversion/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string timeConversion(string s) {
    string militaryTime = s.substr(0, 8);
    if (s[0] == '1' && s[1] == '2') {
        if (s[8] =='A')
            militaryTime[0] = militaryTime[1] = '0'; }
        
    else if (s[8] == 'P'){
        militaryTime[0] += 1;
        militaryTime[1] += 2;
    }
    return militaryTime;
}