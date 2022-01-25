//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            
            cout<<k;
            k--;
        }
        for (int j = 2; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}