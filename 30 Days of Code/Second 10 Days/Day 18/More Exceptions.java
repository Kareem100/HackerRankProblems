/*
Problem Title: More Exceptions
Problem URL: https://www.hackerrank.com/challenges/30-more-exceptions/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Calculator{
    public int power(int n, int p) throws Exception{        
        if (n < 0 || p < 0)
            throw new Exception("n and p should be non-negative");
            
        return (int) Math.pow(n, p);
    }
}