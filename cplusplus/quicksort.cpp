//quciksort

#include<iostream>
#include<cstdlib>

using namespace std;

int partition(int A[],int l,int u);
void quicksort(int A[],int a,int b);

int main()
{
        int A[10]={5,4,9,6,7,2,4,3,5,1};
        quicksort(A,0,9);
        for(int i=0;i<10;i++)
                cout<<A[i];
        cout <<endl;
        system("pause");
        return 0;
}

void quicksort(int A[],int a,int b)
{
        if(a<b)
        {
                int q;
                q = partition(A,a,b);
                quicksort(A,a,q-1);
                quicksort(A,q+1,b);
        }
}

int partition(int A[],int l,int u)
{
        int i;
        i = l-1;
        for(int j=l;j<u;j++)
        {
                if(A[j]<A[u])
                {
                        i++;
                        swap(A[i],A[j]);
                }
        }
        i++;
        swap(A[i],A[u]);
        return i;
}
