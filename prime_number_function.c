#include<stdio.h>
#include<math.h>
isprime(int n){
    if (n==1)
    {
        return 0;
    }
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            return  0;
        }  
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (isprime(n))
    {
        printf("Prime number.");
    }
    else{
        printf("Not a prime number.");
    }
    return 0;
}