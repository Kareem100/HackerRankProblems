/*
Problem Title: Mini-Max Sum
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-mini-max-sum/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one&h_r=next-challenge&h_v=zen
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

void miniMaxSum(vector<int> arr) {
    long long min = arr[0], max = arr[0], sum=0;
    for (int i = 0; i < arr.size(); ++i)
    {   
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
        sum += arr[i];
    }
    cout << sum - max << ' ' << sum - min;
}