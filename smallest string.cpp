#include <iostream>


using namespace std;

int main()

{
    
  
 string word,name;
cin>>word>>name;

int size1=word.size();
int size2=name.size();
int size= min(size1,size2);

int flag=0;

for(int i=0; i<size;i++){
    if(word[i]<name[i]){
        cout<<word<<endl;
        flag=0;
        break;
    }
    else if(word[i]>name[i]){
        cout<<name<<endl;
        flag=0;
        break;
    }
    else{
        flag=-1;
    }

}

if(flag==-1){
    if(size1>size2){
        cout<<name;
    }
    else{
        cout<<word;
    }
}


 
    
   
      return 0;
}
