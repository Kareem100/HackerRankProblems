/*
Problem Title: Ice Cream Parlor
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-icecream-parlor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> result; bool isFound = false;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i+1; j < arr.size(); ++j)
            if (arr[i] + arr[j] == m) {
                result.push_back(i+1);
                result.push_back(j+1);
                isFound = true;
                break;
            }
        if (isFound) break;
    }
    return result;
}

