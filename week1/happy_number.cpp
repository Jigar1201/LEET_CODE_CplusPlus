// Write an algorithm to determine if a number n is "happy".
// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
// Return True if n is a happy number, and False if not.

// Example: 

// Input: 19
// Output: true
// Explanation: 
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

// NOTE: This could be implemented using sets as well. 

#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        vector<int> seen;
        int sum_of_squares;
        seen.push_back(n);
        while (true){
            sum_of_squares = 0;
            while (n!=0){
                sum_of_squares += pow((n%10),2); 
                n/=10;
            }
            n = sum_of_squares;
            if(n == 1){
                return 1;
            }
            for (vector<int>::iterator it = seen.begin();it !=seen.end();it++){
                if (*it ==n){
                    return 0;
                }
            }
            seen.push_back(sum_of_squares);
        }
    }
};

int main(){
    int n = 19;
    Solution sol;
    cout << sol.isHappy(n); 
}