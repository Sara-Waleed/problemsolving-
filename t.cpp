#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    float Y;
    while (T--)
    {
        cin >> Y;
         
        cout << fixed<<setprecision(1)<<Y/2 << endl;

    }


    return 0;
}