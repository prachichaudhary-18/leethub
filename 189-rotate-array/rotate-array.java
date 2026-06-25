class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        k=k%n;
        int a[]=new int[n];
        int index=0;
        for(int i=n-k;i<n;i++){
            a[index]=nums[i];
            index++;


        }
        for(int i=0;i<n-k;i++){
            a[index]=nums[i];
            index++;
        }
        for(int i=0;i<n;i++){
            nums[i]=a[i];
        }

    }
}