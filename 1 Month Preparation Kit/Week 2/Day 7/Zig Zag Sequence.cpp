/*
Problem Title: Zig Zag Sequence
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-zig-zag-sequence/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

void findZigZagSequence(vector < int > a, int n){
    sort(a.begin(), a.end());
    int mid = n/2;
    swap(a[mid], a[n-1]);

    int st = mid + 1;
    int ed = n - 2;
    while(st <= ed){
        swap(a[st], a[ed]);
        st = st + 1;
        ed = ed - 1;
    }
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}