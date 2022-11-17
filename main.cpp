//code_08 SUM of natural numbers using resursion
#include "iostream"

using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1) + n;
    }
    else{
        return 0;
    }
}


int main(){

    int s = fun(4);
    printf("%d",s);


    return EXIT_SUCCESS;
}