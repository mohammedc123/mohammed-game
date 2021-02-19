

#include <iostream>

using namespace std;

int main()
{
cout<<"welcome to the (guess the number game) "<<endl;
cout<<" take a guess between 0 and 100 "<<endl;

int num1=64;
int num2;
cin>>num2;
int count=0;
while (num2 !=64)                                              

if (num2>=80) 
{cout<<"too high "<<endl;}

if (num2<80 && num2>65) 
{cout<<"high "<<endl;}

if (num2==65 || num2==63)
{cout<<"almost there "<<endl;}

if (num2>30 && num2<63) 
{cout<<"low "<<endl;}

if (num2<=30)
{cout<<"too low "<<endl;}

cout << " guess again" <<endl;
c in>>num2;
    count=count+1;
}
cout<< "64 is correct" <<endl;
cout<< "it took you " << count <<" wrong guesses "<<endl;
    return 0;
}

 