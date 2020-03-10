//
//  Diamond.cpp
//
//
//  Created by Jeronimo Reyes on 4/5/18.
//

#include <stdio.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int b, num;

    cout<<"Enter an odd number for a diamond(1-19): ";
    cin>> num;

    for (;;)
    {
        if (num=<0)
        {cout<<"Enter an odd number for a diamond(1-19): ";
            cin>> num;}

        if (num>19)
        {cout<<"Enter an odd number for a diamond(1-19): ";
            cin>>num;}

        if (num%2==0)
        {cout<<"Enter an odd number for a diamond(1-19): ";
            cin>>num;}

        else
            if (num<=19)
            {
                for( b=0;b<num;b++)
                {
                    for(int c=num;c>b;c--)
                        cout<<" ";
                    for(int d=0;d<b;d++)
                        cout<<" *";
                    cout<<endl;
                }
                for(b=num;b>0;b--)
                {
                    for(int c=num;c>b;c--)
                        cout<<" ";
                    for(int d=0;d<b;d++)
                        cout<<" *";
                    cout<<endl;

                }
                cout << endl;
                break;
            }
    }

    return 0;
}
