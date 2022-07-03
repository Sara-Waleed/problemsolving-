
#include<bits/stdc++.h>

using namespace std;
 
int main()
{
 
 int size,minm,counter=0;
 cin>>size;
 int arr[size];
 for(int i=0;i<=size-1;i++){
  cin>>arr[i];
 } 
 for(int i=0;i<=size-1;i++){
     if(i==0){
     minm=arr[i];
}
     else if(arr[i]<=minm){
         minm=arr[i];
         
     }
     
    
         
     }
 
 for(int x=0;x<=size-1;x++){
     if(minm==arr[x]){
         counter++;
         
         
     }
 }
         if(counter%2==0){
             cout<<"Unlucky";
             
         }
         else{
             cout<<"Lucky";
         }
     
 

    return 0;
   
}
