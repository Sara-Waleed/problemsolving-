
#include <iostream>

using namespace std;

int main()
{
    
 string first,second;
 cin>>first>>second;
  int mx=first.size();
 if(mx<second.size())
     mx=second.size();
 for(int i=0;i<mx;i++){
     if(i<first.size())
         cout<<first[i];
    if(i<second.size())
         cout<<second[i];
         
         
     }
     
 cout<<"\n";
 
    
return 0; 
    
}