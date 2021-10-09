/*
Problem Title: Running Time and Complexity
Problem URL: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        while(t != 0) {
            int x = scanner.nextInt();
            if (isPrime(x)) 
                System.out.println("Prime");
            else 
                System.out.println("Not prime");
            t--;
        }
    }
    
    private static boolean isPrime(int n) {
        if (n == 1) return false;
        for (int i = 2; i*i <= n; ++i)
            if (n%i == 0) return false;
        return true;
    }
    
}