/*
Problem Title: Operators
Problem URL: https://www.hackerrank.com/challenges/30-operators/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Result {

    /*
     * Complete the 'solve' function below.
     *
     * The function accepts following parameters:
     *  1. DOUBLE meal_cost
     *  2. INTEGER tip_percent
     *  3. INTEGER tax_percent
     */

    public static void solve(double meal_cost, int tip_percent, int tax_percent) {
        meal_cost += meal_cost * tip_percent / 100 + 
                     meal_cost * tax_percent / 100;
        System.out.println(Math.round(meal_cost));
    }

}