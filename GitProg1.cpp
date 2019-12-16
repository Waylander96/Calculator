#include <iostream>
#include <string>

using namespace std;

int main()
{
    int CurrentNum=0, prevCount=0, goodIn=1;
    char currOp, prevOp;
    while(1)
    {

        
        if(prevCount==0)
        {
            //cout<<"here1\n";
            cout<<"Enter Number: ";
            cin>>prevCount;
            goodIn=1;
        }

        else
        {
            if(prevOp=='+')
            {
                //cout<<"here2\n";
                cout<<"Enter Number: ";
                cin>>CurrentNum;
                prevCount=prevCount+CurrentNum;
                cout<<prevCount;
                goodIn=1;
            }

            else if(prevOp=='-')
            {
                //cout<<"here3\n";
                cout<<"Enter Number: ";
                cin>>CurrentNum;
                prevCount=prevCount-CurrentNum;
                cout<<prevCount;
                goodIn=1;
            }

            else if(prevOp=='=')
            {
                //cout<<"here4\n";
                cout<<"Enter Number: ";
                cout<<prevCount;
                prevCount=0;
                goodIn=0;
            }
        }

        while(goodIn==1)
        { 
            cout<<"\nEnter your next operation : ";
            cin>>prevOp;
            if((prevOp == '+') || (prevOp == '-') || prevOp == '=')
            {
                goodIn=0;
            }

            else
            {
               cout<<"invalid operation, try again\n";
            }
        }
    }
}