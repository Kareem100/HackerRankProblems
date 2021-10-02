/*
Problem Title: Hackerland Radio Transmitters
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-hackerland-radio-transmitters/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int hackerlandRadioTransmitters(vector<int> x, int k) {
    sort(x.begin(), x.end());
    
    int n = x.size();
    int transmitters = 0;
    int i = 0;
    
    while(i < n) {
        int lastPos = x[i];
        while(i < n && x[i+1] <= lastPos + k)
            i++;
        lastPos = x[i];
        while(i < n && x[i+1] <= lastPos + k)
            i++;
        
        i++;
        transmitters++;
    }
    
    return transmitters;
}

