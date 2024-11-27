#include <iostream>
#include <string>

using namespace std;

int scoreOfString(string s)
{
    int n = s.length() - 1;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += abs(s[i] - s[i + 1]);
    }
    return res;
}

int main() {

    return 0;
}