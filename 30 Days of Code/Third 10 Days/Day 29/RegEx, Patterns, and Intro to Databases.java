/*
Problem Title: RegEx, Patterns, and Intro to Databases
Problem URL: https://www.hackerrank.com/challenges/30-regex-patterns
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());
        PriorityQueue<String> pQueue = new PriorityQueue<>();
        
        IntStream.range(0, N).forEach(NItr -> {
            try {
                String[] inputs = bufferedReader.readLine().split(" ");

                String firstName = inputs[0];
                String emailID = inputs[1];
                
                if (emailID.endsWith("@gmail.com"))
                    pQueue.add(firstName);
                        
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        while(pQueue.size() != 0)
            System.out.println(pQueue.poll());
            
        bufferedReader.close();
    }
}
    