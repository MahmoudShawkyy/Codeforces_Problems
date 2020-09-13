#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin>>number;
    int elements[number];
    
    for(int i=0;i<number;i++)
    cin>>elements[i];
    
    sort(elements,elements+number);
    
    for(int i=0;i<number;i++)
    cout<<elements[i]<<" ";
    
    return 0;
    
    
    
}