#include<iostream>
#include<string.h>
#include<algorithm>
#include<stack>
#include<deque>
#include<queue>
#define lli long long int
using namespace std;
int main()
{
	  lli no_of_elem,k,i,j,len;
			deque<lli> dq;
			
			scanf("%lld",&no_of_elem);
			printf("\n");
			lli arr[no_of_elem];
			for (i=0;i<no_of_elem;i++)
			{
							scanf("%lld",&arr[i]);																				
			}
				scanf("%lld",&k);
			//len=no_of_elem-k+2;
			for (i=0;i<k;i++)
			{
				 while (!dq.empty() && arr[i] >= arr[dq.back()])
					    dq.pop_back();
     dq.push_back(i);
			}
    for (i=k;i<no_of_elem;i++)
			{
			  printf("%lld ",arr[dq.front()]); 
				
				 while (!dq.empty() && arr[i] >= arr[dq.back()]) //if incoming element is >= elem in queue pop all elements 
					    dq.pop_back();
     if(!dq.empty() && dq.front() <= i-k) dq.pop_front();//pop front when it goes out of range...
     
					dq.push_back(i);
			}
    printf("%lld ",arr[dq.front()]); 
			//cin>>k;
}
