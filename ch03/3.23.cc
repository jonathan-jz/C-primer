#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;

int main(){

    vector<int> v(10, 1);
    for (auto it=v.begin(); it!=v.end(); it++){
        *it *= 2;
    }
    for (auto one : v){
        cout << one <<endl;
    }

    return 0;
}
