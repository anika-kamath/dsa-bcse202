#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max heap
    priority_queue<int> maxh;

    //min heap
    priority_queue<int,vector<int>,greater<int>> minh;

    int n,ele;
    cout<<"Enter number of elements in Max Heap: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>ele;
        maxh.push(ele);
    }

    int n1=maxh.size();

    cout<<"Max heap implementation: ";
    for(int i=0;i<n1;i++){
        cout<<maxh.top()<<" ";
        maxh.pop();
    }
    cout<<endl;

    minh.push(1);
    minh.push(3);
    minh.push(2);

    int n2=minh.size();

    cout<<"Min heap implementation: ";
    for(int i=0;i<n2;i++){
        cout<<minh.top()<<" ";
        minh.pop();
    }
    cout<<endl;


    return 0;
}