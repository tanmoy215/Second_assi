#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    char dh;
    cout<<"enter first character : ";
    cin>>ch;
    cout<<"enter second character : ";
    cin>>dh;
    int n = (int)ch - int(dh);
    cout<<"final ans is : "<<n<<endl;
    return 0;
}