#include<stdio.h>
isPalindrome(int n){
    int dig,rev=0;
    int temp=n;
    while (temp>0)
    {
        dig=temp%10;
        rev=rev*10+dig;
        temp=temp/10;
    }
    return(rev==n);
    
}
int main(){
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nThe total numbers of armstrong numbers between 1 and %d is: %d ",n,count);
    
}