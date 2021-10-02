/*
Problem Title: The Maximum Subarray
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-maxsubarray/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> maxSubarray(vector<int> arr) {
    int maxSubsequence = 0, maxNeg=-INFINITY;
    int maxSubarrayTillNow = 0, lastMaxSubarray=0;
    vector<int> ans; bool zeroFound=false;
    for (int i = 0; i < arr.size(); ++i)
    {
        lastMaxSubarray += arr[i];
        if (maxSubarrayTillNow < lastMaxSubarray) 
            maxSubarrayTillNow = lastMaxSubarray;
        if (lastMaxSubarray < 0) lastMaxSubarray = 0;
        
        if (arr[i] > 0) maxSubsequence += arr[i];
        if (arr[i] < 1 && arr[i] > maxNeg) maxNeg = arr[i];
    }
    
    if (maxSubsequence == 0) maxSubsequence = maxNeg;
    if (maxSubarrayTillNow == 0) maxSubarrayTillNow = maxNeg;
    ans.push_back(maxSubarrayTillNow);
    ans.push_back(maxSubsequence);
    
    return ans;
}

