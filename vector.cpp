#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
int n;
cin>>n;
char s;
vector<int>v(5);
while(n--)
{
    cin>>s;
    v[int(s-'a')]++;
}
auto pair=minmax_element(v.begin(),v.end());
cout<<pair.first<<" "<<pair.second;
    return 0;
}