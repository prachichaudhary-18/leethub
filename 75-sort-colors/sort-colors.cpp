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
    int high=n-1;
    int curr=0;
    while(curr<=high){
        if(nums[curr]==0){
            swap(nums[low],nums[curr]);
            low++,curr++;
        }
        else if(nums[curr]==1){
            curr++;
        }
        else{
            swap(nums[curr],nums[high]);
            high--;
        }

    }

    }
};