/*
Problem Title: Array Manipulation
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-crush/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

long arrayManipulation(int n, vector<vector<int>> queries) {
    
    vector<int> arr(n, 0); 
    int sz = queries.size();
    
    for(int i = 0; i < sz; ++i)
    {
        arr[(queries[i][0])-1] += queries[i][2];
        if(queries[i][1]<n)
            arr[(queries[i][1])] -= queries[i][2]; 
    }
    
    long sum = 0, x = 0;
    for(int i = 0; i < n; ++i)
    {
        x += arr[i];
        if(x > sum)
            sum = x;
    }
        
    return sum;
}

