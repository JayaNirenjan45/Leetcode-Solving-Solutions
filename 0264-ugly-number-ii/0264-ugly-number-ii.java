public class Solution {
    public int nthUglyNumber(int n) {
        if (n <= 0) {
            return 0;
        }
        ArrayList<Integer> result = new ArrayList<Integer>();
        int two = 0;
        int three = 0;
        int five = 0;
        result.add(1);
        while (result.size() < n) {
            int m2 = result.get(two) * 2;
            int m3 = result.get(three) * 3;
            int m5 = result.get(five) * 5;
            int min = Math.min(m2, Math.min(m3, m5));
            result.add(min);
            if (m2 == min)
                two ++;
            if (m3 == min) 
                three ++;
            if (m5 == min)
                five ++;
        }
        return result.get(result.size() - 1);
    }
}