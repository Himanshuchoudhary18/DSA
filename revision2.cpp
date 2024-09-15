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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             ans = 0;
//         }
//         else
//         {
//             ans = 1;
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ans << " ";
//             ans = 1 - ans;
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
//         char ans = 'A';
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << ans << " ";
//             ans++;
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
//     int space = 2 * (n - 1);
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if(i > n)
//         {
//             star = 2 * n - i;
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = star; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
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
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         space += 2;
//         cout << endl;
//     }
//     space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
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
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
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
//     // Taking digit as input to convert it into binary
//     int n;
//     cin >> n;
//     int binary = 0;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         binary = n & 1;
//         ans = (binary * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << "Answer is : " << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     int digit = 0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         if(digit == 1)
//         {
//             ans = (ans + pow(2, i));
//         }
//         n = n / 10;
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int binary = 0;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         binary = n % 10;
//         if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
//         {
//             return 0;
//         }
//         ans = (binary * pow(10, i)) + ans;
//         n = n / 10;
//         i++;
//     }
//     cout << "Same flow : " << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int digit = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
//         {
//             return 0;
//         }
//         ans = (ans * 10) + digit;
//         n = n / 10;
//     }
//     cout << "Reverse flow : " << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool findPalindrome(int n)
// {
//     int originalNumber = n;
//     int ans = 0;
//     while (n != 0)
//     {
//         int remainder = n % 10;
//         ans = (ans * 10) + remainder;
//         n = n / 10;
//     }
//     if (ans == originalNumber)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (findPalindrome(n))
//     {
//         cout << "It is a Palindrome number";
//     }
//     else
//     {
//         cout << "It is not an Palindorme number";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool poweroftwo(int n)
// {
//     for (int i = 0; i <= 30; i++)
//     {
//         int pow_of_two = pow(2, i);
//         if (pow_of_two == n)
//         {
//             return true;
//         }        
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if(poweroftwo(n))
//     {
//         cout << "Yes! It is power of two";
//     }
//     else
//     {
//         cout << "It is not power of two";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int b = 10;
//     switch (a)
//     {
//     case 15:
//         cout << "YES" << endl;
//         break;
//     case 5:
//         cout << "NO" << endl;

//     default:
//         cout << "None" << endl;
//     }
//     switch (b)
//     {
//     case 10:
//         cout << "TRUE 10" << endl;
//         break;
//     case 15:
//         cout << "FALSE NOT 10" << endl;
//         break;
//     // Without default also it will work and without break; in every case it will excute all cases in a switch case 
//     // default:
//     //     cout << "By default" << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     cin >> a;
//     cin >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int power = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         power = pow(5, i);
//     }
//     cout << power << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//     // swap(arr[0], arr[4]);
//     reverse(arr, arr + n);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

