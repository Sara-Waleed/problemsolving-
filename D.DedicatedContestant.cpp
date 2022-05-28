
#include <iostream>

using namespace std;

int main()
{
    freopen("tank.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n,s,t;
        cin>>n>>s>>t;
        for(int i=0;i<=100000;i++)
{
    int x=i;
    int y=i;
  if(n==(x*s + y*t)){
      cout<<x<<" "<<y;
      
  }
 
}   

        
    }
    
    
    
    
    
    
    
       return 0;
}
    
    