#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int mush[10],i=0,sum=0,prev_sum=0,diff_prev_sum=0,diff_sum=0;
    while(i<10)
    {
      cin>>mush[i];
      if(mush[i]>100 || mush[i]<0){mush[i]=0;}
      i++;
    }
      for(i=0;i<10;i++)
      {
                       prev_sum=sum;
             sum=sum+mush[i];
             if(sum==100)break;
             if(sum>100)
             {
                diff_prev_sum=abs(100-prev_sum);
                diff_sum=abs(100-sum);
                if(diff_prev_sum<diff_sum)
                  {  sum=prev_sum;break;}
              }
       }
             
      
             //diff_hund_sum=abs(100-sum);
             //diff_hund_next=abs(100-sum-mush[i+1]);
             //if(diff_hund_sum==diff_hund_next)
             //{
               // sum=sum+mush[i+1];
                //break;
             //}
             //else
             //{
                 
             //}
      
      
    
    cout<<sum;
    //getch();
}
      
