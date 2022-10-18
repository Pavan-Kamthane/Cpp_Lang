class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                return binarySearch(nums, low, mid-1, target);
            }
            else{
                return binarySearch(nums, mid+1, high, target);
            }
        }
        return low;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};