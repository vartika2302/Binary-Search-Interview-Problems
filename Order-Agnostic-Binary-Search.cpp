 // Here order of the array is known to us
// Also check for the condition if the array has 1 element , in that case accessing num[1] will not be valid

        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int s=0;
            int e=n-1;
            while(s<=e){
                int mid=s+((e-s)/2);
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target){
                    if(n>=2 && nums[0]<nums[1]){
                        e=mid-1;
                    }else{
                        s=mid+1;
                    }
                }
                else{
                    if(n>=2 && nums[0]<nums[1]){
                        s=mid+1;
                    }else{
                        e=mid-1;
                    }
                }
            }
            return -1;
        }
