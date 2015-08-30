#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
    
    long int test,i;
    char num[1000001];
    long int count,rpos,dig,rem,tempi;
    scanf("%ld",&test);
    while(test)
    {
       dig=0,i=0,tempi=0;
       //memset(arr,0,sizeof(arr));
       //for(i=0;i<7;i++)
         // printf("\n%d",arr[i]);
       scanf("%s",&num);
       count=num.length();
       if(num.length()>1000000){test--;continue;}
       if(num<="10"){printf("%d\n",11);test--;continue;}
       for(i=0;i<num.length();i++)
       {
                   //printf("%ld\n",num+2);
                   //test--;
                   //continue;
                   if(num[i]=='9')
                     tempi++;
       }
       if(i==num.length()){memset(num,0,sizeof(num));num[0]=num[num.length()-1]=1;printf("%s\n",num);test--;continue;}
       
       for(i=1;i<=dig;i++)
       {
          printf("%d",arr[count]);
          count--;
       }
       printf("\n");
       
       test--;          
    }
    //getch();
    return 0;
}
    
