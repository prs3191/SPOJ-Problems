#include<iostream>
//#include<conio.h>
using namespace std;
struct node
{
  char dig;
  int words;
  int prefixes;
  struct node *edge[10];
};
void initialise(struct node *root)
{
  root->dig=0;
  root->words=0;
  root->prefixes=0;
  for(char i='0';i<='9';i++)
     root->edge[i-48]=NULL;
}
void addword(struct node *root,string phnum,int index,int &wc)
{
     if(index==phnum.length())
     {
       root->words=root->words+1;
       root->prefixes=root->prefixes+1;
       if(root->words==1 && root->prefixes==2)
         wc=1;
     }
     else
     {
       if(root->words==1) wc=1;
       char tempc=phnum[index];
       //cout<<"\ntempc is:"<<tempc;
       root->prefixes=root->prefixes+1;
       if(root->edge[tempc-48]==NULL)
       {
         struct node *temp=new struct node;
         initialise(temp);
         temp->dig=tempc;
         //cout<<"\ntemp->dig is:"<<temp->dig;
         root->edge[tempc-48]=temp;
       }
         index++;
         addword(root->edge[tempc-48],phnum,index,wc);
     }
}
/*int print(struct node *root)
{
 
  for(int x=0;x<=9;x++)
  {
    if(root->edge[x]!=NULL)
    {
      cout<<"\nnext char is:"<<(root->edge[x])->dig;
      print(root->edge[x]);
    }
  }
  
}*/
int main()
{
    int test,tnos,wordcount=0;
    string phnum;
    struct node *head=new struct node;
    struct node *temp1=head;
    initialise(head);
   // cout<<"test:";
    cin>>test;
    if(test>=1 && test<=40)
    {
      while(test)
      {
            cin>>tnos;
            if(tnos<1 || tnos>10000){test--;continue;}
            while(tnos)
            {
                    cin>>phnum;
                    if(phnum.length()>10) break;
                    addword(temp1,phnum,0,wordcount);
                    // print(head);
                    //cout<<"\n";
                    tnos--;
           }
                   //print(head);
           if(phnum.length()<=10)
           {
                   if(wordcount==1)
                      cout<<"NO\n";
                   else
                      cout<<"YES\n";
           }
           wordcount=0;
           initialise(head);
            test--;
      }
   }
}
    
