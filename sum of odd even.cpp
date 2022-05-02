#include <stdio.h>
 
int main()
{
    int n[10], i, odd_sum = 0, even_sum = 0;
for(i=0;i<10;i++)
{

    printf("Enter the number:\n");
    scanf("%d",&n[i]);
    
        if (n[i] % 2 == 0)
            even_sum = even_sum + n[i];
        else
            odd_sum = odd_sum + n[i];
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
    return 0;
}
