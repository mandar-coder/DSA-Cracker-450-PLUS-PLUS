#include <iostream>
//find factorial 
int factorial(int n){
    if(n<1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
    return 0;
}
int main(){
    int n;
    std::cin >> n;
    std::cout<<factorial(n);
    return 0;
}