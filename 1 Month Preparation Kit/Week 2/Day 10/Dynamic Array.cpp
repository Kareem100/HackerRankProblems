/*
Problem Title: Dynamic Array
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-dynamic-array/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int>answers; int lastAnswer = 0; vector<vector<int>> arr;
    for (int i = 0; i < n; ++i) arr.push_back(vector<int>());
    
    for (int i = 0; i < queries.size(); ++i)
    {
        int q = queries[i][0], x = queries[i][1], y = queries[i][2];
        if (q == 1)
            arr[(x^lastAnswer)%n].push_back(y);
        else {
            int idx = (x^lastAnswer)%n;
            lastAnswer = arr[idx][y%arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }
    
    return answers;
}



