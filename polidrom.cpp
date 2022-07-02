
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 
 string n;
 cin>>n;
 string d=n;
 reverse(n.begin(),n.end());
 
 int num;
 stringstream ss;
 ss << n;
 ss >> num;
 cout<<num<<endl;
 if(d==n){
     cout<<"YES";
 }
 else{
     cout<<"NO";
 }
 
    return 0;
}