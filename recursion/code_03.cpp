// code_03
// another example of recursion
#include "iostream"
using namespace std;
int fun(int n){

    if(n>0){
        return fun(n-1) + n;
    }

    return 0;
}

int main()
{
    int x=5;
    printf("%d",fun(x));

}