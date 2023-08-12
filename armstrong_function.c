
#include<stdio.h>
isArmstrong(int n){
    int dig,sum=0;
    int temp=n;
    while (temp>0)
    {
        dig=temp%10;
        sum+=dig*dig*dig;
        temp=temp/10;
    }
    return(sum==n);
    
}
int main(){
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nThe total numbers of armstrong numbers between 1 and %d is: %d ",n,count);
    
}