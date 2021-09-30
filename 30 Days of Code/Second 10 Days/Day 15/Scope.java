/*
Problem Title: Scope
Problem URL: https://www.hackerrank.com/challenges/30-scope/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Difference {
  	private int[] elements;
  	public int maximumDifference;

	public Difference(int[] elements) {
        this.elements = elements;
        computeDifference();
    }
    
    public void computeDifference () {
        maximumDifference = 0;
        for (int i = 0; i < elements.length; ++i)
            for (int j = i + 1; j < elements.length; ++j)
                maximumDifference = Math.max(maximumDifference, 
                                             Math.abs(elements[i]-elements[j]));
    }
}