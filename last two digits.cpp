#include <iostream>
#include<cmath>
using namespace std;
int main()
{
long long  a,b,c,maxe,mine,middle;
cin>>a>>b>>c;
if(a>=b&&a>=c){
   maxe=a;
   if(b>=c){
    middle=b;
    mine=c;
   }
   else{
    middle=c;
    mine=b;

   }
}
else if(b>=a&&b>=c){
   maxe=b;
    if(a>=c){
    middle=a;
    mine=c;
   }
   else{
    middle=c;
    mine=a;

   }

}
else{

    maxe=c;
     if(a>=b){
    middle=a;
    mine=b;
   }
   else{
    middle=b;
    mine=a;

   }
}
cout<<mine<<'\n'<<middle<<'\n'<<maxe<<'\n'<<endl;
cout<<a<<'\n'<<b<<'\n'<<c<<endl;

	  return 0;
}