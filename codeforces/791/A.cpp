#include <iostream>

using namespace std;

int main(){
    
    int weight1,weight2;
    int counter=0;
    
    cin>>weight1>>weight2;
    
  while(weight1<=weight2){
             weight1=weight1*3;
        weight2=weight2*2;
        counter++;
  }
    
    cout<<counter<<endl;
    
    
}