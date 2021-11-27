//
// Created by czr on 2021/11/27.
//

#include "p3.h"
#include <string>
#include <unordered_set>
using namespace std;

int P3Solution1::lengthOfLongestSubstring(string s) {
    int length = s.length(), ans = 0, left = 0;
    if (length == 0) return 0;
    unordered_set<char> set;
    for (int i = 0; i < length; ++i) {
        while (set.find(s.at(i)) != set.end()) {
            set.erase(s.at(left++));
        }
        set.insert(s.at(i));
        ans = max(ans, i - left +1);
    }
    return ans;
}

