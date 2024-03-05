#include<iostream>
#include<string>

using namespace std;
int main(){
    string s = "zheshiyigezifuchuan";
    
    cout <<s<<endl;
    for(int i = 0;i<s.size();i++){
        s[i]='X';
    }
    
    cout <<s<<endl;
    return 0;
}
