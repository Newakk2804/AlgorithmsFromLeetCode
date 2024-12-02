#include <iostream>
#include <string>

using namespace std;

bool judgeCircle(string moves)
{
    int y = 0;
    int x = 0;

    for (int i = 0; i < moves.size(); i++)
    {
        if (moves[i] == 'U') y++;
        else if (moves[i] == 'D') y--;
        else if (moves[i] == 'R') x++;
        else if (moves[i] == 'L') x--;
    }

    if (y == 0 && x == 0) return true;
    else return false;
}

int main() {

    return 0;
}