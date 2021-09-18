/*
Problem Title: Binary Numbers
Problem URL: https://www.hackerrank.com/challenges/30-binary-numbers/problem
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
        
        String binary="";
        while(n != 0) {binary = String.valueOf(n%2) + binary; n/=2;}
        int consecutive_1s = 0, maxConsecutive_1s=0;
        for (int i = 0; i < binary.length(); ++i)
            if (binary.charAt(i) == '1') 
                maxConsecutive_1s = Math.max(++consecutive_1s, maxConsecutive_1s);
            else 
                consecutive_1s = 0;
        System.out.print(maxConsecutive_1s);
    }
}