// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 


 
// Driver Code
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout << "Enter the message bits of size 4: " ;

    std::vector<int> a(10) ;

    cin >> a[3] >> a[5] >> a[7] >> a[8] ;

    a[1] =  a[3] ^ a[5] ^ a[7] ;

    a[2] =  a[3] ^ a[6] ^ a[7] ;

    a[4] =  a[5] ^ a[6] ^ a[7] ;

    cout << endl ;
    
    for (int i = 1; i < 8; ++i)
    {
        cout << a[i] << ' ' ;
    }

    cout << "\nEnter the received message: " ; 

    std::vector<int> b(10) ;

    for(int i = 1 ; i <= 7 ; i++) cin >> b[i] ;

    int c1,c2,c3 ;

    c1 = b[1] ^ b[3] ^ b[5] ^ b[7] ;

    c2 = b[2] ^ b[3] ^ b[6] ^ b[7] ;

    c3 = b[4] ^ b[5] ^ b[6] ^ b[7] ;

    int val = c1 + c2*2 + c3 * 4 ;

    if(!val) cout << "message received successfully!!\n" ;

    else
    {
        cout << "message received with error at position " << val << endl;

        b[val] = !b[val] ;

        cout << "Correct message: " ;

        for (int i = 1; i < 8; ++i)
        {
            cout << b[i] << '\t'  ;
        }


    }












 
}