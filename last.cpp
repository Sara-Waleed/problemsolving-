#include <iostream>
#include <cmath>
using namespace std;
bool sumx(int num){
  int newn=sqrt(num);
  int flag=0;
  for(int i=0;i<newn;i++){
     if(num%i==0){
         flag=1;
         break;
     }
  }
  return flag;
}

int main()
{
    
    
     int size;
     cin>>size;
     while(size--){
         int numb;
         cin>>numb;
         if(numb==1){
             cout<<"NO"<<endl;
             continue;
         
         int p=sumx(numb);
         if(p==1){
             cout<<"NO"<<endl;
         }
         else{cout<<"YES"<<endl;
             
         }
         }
     }
      return 0;
}
