#include<iostream>
#include<conio.h>
int main()
{int n;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=0;i<n;i++)
    {std::cout<<"\n";
          for(int j=0;j<n;j++)
        {if(   i==j   ||     j==(n- (i+1) )      )
            std::cout<<"0";
            else
                std:: cout<<"1";
            }
    }
         return 0;
}


