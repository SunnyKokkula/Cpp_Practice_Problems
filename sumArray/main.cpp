#include <iostream>

using namespace std;

int sumPro(int arr1[], int arr2[], int n){
        if (n==0) return -1;

        int sum = 0;

        for (int i=0; i < n; i++ )
        {
            sum += arr1[i] * arr2[n-1-i];
        }

        return sum;

}

int main()
{
    int a[4]= {1,2,3,4};
    int b[4]= {4,3,2,1};

    cout << sumPro(a,b,4);;
    return 0;
}


