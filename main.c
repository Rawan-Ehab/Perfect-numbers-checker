#include <stdio.h>
#include <stdlib.h>

int Check_if_perfect(int n)
{
    int sum=0, reminder;
    for (int i=1;i<n;i++)
     {
       reminder=n%i;
    if (reminder==0)
       {
            sum=sum+i;
       }
     }

    if (sum == n)
    {
       printf("%d is a perfect number",n);
    }

    else
        {
          printf("%d isn't a perfect number",n);
        }

}

int main()
{
   int number;
   do
   {
        printf("\n Enter the number to check whether it's perfect or not \n");
        printf("\n Enter 0 to stop all \n");
        scanf("%d",&number);
        if (number!=0)
       {
          Check_if_perfect(number);
       }
   }
  while(number!=0);
}
