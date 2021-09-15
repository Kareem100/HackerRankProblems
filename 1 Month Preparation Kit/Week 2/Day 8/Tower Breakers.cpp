/*
Problem Title: Tower Breakers
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-tower-breakers-1/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int towerBreakers(int n, int m) {
    if (!(n%2) || m == 1) return 2;
    else return 1;
}