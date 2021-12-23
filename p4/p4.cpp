//
// Created by 13903 on 2021/12/5.
//
#include "p4.h"
#include <vector>
#include <algorithm>
using namespace std;

double P4Solution1::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    int l = nums1.size();
    if(l%2==1){
        return 1.0*nums1.at(l/2);
    }else{
        return 0.5*(nums1.at(l/2-1)+nums1.at(l/2));
    }
}


