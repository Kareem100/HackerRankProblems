/*
Problem Title: Dictionaries and Maps
Problem URL: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
Max Score: 30
Score: 30
Language: Java
Category: 30 Days of Code!
*/

class Solution{
    public static void main(String []argh){
        HashMap<String, Integer> contactsMap = new HashMap<String, Integer>();    
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i < n; i++) {
            String name = in.next();
            int phone = in.nextInt();
            contactsMap.put(name, phone);
        }
        while(in.hasNext()) {
            String s = in.next();
            if (contactsMap.containsKey(s))
                System.out.printf("%s=%d\n", s, contactsMap.get(s));
            else 
                System.out.println("Not found");
        }
        in.close();
    }
}