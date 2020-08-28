#include <iostream>

using namespace std;

int main(){
    
    int matches,counter1,counter2;
    char status;
    
    cin>>matches;
    
    for(int i=0;i<matches;i++){
        cin>>status;
       if(status=='D')
       counter1++;
       else
       counter2++;
    }
     if(counter1>counter2)
     cout<<"Danik";
     else if(counter1<counter2)
     cout<<"Anton";
     else
     cout<<"Friendship";
    
    
}