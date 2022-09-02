
#include <iostream>
#include <string>
using namespace std;

int main()
{
      
      int counter=100;
      
    int n,m,ma,me;
     while(counter--){
    cin>>n>>m;
    if(n>=m){
        ma=n;
        me=m;
        
    }
    else{
    ma=m;
    me=n;
    }
 
      if(n>0&&m>0){
 
    int sum=0;
    for(int i=me;i<=ma;i++){
    sum=sum+i;
        cout<<i<< " ";
    }
        cout<<"sum ="<<sum<<'\n';
    }
    else{
      break;
    }
     }
    
    return 0;
} 