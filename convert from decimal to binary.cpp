
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
   for(int i=1;i<=number;i++){
        int num;
        cin>>num;
        int counter =0;
        while(num>0){
        if(num%2==1){
        counter++;
            
        }
        num/=2;
    }
   long long sum=0;
   for(int z=0;z<counter;z++){
       sum+=1* pow(2,z);
       
   }
   cout<<sum<<endl;
    }
   
    return 0;
}
