/*
Problem Title: No Prefix Set
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-no-prefix-set/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: Java
Category: One Month Preparation
*/


class Result {

    static class SpecialNode {
        
        Map<Character, SpecialNode> map = new HashMap<>();
        boolean isComplete;
        
        public boolean add(String word) {
            return add(word, 0);
        }
        
        private boolean add(String word, int index) {
            if(isComplete)
                return false;
            
            if(index == word.length()) {
                isComplete = true;
                return true;
            }
            
            SpecialNode child = map.get(word.charAt(index));
            
            if(child == null) {
                child = new SpecialNode();
                map.put(word.charAt(index), child);
            }
            
            else if(index+1 == word.length())
                return false;
            
            return child.add(word, index+1);
        }
        
    }

    public static void noPrefix(List<String> words) {
        SpecialNode head = new SpecialNode();
        
        for (int i = 0; i < words.size(); ++i) 
            if (!head.add(words.get(i)))
            {
                System.out.printf("BAD SET\n%s\n", words.get(i));
                return;
            }
        
        System.out.println("GOOD SET");
    }
    
}

