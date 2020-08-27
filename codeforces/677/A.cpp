#include <iostream>
 
using namespace std;
 
int main(){
    
 int persons,height,x,width;
 width=0;
 cin>>persons>>height;
 
 for(int i=0;i<persons;i++){
     cin>>x;
     if(x>height)
     width++;
     
     width++;
 }
 cout<<width;
}
