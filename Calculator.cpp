#include<iostream>
using namespace std;

int menuList() {
    int choice;
    cout<<"0 - Exit"<<endl;
    cout<<"1 - ADD"<<endl;
    cout<<"2 - MUL"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    return choice;
}

int main() {
    int choice,n1,n2,res;
    while((choice=menuList())!=0) {
        cout<<"Enter two numbers : ";
        cin>>n1>>n2;
        switch (choice)
        {
        case 1:
            res=n1+n2;
            cout<<"ADD result = "<<res<<endl;
            break;
        default:
            break;
        }
    }
}