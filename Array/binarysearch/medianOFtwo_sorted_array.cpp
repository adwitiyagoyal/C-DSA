#include <iostream>
using namespace std;

double median(int ar1[], int n, int ar2[], int m)
{

    int i = 0, j = 0, k = 0;
    int ar3[n + m];
    while (i < n && j < m)
    {

        if (ar1[i] > ar2[j])
        {
            ar3[k++] = ar2[j++];
        }
        else
        {
            ar3[k++] = ar1[i++];
        }
    }

    while (i < n)
    {
        ar3[k++] = ar1[i++];
    }

    while (j < m)
    {
        ar3[k++] = ar2[j++];
    }

    if ((n + m) & 1)
    {
        return ar3[(n + m) / 2];
    }
    double ans = ar3[(n + m) / 2] + ar3[(n + m) / 2 - 1];
    // double ans1 = ar3[(n+m)/2-1];
    return ans / 2;
}

int main(int argc, char const *argv[])
{
    int ar1[3] = {0, 4, 7};
    int ar2[3] = {1, 3, 5};
    cout << median(ar1, 3, ar2, 3);
    return 0;
}
