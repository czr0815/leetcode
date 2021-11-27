#include <iostream>
#include "p1/p1.h"
#include <vector>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = vector<int>{2, 7, 11, 5};
    P1Solution1 p1Solution1;
    vector<int> ans = p1Solution1.twoSum(nums, 13);
    printf("%d %d\r\n", ans[0], ans[1]);
    return 0;
}
