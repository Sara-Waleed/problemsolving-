#include <iostream>
#include<string>
using namespace std;

 void re(string name ){
    
    for(int i=name.size();i>=0;i--){
       cout<<name[i];
        
    }
    
}
int main()
{
    string n;
    cin>>n;
    re(n);
    
    
    return 0;
}