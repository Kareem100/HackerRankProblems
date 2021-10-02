/*
Problem Title: Lego Blocks
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-lego-blocks/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

const int N = 1000;
const int mod = 1000000007;
long long Wall[N + 2][N + 2];
long long laid[N + 2];
long long resu[N + 2];
bool once = true;

void buildWall() {
    
    Wall[1][0] = 1;
    
    for (int i = 1; i <= N; ++i)
    {
        Wall[1][i] = Wall[1][i - 1];
        if (i >= 2) Wall[1][i] += Wall[1][i - 2];
        if (i >= 3) Wall[1][i] += Wall[1][i - 3];
        if (i >= 4) Wall[1][i] += Wall[1][i - 4];
        Wall[1][i] %= mod;
    }
    
    for (int i = 2; i <= N; ++i)
        for (int j = 1; j <= N; ++j) 
        {
            Wall[i][j] = Wall[i - 1][j] * Wall[1][j];
            Wall[i][j] %= mod;
        }
}

int legoBlocks(int n, int m) {
    if (once) 
    {
        once = false;
        buildWall();
    }
    
    laid[1] = 0;
    resu[1] = 1;
    
    for (int i = 2; i <= N; ++i)
    {
        laid[i] = 0;
        for (int j = 0; j < i; ++j)
        {
            laid[i] += Wall[n][i-j] * resu[j];
            laid[i] %= mod;
        }
        resu[i] = (Wall[n][i] + mod - laid[i]) % mod;
    }
    
    return resu[m];
}

