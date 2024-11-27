#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    bool flag = false;
    int left = 0;
    int right = nums.size() - 1;
    int mid = 0;

    while ((left <= right) && (flag != true))
    {
        mid = (left + right) / 2;

        if (nums[mid] == target) flag = true;
        if (nums[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    if (flag)
        return mid;
    else
        return -1;
}

int main() {

    return 0;
}