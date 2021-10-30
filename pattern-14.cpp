#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=(2*n)-1;row++ )
    {

int spacelimit = row>n? (row-n):(n-row);
        for(int space=0; space<spacelimit;space++)
        {
            cout<<" ";
        }
        for(int col=row; col>=1;col-- )
        { 
            cout<<col;   
           }
        
        
        for(int col=2; col<=row;col++ )
        {
            cout<<col;
        }
        cout<<endl;

    }
}
