#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x) {
    string number = to_string(x);
    reverse(number.begin(), number.end());
    if (number == to_string(x)) return true;
    else return false;
}

int main() {

    return 0;
}