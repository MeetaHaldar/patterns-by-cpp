//    *
//   ***
//  *****
// *******

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
  for(int row=0; row<n;row++)
  {
      for(int space =0;space<n-row;space++)
      {
          cout<<" ";
      }
      for(int col=0;col<(2*row)+1;col++)
      {
          cout<<"*";
      }
      cout<<endl;
  }
}