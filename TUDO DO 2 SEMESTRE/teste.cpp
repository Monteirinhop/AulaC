#include<iostream>
using namespace std;

main()
{  int n,a=0;

  cout<<"Digite un numero: ";
  cin>>n;
  for  (int i=1;i<n;i++)
       {
         if (n%i==0)
            {
              a=a+i;
             }

       }

  if (a>n)
    {
     cout<<"O Numero eh abundante"<<endl<<endl;
     }
   else
      cout<<"O Numero e deficiente"<<endl<<endl;

system("pause");
return 0;

}
