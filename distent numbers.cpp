
#include <iostream>
#include<string>
#include <bits/stdc++.h>
#include<cmath>
#include <array>
#include <algorithm>
using namespace std;

void disnum(int arr1[],int len){
    int counter=1;
     for(int i =1;i<len;i++){
         if(arr1[i]!=arr1[i-1]){
             counter++;
             
         }
     }
     cout<<counter;
     
}
 
int main(){
    int size;
    cin>>size;
    if(size==0){
       cout<<0;
       
        return 0;
        
    }
    int arr1[size],arr2[size];
   
    for(int i =0;i<size;i++){
        cin>>arr1[i];
    }
    
    sort(arr1,arr1+size);
    
   disnum(arr1,size);
   
   
    return 0;
}