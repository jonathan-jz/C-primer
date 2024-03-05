#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    while(cin >>s1>>s2){
        if(s1.size()>s2.size()){
            cout << s1<<endl;
        }else{
            cout <<s2<<endl;
        }
    }
    return 0;
}

