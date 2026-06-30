class Solution {
public:
    int trap(vector<int>& nums) 
    {

    int n=nums.size();


        int left=0,right=n-1;
        int res=0;
        int leftsum=0,rightsum=0;
        while(left<=right){
            if(nums[left]<nums[right]){
                if(nums[left]>=leftsum){
                    leftsum=nums[left];
                }
                else{
                    res+=leftsum-nums[left];
                }
                left++;
            }else{
                if(nums[right]>=rightsum){
                    rightsum=nums[right];
                }
                else{
                    res+=rightsum-nums[right];
                }
                right--;
            }

        }

        return res;


       
        
    }
};