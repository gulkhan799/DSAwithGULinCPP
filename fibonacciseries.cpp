#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many tern you want after 0 and 1"<<endl;
    cin>>n;
    int a=0;
    int b=1;
     cout<<a<<endl<<b<<endl;
    for (int i=0;i<=n;i++)
    {   
       
        int Nextnumber=a+b;
        cout<<Nextnumber<<endl;
        a=b;
        b=Nextnumber;
    }

    return 0;
}