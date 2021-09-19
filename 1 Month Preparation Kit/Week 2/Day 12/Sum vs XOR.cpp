/*
Problem Title: Sum vs XOR
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sum-vs-xor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

long sumXor(long n) {
    long numOfZeroBits = 0;
    while(n) {
        if (!(n & 1LL)) numOfZeroBits++;
        n >>= 1LL;
    }
    return 1LL << numOfZeroBits;
}



