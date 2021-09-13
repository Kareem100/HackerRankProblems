/*
Problem Title: Sparse Arrays
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sparse-arrays/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one&h_r=next-challenge&h_v=zen
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result; int cnt;
    for (int i = 0; i < queries.size(); ++i)
    {
        cnt = 0;
        for (int j = 0; j < strings.size(); ++j)
            if (queries[i] == strings[j]) cnt++;
        result.push_back(cnt);
    }

    return result;
}