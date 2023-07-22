#include<iostream>
using namespace std;
//find hcf
int main(){
    int a, b, small=1, hfc;
    cin>>a;
    cin>>b;
    
    if(a<b){
        small=a;
    }
    else{
        small=b;
    }
    
    for(int i=1; i<small+1; i++){
        if(a % i == 0 && b % i == 0){
            hfc = i;
        }
    }
    
    cout<<hfc<<endl;
    
    return 0;
}