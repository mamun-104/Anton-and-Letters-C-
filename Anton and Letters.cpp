#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    ///Just aivhabe Input nilei hoa jay!!
    getline(cin,s);
    char c[26];

    int i,l,j=0,sum=0,k;
    l = s.length();
    //cout<<s;
    //cout<<"length = "<<l<<endl;

    for(i=0;i<l;i++)
    {
        if(s[i]!='{' && s[i]!=',' && s[i]!='}' && s[i]!=32)
            {
                if(j==0)
                {
                    c[j]=s[i];
                    j++;
                }
                else
                {
                    int temp = 0;
                    for(k=0;k<j;k++)
                    {
                        if(c[k]==s[i])
                            temp=1;
                    }
                    if(temp==0){c[j]=s[i]; j++;}
                }
            }
    }
    /*cout<<"The Distinct values are = ";
        for(i=0;i<j;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    */

    cout<<j;




    return 0;
}
