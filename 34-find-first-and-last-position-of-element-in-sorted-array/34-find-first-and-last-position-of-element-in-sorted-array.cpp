class Solution {
private:
    int firstPos(vector<int>& nums, int target,int n){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s+((e-s)/2);
            if(nums[mid]==target){
                ans = mid;
                e = mid-1;
            }else if(nums[mid]>target){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
    }
    
    int lastPos(vector<int>& nums,int target,int n){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s+((e-s)/2);
            if(nums[mid]==target){
                ans = mid;
                s = mid+1;
            }else if(nums[mid]>target){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>res;
        int n = nums.size();
       res.push_back(firstPos(nums,target,n));
       res.push_back(lastPos(nums,target,n));
       return res;
    }
};