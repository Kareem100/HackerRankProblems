/*
Problem Title: The Bomberman Game
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-bomber-man/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<string> getMirrorOf(vector<string> grid) {
    const int r = grid.size(), c = grid[0].size();
    int i, j; char tracker[r][c];
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            tracker[i][j] = '0';
            
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            if (grid[i][j] == 'O') {
                if (i!=0) tracker[i-1][j] = 'X';
                if (i!=r-1) tracker[i+1][j] = 'X';
                if (j!=0) tracker[i][j-1] = 'X';
                if (j!=c-1) tracker[i][j+1] = 'X';
                tracker[i][j] = 'X';        
            }
            else if (tracker[i][j] != 'X') tracker[i][j] = '.';
            
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            grid[i][j] = (tracker[i][j]=='X')?'.':'O';
            
    return grid;
}

vector<string> bomberMan(int n, vector<string> grid) {
    int r = grid.size(), c = grid[0].size();
    
    if (n == 1) 
        return grid;
        
    if (n%2==0) {
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                grid[i][j] = 'O';
        return grid;
    }
    
    grid = getMirrorOf(grid);
    
    if (n % 4 == 3)
        return grid;
        
    return getMirrorOf(grid);
}



