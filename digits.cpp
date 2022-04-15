#include <iostream>
#include<string>
using namespace std;

int main()
{


int counter;
cin>>counter;
for(int i =0;i<=counter-1;i++){
    string number;
    cin>>number;
    int size=number.size();
    
    for(int j=size-1;j>=0;j--){
        
        cout<<number[j]<<" ";
        
    }
    cout<<endl;
}
  
    return 0;
}
