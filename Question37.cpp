//  m*n and p*q matrix multiplication
// in this n==p   then only multiplication is possible
#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"enter the order of 1st matrix=";
    cin>>m>>n;
    cout<<"enter the order of 2nd matrix=";
    cin>>p>>q;

    if(n!=p)
    {
        cout<<"not poosible to mulitply";
    }
    else 
    {
        int A[m][n],B[p][q],C[m][q];
        //input A
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {    
                 cout<<"matrix is =";
;                cin>>A[i][j];
            }
        }
        //input B
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
               cin>>B[i][j];
            }
        }
        // multiply A nd B and store in C
        for(int i=0; i<m; i++)
        {
            for(int j=0;j<q;j++)
            {

            C[i][j] = 0; // giving c =0 initailize it 
   
            for(int k=0;k<n;k++)  // here k row ke har element ko coloumn ke har element s multply karta hhh

            {

            C[i][j]+= A[i][k]*B[k][j];

            }

           }
        }
           // print karege abb c koo
           for(int i=0;i<m;i++)
           {
            for(int j=0;j<q;j++)
            cout<<C[i][j]<<" ";
            cout<<endl;
           }
           return 0;
        
    }
    return 0;

}
