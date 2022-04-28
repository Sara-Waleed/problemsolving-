
#include <iostream>


using namespace std;

int main()

{
    
    int counter;
    cin>>counter;
    while(counter--){
        string s,t;
        cin>>s>>t;
        int size=s.size()+t.size();
        int flag1=1;int flag=1;
    for(int i=0;i<size;i++){
       if(s.size()!=i&&flag1){
           cout<<s[i];
         
       }
       else{flag1=0;}
        if(t.size()!=i&&flag){
           cout<<t[i];
         
       }
       else{flag=0;
           
       }       
        
    }
    cout<<endl;
    }
      return 0;
}
