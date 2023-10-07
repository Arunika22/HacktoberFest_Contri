// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

// C++ program to print kadane's Algorithm
#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int i =0 ;i<nums.size();i++){
            currSum = max(nums[i],currSum+nums[i]);
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
// Driver Code
int main()
{
    vector<int> a = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = a.size();
 
    // Function Call
    int max_sum = maxSubArray(a);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
