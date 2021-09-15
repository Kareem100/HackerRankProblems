/*
Problem Title: Arrays
Problem URL: https://www.hackerrank.com/challenges/30-arrays/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
        bufferedReader.close();
        
        for (int i = n-1; i > -1; --i)
            System.out.printf("%d ", arr.get(i));
    }
}