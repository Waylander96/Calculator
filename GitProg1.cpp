#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int CurrentNum=0, prevCount=0, goodIn=1;
    char currOp, prevOp;
    while(1)
    {
        cout<<prevCount;

        cout<<"Enter Number: ";
        if(CurrentNum==0)
        {
            cin>>CurrentNum;
        }

        else
        {
            if(prevOp=='+')
            {
                prevCount=prevCount+CurrentNum;
                cin>>CurrentNum;
                goodIn=1;
            }

            else if(prevOp=='-')
            {
                prevCount=prevCount-CurrentNum;
                cin>>CurrentNum;
                goodIn=1;
            }

            else if(prevOp=='=')
            {
                cout<<prevCount;
                prevCount=0;
                goodIn=0;
            }
        }

        while(goodIn==1)
        {
            
            cout<<"Enter your next operation : ";
            cin>>prevOp;
            if((prevOp != '+') || (prevOp != '-'))
            {
                cout<<"invalid operation, try again\n";
            }

            else
            {
                goodIn=0;
            }
        }


    }
}