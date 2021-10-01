/*
Problem Title: Balanced Brackets
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-balanced-brackets/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string isBalanced(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == '[') st.push(']');
        else if (s[i] == '{') st.push('}');
        else if (s[i] == '(') st.push(')');
        else if (st.empty()) return "NO";
        else if (st.top()!=s[i]) return "NO";
        else st.pop();
    
    if (!st.empty()) return "NO";
    return "YES";
}

