/*
Problem Title: Diagonal Difference
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-diagonal-difference/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-one
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

// complexity: O(N)
int diagonalDifference(vector<vector<int>> arr) {
    int primaryDiagonalSum=0, secondaryDiagonalSum=0;
    for (int i = 0; i < arr.size(); ++i)
    {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[arr.size()-i-1][i];
    }
        
    return abs(primaryDiagonalSum-secondaryDiagonalSum);
}