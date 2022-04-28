
#include <iostream>


using namespace std;

int main()

{
        string word;
        cin>>word;
        int size=word.size();
        int flag=0;
    for(int i=0;i<size-2;i++){
        if((word[i]=='0'&&word[i+1]=='1'&&word[i+2]=='0')||(word[i]=='1'&&word[i+1]=='0'&&word[i+2]=='1')){
            flag=1;
            break;
}
}
if(flag=1){
     cout<<"Bad"<<endl;
}
else{cout<<"Good";}
      return 0;
}
