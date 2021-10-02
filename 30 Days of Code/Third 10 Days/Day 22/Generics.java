/*
Problem Title: Generics
Problem URL: https://www.hackerrank.com/challenges/30-generics/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

/**
*    Method Name: printArray
*    Print each element of the generic array on a new line. Do not return anything.
*    @param A generic array
**/

public static <T> void printArray(T[] arr) {
    for(T x : arr)
        System.out.println(x);
}