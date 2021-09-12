/*
Problem Title: Class vs. Instance
Problem URL: https://www.hackerrank.com/challenges/30-class-vs-instance/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

public class Person {
    private int age;	
  
	public Person(int initialAge) {
          if (initialAge < 0)
          {
              System.out.println("Age is not valid, setting age to 0.");
              this.age = 0;
          }
          else this.age = initialAge;
	}

	public void amIOld() {
        String msg = "You are old.";
  		if (age < 13) msg = "You are young.";
        else if (age < 18) msg = "You are a teenager.";
        System.out.println(msg);
	}

	public void yearPasses() {
  		this.age++;
	}