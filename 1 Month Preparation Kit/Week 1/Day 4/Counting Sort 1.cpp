/*
Problem Title: Counting Sort 1
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-countingsort1/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

// complexity: O(N)
vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0);
    for (int i = 0; i < arr.size(); ++i)
        freq[arr[i]]++;
    return freq;
}