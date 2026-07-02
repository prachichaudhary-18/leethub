class Solution {
    public int rob(int[] nums) {
        int a=0,b=0;
        int c;
        for(int i=0;i<nums.length;i++){
            c=Math.max(a,b+nums[i]);
            b=a;
            a=c;
        

        }
        return a;
        
    }
}