#include<bits/stdc++.h>

using namespace std;



int fact (int a)
{
       int result=1;
       for ( int i =a; i>0 ; i--)
	result = result*i;
       return result;
}

int fact2 (int a)
{
    if(a<1)
    {
        return 1;
    }
    return a*fact2(a-1);
}





int main()
{
        

        cout<<fact2(5)<<endl;

        cout<<fact(5);
           

}
