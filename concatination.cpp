#include <iostream>


using namespace std;

int main()

{
    
 string a,b;
 cin>>a>>b;
 int size1=a.size();
 int size2=b.size();
 string con=a+b;
 cout<<size1<<" "<<size2<<endl;
 cout<<con<<endl;
 char first1=a[0];
 char first2=b[0];
 a[0]=first2;
 b[0]=first1;
 
    cout<<a<<" "<<b;
      return 0;
}
