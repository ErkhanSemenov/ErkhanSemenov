#include <iostream>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if((y<=x) && (x*x+y*y>=4) && (x<=2)){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
