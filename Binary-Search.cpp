// Binary search is a search algorithm for searching an element in a sorted array
// TC-O(logn);
// It divides the array into 3 parts :- mid, left to mid, right to mid
// At every step, it basically reduces the size of array to half on basis of whether an element is greater
// or smaller than the element present at index 'mid'



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            // to avoid integer overflow, mid=s+((e-s)/2);
            // mid=(s+e)/2
            int mid = s+((e-s)/2);
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
};
