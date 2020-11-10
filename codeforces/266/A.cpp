#include <bits/stdc++.h>

using namespace std;

int main() {
int n,cnt=0;
cin>>n;
char arr[n];
cin>>arr;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            cnt++;
    }
cout<<cnt<<endl;
	return 0;
}

