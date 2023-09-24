#include <iostream>
using namespace std;

int main() {
    float a,b,ans;
    char op;
    cout<<"::Basic Calculator::"<<endl;
    cout<<endl;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Choose your operator + | - | * | / : ";
    cin>>op;

    switch(op){
        case '+':
        ans=a+b;
        cout<<"Your answer is : "<<ans;
        break;
        case '-':
        ans=a-b;
        cout<<"Your answer is : "<<ans;
        break;
        case '*':
        ans=a*b;
        cout<<"Your answer is : "<<ans;
        break;
        case '/':
        ans=a/b;
        cout<<"Your answer is : "<<ans;
        break;
        default:
        cout<<"Incorrect operator !!!";
        break;
    }

    return 0;
}
