class Solution {
private:
    int firstPos(vector<int>& nums,int target,int n){
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+((e-s)/2);
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    
    int lastPos(vector<int>& nums, int target, int n){
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+((e-s)/2);
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // vector<int>res;
        // int n = nums.size();
        // int s=firstPos(nums,target,n);
        // if(s==-1) return res;
        // int e=lastPos(nums,target,n);
        // for(int k=s;k<=e;k++){
        //     res.push_back(k);
        // }
        // return res;
        
        
        
        // Optimal Solution using counting sort
        vector<int>res;
        int cnt=0;
        int rank=0;
        for(auto el:nums){
            cnt+=el==target;
            rank+=el<target;
        }
        while(cnt--){
            res.push_back(rank);
            rank++;
        }
        return res;
    }
};