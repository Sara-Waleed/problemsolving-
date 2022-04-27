#include <iostream>

using namespace std;

int main()
{
    
    string word;
    cin>>word;
    int frequency[150]={0};
    for(int i=0; i<word.size();i++){
        frequency[word[i]]++;
         for(int i='a'; i<='z';i++)
         
         if(frequency[i]){
             cout<<(char) i<<" "<<frequency[i]<<"\n";
         }
    }
    
    
return 0; 
    
}