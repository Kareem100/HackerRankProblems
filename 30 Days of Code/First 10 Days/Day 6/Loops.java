/*
Problem Title: Loops
Problem URL: https://www.hackerrank.com/challenges/30-loops/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());
        bufferedReader.close();
        for (int i = 1; i < 11; ++i)
            System.out.printf("%d x %d = %d\n", n, i, n*i);
    }
}