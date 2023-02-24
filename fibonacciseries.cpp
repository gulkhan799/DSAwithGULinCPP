#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many tern you want after 0 and 1"<<endl;
    cin>>n;
    // nextnumber is made up of  sum of teo perivios numbers
    // 0 1 1 2 3 5 8 13 21 ....
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
