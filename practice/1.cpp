#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 5, 10, 20, 40, 80}; 
    int b[5] = {6, 7, 20, 80, 100} ;
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120} ;
     
     for(int i=0;i<6;i++)
     {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<8;k++)
            {
                if(a[i]==b[j] && b[j]==c[k])
                {
                    cout<<a[i]<<endl;
                }
            }
        }
     }
}