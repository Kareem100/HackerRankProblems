/*
Problem Title: Max Min
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-angry-children/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int maxMin(int k, vector<int> arr) {
    int ans = INT32_MAX;
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= arr.size()-k; ++i)
        if (arr[i+k-1] - arr[i] < ans) ans = arr[i+k-1] - arr[i];
    return ans;
}