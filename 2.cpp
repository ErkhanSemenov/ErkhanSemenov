#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>47 && a<58)cout<<"DIGIT";
    else if(a>64 && a<91)cout<<"CAPITAL";
    else if(a>96 && a<123)cout<<"LOWERCASE";
    else cout<<"NON-ALPHANUMERIC";
}
