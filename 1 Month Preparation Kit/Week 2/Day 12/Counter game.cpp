/*
Problem Title: Counter game
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-counter-game/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

string counterGame(long n) {
    bool richard = true;
    while (n != 1)
    {
        float lg = log2(n);
        if ((int)lg == lg) n/= 2;
        else n -= pow(2, (int)lg);
        richard = !richard;
    }
    return (richard)?"Richard":"Louise";
}



