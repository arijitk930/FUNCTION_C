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
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int  i = 1; i <=n ; i++)
    {
        if (isprime(i))
        {
            printf("%d ",i);
            count++;
        }
        
    }
    printf("THe prime numbers between 1 to %d are: %d",n,count);
    
}