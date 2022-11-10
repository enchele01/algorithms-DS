// code_02
//Head Recursion
#include "iostream"
using namespace std;
void fun2(int n){
    if(n>0){
        fun2(n-1);
        printf("%d",n);
    }
}
int main()
{
    fun2(3);
    return 0;
}