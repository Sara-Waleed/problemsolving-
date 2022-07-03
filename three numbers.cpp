
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int K,S,P=0;
    cin >> K>> S;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        { 
            int  y = S - (i + j);
            
 
                if (i+j+y==S&&y<=K&&y>=0)
                    P++;
            
        }
    }
    cout << P << endl;
    return 0;
   
}
