//code_08 SUM of natural numbers using resursion
#include "iostream"

using namespace std;

int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        return fun(n-1) + n;
    }
}


int main(){

    int s = fun(3);
    printf("%d",s);


    return EXIT_SUCCESS;
}