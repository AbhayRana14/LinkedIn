#include <iostream>
#include <cstdio>
using namespace std;

struct A{
    int ia=0;
    const char * sb ="";
    int ic=0;

    public:
    A(const int a,const char * b, const int c):ia(a),sb(b),ic(c){};
    void seta(const int a){
        ia=a;
        }
    void setb(const char * b){
        ia=b;
        }
    void setc(const int c){
        ia=c;
        }


    int geta() const {
        return ia;
        }
    const char * getb() const {
        return sb;
        }
     int getc() const {
         return ic;
         }
};
int main(){
    A a(1,"two",3);
    printf("ia is %d, sb is %s, ic is %d\n",a.geta(),a.getb(),a.getc());
    return 0;
}