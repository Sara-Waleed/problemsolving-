
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,a,b;
    long long sum=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        if(i/10==0){
            if(i>=a&&i<=b){
                sum+=i;
                
            }
        }
            else{
                int num=i;
                int mysum=0;
                while(num){
                    int d=num%10;
                    mysum+=d;
                    n/=10;
                    
                }
                if(mysum>=a&&mysum<=b){
                    sum+=i;
                }
            }
        }
        cout<<sum<<endl;
    
    return 0;
}
