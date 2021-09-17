/*
Problem Title: Grid Challenge
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-grid-challenge/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string gridChallenge(vector<string> grid) {
    for (int i = 0; i < grid.size(); ++i)
        sort(grid[i].begin(), grid[i].end());
    
    bool yes = true;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid.size()-1; ++j)
            if (grid[j][i] > grid[j+1][i]) {yes = false; break;}
        if (!yes) break;
    }
        
    return (yes)? "YES":"NO";
}



