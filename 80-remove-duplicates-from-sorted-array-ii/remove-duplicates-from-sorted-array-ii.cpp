class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        // if(n<=2){
        //     return n;
        // }
        // int k=2;
        // for(int i=2;i<n;i++){
        //     if(nums[i]!=nums[k-2]){
        //         nums[k]=nums[i];
        //         k++;
        //     }
        // }
        // return k;

        int n=nums.size();
        if(n<=2){
            return n;
        }

        int i=2;
        for(int j=2;j<n;j++){
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }

        return i;




    }
};