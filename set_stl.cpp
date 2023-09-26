//element occurs only once in set
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    cout<<"Enter 5 elements in the set: ";

    int ele;
    for(int i=0;i<5;i++){
        cin>>ele;
        s.insert(ele);
    }

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.find(3);
    cout<<"Value present at iterator: "<<*it<<endl;
    return 0;
}