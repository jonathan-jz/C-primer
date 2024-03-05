#include<iostream>
#include<vector>
#include<iterator>
#include<string>

using namespace std;

int main(){
    const int sz =10;
    int a[sz],b[sz];
    for(int i = 0;i<sz;i++){
        a[i]=i;
    }
    for(int j = 0;j<sz;j++){
        b[j]=a[j];
    }

    for(auto val:b){
        cout <<val;
    }

    return 0;
}
