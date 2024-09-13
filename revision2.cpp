// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<"*"<< " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int count = 0;
//     if (num == 1 || num == 0)
//     {
//         cout << "It is not a prime number";
//     }
//     else
//     {
//         for (int i = 2; i < num; i++)
//         {
//             if (num % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if(count == 0)
//         {
//             cout << "It is prime number";
//         }
//         else
//         {
//             cout << "It is not a prime number";
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char c = 'A' + n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(c - i + 1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         for (j; j <= i; j++)
//         {
//             cout << j;
//         }
//         for(int k = 1; k < i; k++)
//         {
//             cout << k + i - j + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int ans = 1;
//         int breakpoint = (2 * i - 1) / 2;
//         for (int j = 1; j <= (2 * i - 1); j++)
//         {
//             cout << ans;
//             if(j <= breakpoint)
//             {
//                 ans++;
//             }
//             else
//             {
//                 ans--;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) 
//     {
//         // space
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         // star
//         for (int j = 0; j <= i; j++)
//         // If starting from j = 1; then we have to use (j <= 2 * i - 1);
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int space = 0;
//         while (space <= i - 1)
//         {
//             cout << " ";
//             space++;
//         }
//         for (int j = 0; j < n - i + 1; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if(i > n)
//         {
//             star = 2 * n - i;
//         }
//         for(int j = 1; j <= star; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if(i > n)
//         {
//             star = 2 * n - i;
//         }
//         for(int j = 1; j <= star; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans = 0;
        }
        else
        {
            ans = 1;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << ans << " ";
            ans = 1 - ans;
        }
        cout << endl;
    }
    return 0;
}
