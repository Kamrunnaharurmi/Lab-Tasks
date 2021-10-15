#include<iostream>
#include<string>
using namespace std;
int main ()
{
    cout<<"Enter String: ";
    string str;
    cin>>str;

    int s = str.size();
    if(s%3==0)
    {
        cout<<"This word is divisible by 3"<<endl;
    }
    else
    {
        cout<<"This word is not divisible by 3"<<endl;
    }
return 0;
}

