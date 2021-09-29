/*
Problem Title: Inheritance
Problem URL: https://www.hackerrank.com/challenges/30-inheritance/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Student extends Person{
	private int[] testScores;

    /*	
    *   Class Constructor
    *   
    *   @param firstName - A string denoting the Person's first name.
    *   @param lastName - A string denoting the Person's last name.
    *   @param id - An integer denoting the Person's ID number.
    *   @param scores - An array of integers denoting the Person's test scores.
    */
    public Student(String firstName, String lastName, 
        int studentID, int[] scores) {
        super(firstName, lastName, studentID);
        this.testScores = scores;
    }

    /*	
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    public char calculate() {
        int sum = 0;
        for (int i = 0; i < testScores.length; ++i)
            sum += testScores[i];
        int avg = sum / testScores.length;
        if (avg >= 90) return 'O';
        if (avg >= 80) return 'E';
        if (avg >= 70) return 'A';
        if (avg >= 55) return 'P';
        if (avg >= 40) return 'D';
        else return 'T';
    }
}