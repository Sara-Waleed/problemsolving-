#include <iostream>

using namespace std;

int main()

{
    int size,min,max; ;  cin>>size;
    int arr[size];
    for( int i=0; i<size;i++){
        cin>>arr[i];
    
    } 
     min=arr[0];
     max=arr[0];
     int mind=0;
     int maxd=0;
    for( int i=1; i<size;i++){
        if(min>arr[i]){
            min=arr[i];
            mind=i;
            
        }
        if(max<arr[i]){
            max=arr[i];
            maxd=i;
            
        }
    }
       arr[mind]=max;
       arr[maxd]=min;
       
       for(int i=0;i<size;i++){
           cout<<arr[i]<<" ";
       
        
    } 

      return 0;
}