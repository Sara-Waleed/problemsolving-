#include <iostream>
#include<math.h>
using namespace std;

int main()
{
long long A,B,C,D;
cin>>A>>B>>C>>D;
long long v= pow(A,B);
long long r= pow(C,D);

 cout<<v<<endl;
 cout<<r;

if(v>0&&r>0&&v>r)
   cout<<"YES";


else{
    cout<<"NO";

   }
    return 0;
}