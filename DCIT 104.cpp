#include <iostream>

using namespace std;
    void prime(int x);
int main(){

    int i,j=2,n,count=0, sum=0, flag=1;
    cout<<"\nEnter the value of n: ";
    cin>>n;
    while(count<n){
        i=2;
        while(i<=j-1){
            if(j%i==0){
                flag=0;
                break;
            }
            i++;
        }
        if(flag==1){
            sum=sum+j;
            count ++;
        }
        j++;
        flag=1;

    }
        cout<<"\nSum of first"<<n<<"prime numbers is:"<<sum ;
        cout<<endl;
        return 0;
}