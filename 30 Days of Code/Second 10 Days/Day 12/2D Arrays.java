/*
Problem Title: 2D Arrays
Problem URL: https://www.hackerrank.com/challenges/30-2d-arrays/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<List<Integer>> arr = new ArrayList<>();

        IntStream.range(0, 6).forEach(i -> {
            try {
                arr.add(
                    Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });
        bufferedReader.close();
            
        int curSum, maxSum=-9*7-2;
        for (int i = 0; i < arr.size()-2; ++i)
            for (int j = 0; j < arr.get(0).size()-2; ++j)
            {
                curSum = arr.get(i).get(j) + arr.get(i).get(j+1) + 
                arr.get(i).get(j+2) + arr.get(i+1).get(j+1) + 
                arr.get(i+2).get(j) + arr.get(i+2).get(j+1) + 
                arr.get(i+2).get(j+2);
                if (curSum > maxSum) maxSum = curSum;
            }
            
        System.out.print(maxSum);
    }
}