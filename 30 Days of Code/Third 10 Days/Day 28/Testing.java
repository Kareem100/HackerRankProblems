/*
Problem Title: Testing
Problem URL: https://www.hackerrank.com/challenges/30-testing/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {

    public static int minimum_index(int[] seq) {
        if (seq.length == 0) {
            throw new IllegalArgumentException("Cannot get the minimum value index from an empty sequence");
        }
        int min_idx = 0;
        for (int i = 1; i < seq.length; ++i) {
            if (seq[i] < seq[min_idx]) {
                min_idx = i;
            }
        }
        return min_idx;
}

static final class TestDataEmptyArray {
    public static int[] get_array() {
        return new int[0];
    }
}

static final class TestDataUniqueValues {
    public static int[] get_array() {
        int intArr[] = new int[]{3, 2};
        return intArr;
    }
    
    public static int get_expected_result() {
        return 1;
    }
}

static final class TestDataExactlyTwoDifferentMinimums {
    public static int[] get_array() {
        int intArr[] = new int[]{5, 3, 2, 3, 2, 6};
        return intArr;
    }
    
    public static int get_expected_result() {
        return 2;
    }
}

    