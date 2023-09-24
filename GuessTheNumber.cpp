#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int lim,ran;
    ran=rand();
    cout<<"Guess a no between 0 to 100: ";
    int gNo;
    cin>>gNo;
    if(gNo<=0 && gNo>=100){
        cout<<"Enter a valid number !!!";
        return 0;
    }
    ran=ran%100;
    while(1){
            if(gNo>ran){
                cout<<"Your number is too big, try again : ";
                cin>>gNo;
            }
            else if(gNo<ran){
                cout<<"Your number is too small, Enter again : ";
                cin>>gNo;
            }
            else if(gNo==ran){
                cout<<"Congratulation, you guess the correct number.";
                break;
            }
    }
}
