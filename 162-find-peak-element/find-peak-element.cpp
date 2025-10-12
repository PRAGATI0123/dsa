class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() ;
      int low = 0 ;
      int high = n- 1;

      while( low <= high){
        int mid = low +(high - low)/2;

       bool left = (mid == 0) || (nums[mid] > nums[mid-1]);
       bool right = (mid == n-1) ||(nums[mid] > nums[mid+1]);

       if(left && right){
        return mid ;
       }
       if(mid < n-1 && nums[mid] < nums[mid+1]){
        low = mid + 1;
       }else{
        high = mid - 1;
       }
    }
    return -1;
    }
};