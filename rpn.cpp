#include<iostream>
//#include<conio.h>
#include<stack>
#include<string>
using namespace std;
int pri(char op)
{
     switch(op)
     {
        case '*':return 3;
                 break;
        case '/':return 3;
                 break;
        case '+':return 2;
                 break;
        case '-':return 2;
                 break;
        case '^':return 1;
                 break;
        case '(':return 0;
                 break;
        case ')':return 0;
                 break;
     }
}
       
int main()
{
  int test,i;
  string expr;
  stack<char> opt;
  cin>>test;
  while(test)
  {
    i=0;
  //  cout<<"Enter expr:\n";
    cin>>expr;
    for(;i<expr.length();i++)
    {
       if(expr[i]>=97 && expr[i]<=122)
       {
          cout<<expr[i];
       }
       else
       {
           if(expr[i]=='(')
           {
             opt.push(expr[i]);
           }
           else if(expr[i]==')')
           {
                while(opt.top()!='(')
                {
                  cout<<opt.top();
                  opt.pop();
                }
                opt.pop();
           }
           else if(pri(opt.top())> pri(expr[i]))
           {
             cout<<opt.top();
             opt.pop();
           }
           else if(pri(opt.top()) <= pri(expr[i]))
           {
              opt.push(expr[i]);
           }
       }
    }
       while(!(opt.empty()))
       {
          /*if(opt.top()=='(')
          {
               //clrscr();
               break; 
          }*/
          //else
          //{
            cout<<opt.top();
            opt.pop();
          //}
       }
       test--;
       cout<<endl;
   }
   //getch();
}
