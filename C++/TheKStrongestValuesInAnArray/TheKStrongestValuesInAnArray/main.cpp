#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getStrongest(vector<int>& arr, int k)
{
    vector<int> res;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int l = 0;
    int r = arr.size() - 1;
    int m = arr[(n - 1) / 2];
    for (int i = 0; i < k; i++)
    {
        if (abs(arr[r] - m) >= abs(arr[l] - m))
        {
            res.push_back(arr[r]);
            r--;
        }
        else
        {
            res.push_back(arr[l]);
            l++;
        }
    }
    return res;
}

int main() {

    return 0;
}