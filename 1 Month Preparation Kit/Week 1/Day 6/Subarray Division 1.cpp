/*
Problem Title: Subarray Division 1
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-the-birthday-bar/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int birthday(vector<int> v, int sum, int length) {
    int ans = 0;
    for (int i = 0; i <= v.size() - length; ++i)
    {
        int currentSum = 0;
        for (int j = i; j < i + length; ++j)
            currentSum += v[j];
        if (currentSum == sum) ans++;
    }
    return ans;
}