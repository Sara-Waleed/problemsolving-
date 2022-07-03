int num;
 cin>>num;
int lines=num-1;
for(int i=1;i<=num;i++){
    for(int x=1;x<=lines;x++){
    cout<<" ";
    
}
for(int z=1;z<i*2;z++){
    cout<<"*";
    
}
cout<<endl;
  lines--;
}
lines=1;
for(int i=num;i>=1;i--){
    for(int z=1;z>=lines;z++){
    cout<<" ";
}
for(int x=i*2;x>1;x--){
    cout<<"*";
    
}
 cout<<endl;
 lines++;
}