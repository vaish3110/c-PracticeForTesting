#include<iostream>
using namespace std;
#include<string>
#include<bits/stdc++.h>

int main()
{
/*string fullname, firstname, lastname;
cout<<"Enter your firstname:";
//cin>>fullname;
getline(cin,firstname);
cout<<"Enter your last name: ";
getline(cin,lastname);
//fullname = firstname +" " + lastname;
fullname = firstname.append(lastname);
cout<<"my fullname is: "<<fullname<<endl;
cout<<"the size of fullname is: "<<fullname.size();*/
int a1, b1;
a1 = 10;
b1 = 20;
std::cout<<"a1+b1"<<a1+b1<<std::endl;
std::string a, b;
a = "test";
b = "20";
std::cout<<"a+b"<<a+b;
reverse(a.begin(),a.end());
std::cout<<"a"<<a<<endl<<a[1];


return 0;
}
