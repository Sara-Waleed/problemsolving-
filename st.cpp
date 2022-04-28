#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
    
    string word;
    cin>>word;
    sort(word.begin(),word.end());
    int size=word.size();
     for(int i=0;i<size;i++){
         char ch=word[i];
         int counter=1;
        while(word[i]==word[++i]){
            counter++;
        }
        i--;
        cout<<ch<<" "<<":"<<" "<<counter<<endl;
     }
    
    
    
      return 0;
}
