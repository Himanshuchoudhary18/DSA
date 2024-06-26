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
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         count++;
//         n = n / 10;
//     }
//     cout << count << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = (int)(log10(n) + 1);
//     cout << count << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int last_digit = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         last_digit = n % 10;
//         n = n / 10;
//         ans = (ans * 10) + last_digit;
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
//     int product = 1;
//     int sum = 0;
//     int remainder = 0;
//     int Total = 0;
//     while (n != 0)
//     {
//         remainder = n % 10;
//         product = product * remainder;
//         sum = sum + remainder;
//         n = n / 10;
//     }
//     Total = sum - remainder;
//     cout << Total << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int last_digit = 0;
//     int ans = 0;
//     int originalnumber = n;
//     int count = 0;
//     while (originalnumber != 0)
//     {
//         count++;
//         originalnumber = originalnumber / 10;
//     }
//     while (n != 0)
//     {
//         last_digit = n % 10;
//         ans = ans + pow(last_digit, count);
//         n = n / 10;
//     }
//     cout << ans << endl;
//     if (originalnumber == ans)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> vec;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             // cout << i << " ";
//             vec.push_back(i);
//             if ((n / i) != i)
//             {
//                 // cout << n / i << " ";
//                 vec.push_back(n/i);
//             }
//         }
//     }
//     sort(vec.begin(), vec.end());
//     for (auto it : vec)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(int n)
// {
//     int originalNumber = n;
//     int ans = 0;
//     int last_digit = 0;
//     while (n != 0)
//     {
//         last_digit = n % 10;
//         ans = (ans * 10) + last_digit;
//         n = n / 10;
//     }
//     if (originalNumber == ans)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     isPalindrome(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int findGCD(int n, int m)
// {
//     if (m == 0)
//     {
//         return n;
//     }
//     else
//     {
//         return findGCD(m, n % m);
//     }
// }
// int findGCD2(int m, int n)
// {
//     int gcd = 0;
//     for (int i = 1; i <= min(n, m); i++)
//     {
//         if (n % i == 0 && m % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     return gcd;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     cout << findGCD(n, m) << endl;
//     cout << findGCD2(n, m) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//             break;
//         }
//     }
//     if (n == 0 || n == 1)
//     {
//         cout << "It is not a primt number";
//     }
//     else
//     {
//         if (count == 0)
//         {
//             cout << "It is a prime number";
//         }
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
//         char ans = 'A' + n - 1;
//         // OR //
//         // char ans = 'A' + n - 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(ans + i - j) << " ";
//             // ans++;
//             // OR //
//             // cout << char(ans - i + 1) << " ";
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
//            cout << " ";
//         }
//         for (int j = n; j >= i; j--)
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
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         for (int j = 1; j <= (2 * i - 1); j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int space = 0;
//         while(space <= i - 1)
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
// int main()
// {
//     int n;
//     cin >> n;
//     int space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
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
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = stars; j >= 1; j--)
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << " ";
//         }
//         char ans = 'A' + n - 1;
//         int breakpoint = (2 * i - 1) / 2;
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
//     int space = 2 * (n - 1);
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
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= stars; j++)
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
//         cout << endl;
//         space += 2;
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
//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         space -= 2;
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
//         for(int j = 0; j < n; j++)
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
//     int n;
//     cin >> n;
//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             int top = i;
//             int left = j;
//             int right = (2 * n - 1) - 1 - i;
//             int bottom = (2 * n - 1) - 1 - j;
//             cout << (n - min(min(top, bottom), min(left, right))) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int, 5> a;
//     array<int, 5> arr;
//     int n;
//     cin >> n;
//     // Ways to declare an array
//     int arr2[5] = {1, 2, 3, 4, 5};
//     arr2[0] = 10;
//     arr2[1] = 20;
//     arr2[2] = 30;
//     arr2[3] = 40;
//     arr2[4] = 50;
//     // To access the element we have to use loop
//     for (auto i : arr2)
//     {
//         cout << i << " ";
//     }
//     // DMA(dynamic memory allocation)
//     // int *arrdma = new int[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arrdma[i];
//     // }
//     // Two ways to create vector
//     vector<int> vec[10];
//     // This "vec" vector has 5 size with 2 written for 5 times
//     vector<int> vec2(5, 2);
//     vec[0].push_back(10);
//     vec[1].push_back(12);
//     vec[2].push_back(14);
//     vec[3].push_back(16);
//     vec[4].push_back(18);
//     vec[7].push_back(20);
//     // vector<int> vec2(5, 2);
//     // This vector is teaversable by iterator but not this below kone
//     // vector<int> vec[10];
//     // for(auto it : vec2)
//     // {
//     //     cout << it << " ";
//     // }
//     // 2 - D Vectors
//     // This vector is 2-D vector and it has 10 size and that 10 space contains 20 size each with having 10 value in it
//     // vector<vector<int>> vec2(10, vector<int> (20, 10));
//     // This vector is 2-D vector and it has 20 space and that 20 space is occupied with 5 space each with having "H" string written in it
//     vector<vector<string>> vec3(20, vector<string> (5, "Harry"));
//     // Accessing (not string wala vector can be accessed by this method)
//     // for(auto it : vec2)
//     // {
//     //     for(auto it : vec2)
//     //     {
//     //         cout << it << " ";
//     //     }
//     // }
//     for (int i = 0; i < vec3.size(); i++)
//     {
//         // for (int j = 0; j < vec3[i].size(); j++)
//         for (int j = 0; j < vec3.size(); j++)
//         {
//             cout << vec3[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // 3 - D Vectors
//     vector<vector<vector<int>>> vec4(20, vector<vector<int>> (20, vector<int> (10, 10)));
//     for(auto it = vec4.begin(); it != vec4.end(); it++)
//     {
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // set<int> s;
//     // for (int i = 0; i < s.size(); i++)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     s.insert(x);
//     //     s.emplace(10); // push_back
//     // }
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.emplace(5);

//     priority_queue<int> pq;
//     pq.emplace(5);
//     pq.emplace(-10);
//     pq.emplace(15);
//     pq.emplace(-20);
//     pq.push(25);

//     cout << pq.top() << " ";
//     pq.pop();
//     cout << pq.top() << " ";
//     pq.pop();
//     cout << pq.top() << " ";
//     pq.pop();
//     cout << pq.top() << " ";
//     pq.pop();
//     cout << pq.top() << " ";

//     cout << q.front() << " ";
//     q.pop();
//     cout << q.front() << " ";
//     q.pop();
//     cout << q.front() << " ";
//     q.pop();
//     cout << q.front() << " ";
//     q.pop();
//     cout << q.front() << " ";

//     priority_queue<int, vector<int>, greater<int>> pq1;
//     pq1.push(1);
//     pq1.push(2);
//     pq1.push(3);
//     pq1.push(4);
//     pq1.push(5);
//     cout << pq1.top() << endl;
//     pq1.pop();
//     cout << pq1.top() << endl;
//     pq1.pop();
//     cout << pq1.top() << endl;
//     pq1.pop();
//     cout << pq1.top() << endl;
//     pq1.pop();
//     cout << pq1.top() << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a = "abc";
//     do
//     {
//         cout << a << " ";
//     } while (next_permutation(a.begin(), a.end()));
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int *arr = new int[5];
//     // arr[0] = 5;
//     // arr[1] = 10;
//     // arr[2] = 25;
//     // arr[3] = 15;
//     // arr[4] = 20;
//     // sort(arr, arr + 5);
//     // do
//     // {
//     //     for (int i = 0; i < 5; i++)
//     //     {
//     //         cout << arr[i] << " ";
//     //     }
//     //     cout << endl;
//     // } while (next_permutation(arr, arr + 5));

//     int x;
//     cin >> x;
//     int count = 0;
//     while (x != 0)
//     {
//         count++;
//         x = x / 10;
//     }
//     int count1 = (int)(log10(x) + 1);
//     cout << count << " ";
//     cout << count1 << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     float ans = 0;
//     while (n != 0)
//     {
//         int digit = n & 1;
//         ans = (digit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << "Answer is : " << ans << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
//         {
//             return 0;
//         }
//         // ans = (digit * pow(10, i)) + ans;
//         ans = (ans * 10) + digit; 
//         n = n / 10;
//         i++;
//     }
//     std :: cout << "Answer is : " << ans << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int originalnumber = n;
//     int ans = 0;
//     int last_digit = 0;
//     int count = 0;
//     while (originalnumber != 0)
//     {
//         count++;
//         originalnumber = originalnumber / 10;
//     }
//     while (n != 0)
//     {
//         last_digit = n % 10;
//         ans = ans + pow(last_digit, count);
//         n = n / 10;
//     }
//     if (originalnumber == ans)
//     {
//         cout << "It is an armstrong number";
//     }
//     else
//     {
//         cout << "It is not an armstrong number";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int findGCD(int n, int m)
// {
//     if (m == 0)
//     {
//         return n;
//     }
//     if (n == 0)
//     {
//         return m;
//     }
//     if (m == n)
//     {
//         return m; 
//         // OR //
//         return n;
//     }
//     else
//     {
//         return findGCD(m, n % m);   
//     }
// }
// int findGCDothermethod(int a, int b)
// {
//     int result = min(a, b); 
//     for (int i = 1; i <= result; i++) { 
//         if (a % result == 0 && b %  result == 0) { 
//             break; 
//         } 
//     } 
//     // Return gcd of a and b 
//     return result; 
// }
// int main()
// {
//     int gcd = 0;
//     int a = 52;
//     int b = 4;

//     // WRONG METHOD for 0 case
//     cout << findGCDothermethod(a, b) << endl;

//     // CORRECT METHOD for every case (base case also)

//     // cout << findGCD(n, m) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> reversevector(vector<int> &nums, int n)
// {
//     vector<int> ans = nums;
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }
//     reversevector(nums, n);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << nums[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int reverseofarray(int n, int arr[], int i, int r)
// {
//     if (i >= r)
//     {
//         return {};
//     }
//     else
//     {
//         swap(arr[i], arr[r]);
//         reverseofarray(n, arr, i + 1, r - 1);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Before reversing : " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     reverseofarray(n, arr, 0, n - 1);
//     cout << "After reversing : " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int printsubsequences(int index, int sum, int key, int arr[], int n)
// {
//     // Base case
//     if (index >= n)
//     {
//         if (sum == key)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     else
//     {
//         sum += arr[index];
//         // Take
//         int left = printsubsequences(index + 1, sum, key, arr, n);
//         sum -= arr[index];
//         // Not - take
//         int right = printsubsequences(index + 1, sum, key, arr, n);
//         return left + right;
//     }
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {1, 2, 1};
//     int key = 2;
//     cout << printsubsequences(0, 0, key, arr, n) << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void printSubsequences(int index, vector<int> &v, int arr[], int n)
// {
// 	// Base Case
// 	if (index >= n)
// 	{
// 		// To print the whole vector as all element will be inserted in it from the array
// 		for (int i = 0; i < v.size(); i++)
// 		{
// 			cout << v[i] << " ";
// 		}
// 		// If vector is empty then return {}
// 		if (v.size() == 0)
// 		{
// 			cout << "{}" << " ";
// 		}
// 		// For spacing
// 		cout << endl;
// 		return;
// 	}
// 	// else arr is not traversed completely 
// 	// Recursive calls

// 	// Not taking
// 	printSubsequences(index + 1, v, arr, n);

//  // If taking 
// 	v.push_back(arr[index]);
// 	printSubsequences(index + 1, v, arr, n);
// 	v.pop_back();
// }
// int main()
// {
// 	int n = 3;
// 	int arr[] = {3, 1, 2};
// 	vector<int> v;
// 	printSubsequences(0, v, arr, n);
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int check(int n, int i)
// {
//     if (i < 1)
//     {
//         return {};
//     }
//     cout << i << " ";
//     return check(n, i - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << check(n, n) << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool checkpalindrome(string &s, int i)
// {
//     if (i >= s.size() / 2)
//     {
//         return true;
//     }
//     if (s[i] != s[s.size() - i - 1]) 
//     {
//         return false;
//     }
//     else
//     {
//         return checkpalindrome(s, i + 1);    
//     }
// }
// int main()
// {
//     string s = "MADAM";
//     if(checkpalindrome(s, 0)){
//         cout << "It is a palindrome";
//     }
//     else
//     {
//         cout << "It is not a palindrome";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	for(int i = 0; i < n; i++){
// 	    int space = 0;
// 	    while(space <= i - 1)
// 	    {
// 	        cout << " ";
// 	        space++;
// 	    }
// 	    for(int j = 1; j <= n - i; j++)
// 	    {
// 	        cout << "*" << " ";
// 	    }
// 	    cout << endl;
// 	}
// }

// Print all subsequences using recursion
// #include <bits/stdc++.h>
// using namespace std;
// void printksubsequences(int index, vector<int> &ans, int sum, int key, int arr[], int n)
// {
//     // Base case
//     if (index == n)
//     {
//         // The required sum of 2 is achived
//         if (sum == key)
//         {
//             for (auto it : ans)
//             {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     // Take 
//     ans.push_back(arr[index]);
//     sum += arr[index];
//     printksubsequences(index + 1, ans, sum, key, arr, n);

//     sum -= arr[index];
//     ans.pop_back();

//     // Not-take
//     printksubsequences(index + 1, ans, sum, key, arr, n);
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {1, 2, 1};
//     int key = 2;
//     vector<int> ans;
//     printksubsequences(0, ans, 0, key, arr, n);
//     return 0;
// }


// Print only one subsequences using recursion
// #include <bits/stdc++.h>
// using namespace std;
// bool printksubsequences(int index, vector<int> &ans, int sum, int key, int arr[], int n)
// {
//     // Base case
//     if (index == n)
//     {
//         // The required sum of 2 is achieved
//         if (sum == key)
//         {
//             for (auto it : ans)
//             {
//                 cout << it << " ";
//             }
//             cout << endl;
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     // Take 
//     ans.push_back(arr[index]);
//     sum += arr[index];
//     if (printksubsequences(index + 1, ans, sum, key, arr, n) == true)
//     {
//         return true;
//     }
//     sum -= arr[index];
//     ans.pop_back();
//     // Not-take
//     if (printksubsequences(index + 1, ans, sum, key, arr, n) == true){
//         return true;
//     }
//     // Otherwise
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {1, 2, 1};
//     int key = 2;
//     vector<int> ans;
//     printksubsequences(0, ans, 0, key, arr, n);
//     return 0;
// }

// Count the possible subsequences (T.C -> 2^n)
// #include <bits/stdc++.h>
// using namespace std;
// int printallsubsequences(int index, int sum, int key, int arr[], int n)
// {
//     // Base case
//     if (index == n)
//     {
//         if (sum == key)
//         {
//         // for (auto it : ans)
//         // {
//         //    cout << it << " ";
//         // }
//         // cout << endl;
//         // return true;
//             return 1;
//         }
//         else
//         {
//             // return false;
//             return 0;
//         }
//     }
//     sum += arr[index];
//     // ans.push_back(arr[index]);
//     int l = printallsubsequences(index + 1, sum, key, arr, n);
    
//     sum -= arr[index];
//     // ans.pop_back();

//     // Not-take
//     int r = printallsubsequences(index + 1, sum, key, arr, n);
//     return l + r;
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {1, 2, 1};
//     // Here, we don't need vector because we don't have to print the subsequences
//     // vector<int> ans;
//     int key = 2;
//     cout << printallsubsequences(0, 0, key, arr, n) << endl;
//     return 0;
// }

// Selection Sort (Worst T.C -> O(N^2) & Best T.C -> O(N))
// #include <bits/stdc++.h>
// using namespace std;
// void Selectionsort(int arr[], int n)
// {
//     // Loop from 0th -> n - 2 means one before the last index
//     for (int i = 0; i <= n - 2; i++)
//     {
//         // We will use it to store min. elements in it everytime until we reach to the end
//         int mini = i;
//         // Loop from 1st index -> n - 1 means till the last index
//         for (int j = i; j <= n - 1; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 // Stored the min. element if found in the array after comparing
//                 mini = j;
//             }
//             // Swap b/w first index to the mini
//             swap(arr[mini], arr[i]); 
//         }
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[] = {13, 46, 24, 62, 50};
//     cout << "Array before selction sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     Selectionsort(arr, n);
//     cout << "Array after selction sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Bubble Sort (Best T.C -> O(N) & Worst T.C -> O(N^2))
// #include <bits/stdc++.h>
// using namespace std;
// void Bubblesort(int arr[], int n)
// {
//     // Base case
//     // If array is already sorted then no need to go for O(n ^ 2) T.C it can be done in O(N) time complexity
//     int countofswap = 0;
//     // Loop from 0th -> n - 2 means one before the last index
//     for (int i = n - 1; i >= 0; i--)
//     {
//         // Loop from 1st index -> n - 1 means till the last index
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Stored the min. element if found in the array after comparing
//                 swap(arr[j], arr[j + 1]); 
//                 countofswap = 1;
//             }
//         }
//         if (countofswap == 0)
//         {
//             break;
//         }
//         else
//         {
//            cout << "Swapped" << endl;
//         }
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 8, 24, 42, 50};
//     cout << "Array before bubble sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     Bubblesort(arr, n);
//     cout << "Array after bubble sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Insertion Sort (Best T.C -> O(N), Worst and avg. T.C -> O(N ^ 2)
// #include <bits/stdc++.h>
// using namespace std;
// void Insertionsort(int arr[], int n)
// {
//     // Loop from 0th -> n - 1 means till the last index
//     for (int i = 0; i <= n - 1; i++)
//     {
//         int j = i;
//         // Loop from 1st index -> n - 1 means till the last index
//         while (j > 0 && arr[j] < arr[j - 1])
//         {
//             swap(arr[j], arr[j - 1]);
//             // Means j is at ith position so, from ith index it will traverse to 0 index means backward hence, it will swap from current ith position i.e where j is at with j - 1 and if all good then move ahead using above ith loop else swap arr[j] and arr[j - 1] and decrement j-- because we have to reach to the 0th index everytime from ith index as we have to find the proper position of each element untill it gets its right postion keep on traversing in opp. order
//             j--;
//         }
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 28, 24, 42, 50};
//     cout << "Array before insertion sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     Insertionsort(arr, n);
//     cout << "Array after insertion sort : " << " ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Merge 2 Arrays
// #include <bits/stdc++.h>
// using namespace std;
// int merge(int arr[], int arr2[], int arr3[], int n, int m)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr[i] < arr2[j])
//         {
//             arr3[k++] = arr[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[n] = {1, 2, 3, 4, 5};
//     int m = 5;
//     int arr2[m] = {6, 7, 8, 9, 10};
//     int arr3[10] = {0};
//     merge(arr, arr2, arr3, n, m);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int merge(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *ptr = new int[len1];
//     int *ptr2 = new int[len2];
//     int mainarrayindex = start;
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainarrayindex++];
//     }
//     mainarrayindex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         ptr2[i] = arr[mainarrayindex++];
//     }
//     int index1 = 0;
//     int index2 = 0;
//     mainarrayindex = start;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (ptr[index1] < ptr2[index2])
//         {
//             arr[mainarrayindex++] = ptr[index1++];
//         }
//         else
//         {
//             arr[mainarrayindex++] = ptr2[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainarrayindex++] = ptr[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainarrayindex++] = ptr2[index2++];
//     }
// }
// int sort(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     if (start >= end)
//     {
//         return {};
//     }
//     else
//     {
//         sort(arr, start, mid);
//         sort(arr, mid + 1, end);
//         merge(arr, start, end);   
//     }
// }
// int main()
// {
//     int num;
//     cout << "Enter size of array : ";
//     cin >> num;
//     int arr[] = {2, 44, 3, 55, 5};
//     cout << "Array Before Merge Sort : \n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << "Array After Merge Sort : \n";
//     sort(arr, 0, num - 1);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// Quick Sort(Divide & Conqueror Algorithm) & (T.C -> N log N) & (S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int pivot = arr[start];
//     int count = 0;
//     for (int i = start + 1; i <= end; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     int pivotindex = start + count;
//     swap(arr[pivotindex], arr[start]);
//     while (start < pivotindex && end > pivotindex)
//     {
//         if (arr[start] < pivot)
//         {
//             start++;
//         }
//         if (arr[end] > pivot)
//         {
//             end--;
//         }
//         if (start < pivotindex && end > pivotindex)
//         {
//             swap(arr[start++], arr[end--]);
//         }       
//     }
// }
// int sort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return 0;
//     }
//     else
//     {
//         int p = partition(arr, start, end);
//         sort(arr, start, p - 1);
//         sort(arr, p + 1, end);
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 22, 3, 40, 5};
//     sort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int hash(int arr[], int start, int end)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
}

