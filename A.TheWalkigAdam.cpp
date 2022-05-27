#include <iostream>
#include<string>
#include <
using namespace std;

int main()
{
freopen(" The Walking Adam","r",stdin);
   int t;
   cin>>t;
   while(t--){
       int counter=0;
         string s;
          cin>>s;
          int size=s.size();
   for(int o=0;o<=size;o++){
           if(s[0]!='D'){
               if(s[o]=='U'){
                  counter++;
               }
               else{
                  break;
               }
           }
        
            
        
          
       
       }
        cout<<counter<<'\n';
       
   }

    return 0;
}