#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'U')
            y++;
        else if (S[i] == 'D')
            y--;
        else if (S[i] == 'L')
            x--;
        else if (S[i] == 'R')
            x++;
    }
    cout << x << " " << y << endl;

    return 0;
}