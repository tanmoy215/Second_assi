#include<bits/stdc++.h>
using namespace std;
int main(){
    int height;
    int radious;
    cout<<"enter height of cylinder : ";
    cin>>height;
    cout<<"enter radious of a cylinder : ";
    cin>>radious;
     float pi = 3.142;
     float ans = pi*radious*radious*height;
     cout<<"ans is "<<ans<<endl;
    return 0;
}