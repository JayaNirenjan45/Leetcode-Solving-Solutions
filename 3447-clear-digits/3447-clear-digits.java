class Solution {
    public String clearDigits(String s) {
        char[] t = s.toCharArray();
        int j = 0;
        for (int i = 0; i < t.length; i++){
            if (Character.isDigit(t[i]))
                j--;
            else
                t[j++] = t[i];
        }
        return new String(t, 0, j);
    }
}