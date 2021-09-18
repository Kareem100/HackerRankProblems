/*
Problem Title: Sherlock and Array
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-array/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string balancedSums(vector<int> arr) {
    bool isBalanced = false;
    int dp[arr.size()]; dp[0] = arr[0];
    for (int i = 1; i < arr.size(); ++i)
        dp[i]=dp[i-1] + arr[i];
    if (dp[arr.size()-1] - dp[0] == 0) isBalanced = true;
    else 
        for (int i = 1; i < arr.size(); ++i)
            if (dp[i-1] == dp[arr.size()-1] - dp[i]) 
                {isBalanced = true; break;}
    return (isBalanced)?"YES":"NO";
}



