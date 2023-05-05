// One Time Password.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    string line;
    cout<<"Press enter to get OTP";
    getline(cin,line);
    here:
    int a = rand()%900000+100000;
    cout<<"\n\t\tYour OTP is : ";
    cout<<a<<endl;
    while(true){
        int num;
        cout<<"\t\tEnter your OTP : ";
        cin>>num;
        if(a!=num){
           cout<<"\nInvalid OTP!"<<endl;
           string line;
           goto here;
           break;
        }
        else{
            cout<<"\nOTP matched!"<<endl;
            break;
        }
    }
    return 0;
}

