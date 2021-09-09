/*
Problem Title: Data Types
Problem URL: https://www.hackerrank.com/challenges/30-data-types/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        int ii; double dd; String ss; 
        /* Read and save an integer, double, and String to your variables.*/
        ii = scan.nextInt(); dd = scan.nextDouble(); 
        scan.nextLine(); ss = scan.nextLine();
        /* Print the sum of both integer variables on a new line. */
        System.out.println(i+ii);
        /* Print the sum of the double variables on a new line. */
		System.out.println(d+dd);
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        /*System.out.print(s);*/
        System.out.println(s + ss);
        scan.close();
    }
}