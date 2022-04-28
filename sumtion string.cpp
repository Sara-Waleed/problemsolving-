
#include <iostream>


using namespace std;

int main()

{
    int sum=0;
    
 string word;
 cin>>word;
 for(int i=0;i<word.size();i++){
  
    sum+=word[i]-'0';
 }
cout<<sum<<endl;
      return 0;
}
