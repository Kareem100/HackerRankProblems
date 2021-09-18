/*
Problem Title: Recursive Digit Sum
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-recursive-digit-sum/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int getSuperDigitFor(string n)
{
    while(n.size() != 1) {
        long sum = 0;
        for (int i = 0; i < n.size(); ++i)
            sum += (n[i]-'0');
        n = to_string(sum);
    }
    return n[0] - '0';
}

int superDigit(string n, int k) {
    int super_1 = getSuperDigitFor(n);
    return getSuperDigitFor(to_string(super_1*k));
}



