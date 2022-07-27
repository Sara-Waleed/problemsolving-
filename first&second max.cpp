
#include <iostream>

using namespace std;

int main()
{
int max1,max2,size;
cin>>size;
int num[size];
for(int i=0;i<size;i++){
    cin>>num[i];
    
}
if(num[0]>=num[1]){
    max1=num[0];
    max2=num[1];
    
}
else{
    max1=num[1];
    max2=num[0];
}
for(int i=2;i<size;i++){
    if(max1<=num[i]){
        max2=max1;max1=num[i];
        
    }
    else if(max2<num[i]){
        max2=num[i];
        
    }
}
cout<<max1<<" "<<max2;

    return 0;
}
