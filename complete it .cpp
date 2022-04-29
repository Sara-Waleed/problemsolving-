#include <iostream>
#include <cmath>
using namespace std;
void equation(){
    int x;
    cin>>x;
    int arr[x];
   for(int i=0;i<x;i++){
       cin>>arr[i];
       
   } 
 
    for(int i=0;i<x;i++){
       int minn=arr[0];
        int maxx=arr[0];
         int flag=0;
        if(arr[i]<minn){
            minn=arr[i];
            flag=1;
            break;
            
        
        if(arr[i]>maxx){
            maxx=arr[i];
            flag=1;
            break;
        }
    }
   if(flag==1){
       cout<<minn<<" "<<maxx;
   }}
   
}

int main()
{
 
 equation();
  
      return 0;
}
