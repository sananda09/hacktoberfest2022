#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sa[] = "Welcome";
    int i;
    for (i = 0; sa[i] != '\0'; i++)
    {
        sa[i] = sa[i] + 32;
    }

    cout << sa << endl;

    return 0;
}
