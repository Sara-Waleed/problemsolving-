
#include <iostream>


using namespace std;

int main()

{
        string word;
        cin>>word;
        int size=word.size();
    for(int i=0;i<size;i++){
        if(word[i]==','){
            cout<<" ";
            
        }
        else if(word[i]>='a'&&word[i]<='z'){
            int ch=word[i]-32;
            char res=ch;
            cout<<res;
            
        }
        else{
             int ch=word[i]+32;
            char res=ch;
            cout<<res;
            
        }
    }

      return 0;
}
