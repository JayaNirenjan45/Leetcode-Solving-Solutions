class Solution {
    public long repairCars(int[] ranks, int cars) {
        long ans = (long) 1e14;

        long left = 1;
        long right = (long) 1e14;
        while(left < right){
            long midTime = left + (right - left)/2;
            long currTotalRepairableCars = canRepare(ranks, midTime);
            if(currTotalRepairableCars >= cars){
                ans = midTime;
                right = midTime; // enough time left to repair.
            }else{
                left = midTime + 1; // not enough time.
            }
        }
        return ans;
    }
    public long canRepare(int[] ranks, long time){
        long totalRepairableCars = 0;
        for(int i = 0; i < ranks.length; i++){
            totalRepairableCars += Math.sqrt(time/ranks[i]);
        }

        
        return totalRepairableCars;
    }
}