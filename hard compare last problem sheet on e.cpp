
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
   double a,b,c,d;
   cin>>a>>b>>c>>d;
   double first=b*log(a);
   double second =d*log(c);
   if(first>second){
      
       cout<<"YES"<<endl;   
   }
   else{
       cout<<"NO";
       
   }

    return 0;
}
