#include <iostream>
using namespace std;
int main()
 {
     int num,newnum=0;
     cout<<"Enter number: ";
     cin>>num;
     if(num == 0)
     newnum=1;
     while(num>0)
 {
    int rem = num%10;
 if(rem == 0)
 {
    rem = 1;
    num = num/10;
    newnum=newnum*10+rem;
 }
    num = 0 ;
    while(newnum>0)
   {
     int r = newnum%10;
     num= num*10 + r;
     newnum =newnum / 10;
   }
   cout<<"New number is: "<<num;
   return 0;
 }
