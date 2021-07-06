#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,4,5};
    int b[]= {};

    for (int i = 0; i < 6 ; i++)
    {
      for (int j = 0; j < 6 ; j++)
      {
        if (i != j)
        {
            if (a[i] == a[j] )
            {
            b[i] = a[i] + a[j];
            break;
            }
            else
            {
                b[i] = a[i];
            }
       }
      }
    }

    for(int k = 0; k < 6; k++)
    {
       cout << b[k];
    }

}
