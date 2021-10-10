/*
Problem Title: Nested Logic
Problem URL: https://www.hackerrank.com/challenges/30-nested-logic/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int returnedDay, returnedMonth, returnedYear;
        int dueDay, dueMonth, dueYear;
        int fine = 0;
        
        returnedDay = scanner.nextInt();
        returnedMonth = scanner.nextInt();
        returnedYear = scanner.nextInt();
        
        dueDay = scanner.nextInt();
        dueMonth = scanner.nextInt();
        dueYear = scanner.nextInt();
        
        if (returnedYear == dueYear)
        {
            if (returnedMonth == dueMonth)
            {
                if (returnedDay <= dueDay)
                    fine = 0;
                else 
                    fine = 15 * (returnedDay - dueDay);
            }
            else if (returnedMonth > dueMonth)
                fine = 500 * (returnedMonth - dueMonth);
            else 
                fine = 0;
        }
        else if (returnedYear > dueYear)
            fine = 10000;
        else 
            fine = 0;
        
        System.out.println(fine);
    }
}