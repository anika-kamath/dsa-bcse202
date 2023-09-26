#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n,ele;
    cout<<"Enter number of elements: ";
    cin>> n;
    cout<<endl<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    //binary search
    cout<<"Is 7 present in the array?: "<<binary_search(v.begin(),v.end(),7)<<endl;

    //rotate vector 
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotation: ";
    for(int i:v){
        cout<<i<<" ";
    }

    //sort vector
    sort(v.begin(),v.end());
    cout<<endl<<"After sorting: ";
    for(int i:v){
        cout<<i<<" ";
    }

    //reverse string
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<endl<<s;
    return 0;

}