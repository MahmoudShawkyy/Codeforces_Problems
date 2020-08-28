#include <iostream>

using namespace std;

int main(){
    
    int problems,counter=0;
    int x,y,z,sum;
    
    cin>>problems;
    
    for(int i=0;i<problems;i++){
      cin>>x>>y>>z;
      sum=x+y+z;
     if(sum>=2)
       counter++;
    }
cout<<counter<<endl;
    
}