#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<stack>
#include "stacktype.cpp"

using namespace std;
string Infix_Postfix(string infix);
int operatorPrecedence(char ch);
int evaluatePostfixExpression(string postfix);
int calculate(int a, int b, char operatorSign);


string Infix_Postfix(string infix)
{
    string postfix = "";
    stack <char> myStack;
    char ch;

    for(int i=0; infix[i]; i++)
    {
        ch = infix[i];

        if(ch=='(')
            myStack.push(ch);
        else if(ch==')')
        {
            while(!myStack.empty() && myStack.top()!='(')
            {
                postfix = postfix + myStack.top();
                myStack.pop();
            }

            if(!myStack.empty() && myStack.top()=='(')
               myStack.pop();

        }
        else
        {
            int priority = operatorPrecedence(ch);

            if(priority==0)
                postfix = postfix + ch;
            else
            {
                if(myStack.empty())
                    myStack.push(ch);
                else
                {
                    while(!myStack.empty()
                          && myStack.top()!='('
                            && priority<=operatorPrecedence(myStack.top()))
                    {
                        postfix = postfix + myStack.top();
                        myStack.pop();
                    }
                    myStack.push(ch);
                }

            }
        }
    }

    while(!myStack.empty())
    {
        postfix += myStack.top();
        myStack.pop();
    }

    return postfix;
}



int evaluatePostfixExpression(string postfix)
{
    stack <int> myStack;
    char ch;
    for(int i=0; postfix[i]; i++)
    {
        ch = postfix[i];
        if(ch>='0' && ch<='9')
            myStack.push(ch-'0');
        else
        {
            int a,b;
            b = myStack.top();
            myStack.pop();

            a = myStack.top();
            myStack.pop();

            myStack.push(calculate(a, b, ch));
        }
    }

    return myStack.top();
}

int calculate(int x, int y, char operatorSign)
{
    int result;
    if(operatorSign=='+')
        result= x+y;
    else if(operatorSign=='-')
        result= x-y;
   else if(operatorSign=='*')
        result= x*y;
   else if(operatorSign=='/')
        result= x/y;
    return result;

}

int operatorPrecedence(char ch)
{
    if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;

}

int main()
{
    string infix1,infix2,infix3,infix4;
    int result;
    cout<<"Enter infix expression 1:";
    cin>>infix1;
    string postfix;
    postfix = Infix_Postfix(infix1);
    cout<<"Postfix Expression: "<<postfix<<endl;
    result = evaluatePostfixExpression(postfix);
    cout<<"Output is: "<<result<<endl;

    cout<<"Enter infix expression 2:";
    cin>>infix2;
    postfix = Infix_Postfix(infix2);
    cout<<"Postfix Expression: "<<postfix<<endl;
    result = evaluatePostfixExpression(postfix);
    cout<<"Output is: "<<result<<endl;

    cout<<"Enter infix expression 3:";
    cin>>infix3;
    postfix = Infix_Postfix(infix3);
    cout<<"Postfix Expression: "<<postfix<<endl;
    result = evaluatePostfixExpression(postfix);
    cout<<"Output is: "<<result<<endl;

    cout<<"Enter infix expression 4:";
    cin>>infix4;
    postfix = Infix_Postfix(infix4);
    cout<<"Postfix Expression: "<<postfix<<endl;
    result = evaluatePostfixExpression(postfix);
    cout<<"Output is: "<<result<<endl;


    return 0;
}
