#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main(){

    vector<string>v;
    string s;

    while(cin >>s){
        v.push_back(s);
    }

    for(auto &str:v){
        for(auto &c:str){
            c = toupper(c);
        }
    }

    for(auto i:v){
        cout <<i<<endl;
    }

    return 0;
}
