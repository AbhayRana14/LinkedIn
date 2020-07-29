#include <cstdio>
#include <iostream>
using namespace std;


class A{
    int _value=0;
    public:
    void setv(const int a){
        _value=a;
        };
    int getv(){
        return _value;
    };

};


int main(){
    A a;
    a.setv(42);
    printf("a is %d\n",a.getv());
    return 0;
}