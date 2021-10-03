/*
Problem Title: Queries with Fixed Length
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-queries-with-fixed-length/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> solve(vector<int> arr, vector<int> queries) {
    vector<int> ans; 
    int n = arr.size(), q = queries.size();
    deque<int> maxima;
    for (int i = 0; i < q; ++i)
    {
        int d = queries[i];
        maxima.clear();
        
        int currentMax = 0;
        for (int j = d - 1; j >= 0; --j)
        {
            if (arr[j] > currentMax)
                currentMax = arr[j];
            maxima.push_front(currentMax);
        }
        int smallestMax = currentMax;
        int end = n - d;
        for (int j = 0; j < end; ++j)
        {
            maxima.pop_front();
            int next = arr[j + d];
            for (deque<int>::reverse_iterator ri = maxima.rbegin();
                 ri != maxima.rend() && *ri < next; ++ri)
                *ri = next;
            maxima.push_back(next);
            if (maxima.front() != currentMax)
            {
                currentMax = maxima.front();
                if (currentMax < smallestMax)
                    smallestMax = currentMax;
            }
        }
        ans.push_back(smallestMax);
    }
    return ans;
}

