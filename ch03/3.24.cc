#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    vector<int> vInt;
    int iVal;
    cout <<"input some nums : "<<endl;
    while(cin>>iVal){
        vInt.push_back(iVal);
    }
    if(vInt.cbegin()==vInt.cend()){
        cout<<"no num"<<endl;
        return -1;
    }
    cout <<"相邻亮相的和一次是："<<endl;

    for(auto it = vInt.cbegin();it != vInt.cend()-1;it++){
        cout <<(*it +*(++it))<<" ";
        if((it-vInt.cbegin()+1)%10==0)
            cout <<endl;
    }

    if(vInt.size()%2!=0)
        cout <<*(vInt.cend()-1);
    return 0;
}
