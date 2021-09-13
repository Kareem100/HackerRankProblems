/*
Problem Title: Intro to Conditional Statements
Problem URL: https://www.hackerrank.com/challenges/30-conditional-statements/problem
Max Score: 30
Score: 30
Language: C++
Category: 30 Days of Code
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());
        String out = (N%2!=0 || (N%2==0&&N<21&&N>5))? "Weird":"Not Weird";
        System.out.println(out);
        bufferedReader.close();
    }
}