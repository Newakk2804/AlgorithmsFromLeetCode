#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string s, int numRows)
{
    vector<string> prom(numRows);
    bool flag = true;
    int j = 0;
    if (numRows == 1) return s;
    for (int i = 0; i < s.length(); i++)
    {
        prom[j] += s[i];
        if (flag) j++;
        else j--;
        if (j == numRows)
        {
            j = numRows - 2;
            flag = false;
        }
        if (j < 0)
        {
            j = 1;
            flag = true;
        }
    }
    string res;
    for (int i = 0; i < prom.size(); i++)
    {
        res += prom[i];
    }
    return res;
}

int main() {

    return 0;
}