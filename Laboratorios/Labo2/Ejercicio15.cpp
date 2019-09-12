#include <iostream>
using namespace std;
int unir(int A[],int p, int q,int r)     
{

    int n1,n2,i,j,k;       
    n1=q-p+1;
    n2=r-q;             
    int Iz[n1],De[n2];
    for(i=0;i<n1;i++)
    {
        Iz[i]=A[p+i];
    }
    for(j=0;j<n2;j++)
    {
        De[j]=A[q+j+1];
    }
    i=0,j=0;
     
    for(k=p;i<n1&&j<n2;k++)
    {
        if(Iz[i]<De[j])
        {
            A[k]=Iz[i++];
        }
        else
        {
            A[k]=De[j++];
        }
    }
    
    while(i<n1)             
    {
        A[k++]=Iz[i++];
    }
    
    while(j<n2)
    {
        A[k++]=De[j++];
    }
}

int unirOrdenar(int A[],int p,int r)    
{
    int q;                                
    if(p<r)
    {
        q=(p+r)/2;
        unirOrdenar(A,p,q);
        unirOrdenar(A,q+1,r);
        unir(A,p,q,r);
    }
}
int main()
{
    int n;
    cout<<"Cuantos elementos tendra el arreglo?: ";
    cin>>n;
    int A[n],i;
    cout<<"Ingrese los elementos del arreglo:\n";
    for(i=0;i<n;i++)
    cin>>A[i];
    
    unirOrdenar(A,0,n-1);
    cout<<"El arreglo ordenado es:\n";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
