/*
Problem Title: Plus Minus
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-plus-minus/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

void plusMinus(vector<int> arr) {
    int n = arr.size();
    float positives=0, negatives=0, zeroes=0;
    for (int i = 0; i < n; ++i)
        if (arr[i] > 0) positives++;
        else if (arr[i] < 0) negatives++;
        else zeroes++;
    
    cout << fixed << positives/n << '\n' << negatives/n << '\n' << zeroes/n;
}