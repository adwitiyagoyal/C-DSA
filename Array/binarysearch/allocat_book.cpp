#include <iostream>
using namespace std;

bool ifpossible(int ar[], int n, int m, int mid)
{

    int pagesum = 0;
    int studentcount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + ar[i] <= mid)
        {
            pagesum += ar[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || ar[i] > mid)
            {
                return false;
            }
            pagesum = ar[i];
        }
    }
    return true;
}

int allocateBooks(int ar[], int n, int m)
{ // n -> no of books   m->no of students

    int s = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {

        sum = sum + ar[i];
    }
    while (s <= sum)
    {

        int mid = s + (sum - s) / 2;

        if (ifpossible(ar, n, m, mid))
        {

            ans = mid;
            sum = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int ar[5] = {10, 20, 45, 13, 50};
    cout << allocateBooks(ar, 5, 2);
    int 
}
