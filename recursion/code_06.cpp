// code_06 Example of Indirect Recursion
#include "iostream"
using namespace std;
void funA(int n);
void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d",n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>0){
        printf("%d",n);
        funA(n/2);
    }
}


int main()
{
    funA(4);
    return EXIT_SUCCESS;
}