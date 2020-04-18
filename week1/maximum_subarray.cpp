// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// Example:

// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Follow up:

// If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

#include <stdio.h>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:         
    int maxSubArray(vector<int>& nums) {
        // O(N2) 
        // int val = nums[0];
        // for (int i=0;i<=nums.size();i++){
        //     for (int j=i+1;j<=nums.size();j++){
        //         if(accumulate(nums.begin()+i, nums.begin()+j, 0) > val ){
        //             val = accumulate(nums.begin()+i, nums.begin()+j, 0);
        //         }
        //     }
        // }
        // cout << val << endl;
        // return val;
        // 

        // -> The below logic doesn't work
        // int max_val = nums[0];
        // int min_val = nums[0];
        // int max_index = 0;
        // int min_index = 0;
        // int next_val = nums[0];
        // for (int i=1;i<nums.size();i++){
        //     next_val += nums[i];
        //     if(next_val>max_val){
        //         max_val = next_val;
        //         max_index = i;
        //     }
        //     else if(next_val<min_val){
        //         min_val = next_val;
        //         min_index = i;
        //     }
        // }
        
        // if (min_index < max_index){
        //     for (int i=0;i<nums.size();i++){
        //         if(nums[i]> (max_val- min_val)){
        //             return nums[i];
        //         }  
        //     }
        //     return max_val - min_val;
        // }
        // else
        // {   for (int i=0;i<nums.size();i++){
        //         cout <<"i" << nums[i] <<(max_val- min_val); 
        //         if(nums[i]> (max_val- min_val)){
        //             return nums[i];
        //         }  
        //     }
        //     return max_val;
        // }
        // O(N) -> Kadane’s algorithm (Dynamic programming)
        // O(LOG N) -> 
    }
};

int main(){
    vector<int> nums;
    // [-2,1,-3,4,-1,2,1,-5,4]
    nums.push_back(-2);
    nums.push_back(-1);
    // nums.push_back(-3);
    // nums.push_back(4);
    // nums.push_back(-1);
    // nums.push_back(2);
    // nums.push_back(1);
    // nums.push_back(-5);
    // nums.push_back(4);

    Solution sol;
    cout << sol.maxSubArray(nums);

}