#include<iostream>
#include<stdio.h>
//#include<conio.h>
using namespace std;
int main()
{
	   int test;
				int nvertices,i,j,k;
				int adj[201][201],p[201][201];
				//cout<<"Enter no of test cases..:";
				scanf("%d",&test);
				//cout<<endl;
			while(test--)
			{
				scanf("%d",&nvertices);
				for (i=0;i<=nvertices;i++)
				{
								for (j=0;j<=nvertices;j++)
								{
									    adj[i][j]=201;
													p[i][j]=201;
								}
				}
				/*for (x=0;x<5;x++)
				{
								cin>>i>>j>>val;
								adj[i][j]=val;
								p[i][j]=val;
				}*/
				for (i=1;i<=nvertices;i++)
				{
								for (j=1;j<=nvertices;j++)
								{
									    scanf("%d",&adj[i][j]);
													p[i][j]=adj[i][j];
								}
								//cout<<"\n";
				}
    for (k=1;k<=nvertices;k++)
			 {
								//cout<<"\nk="<<k<<"\n";
								for (i=1;i<=nvertices;i++)
								{
												for (j=1;j<=nvertices;j++)
												{
																if(p[i][j]<p[i][k]+p[k][j])
																						p[i][j]=p[i][j];
																	else if(p[i][j]==p[i][k]+p[k][j] && i!=k && k!=j)
																	{
																						//cout<<"\nintermediate found..";
                     // p[i][j]=p[i][k]+p[k][j];	
																					//	cout<<"\n("<<i<<","<<k<<")+("<<k<<","<<j<<")="<<i<<","<<j<<endl;
																						p[i][j]=201;
																	}
															/*		else
																	{
																					cout<<"\nprev val:"<<p[i][j];
                      p[i][j]=p[i][k]+p[k][j];	
																						cout<<"\n("<<i<<","<<k<<")+("<<k<<","<<j<<")="<<p[i][j];
																	}*/
												}
							}
			}
			//cout<<"\n\nsh path..\n";
		/*	for (i=1;i<=nvertices;i++)
				{
								for (j=1;j<=nvertices;j++)
								{
									    cout<<p[i][j]<<" ";
								}
								cout<<"\n";
				}*/
				for (i=1;i<=nvertices;i++)
				{
								for (j=1;j<=nvertices;j++)
								{
												if (p[i][j] <201 && i!=j)
												{
																if(i<j) cout<<i<<" "<<j<<endl;
												}
							 }
			}
			  printf("\n");
			}
				//getch();
}
