// Array is right rotated.
// Sorted array - 1,2,3,4,5,6,7,8
// Rotated Sorted array - 5,6,7,8,1,2,3,4
// In sorted array, when it is 0 times rotated, minimum index is at 0th index.
// In rotated sorted array, minimum index is at 4th index.
// By observation - number of times sorted array is rotated = index of minimum element
// Let's say index of minimum element as 'pivot'

// We can find index of minimum element by applying linear search but that takes TC-O(N)
// So we will apply binary search to find minimum element though we don't know the minimum element yet.

// Steps:
// 1.) Firstly we have to find whether mid element is minimum element or not.
// 2.) If mid is not the minimum element, find factor to decide whether we have to move left or right of mid;


// If a element is smaller than both its left and right neighbours, then that will the minimum element.
// If not then we have to move to either left or right, basically we move towards unsorted part becoz by observation minimum element lies at unsorted part.


int numRotatedSorted(vector<int>& nums){
  int n = nums.size();
  int s = 0;
  int e = nums.size()-1;
  if(nums[s]>nums[e]){
    while(s<=e){
    int mid = s+((e-s)/2);
    int prev = (mid-1+n)%n;
    int next = (mid+1)%n;
    if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
      return mid;
    }
    else if(nums[s]<=nums[mid]){
      s=mid+1;
    }
    else if(nums[mid]<=nums[e]){
      e=mid-1;
    }
  }
  }else{
    return 0;
  }
}
