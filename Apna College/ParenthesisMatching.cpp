#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *s;
};

void push(Stack *st,int val)
{
    
    if(st->top==st->size-1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
    
}
int pop(Stack *st)
{
    char x=-1;
    if(st->top==-1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        x = st->s[st->top--];
        
    }
    
    
}
bool isEmpty(Stack st)
{
    if(st.top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int isBalance(string exp)
{
    Stack st;
    st.size = exp.length();
    st.s = new char[st.size];
    st.top = -1;
    for (int i = 0; exp[i] != '\0';i++)
    {
        if(exp[i]=='(')
        {
            push(&st, exp[i]);
        }
        else if(exp[i]==')')
        {
            if(isEmpty(st))
            {
                return false;
            }
            else
            {
                pop(&st);
            }
            
        }
    }
    return isEmpty(st) ? true : false;
}

int main()
{
    string str;
    getline(cin, str);
    cout << isBalance(str);
}