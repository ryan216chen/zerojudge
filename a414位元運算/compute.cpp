#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n && n)
    {
        int r = 0;
        vector<int> vcc;
        while(n)
        {
            r = n % 2;
            if(r)
            {
                vcc.push_back(r);
                n >>= 1;
            }
            else
            {
                break;
            }
        }
        cout<<vcc.size()<<"\n";
    }
    return 0;
}
