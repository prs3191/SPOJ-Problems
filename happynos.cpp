#include<iostream>
//#include<conio.h>
#include<stdio.h>
using namespace std;
long long int sumpow(long int);

struct node
{
  long long int sum;
  struct node *left;
  struct node *right;
};
void insert(struct node *temp,long int num,int &flag)
{
    
    if(num<temp->sum)
    {
         if(temp->left==NULL)
         {
                 struct node *temp1=new struct node;//(struct node *)malloc(sizeof(struct node));
                 temp1->sum=num;
                 temp1->left=NULL;
                 temp1->right=NULL;
                 temp->left=temp1;
                 //flag=1;
         }
         else
          //temp=temp->left;
         insert(temp->left,num,flag);
    }
    else if(num>temp->sum)
    {
        if(temp->right==NULL)
        {
                 struct node *temp1=new struct node;//(struct node *)malloc(sizeof(struct node));
                 temp1->sum=num;
                 temp1->left=NULL;
                 temp1->right=NULL;
                 temp->right=temp1;
                 //return 1;
         }
         else
         //temp=temp->right;
         insert(temp->right,num,flag);
    }
    else if(num==temp->sum)
    {
        flag=-1;
    }
}
                       
    
int main()
{
    int flag=1,count=0;
    long int num;
    //long long int sum=0;
    struct node *head=new struct node;//(struct node *)malloc(sizeof(struct node));
    head->sum=0;
    head->left=NULL;
    head->right=NULL;
    struct node *temp=head;
    cin>>num;
    while(flag!=-1)
    {
     num=sumpow(num);
     count++;
     if(num==1){cout<<count;break;}
     insert(temp,num,flag);
    // cout<<"\nflag:"<<flag;
    }
    if(flag==-1)
    {
               cout<<"-1";
    }       
    //getch();
}
long long int sumpow(long int num)
{
    long long int tempsum=0,rem;
    while(num!=0)
    {
           rem=num%10;
           tempsum+=rem*rem;
           num=num/10;
    }
    //cout<<tempsum<<"\n";
    return tempsum;
    //insert(temp,tempnum);
    
}    
