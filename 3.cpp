#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=1582 && a<=2200){
        if(a%4==0 && a!=1900 && a!=2100)cout<<"LEAP";
        else cout<<"NORMAL";
    }
    else cout<<"ERROR";
    return 0;
}
