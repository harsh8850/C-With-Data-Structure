//armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int orignaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3)             
        n=n/10;                                // error in this program.......
    }
    if (sum==orignaln)
    {
        cout<<"armstrong"<<endl;
    }else {
        cout<<"Not armstrong"<<endl;
    }
    

    return 0;
}