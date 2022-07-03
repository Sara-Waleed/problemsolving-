#include<iostream>
using namespace std;
int main (){
    int n;
cin>>n;
long long a[n];
int cntr=0;
 
for(int i=0;i<n;i++){
cin>>a[i];
}
 
while(true){
    bool s=0;
    for(int i=0;i<n;i++){
 
    if(a[i]%2==0){
    a[i]/=2;
    }
    else{
    s=1;
    }
    }
    if(s==0){
    cntr++;
    }
    if(s==1){
    break;
    }
 
}
cout<<cntr;
}