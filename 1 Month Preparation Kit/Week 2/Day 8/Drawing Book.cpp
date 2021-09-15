/*
Problem Title: Drawing Book
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-drawing-book/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int pageCount(int n, int p) {
    int pageIdx = p/2;
    int lastPageIdx = (n%2==0)?n/2:(n-1)/2;
    return min(pageIdx, lastPageIdx - pageIdx);
}