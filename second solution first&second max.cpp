
#include <iostream>

using namespace std;

int main()
{
int size;
cin>>size;
int nums[size];
for(int i=0;i<size;i++){
    cin>>nums[i];
    
}
int max1=-1,max2=-1;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
   
        if(max1==-1){
            max1=i,max2=j;
            
        }
        else if(nums[max1]+nums[max2]<(nums[i]+nums[j])){
            max1=i;
            max2=j;
        }
        
    }
}
cout<<nums[max1]<<" "<<nums[max2];

    return 0;
}
