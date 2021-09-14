/*
Problem Title: Let's Review
Problem URL: https://www.hackerrank.com/challenges/30-review-loop/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt(); scan.nextLine();
        while(q>0)
        {
            String inputStr = scan.nextLine();    
            String a="", b=""; q--;
            for (int i = 0; i < inputStr.length(); ++i)
                if (i%2==0) a += inputStr.charAt(i);
                else b += inputStr.charAt(i);
            System.out.println(a + " " + b);
        }
        scan.close();
    }
}