/*
Problem Title: Sorting
Problem URL: https://www.hackerrank.com/challenges/30-sorting/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
        bufferedReader.close();
        
        int numberOfSwaps = 0;
        for (int i = 0; i < n; ++i) {
            boolean swaped = false;
            
            for (int j = 0; j < n-1; ++j)
                if (a.get(j) > a.get(j+1)) {
                    Collections.swap(a, j, j+1);
                    numberOfSwaps++;
                    swaped = true;
                }
                
            if (!swaped) 
                break;
        }
        
        System.out.printf("Array is sorted in %d swaps.\n", numberOfSwaps);
        System.out.printf("First Element: %d\n", a.get(0));
        System.out.printf("Last Element: %d\n", a.get(n-1));
    }
}