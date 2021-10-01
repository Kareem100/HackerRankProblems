/*
Problem Title: Equal Stacks
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-equal-stacks/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum1=0, sum2=0, sum3=0;
    int i = 0, j = 0, k = 0;
    
    for (int a = h1.size()-1; a >= 0; --a)
        sum1 += h1[a];
    
    for (int a = h2.size()-1; a >= 0; --a)
        sum2 += h2[a];

    for (int a = h3.size()-1; a >= 0; --a)
        sum3 += h3[a];
    
    while (sum1!=sum2 || sum1!=sum3 || sum2!=sum3) 
        if (sum1 == 0 || sum2 == 0 || sum3 == 0) 
            return 0;
        else if (sum1 >= sum2 && sum1 >= sum3)
            sum1 -= h1[i++];
        else if (sum2 >= sum1 && sum2 >= sum3) 
            sum2 -= h2[j++];
        else 
            sum3 -= h3[k++];

    return sum1;
}

