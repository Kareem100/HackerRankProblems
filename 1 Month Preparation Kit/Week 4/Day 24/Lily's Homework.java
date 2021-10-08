/*
Problem Title: Lily's Homework
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-lilys-homework/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-four

Max Score: 100
Score: 100
Language: Java
Category: One Month Preparation
*/

public static int lilysHomework(List<Integer> arr) {
        TreeMap<Integer, Integer> incSeq = new TreeMap<Integer, Integer>();
        TreeMap<Integer, Integer> decSeq = new TreeMap<Integer, Integer>();
        List<Integer> arrCopy = new ArrayList<Integer>();
        int sz = arr.size();
        
        for (int i = 0; i < sz; ++i) {
            incSeq.put(arr.get(i), i);
            decSeq.put(arr.get(i), i);
            arrCopy.add(arr.get(i));
        }
        
        int incSwaps = 0;
        for (int i = 0; i < sz; ++i) 
        {
            int targetValue = incSeq.firstKey();
            if (arr.get(i) != targetValue) 
            {
                int targetIndex = incSeq.get(targetValue);
                int temp = arr.get(i);
                arr.set(i, targetValue);
                arr.set(targetIndex, temp);
                
                incSeq.put(arr.get(targetIndex), targetIndex);
                incSwaps++;    
            }
            incSeq.remove(targetValue);
        }

        int decSwaps = 0;
        for (int i = sz-1; i > -1; --i) 
        {
            int targetValue = decSeq.firstKey();
            if (arrCopy.get(i) != targetValue) 
            {
                int targetIndex = decSeq.get(targetValue);
                int temp = arrCopy.get(i);
                arrCopy.set(i, targetValue);
                arrCopy.set(targetIndex, temp);
                
                decSeq.put(arrCopy.get(targetIndex), targetIndex);
                decSwaps++;    
            }
            decSeq.remove(targetValue);
        }
        
        return Math.min(incSwaps, decSwaps);
    }

