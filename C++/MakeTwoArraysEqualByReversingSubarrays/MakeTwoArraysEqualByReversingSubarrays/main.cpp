#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canBeEqual(vector<int>& target, vector<int>& arr) {
    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());

    for (int i = 0; i < target.size(); i++)
    {
        if (target[i] != arr[i]) return false;
    }
    return true;
}

int main() {

    return 0;
}