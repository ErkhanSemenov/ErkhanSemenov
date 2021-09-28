#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && c+b>a && a+c>b){
        if (c>a && c>b){
            if(a*a+b*b==c*c)cout<<"1";//ПРЯМОУГОЛЬНЫЕ
            else if(a*a+b*b>c*c)cout<<"2";//ОСТРОУГОЛЬНЫЙ
            else if(a*a+b*b<c*c)cout<<"3";//ТУПОУГОЛЬНЫЙ
            }
        else if (b>a && b>c){
            if(a*a+c*c==b*b)cout<<"1";//ПРЯМОУГОЛЬНЫЕ
            else if(a*a+c*c>b*b)cout<<"2";//ОСТРОУГОЛЬНЫЙ
            else if(a*a+c*c<b*b)cout<<"3";//ТУПОУГОЛЬНЫЙ
            }
        else {
            if(a*a+b*b==c*c)cout<<"1";//ПРЯМОУГОЛЬНЫЕ
            else if(a*a+b*b>c*c)cout<<"2";//ОСТРОУГОЛЬНЫЙ
            else if(a*a+b*b<c*c)cout<<"3";//ТУПОУГОЛЬНЫЙ
            }
    }
    else cout<<"ERROR";
    return 0;
}
