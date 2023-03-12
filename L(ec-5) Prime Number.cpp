#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    int count = 0;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            count++;
            break;
        }
    }

    if(count==0){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }

    return 0;
}
