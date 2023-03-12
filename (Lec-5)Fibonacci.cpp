#include<iostream>
using namespace std;

int main(){

 int n;
 scanf("%d",&n);

 int a = 0;
 int b = 1;
 printf("%d %d ",a,b);
 for(int i=1; i<=n; i++){
    int fibo = a+b;
    printf("%d ",fibo);
    a=b;
    b=fibo;
 }
    

    return 0;
}
