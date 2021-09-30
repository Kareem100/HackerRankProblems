/*
Problem Title: Exceptions - String to Integer
Problem URL: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String S = bufferedReader.readLine();
        bufferedReader.close();
        
        try {
            int parsedInteger = Integer.parseInt(S);
            System.out.println(parsedInteger);
        } catch (NumberFormatException ex) {
            System.out.println("Bad String");
        }
    }
}