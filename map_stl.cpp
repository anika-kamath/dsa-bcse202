#include<map>
#include<iostream>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="hello";
    m[2]="world";
    m[12]="anika";
    m.insert({20,"kamath"});

    //print key and value pair
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}