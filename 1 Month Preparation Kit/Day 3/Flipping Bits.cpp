/*
Problem Title: Flipping Bits
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-flipping-bits/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one&h_r=next-challenge&h_v=zen
Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

long flippingBits(long n) {
    string binary=""; long result=0; int p=0;
    while(n!=0) {binary=(n%2==0 ?"1":"0")+binary; n/=2;}
    for (int i = binary.size(); i < 32; ++i)
        binary = "1"+binary;
    for (int i = binary.size() - 1; i > -1; --i, p++)   
        result += (binary[i]-'0') * pow(2, p);
    return result;
}