//
// Created by czr on 2021/9/5.
//

#include "p1.h"
#include <vector>
using namespace std;

vector<int> P1Solution1::twoSum(vector<int> &nums, int target) {
    int a=0, b=0;
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i]+nums[j] == target){
                a=i, b=j;
                return vector<int>{a, b};
            }
        }
    }
    return vector<int>{a, b};
}