/*
Problem Title: Hello, World..
Problem URL: https://www.hackerrank.com/challenges/30-hello-world/problem
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
        // Create a Scanner object to read input from stdin.
		Scanner scan = new Scanner(System.in); 
		
		// Read a full line of input from stdin and save it to our variable, inputString.
		String inputString = scan.nextLine(); 

		// Close the scanner object, because we've finished reading 
        // all of the input from stdin needed for this challenge.
		scan.close(); 
      
		// Print a string literal saying "Hello, World." to stdout.
		System.out.println("Hello, World.");
      
	    // Print a line of code here that prints the contents of inputString to stdout.
        System.out.println(inputString);
	}
}