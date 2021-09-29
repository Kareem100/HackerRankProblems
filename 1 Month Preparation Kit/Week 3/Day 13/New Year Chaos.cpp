/*
Problem Title: New Year Chaos
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

void minimumBribes(vector<int> q) {
    
    int bribes = 0, n = q.size();
    for (int i = n-1; i > -1; --i)
        if (q[i] != (i+1)) {
            if (i!=0 && q[i-1] == (i+1)) {
                swap(q[i-1], q[i]); 
                bribes++;
            }
            else if (i>1 && q[i-2] == (i+1)) {
                swap(q[i-2], q[i-1]); 
                swap(q[i-1], q[i]);
                bribes+=2;
            }
            else {
                cout << "Too chaotic\n";
                return;
            }
        }
        
    cout << bribes << '\n';
}

