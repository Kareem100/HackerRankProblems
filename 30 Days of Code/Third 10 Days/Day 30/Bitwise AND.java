/*
Problem Title: Bitwise AND
Problem URL: https://www.hackerrank.com/challenges/30-bitwise-and/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public static int bitwiseAnd(int N, int K) {
    
    int maxBitwiseAnd = 0;
    for (int i = 1; i <= N; ++i)
        for (int j = i+1; j <= N; ++j)
        {
            int bitwiseAnd = i & j;
            if (bitwiseAnd > maxBitwiseAnd && bitwiseAnd < K) 
                maxBitwiseAnd = bitwiseAnd;
        }

    return maxBitwiseAnd;
}
    