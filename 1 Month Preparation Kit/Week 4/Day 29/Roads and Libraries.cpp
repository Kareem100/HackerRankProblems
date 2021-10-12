/*
Problem Title: Binary Search Tree: Roads and Libraries
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-torque-and-development/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/


vector<int> graph[100000];
int visited[100000];
    
int getSize(int v)
{
    int res = 1;
    visited[v] = 1;
    int sz = graph[v].size();
    for (int i = 0; i < sz; ++i)
        if (!visited[graph[v][i]])
            res += getSize(graph[v][i]);
    return res;
}

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    
    int m = cities.size();
    
    for (int i = 0; i < n; ++i)
        graph[i].clear();
        
    for (int i = 0; i < m; ++i)
    {
        int u = cities[i][0];
        int v = cities[i][1];
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    memset(visited, 0, sizeof(visited));

    long long res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (visited[i]) continue;
        int size = getSize(i);
        res += c_lib + (long)(size - 1) * min(c_road, c_lib);
    }

    return res;
}
