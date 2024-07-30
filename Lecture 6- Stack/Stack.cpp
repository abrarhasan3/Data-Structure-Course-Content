#include<bits/stdc++.h>

using namespace std;



int a[10], top = -1, max_stk=9;


void push (int value)
{
        if(top == max_stk)
                cout<<"Stack Filled Up";
        else
                a[++top] = value;
}
void p_top()
{
        if(top>-1)
                cout<<a[top]<<endl;
        else
                cout<<"Stack is Empty"<<endl;
}


void pop()
{
        if(top==-1)
                cout<<"Stack is Empty"<<endl;
        else
                top--;
}



int main()
{

// Library Implimentation
        
        stack<int> s;

        s.push(1);
        s.push(24);
        s.push(21);
        s.push(29);
        s.push(7);
        cout<<s.top()<<endl;
        s.pop();
        cout<<s.top()<<endl;

// Array Implimentation
        
        push(10);
        p_top();    

}
