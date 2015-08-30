#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cols,rows,cubes,i;
    while(1)
    {
     cubes=0;       
     scanf("%d",&cols);
     scanf("%d",&rows);    
     if(cols==0 && rows==0){break;} 
     if(cols<1 || cols>10 ||rows<1 || rows>10){continue;}
     int front[cols],side[rows];
     int *bit=(int *)malloc((21*sizeof(int)));
     for(i=0;i<21;i++)
     {
       bit[i]=0;
     }
     for(i=0;i<cols;i++)
     {
       scanf("%d",&front[i]);
       if(front[i]<1 || front[i]>20){/*printf("\nbr")*/break;}
       cubes=cubes+front[i];
       bit[front[i]]+=1;
       
     }
     if(i<cols){fflush(stdin);/*printf("\nafter br")*/;free(bit);continue;}
     /*for(i=0;i<21;i++)
     {
       printf("%d\n",bit[i]);
     }*/
     for(i=0;i<rows;i++)
     {
       scanf("%d",&side[i]);
       if(side[i]<1 || side[i]>20){break;}
       //bit[side[i]]+=1;
       if(bit[side[i]]==0)
       {
          cubes=cubes+side[i];
          
       }
       else
       {
           bit[side[i]]-=1;
       }
     }
     if(i<rows){fflush(stdin);free(bit);continue;}
     printf("%d\n",cubes);
     free(bit);
     
    }
    return 0;
}
