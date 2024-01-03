#include <iostream>
using namespace std;

int main(){
    int op1, op2;
    char choice;


    cout<< "ENTER THE FIRST OPERAND: "; cin>> op1;
    cout<<"ENTER THE OPERATOR (+, -, *, /): "; cin>> choice;
    if (choice=='+'|| choice=='-'|| choice=='*'|| choice=='/')
    {
        cout<< "ENTER THE SECOND OPERAND: "; cin>> op2;
    }
    else{
        cout<<"\n!! INVALID OPERATOR !!\n !!! TRY AGAIN !!!\n\n";
        main();
    }
    

    switch (choice)
    {
    case '+': cout<< "RESULT:"<< op1 << choice << op2 <<"="<< op1+op2 << endl; break;
    case '-': cout<< "RESULT:"<< op1 << choice << op2 <<"="<< op1-op2 << endl; break;
    case '*': cout<< "RESULT:"<< op1 << choice << op2 <<"="<< op1*op2 << endl; break;
    case '/': cout<< "RESULT:"<< op1 << choice << op2 <<"="<< (float)op1/op2 << endl; break;
    }

    cout<<"DO YOU WANT TO CONTINUE? (y/n):";
    char c;  cin>>c;
    if (c=='y')
    {
        main();
    }
    else exit(0);
    
    return 0;
}