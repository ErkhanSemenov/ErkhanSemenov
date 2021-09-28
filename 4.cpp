#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=1 && a<=100){
        if(a%10==1)cout<<"ВАМ "<<a<<" ГОД";
        else if(a%10>1 && a%10<5)cout<<"ВАМ "<<a<<" ГОДА";
        else if(a%10<4 || a%10==0)cout<<"ВАМ "<<a<<" ЛЕТ";
    }
    else cout<<"ERROR";
    return 0;
}
