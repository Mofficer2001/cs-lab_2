#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:" << '\n';
    int a,b, max;
    cin>>a>>b;
    max=a;
    if (b>a)
        cout<<"Max b="<<b<<'\n';
    else
        cout<<"Max a="<<a<<'\n';
    return 0;
}
