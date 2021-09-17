/*
Problem Title: Recursion 3
Problem URL: https://www.hackerrank.com/challenges/30-recursion/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public static int factorial(int n) {
        if (n < 2) return 1;
        return n*factorial(n-1);
    }