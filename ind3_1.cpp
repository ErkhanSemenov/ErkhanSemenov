#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch (a){
        case 1:
        cout<<"ЯНВАРЬ";
        break;
        case 2:
        cout<<"ФЕВРАЛЬ";
        break;
        case 3:
        cout<<"МАРТ";
        break;
        case 4:
        cout<<"АПРЕЛЬ";
        break;
        case 5:
        cout<<"МАЙ";
        break;
        case 6:
        cout<<"ИЮНЬ";
        break;
        case 7:
        cout<<"ИЮЛЬ";
        break;
        case 8:
        cout<<"АВГУСТ";
        break;
        case 9:
        cout<<"СЕНТЯБРЬ";
        break;
        case 10:
        cout<<"ОКТЯБРЬ";
        break;
        case 11:
        cout<<"НОЯБРЬ";
        case 12:
        cout<<"ДЕКАБРЬ";
        break;
        default:
        cout<<"ERROR";
        break;
    }
    
    return 0;
}
