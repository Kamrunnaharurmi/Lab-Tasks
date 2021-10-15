#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct student
{
 char name[100];
 char address[100];
 int id;
 float mark;
};

int main()
{
    cout<<"Enter Student Number: ";
    int n;
    cin>>n;
    student info[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Name: ";
        cin>>info[i].name,100;
        cout<<"Address: ";
        cin>>info[i].address;
        cout<<"ID: ";
        cin>>info[i].id;
        cout<<"Mark: ";
        cin>>info[i].mark;
        getchar();
    }
    for(int i=0;i<n;i++)
    {
        cout<<info[i].name<<""<<endl;
        cout<<info[i].address<<""<<endl;
        cout<<info[i].id<<""<<endl;
       cout<<info[i].mark<<""<<endl;
    }
    return 0;
}
