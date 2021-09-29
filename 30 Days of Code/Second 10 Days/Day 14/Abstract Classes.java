/*
Problem Title: Abstract Classes
Problem URL: https://www.hackerrank.com/challenges/30-abstract-classes/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class MyBook extends Book {
    private int price;
    
    /**   
    *   Class Constructor
    *   
    *   @param title The book's title.
    *   @param author The book's author.
    *   @param price The book's price.
    **/
    public MyBook(String title, String author, int price) {
        super (title, author);
        this.price = price;
    }
    
    /**   
    *   Method Name: display
    *   
    *   Print the title, author, and price in the specified format.
    **/
    
    public void display() {
        System.out.printf("Title: %s\n", title);
        System.out.printf("Author: %s\n", author);
        System.out.printf("Price: %s\n", price);
    }
}