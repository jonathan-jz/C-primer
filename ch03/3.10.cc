#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1("hello,world");
    string s2;

    for(auto x :s1){
        if(!ispunct(x)){
            s2 +=x;
        }
    }
    cout <<s2<<endl;
    return 0;
}
