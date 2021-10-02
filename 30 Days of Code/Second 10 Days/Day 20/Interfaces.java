/*
Problem Title: Interfaces
Problem URL: https://www.hackerrank.com/challenges/30-interfaces/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Calculator implements AdvancedArithmetic {
    public int divisorSum(int n) {
        int sum = n;
        for (int i = 1; i < n; ++i)
            if (n%i==0)
                sum += i;
        return sum;
    }
}