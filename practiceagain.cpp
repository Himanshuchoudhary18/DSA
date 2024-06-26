// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int check = 0;
//     // first we calculated prime number using for loop and if condition in it
//     for (int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             check++;
//             break;
//         }
//     }
//     // Then we put conditions if this case occurs then this should happen
//     if(n == 0 || n == 1)
//     {
//         cout << "It is prime number";
//     }
//     // Else, if other than above condition happens then simply we will check 2 conditions
//     else
//     {
//         // First if the check incremented then it is not prime
//         if (check == 0)
//         {
//             cout << "It is prime number";
//         }
//         // If not, then it is a prime number
//         else
//         {
//             cout << "It is not a prime number";
//         }
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
//         // n - i + 1 is used because suppose
//         // suppose, n = 5
//         // 5 - 1 + 1 = 5 stars will be printed in 1st col *****
//         // 5 - 2 + 1 = 4 stars will be printed in 2nd col ****
//         // 5 - 3 + 1 = 3 stars will be printed in 3rd col ***
//         // 5 - 4 + 1 = 2 stars will be printed in 4th col **
//         // 5 - 5 + 1 = 1 star will be printed in 5th col  *
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
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
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             count++;
//             cout << count << " ";
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
//             cout << j;
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
//         for (int j = i; j <= 2 * i; j++)
//         {
//             cout << i;
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
//             cout << i + j - 1;
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
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i - j + 1;
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
//     for(int i = 1; i <= n; i++)
//     {
//         char ans = ('A' + n - 1);
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(ans - j + 1)<< " ";
//             // cout<<ans;
//             // ans--;
//         }
//         cout<<endl;
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
//         // Space
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         // Stars
//         int j;
//         for (j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         for (int k = 1; k < i; k++)
//         {
//             cout << k + i - j + 1 << " ";
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
//         // Space
//         // First we will give space which is decreasing so spae--; initially space = num - i i.e if num = 5 so, num - i = 5 - 1 = 4, 5 - 2 = 3, 5 - 3 = 2, 5 - 4 = 1
//         // for (int j = 1; j <= n - i + 1; j++)
//         // {
//         //     cout << " ";
//         // }
//         int s = n - i + 1;
//         while (s)
//         {
//             cout << " ";
//             s--;
//         }
//         // Here, we have to make a breakpoint from where the values will start decrementing or incrementing depending on if they are greater than value of j
//         int ans = 1;
//         int breakpoint = (2 * i + 1) / 2;
//         // Here, j will start from the point where space ends in each row but till what point the number have to print that will be determined by j <= 2*i will print 2,4,6,8,10....
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ans;
//             if (j <= breakpoint)
//             // means, j is 1 intially so it is equal to ans i.e 1 hence j will become 2 but if j > ans means j = 2 then j--; so it will again become 1 hence 121
//             {
//                 ans++;
//             }
//             else
//             {
//                 ans--;
//             }
//         }
//         // Space
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // Space
//         // First we will give space which is decreasing so spae--; initially space = num - i i.e if num = 5 so, num - i = 5 - 1 = 4, 5 - 2 = 3, 5 - 3 = 2, 5 - 4 = 1
//         // for (int j = 1; j <= n - i + 1; j++)
//         // {
//         //     cout << " ";
//         // }
//         int s = n - i + 1;
//         while (s)
//         {
//             cout << " ";
//             s--;
//         }
//         int count = 1;
//         // Here, j will start from the point where space ends in each row but till what point the number have to print that will be determined by j <= 2*i will print 2,4,6,8,10....
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         // Space
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // Space
//         int s = 0;
//         while (s <= i - 1)
//         {
//             cout << " ";
//             s++;
//         }
//         // Pattern
//         for (int j = 1; j <= (2 * n) - (2 * i - 1); j++)
//         {
//             cout << "*";
//         }
//         while (s <= i - 1)
//         {
//             cout << " ";
//             s++;
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
//         // Space
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
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
//         for (int j = 1; j <= 2 * n - (2 * i - 1); j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int func1(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int func2(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         int count = 1;
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     func1(n);
//     func2(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= (2 * n - 1); i++)
//     {
//         int count = i;
//         // i = 1 intially that means we have to check the moment i becomes > than n means, i = 1 so n will be 5, then i = 2 so n = 5, then i = 3 still n = 5, then i = 4 and still n = 5 at last when i = 5 and n = 5 then at that time, we have to make count = (2 * n - i)
//         // Therefore after i >= 5, from there we have to make count = 2 * n - i which means as i = 5 so cont = 2 * 5 - 5 = 5 *****
//         // Then i = 6 so, count = 2 * 5 - 6 = 4
//         // i = 7, count = 2 * 5 - 7 = 3,2,1....
//         if (i > n)
//         {
//             count = 2 * n - i;
//         }
//         // When i = 1, count = 1 *
//         // When i = 2, count = 2 **
//         // When i = 3, count = 3 ***
//         // When i = 4, count = 4 ****
//         // When i = 5, count = 5 *****
//         // When i = 5, count = 4 ****
//         // When i = 5, count = 3 ***
//         // When i = 5, count = 2 **
//         // When i = 5, count = 1 *
//         // Because if (i > n) so count = 2 * 5 - 5 = 4
//         // count = 2 * 5 - 6 = 3
//         // count = 2 * 5 - 7 = 2
//         // count = 2 * 5 - 8 = 1
//         for (int j = 1; j <= count; j++)
//         {
//             cout << "*";
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
//         int variable = 0;
//         // Even Location we have 0
//         if (i % 2 == 0)
//         {
//             variable = 1;
//         }
//         else
//         {
//             variable = 0;
//         }
//         // Cols
//         for (int j = 1; j <= i; j++)
//         {
//             cout << variable;
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
//         int variable = 1;
//         if(i % 2 == 0)
//         {
//             variable = 0;
//         }
//         else
//         {
//             variable = 1;
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << variable;
//             variable = 1 - variable;
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
//     // Space
//     int spaace = 2 * (n - 1);
//     // For n = 5, 2 * (4) = 8
//     // For n = 4, 2 * (3) = 6
//     // For n = 3, 2 * (2) = 4
//     // For n = 2, 2 * (0) = 0
//     // But here we are not using any i or loop which will decrease n automatically therefore to do that we have to write space -= 2;
//     for (int i = 1; i <= n; i++)
//     {
//         // pattern
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         // Space
//         for (int j = 1; j <= spaace; j++)
//         {
//             cout << " ";
//         }
//         // Pattern
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//         spaace -= 2;
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
//         // space
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         char ans = 'A';
//         // let user give value for char, let's take an ex -> 3 means C so, A + 3 - 1 = C
//         // breakpoint
//         int breakpoint = (2 * i - 1) / 2;
//         // pattern
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << ans;
//             if (j <= breakpoint)
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
//     int space = 2 * (n - 1); // or // 2 * n - 2
//     // For left side from top to bottom stars
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n)
//         {
//             stars = 2 * n - i;
//         }
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         // spaces
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         // For bottom design of stars
//         if (i < n)
//         {
//             space -= 2;
//         }
//         else
//         {
//             space += 2;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int space = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         // star
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         space += 2;
//         cout << endl;
//     }
//     // For 2nd half pattern
//     space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {
//         // stars
//         int stars = i;  // or // i only can be also an option
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         space -= 2;
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
//     int space = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         // Stars
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         // Spaces
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // Stars
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         space += 2;
//         cout << endl;
//     }
//     space = 2 * n - 2;
//     for (int i = 1; i <= n; i++)
//     { 
//         // Stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // Space
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // Stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         space -= 2;
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(2, 5);
    vector<vector<int>> v (5, vector<int>(5, 10));
    return 0;
}
