#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i=1; i<=sqrt(n); i++)   //complexity O(sqrt(N))
    // {
    //     cout << i << endl;
    // }

    //find divisor
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout << i << " " << n/i << " " ; //find all divisor
        }
    }
    
   
    return 0;
}