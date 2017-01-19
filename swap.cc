#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
}

int main()
{
        int i,j;
        cout<<endl<<"Input two int number:"<<endl;
        cin>>i>>j;
        cout<<"Before swap(),i="<<i<<" j="<<j<<endl;
        swap(i,j);
        cout<<"After swap(),i="<<i<<" j="<<j<<endl<<endl;
        return 0;
}
