#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main(){
    vector<string>s;
    string str;
    while(cin >>str){
        s.push_back(str);
    }
   // cout << s <<endl;
    for(int i = 0;i<s.size();i++)
    {
        cout <<s[i] <<endl;
    }


    return 0;
}
