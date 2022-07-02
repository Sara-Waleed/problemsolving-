
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;
while(cin>>n>>m){
    int start,end;
    long long sum=0;
    
    if(n<=0||m<=0){
    return 0;
    }
   if(n>=m){
       start=m;
       end=n;
   }
if(n<=m){
       start=n;
       end=m;
   }
   for(int i=start;i<=end;i++){
       cout<<i<<" ";
       sum=sum+i;
   }

   cout<<"sum ="<<sum<<endl;
}
    return 0;
}
