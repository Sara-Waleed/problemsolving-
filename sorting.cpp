#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
    int size ;  cin>>size;
    int ar[size]; int arr[size];
    for( int i=0; i<size;i++){
        cin>>ar[i];
    
    } 
    sort(ar,ar+size);
    
    for(int j=0; j<size;j++){ 
        cin>>arr[j];
        
    } 
    sort(arr,arr+size);
    
    int flag=0;
    for(int i =0; i<size; i++){
       if(ar[i]!=arr[i]){
           flag =1;
           break;
           
       } 
    }
      if(flag==0){
          cout<<"Yes"<<endl;
          
      }
    
        else {
            cout<<"No"<<endl;
            
        }
    
    
      return 0;
}