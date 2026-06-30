class Solution {
public:
    void sortColors(vector<int>& nums) {
    //    int n=nums.size();
    //    int low=0,mid=0,high=n-1;
    //    while(mid<=high){
    //     if(nums[mid]==0){
    //         swap(nums[low],nums[mid]);
    //         low++,mid++;

    //     }
    //     else if(nums[mid]==1){
    //         mid++;

    //     }
    //     else{
    //         swap(nums[mid],nums[high]);
    //         high--;

    //     }
    //    }

 int n=nums.size();
    int low=0;

    for(int i=0;i<n;i++){
        if(nums[i]==0){
            swap(nums[i],nums[low]);
            low++;
        }
    }
    int high=n-1;
    for(int i=n-1;i>=0;i--){
        if(nums[i]==2){
            swap(nums[i],nums[high]);
            high--;
        }
    }
    
    }
};