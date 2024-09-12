// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     int sum = 1;
//     for (int row = 1; row <= num; row++)
//     {
//         for (int column = 1; column <= num; column++)
//         {
//             cout<<sum;
//             sum++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int sort_01(int arr[], int size)
// {
//     sort(arr, arr + size);
// }
// int print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {
//     int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
//     int size = 8;
//     sort_01(arr, size);
//     print(arr, size);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     int sum = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<sum<<" ";
//             sum++;
//         }
//         cout<<endl;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i+j-1<<" ";
//         }
//         cout<<endl;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i-j+1<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<char('A' + j - 1)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     char sum = 'A';
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<sum<<" ";
//             sum++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<char('A' + i + j - 2)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A' + i - 1)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A' + i + j - 2)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         char D = 'A' + num - 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<D;
//             D++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         char D = 'A' + num - i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<D;
//             D++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     for(i; i<=n; i++)
//     {
//         int spaces=1;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int j=n;
//         for(j; j>=i; j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     for(i; i<=n; i++)
//     {
//         int spaces = 1;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int j = n;
//         for(j; j>=i; j--)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     for(i; i<=n; i++)
//     {
//         int spaces = 1;
//         while(spaces <= i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int j = n;
//         for(j; j>=i; j--)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     for(i; i<=n; i++)
//     {
//         int spaces=1;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int j = n;
//         for (j; j >= i; j--)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         int spaces = num - i;
//         while (spaces)
//         {
//             cout<<" ";
//             spaces--;
//         }
//         int j = 1;
//         for (j; j <= i; j++)
//         {
//             cout<<j;
//         }
//         int k = i - 1;
//         while (k)
//         {
//             cout<<k;
//             k--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Decimal To Binary
// #include <iostream>
// #include <math.h>
// int main()
// {
//     int num;
//     printf("Enter number : ");
//     scanf("%d", &num);
//     int ans = 0;
//     int i = 0;
//     while (num != 0)
//     {
//         int digit = num & 1;
//         // answer = (digit * pow(10, i)) + answer;
//         ans = (digit * pow(10, i)) + ans;
//         num = num >> 1;
//         i++;
//     }
//     printf("The result is : %d", ans);
//     return 0;
// }

// Binary To Decimal
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter your number : ";
//     cin>>num;
//     int i = 0;
//     int ans = 0;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         if(digit == 1){
//         ans = ans + pow(2, i);
//         }
//         num = num/10;
//         i++;
//     }
//     cout<<"The result is : "<<ans<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number : ";
//     cin>>num;
//     int a = 0;
//     int b = 1;
//     for (int i = 0; i < num; i++)
//     {
//         int Fibonnaci = a + b;
//         cout<<"The series is : "<<Fibonnaci<<endl;
//         a = b;
//         b = Fibonnaci;
//     }
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int setBitA(int num){
//     int ans = 0;
//     int i = 0;
//     while (num != 0)
//     {
//         int bits = num & 1;
//         ans = ans + pow(2,i);

//         num = num>>1;
//     }
//     return ans;
// }
// int setBitB(int num){
//     int ans = 0;
//     int i = 0;
//     while (num != 0)
//     {
//         int bits = num & 1;
//         ans = ans + pow(2,i);

//         num = num>>1;
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     int num2;
//     cin>>num2;
//     int Total = setBitA(num) + setBitB(num2);
//     cout<<"The result of sum is : "<<Total<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int factorial(int num){
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * factorial(num - 1));
//     }
// }
// int nCr(int num, int r){
//     int fact = factorial(num);
//     int denominator = factorial(r) * factorial(num - r);
//     int Total = fact/denominator;
//     return Total;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     int r;
//     cin>>r;
//     cout<<"The result of nCr is : "<<nCr(num, r)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int solve(int num, int num2){
//     int ans = 1;
//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num;
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     int num2;
//     cin>>num2;
//     cout<<solve(num, num2)<<endl;
//     return 0;
// }

// Minimum XOR
// "ninja-is-learning-the-bitwise-operations-to-score-well-in-his-class-test-he-found-an-interesting-question-on-bitwise-xor-the-problem-statement-is-as-follows"
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, vector<int> a)
// {
//     sort(a.begin(), a.end());
//     int ans = INT_MAX;
//     // It is doing XOR in pairs that's why we left the last element
//     for (int i = 0; i < n - 1; i++)
//     {
//         ans = min(ans, a[i] ^ a[i + 1]);
//     }
//     return ans;
// }

// Minimum and maximum using pairs
// you-have-been-given-two-integers-a-and-b-return-minimum-and-maximum-of-both-the-numbers-without-branching
// #include <bits/stdc++.h>
// using namespace std;
// pair<int, int> findMinMax(int a, int b)
// {
//     pair<int, int> p;
//     p.first = min(a, b);
//     p.second = max(a, b);

//     return p;
// }

// Ninja's Complement
// "everyday-ninja-sees-a-number-in-his-dream-but-he-doesn-t-realize-the-meaning-of-that-number-somehow-ninja-manages-to-get-the-secret-of-his-number-he-comes-to-know-that-if-he-converts-that-number-into-binary-and-takes-its-complement-and-again-converts-it-into-decimal-type-he-will-get-a-lottery-winning-number-of-chit-fund-lottery"
// #include <bits/stdc++.h>
// using namespace std;
// #include <bits/stdc++.h>
// int ninjaComplement(int n)
// {
//     int m = n;
//     int mask = 0;
//     if (n == 0)
//     {
//         return 1;
//     }
//     while (m != 0)
//     {
//         mask = (mask << 1) | 1;
//         m = m >> 1;
//     }
//     int ans = (~n) & mask;
//     return ans;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     for (int i = 0; i < 30; i++)
//     {
//         int ans = pow(2,i);
//         if (ans == num)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start )/ 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 22, 35, 66, 100};
//     int result = binarysearch(arr, 5, 66);
//     cout << result << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int solve(int arr[], int num){
//     int start = 0;
//     int end = num - 1;
//     while (start < end)
//     {
//         // Best case scenario
//         if (arr[start] == 0)
//         {
//             start++;
//         }
//         if (arr[end] == 1)
//         {
//             end--;
//         }
//         // Worst case scenario (arr[start] == 1 && arr[end] == 0)
//         else{
//             int temp;
//             temp = arr[start];
//             arr[start] = arr[end];
//             arr[end] = temp;
//             // Swapping and after that we have to move to next index
//             start++;
//             end--;
//         }
//     }
// }
// int print(int arr[], int num){
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int num;
//     int arr[] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 1};
//     solve(arr, 10);
//     print(arr, 10);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int array[], int num, int num2){
//     int start = 0;
//     int end = 0;
//     int ans = 0;
//     while (start < num && end < num2)
//     {
//         if (arr[start] == array[end])
//         {
//             ans = arr[start];
//             cout<<ans<<endl;
//         }
//         if (arr[start] > array[end])
//         {
//             end++;
//         }
//         else{
//             start++;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     int num2;
//     int arr[] = {1,2,44,24,50};
//     int array[] = {10,2,3,4,5};
//     check(arr, array, 5, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int size){
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ i;
//     }
//     return ans;
//     return -1;
// }
// int main()
// {
//     int size;
//     int arr[] = {1,2,3,4,5,4,6,7};
//     int a = check(arr, 8);
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 ans++;
//             }
//         }
//         if (ans == 1)
//         {
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// }
// int main()
// {
//     int size;
//     int arr[] = {1, 2, 2, 3, 3};
//     int a = check(arr, 5);
//     cout << a << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int array[], int num){
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         ans = ans ^ array[i];
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     int array[] = {1, 2, 2, 2, 2, 3, 3, 3};
//     int result = check(array, 8);
//     cout<<result<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         int temp = 0;
//         temp = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = temp;
//     }
// }
// int print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int size;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     check(arr, 10);
//     print(arr, 10);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num, int key){
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] == key)
//         {
//             ans++;
//         }
//     }
//     return ans;
//     return -1;
// }
// int print(int arr[], int num, int key){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int num;
//     int arr[5] = {1,2,3,4,5};
//     cout<<check(arr, 5, 3)<<endl;
//     print(arr, 5, 3);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int pivot(int arr[], int num)
// {
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
// };
// int checkbinary(int arr[], int num, int key)
// {
//     int start = 0;
//     int end = num - 1;
//     int pivot1 = pivot(arr, num);
//     if (arr[pivot1] == key)
//     {
//         return pivot1;
//     }
//     if (key >= arr[0])
//     {
//         end = pivot1 - 1;
//     }
//     else
//     {
//         start = pivot1;
//     }
//     // Binary
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
// }
// int main()
// {
//     int arr[] = {1, 3, 5, 6, 7};
//     cout << pivot(arr, 5) << endl;
//     cout << checkbinary(arr, 5, 1) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 0;
//     int num;
//     cout << "Enter a prime number : " << endl;
//     cin >> num;
//     if (num == 0 || num == 1)
//     {
//         cout << "It is not a Prime Number";
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
//         if (count == 0)
//         {
//             cout << "It is a Prime Number";
//         }
//         else
//         {
//             cout << "It is not a Prime Number";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int printstar(int num){
//     for (int i = 1; i <= num; i++)       //this will run from 0-4 but we want 5 so we will start from i=1 to i<=num
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }
// int main()
// {
//    int num;
//    cout<<"Enter your number : ";
//    cin>>num;
//    printstar(num);
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int printstar(int num){
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 0; j <= num - i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin>>num;
//     printstar(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num){
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin>>num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             sum++;
//             cout<<sum<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             sum++;
//             cout<<sum<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i + j - 1<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i - j + 1<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<char('A' + j - 1)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<char('A' + sum)<<" ";
//             sum++;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<char('A' + i + j - 2)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A' + i - 1)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A' + i + j - 2)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     char sum = ('A' + num - 1);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(sum + i - j)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         char sum = ('A' + num - i);
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<sum<<" ";
//             sum++;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = 1;
//         while (space <= i - 1)
//         {
//             cout<<" ";
//             space++;
//         }
//         for (int j = num; j >= i; j--)
//         {
//             // cout<<"*"<<" ";
//             // cout<<j<<" ";
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = 1;
//         while (space <= i - 1)
//         {
//             cout<<" ";
//             space++;
//         }
//         for (int j = num; j >= i; j--)
//         {
//             // cout<<j;
//             // cout<<i;
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         for (j; j <= i; j++)
//         {
//             cout<<j;
//         }
//         for (int k = 1; k < i; k++)
//         {
//             cout<<k + i - j + 1;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num){
//     int pro = 1;
//     int sum = 0;
//     int remainder = 0;
//     while (num != 0)
//     {
//         remainder = num % 10;
//         pro = pro * remainder;
//         sum = sum + remainder;
//         num = num/10;
//     }
//     int Total = pro - sum;
//     return Total;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     cout<<"The diff. b/w sum and pro. of number is : "<<print(num);
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int ans = 0;
//     int i = 0;
//     while (num != 0)
//     {
//         int binary = num & 1;
//         ans = (ans * 10) + binary;
//         // ans = (binary * pow(10, i)) + ans;
//         num = num>>1;
//         i++;
//     }
//     cout<<"The ans is : "<<ans<<endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int ans = 0;
//     int i = 0;
//     int num;
//     cin >> num;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         if (digit == 1)
//         {
//             ans = (ans + pow(2, i));
//         }
//         num = num / 10;
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int ans = 0;
//     int num;
//     cin >> num;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         if (ans > INT32_MAX/10 || ans < INT32_MIN/10)
//         {
//         ans = (ans * 10) + digit;
//         }
//         num = num/10;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int binary(int num){
//     int m = num;
//     int ans = 0;
//     int digit = 0;
//     if (m == 0)
//     {
//         return 1;
//     }
//     while (m != 0)
//     {
//         digit = (digit << 1) | 1;
//         m = m >> 1;
//     }
//     ans = (~num) & digit;
//     return ans;
// }
// int main()
// {
//     int num;
//     cin >> num;
//     cout<<binary(num)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int ans = 0;
//     int i = 0;
//     int num;
//     cin >> num;
//     while (i <= num)
//     {
//         ans = pow(2,i);
//     }
//     if (ans == num)
//     {
//         return true;
//     }
//     return false;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int num1, int num2){
//     int ans = 1;
//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num1;
//     }
//     return ans;
// }
// int main()
// {
//     int num1, num2;
//     cin>>num1;
//     cin>>num2;
//     cout<<print(num1, num2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int search(int arr[], int num, int key){
//     int found = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }
// int main()
// {
//     int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
//     cout<<"Enter the number which you are finding : ";
//     int found = search(arr, 10, 5);
//     if (found)
//     {
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int printarray(int arr[], int num){
//     for (int i = 0; i < num; i+=2)
//     {
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
//     return temp;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     print(arr, 5);
//     printarray(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num){
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     int arr[] = {1,2,3,3,2,4,4};
//     cout<<check(arr, 7)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num)
// {
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < num; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 ans++;
//             }

//         }
//         if(ans == 1)
//         {
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 3, 2, 4, 4};
//     cout << check(arr, 7) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num){
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     for (int i = 0; i < num; i++)
//     {
//         ans = ans ^ i;
//     }
//     return ans;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,3,3,2,4,4,4};
//     cout<<check(arr, 8);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num)
// {
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < num; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 ans = arr[i];
//             }
//             else if (arr[i] < arr[j])
//             {
//                 i++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         return ans;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 3, 2, 4, 4};
//     cout<<check(arr, 7);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//     cout<<arr[i]<<" ";
//     }

// }
// int check(int arr[], int num)
// {
//     int start = 0;
//     int end = num - 1;
//     while (start < end)
//     {
//         if (arr[start] == 0)
//         {
//             start++;
//         }
//         else if (arr[end] == 1)
//         {
//             end--;
//         }
//         else
//         {
//             int temp;
//             temp = arr[start];
//             arr[start] = arr[end];
//             arr[end] = temp;
//             start++;
//             end--;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 0, 0, 1, 0, 0, 1, 1};
//     check(arr, 7);
//     print(arr, 7);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int checkfirstindex(int arr[], int num, int key){
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start)/2;
//     int ans = -1;
//     while (start < end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             return ans;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return mid;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,2,3,3,3,4,4,4,4};
//     cout<<checkfirstindex(arr, 10, 2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int checkfirstindex(int arr[], int num, int key)
// {
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
//     return -1;
// }
// int checklastindex(int arr[], int num, int key)
// {
//     int ans = -1;
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
//     cout << checkfirstindex(arr, 10, 2)<<endl;
//     cout << checklastindex(arr, 10, 2)<<endl;
//     // cout<<a<<endl;
//     // cout<<b<<endl;
//     // int Total = (a - b + 1);
//     // cout<<Total<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int checkfirstindex(int arr[], int num)
// {
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] < arr[mid + 1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return end;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 0};
//     cout << checkfirstindex(arr, 4)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int checkfirstindex(int arr[], int num)
// {
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 5, 9, 11};
//     cout << checkfirstindex(arr, 5)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int pivot(int arr[], int num){
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start)/2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start)/2;
//     }
//     return mid;
//     return -1;
// }
// int binary(int arr[], int num, int key){
//     int pivots = pivot(arr, num);
//     int start = 0;
//     int end = num - 1;
//     int mid = start + (end - start)/2;
//     if (arr[pivots] == key)
//     {
//         return pivots;
//     }
//     if (key >= arr[0])
//     {
//         end = pivots - 1;
//     }
//     else
//     {
//         start = pivots;
//     }
//     while (start < end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return mid;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     cout<<pivot(arr, 5)<<endl;
//     cout<<binary(arr, 5, 2)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binarysearch(int num){
//     int start = 0;
//     int end = num - 1;
//     long long int mid = start + (end - start)/2;
//     while (start <= end)
//     {
//         long long int square = mid * mid;
//         if (square == num)
//         {
//             return mid;
//         }
//         else if (square > num)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return mid;
//     return -1;
// }
// int main()
// {
//     int a = binarysearch(169);
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sort(int arr[], int num){
//     for (int i = 0; i < num - 1; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }

// }
// int main()
// {
//     int arr[] = {22,1,3,4,5,66,77,88,99,100};
//     sort(arr, 10);
//     print(arr, 10);
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int sort(int arr[], int num)
// {
//     for(int i = 1; i<num; i++) {
//         //for round 1 to n-1
//         for(int j = 0; j < num-i; j++) {

//             //process element till n-i th index
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[] = {1,4,22,8,11};
//     sort(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int sort(int arr[], int num)
// {
//     for(int i = 1; i<num; i++) {
//         int j = i - 1;
//         int temp = arr[i];
//         for(j; j >= 0; j--) {

//             //process element till n-i th index
//             if(arr[j] > temp) {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[] = {1,4,22,8,11};
//     sort(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int sort(int arr[], int num, int arr1[], int num2, int arr2[])
// {
//     int i = 0, j = 0, k = 0;
//     while (i < num && j < num2)
//     {
//         if (arr[i] < arr1[j])
//         {
//             arr2[k] = arr[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr2[k] = arr1[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < num)
//     {
//         arr2[k] = arr[i];
//         k++;
//         i++;
//     }
//     while (j < num2)
//     {
//         arr2[k] = arr1[j];
//         k++;
//         j++;
//     }
// }
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[5] = {1,3,5,7,8};
//     int arr1[5] = {2,4,6,9,10};
//     int arr2[10] = {0};
//     sort(arr, 5, arr1, 5, arr2);
//     print(arr2, 10);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int sort(int arr[], int num)
// {
//     int start = 0;
//     for (int j = 0; j < num; j++)
//     {
//         if (arr[j] != 0)
//         {
//             int temp;
//             temp = arr[start];
//             arr[start] = arr[j];
//             arr[j] = temp;

//             start++;
//             j--;
//         }
//     }
// }
// int print(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {
//     int arr[] = {0, 1, 0, 3, 12, 44, 6, 0, 1, 0};
//     sort(arr, 10);
//     print(arr, 10);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int sort(int arr[], int num, int key)
// {
//     vector<int> temp(num);
//     for (int i = 0; i < num; i++)
//     {
//         temp[(i + key) % num] = arr[i];
//     }
//     for (int i = 0; i < num; i++)
//     {
//         arr[i] = temp[i];
//     }
// }
// int print(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {
//     int arr[] = {11, 12, 13, 14, 15};
//     sort(arr, 5, 3);
//     print(arr, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int check(int arr[], int num){
//     int count = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[num - i] > arr[i])
//         {
//             count++;
//         }
//         if (arr[num - i] > arr[0])
//         {
//             count++;
//         }
//     }
//     return count <= 1;
// }
// int print(int arr[], int num){
//     for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i]<<endl;
//     }

// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     check(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> ans){
//     int start = 0;
//     int end = ans.size() - 1;
//     while (start < end)
//     {
//         int Temp;
//         Temp = ans[start];
//         ans[start] = ans[end];
//         ans[end] = Temp;
//         start++;
//         end--;
//     }
//     return ans;
// }
// vector<int> Getsum(vector<int> v1, int num, vector<int> v2, int num2){
//     int a = 0;
//     int b = 0;
//     vector<int>ans;
//     for (int i = 0; i < num; i++)
//     {
//         a = ((a * 10) + v1[i]);
//     }
//     for (int i = 0; i < num2; i++)
//     {
//         b = ((b * 10) + v2[i]);
//     }
//     int sum = a + b;
//     while (sum != 0)
//     {
//         ans.push_back(sum % 10);
//         sum = sum/10;
//     }
//     return reverse(ans);
// }
// vector<int> print(vector<int> Total){
//     for (int i = 0; i < Total.size(); i++)
//     {
//         cout<<Total[i]<<" ";
//     }
// }
// int main()
// {
//     vector<int> v1;
//     vector<int> v2;
//     v1.push_back(5);
//     v1.push_back(1);
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(2);

//     v2.push_back(2);
//     v2.push_back(2);

//     vector<int> Total = Getsum(v1, v1.size(), v2, v2.size());
//     cout<<"The result is : \n";
//     print(Total);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// char isLowercase(char ch){
//     char temp;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// char isPalindrome(char arr[], int num){
//     int start = 0;
//     int end = num - 1;
//     while (start <= end)
//     {
//         if (isLowercase(arr[start]) != isLowercase(arr[end]))
//         {
//             return 0;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
// }
// int main()
// {
//     char arr[4];
//     cin>>arr;
//     if (isPalindrome(arr, 4))
//     {
//         cout<<"Yes It is an Palindrome";
//     }
//     else
//     {
//         cout<<"It is not an Palindrome";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int size;
//     cin >> size;
//     string str = "My name is Harry";
//     int start = 0;
//     int end = size - 1;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ' || str[i] == '\0')            // str[size] that is also correct
//         {
//             while (start <= end)
//             {
//                 swap(str[start], str[end]);
//                 start++;
//                 end--;
//             }
//         }
//         size++;
//     }
//     cout<<str<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// string check(string s, int size){
//     for(int i = 0; i < size; i++)
//     {
//         if (s[i] == ' ')
//         {
//             s.replace(i, 1, "@40");
//         }
//     }
//     return s;
// }
// int main()
// {
//     int size;
//     cin>>size;
//     string s = "My name is Harry";
//     cout<<check(s, size)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// char maxoccur(string s){
//     int arr[26] = {0};

//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }
//     int max = -1;
//     int ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (max < arr[i])
//         {
//             ans = i;
//             max = arr[i];
//         }
//     }
//     return 'a' + ans;
// }
// int main()
// {
//     int size;
//     cin>>size;
//     string s = "Harry";
//     cout<<maxoccur(s)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s = "abbbaaca";
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         if (s[i] == s[i + 1])
//         {
//             s.erase(i, 3);
//             i--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout<<s<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int prime(int n){
//     vector<int> V(n + 1, true);
//     int ans = 0;
//     if (n == 0 || n == 1)
//     {
//         cout<<"Not Prime";
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (V[i])
//             {
//                 ans++;
//                 for (int j = 2 * i; j < n; j = j + i)
//                 {
//                     V[j] = false;
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     cout<<"Total prime numbers are : "<<prime(50)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fastExpo(int a, int b) {

//     int res = 1;

//     while(b > 0) {   // if power > 0

//         if(b&1) {
//             //odd
//             res = res*a;
//         }
//         b = b >> 1;    // This will right shift power by 1
//         a = a * a;
//     }
//     return res;
// }

// int main() {
//     int a,b;
//     cout << "Enter the Values of a and b" << endl;
//     cin >> a >> b;

//     cout << "Answer is: " << fastExpo(a,b) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// long long int catalan(int n)
// {
//     int res = 0;
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             res += catalan(i) * catalan(n - i - 1);
//         }
//     }
//     return res;
// }

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Answer is: " << catalan(i) << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int saydigit(string arr[], int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         int digit = num % 10;
//         num = num / 10;
//         saydigit(arr, num);
//         cout<<arr[digit]<<" ";
//     }
// }
// int main()
// {
//     string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     saydigit(arr, num);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     else if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool ans = isSorted(arr + 1, size - 1);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[5] = {2,4,6,8,9};
//     int size = 5;
//     cout<<isSorted(arr, size)<<endl;;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int Sum(int arr[], int size){
//     if (size == 0)
//     {
//         return 0;
//     }
//     else if (size == 1)
//     {
//         return arr[0];
//     }
//     else
//     {
//         int ans = arr[size - 1] + Sum(arr, size - 1);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout<<"Sum of Array is : "<<Sum(arr, 5)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int s, int size, int key)
// {
//     int e = size - 1;
//     int mid = s + (e - s)/2;
//     if (s > e)
//     {
//         return false;
//     }
//     else
//     {
//         if (arr[mid] == key)
//         {
//             return true;
//         }
//         else if (arr[mid] > key)
//         {
//             return binarySearch(arr, s, mid - 1, key);
//         }
//         else
//         {
//             return binarySearch(arr, mid + 1, e, key);
//         }
//     }
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14};
//     if (binarySearch(arr, 0, 7, 4))
//     {
//         cout << "Key is present in array";
//     }
//     else
//     {
//         cout << "Key is not present in array";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int pivot(int arr[], int s, int e)
// {

//     if (s >= e)
//     {
//         return s;
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] < arr[mid + 1])
//     {
//         return pivot(arr, mid + 1, e);
//     }
//     else
//     {
//         return pivot(arr, s, mid);
//     }
// }

// int main()
// {
//     int arr[7] = {3, 4, 5, 1, 2, 4, 3};
//     int ans = pivot(arr, 0, 6);
//     cout << "pivot index is: " << ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int reverse(string &s, int start, int end){
//     if (start > end)
//     {
//         return 0;
//     }
//     else
//     {
//         swap(s[start++], s[end--]);
//     }
// }
// int main()
// {
//     string s = "Harry";
//     reverse(s, 0, s.length() - 1);
//     cout<<"The reversed string is : "<<s<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int merge(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;
//     int inversion = 0;

//     int *ptr = new int[len1];
//     int *ptrr = new int[len2];

//     int mainArrayIndex = start;
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         ptrr[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = start;
//     // Using Merge Sort Concept
//     int index1 = 0;
//     int index2 = 0;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (ptr[index1] < ptrr[index2])
//         {
//             arr[mainArrayIndex++] = ptr[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = ptrr[index2++];
//             inversion += len1 - index1;
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = ptr[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = ptrr[index2++];
//     }
//     return inversion;
// }
// int sort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return 0;
//     }
//     int inversion = 0;

//     int mid = start + (end - start) / 2;

//     inversion += sort(arr, start, mid);

//     inversion += sort(arr, mid + 1, end);

//     inversion += merge(arr, start, end);

//     return inversion;
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
//     int inversion = sort(arr, 0, num - 1);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout<<"The inversions are : "<<inversion<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int partition(int arr[], int s, int e)
// {
//     int pivot = arr[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     int pivotindex = s + count;
//     swap(arr[pivotindex], arr[s]);
//     while (s < pivotindex && e > pivotindex)
//     {
//         if (arr[s] < pivot)
//         {
//             s++;
//         }
//         if (arr[e] > pivot)
//         {
//             e--;
//         }
//         if (s < pivotindex && e > pivotindex)
//         {
//             swap(arr[s++], arr[e--]);
//         }
//     }
// }
// int sort(int arr[], int s, int e)
// {
//     if (s >= e)
//     {
//         return 0;
//     }

//     int p = partition(arr, s, e);

//     sort(arr, s, p - 1);

//     sort(arr, p + 1, e);
// }
// int main()
// {
//     int size;
//     cout << "Enter size of array : ";
//     cin >> size;
//     int arr[5] = {1, 22, 3, 44, 5};
//     cout << "Before swapping : \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << "After swapping : \n";
//     sort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
//     {
//         if (index >= arr.size())
//         {
//             ans.push_back(output);
//             return;
//         }
//         // Exclude
//         solve(arr, output, index + 1, ans);
//         // Include
//         int element = arr[index];
//         output.push_back(element);
//         solve(arr, output, index + 1, ans);
//     }

// public:
//     vector<vector<int>> answer(vector<int> &arr){
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(arr, output, index, ans);
//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void number(vector<string> &ans, int index, string output, string str, string arr[])
//     {
//         if (index >= str.length())
//         {
//             if (str.length() > 0)
//             {
//                 ans.push_back(output);
//                 return;
//             }
//         }
//         int element = str[index];
//         string digit = arr[element];
//         for (int i = 0; i < digit.length(); i++)
//         {
//             output.push_back(digit[i]);
//             number(ans, index + 1, output, str, arr);
//             output.pop_back();
//         }
//     }
// public:
//     vector<string> result(string str){
//         vector<string> ans;
//         int index = 0;
//         string output;
//         if (str.length() == 0)
//         {
//             return ans;
//         }
//         string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         number(ans, index, output, str, arr);
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(vector<int> arr, vector<vector<int>> &ans, int index) // we will return ans therefore we did call by reference &ans
//     {
//         // Base case
//         if (index >= arr.size()) // if index >= size of string then we will return the ans and come out of the loop
//         {
//             ans.push_back(arr);
//             return;
//         }
//         for (int i = index; i < arr.size(); i++)
//         {
//             swap(arr[index], arr[i]);
//             solve(arr, ans, index + 1);
//             swap(arr[index], arr[i]);
//         }
//     }
// public:
//     vector<vector<int>> answer(vector<int> &arr)
//     {
//         vector<vector<int>> ans;
//         int index = 0;
//         solve(arr, ans, index);
//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution
// {
// private:
//     bool isSafe(int x, int y, int n, vector < vector<int>> visited, vector < vector<int>> &arr)
//     {
//         if ((x >= 0 && x > n) && (y >= 0 && y > n) && visited[x][y] == 0 && arr[x][y] == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void solve(vector<string> &ans, int n, int x, int y, vector<vector<int>> visited, vector<vector<int>> &arr, string path)
//     {
//         if (x == n - 1 && y == n - 1)
//         {
//             ans.push_back(path);
//             return;
//         }
//         visited[x][y] = 1;
//         // Down
//         int newx = x + 1;
//         int newy = y;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('D');
//             solve(ans, n, newx, newy, visited, arr, path);
//             path.pop_back();
//         }
//         // Left
//         newx = x;
//         newy = y - 1;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('L');
//             solve(ans, n, newx, newy, visited, arr, path);
//             path.pop_back();
//         }
//         // Right
//         newx = x;
//         newy = y + 1;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('R');
//             solve(ans, n, newx, newy, visited, arr, path);
//             path.pop_back();
//         }
//         // Up
//         newx = x - 1;
//         newy = y;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('U');
//             solve(ans, n, newx, newy, visited, arr, path);
//             path.pop_back();
//         }
//         visited[x][y] = 0;
//     }
// public:
//     vector<string> findPath(vector<vector<int>> &arr, int n){
//         vector<string> ans;
//         if (arr[0][0] == 0)
//         {
//             return ans;
//         }
//         vector<vector<int>> visited = arr;
//         int x = 0;
//         int y = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 visited[i][j] = 0;
//             }
//         }
//         string path = "";
//         solve(ans, n, x, y ,visited, arr, path);
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution
// {
// private:
//     bool isSolution(vector<int> &stalls, int n, int k, int mid)
//     {
//         int lastPos = stalls[0];
//         int cowcount = 1;
//         for (int i = 0; i < n; i++)
//         {
//             if (stalls[i] - lastPos >= mid)
//             {
//                 cowcount++;
//                 if (cowcount == k)
//                 {
//                     return true;
//                 }
//                 lastPos = stalls[i];
//             }
//         }
//         return false;
//     }
// public:
//     int agressivecow(vector<int> &stalls, int k){
//         sort(stalls.begin(), stalls.end());
//         int n = stalls.size();
//         int s = 0;
//         int e = stalls[n - 1];
//         int mid = s + (e - s)/2;
//         int ans = -1;
//         while (s <= e)
//         {
//             if (isSolution(stalls, n, k, mid))
//             {
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//             mid = s + (e - s)/2;
//         }
//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     int Sol(vector<char> &chars)
//     {
//         int i = 0;
//         int n = chars.size();
//         int arrayIndex = 0;
//         while (i < n)
//         {
//             int j = i + 1;
//             while (j < n && chars[i] == chars[j])
//             {
//                 j++;
//             }
//             chars[arrayIndex++] = chars[i];
//             int count = j - i;
//             if (count > 1)
//             {
//                 string cnt = to_string(count);
//                 for (char ch : cnt)
//                 {
//                     chars[arrayIndex++] = ch;
//                 }
//             }
//             i = j;
//         }
//         return arrayIndex;
//     }
// };

// #include <iostream>
// using namespace std;
// bool isPossible(int arr[], int n, int m, int mid)
// {
//     int pagesum = 0;
//     int studentcount = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (pagesum + arr[i] <= mid)
//         {
//             pagesum += arr[i];
//         }
//         else
//         {
//             studentcount++;
//             if (studentcount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// };
// int allocatebook(int arr[], int n, int m, int s, int e, int *p)
// {
//     if (s > e)
//     {
//         return *p;
//     }
//     int mid = s + (e - s) / 2;
//     if (isPossible(arr, n, m, mid))
//     {
//         *p = mid;
//         allocatebook(arr, n, m, s, mid - 1, p);
//     }
//     else
//     {
//         allocatebook(arr, n, m, mid + 1, e, p);
//     }
// }
// int main()
// {
//     int arr[4] = {10, 20, 30, 40};
//     int ans = -1;
//     int sum = 0;
//     int n = 4;
//     int m = 2;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     ans = allocatebook(arr, n, m, 0, sum, &ans);
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtIndex(Node* &head, int index, int data){
//     Node* e = (Node*)malloc(sizeof(Node));
//     Node* p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->ptr;
//         i++;
//     }
//     e->data = data;
//     e->ptr = p->ptr;
//     p->ptr = e;
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     Node* e = new Node(20);
//     // e->ptr = second->ptr;
//     // second->ptr = e;
//     // TraversalLL(head);
//     head = insertAtIndex(head, 2, 12);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtEnd(Node* &head, int data){
//     Node* e = new Node(22);
//     Node* p = head;
//     while (p->ptr != NULL)
//     {
//         p = p->ptr;
//     }
//     p->ptr = e;
//     e->ptr = NULL;
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     // Node* e = new Node(20);
//     // tail->ptr = e;
//     // e->ptr = NULL;
//     head = insertAtEnd(head, 12);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtEnd(Node* &head, Node* &third, int data){
//     Node* e = new Node(22);
//     e->ptr = third->ptr;
//     third->ptr = e;
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     Node* e = new Node(20);
//     // e->ptr = second->ptr;
//     // second->ptr = e;
//     head = insertAtEnd(head, third, 12);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtEnd(Node* &head, int data){
//     Node* e = new Node(22);
//     Node* p = head;
//     while (p->ptr != NULL)
//     {
//         p = p->ptr;
//     }
//     p->ptr = e;
//     e->ptr = NULL;
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     // Node* e = new Node(20);
//     // tail->ptr = e;
//     // e->ptr = NULL;
//     head = insertAtEnd(head, 12);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtEnd(Node* &head, int index){
//     Node* e = head;
//     Node* p = head->ptr;
//     for (int i = 0; i < index - 1; i++)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = p->ptr;
//     free(p);
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     // Node* e = new Node(20);
//     // tail->ptr = e;
//     // e->ptr = NULL;
//     head = insertAtEnd(head, 2);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node* &head){
//     while (head != NULL)
//     {
//         cout<<"Element is : "<<head->data<<endl;
//         head = head->ptr;
//     }
// };
// Node* insertAtEnd(Node* &head){
//     Node* e = head;
//     Node* p = head->ptr;
//     while (p->ptr != NULL)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = NULL;
//     free(p);
//     return head;
// }
// int main()
// {
//     Node* head = new Node(2);
//     Node* second = new Node(4);
//     Node* third = new Node(6);
//     Node* fourth = new Node(8);
//     Node* tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     // Node* e = new Node(20);
//     // tail->ptr = e;
//     // e->ptr = NULL;
//     head = insertAtEnd(head);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node *&head)
// {
//     while (head != NULL)
//     {
//         cout << "Element is : " << head->data << endl;
//         head = head->ptr;
//     }
// };
// Node *insertAtEnd(Node *&head, int index)
// {
//     Node *e = head;
//     Node *p = head->ptr;
//     while (p->data != index && p->ptr != NULL)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     if (p->data == index)
//     {
//         e->ptr = p->ptr;
//         free(p);
//     }
//     return head;
// };
// int main()
// {
//     Node *head = new Node(2);
//     Node *second = new Node(4);
//     Node *third = new Node(6);
//     Node *fourth = new Node(8);
//     Node *tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     // Node* e = new Node(20);
//     // tail->ptr = e;
//     // e->ptr = NULL;
//     head = insertAtEnd(head, 4);
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr;

//     Node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalLL(Node *&head)
// {
//     Node *e = head;
//     while (e->ptr != head)
//     {
//         cout << "Element is : " << e->data << endl;
//         e = e->ptr;
//     }
//     cout<<"Element is : "<<e->data<<endl;
// };
// int main()
// {
//     Node *head = new Node(2);
//     Node *second = new Node(4);
//     Node *third = new Node(6);
//     Node *fourth = new Node(8);
//     Node *tail = new Node(10);
//     head->ptr = second;
//     second->ptr = third;
//     third->ptr = fourth;
//     fourth->ptr = tail;
//     tail->ptr = head;
//     TraversalLL(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// };
// Node *insertAtFirst(Node *head, int data)
// {
//     Node* e;
//     e->data = data;
//     e->next = head;
//     Node* p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     p->next = e;
//     head = e;
//     return head;
// };
// int main()
// {

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 4;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 3;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 6;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 1;
//     fourth->next = head;

//     linkedListTraversal(head);
//     cout<<"After adding elements : "<<endl;
//     head = insertAtFirst(head, 2);
//     linkedListTraversal(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// };
// struct Node *insertAtFirst(struct Node *head)
// {
//     struct Node *ptr = head;
//     while (ptr->next != head)
//     {
//         ptr = ptr->next;
//     }
//     ptr->next = head->next;
//     head = head->next;
//     return head;
//     free(ptr);
// }

// int main()
// {

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 4;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 3;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 6;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 1;
//     fourth->next = head;

//     linkedListTraversal(head);
//     cout<<"After deleting elements : "<<endl;
//     head = insertAtFirst(head);
//     linkedListTraversal(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// Node* forward(Node* &head){
//     do
//     {
//         cout<<"The value is : "<<head->data<<endl;
//         cout<<"The next value is : "<<head->next<<endl;
//         cout<<"The prev value is : "<<head->prev<<endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             cout<<"We are at the end of DLL\n";
//             cout<<endl;
//         }
//     } while (head->next != NULL);
// };
// Node* backward(Node* &tail){
//     do
//     {
//         cout<<"The value is : "<<tail->data<<endl;
//         cout<<"The next value is : "<<tail->next<<endl;
//         cout<<"The prev value is : "<<tail->prev<<endl;
//         tail = tail->prev;
//         if (tail->prev == NULL)
//         {
//             cout<<"We are at the beginning of DLL\n";
//             cout<<endl;
//         }
//     } while (tail->prev != NULL);
// };
// int main()
// {
//     Node* head = new Node(20);
//     Node* second = new Node(22);
//     Node* third = new Node(24);
//     Node* fourth = new Node(26);
//     Node* tail = new Node(28);

//     head->next = second;
//     head->prev = NULL;

//     second->next = third;
//     second->prev = head;

//     third->next = fourth;
//     third->prev = second;

//     fourth->next = tail;
//     fourth->prev = third;

//     tail->next = NULL;
//     tail->prev = fourth;

//     forward(head);
//     backward(tail);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// Node* forward(Node* &head){
//     do
//     {
//         cout<<"The value is : "<<head->data<<endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             cout<<"End"<<endl;
//         }
//     } while (head->next != NULL);
// };
// Node* backward(Node* &tail){
//     do
//     {
//         cout<<"The value is : "<<tail->data<<endl;
//         tail = tail->prev;
//         if (tail->prev == NULL)
//         {
//             cout<<"Beginning"<<endl;
//         }
//     } while (tail->prev != NULL);
// };
// Node* insertAtFirst(Node* &head, int data){
//     Node* e = (Node*)malloc(sizeof(Node));
//     e->prev = NULL;
//     e->next = head;
//     e->data = data;
//     return e;
// };
// int main()
// {
//     Node* head = new Node(20);
//     Node* second = new Node(22);
//     Node* third = new Node(24);
//     Node* fourth = new Node(26);
//     Node* tail = new Node(28);

//     head->next = second;
//     head->prev = NULL;

//     second->next = third;
//     second->prev = head;

//     third->next = fourth;
//     third->prev = second;

//     fourth->next = tail;
//     fourth->prev = third;

//     tail->next = NULL;
//     tail->prev = fourth;

//     head = insertAtFirst(head, 5);
//     forward(head);
//     // backward(tail);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// Node *forward(Node *&head)
// {
//     do
//     {
//         cout << "The value is : " << head->data << endl;
//         cout<<"The next value is : "<<head->next<<endl;
//         cout<<"The prev value is : "<<head->prev<<endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             cout << "We are at the end of DLL\n";
//             cout<<endl;
//         }
//     } while (head->next != NULL);
// };
// Node *backward(Node *&tail)
// {
//     do
//     {
//         cout << "The value is : " << tail->data << endl;
//         cout<<"The next value is : "<<tail->next<<endl;
//         cout<<"The prev value is : "<<tail->prev<<endl;
//         tail = tail->prev;
//         if (tail->prev == NULL)
//         {
//             cout << "We are at the beginning of DLL\n";
//             // cout<<endl;
//         }
//     } while (tail->prev != NULL);
// };
// Node *DeleteFirst(Node *&head)
// {
//     Node *e = head;
//     Node *p = head->next;
//     p->prev = NULL;
//     head = head->next;
//     free(e);
//     return head;
// };
// int main()
// {
//     Node *head = new Node(20);
//     Node *second = new Node(22);
//     Node *third = new Node(24);
//     Node *fourth = new Node(26);
//     Node *tail = new Node(28);

//     head->next = second;
//     head->prev = NULL;

//     second->next = third;
//     second->prev = head;

//     third->next = fourth;
//     third->prev = second;

//     fourth->next = NULL;
//     fourth->prev = third;

//     tail->next = NULL;
//     tail->prev = fourth;

//     head = DeleteFirst(head);
//     forward(head);
//     backward(tail);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* reverseLL(Node* &head){
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node* previous = NULL;
//     Node* current = head;
//     Node* forward = NULL;
//     while (current != NULL)
//     {
//         forward = current->next;
//         current->next = previous;
//         previous = current;
//         current = forward;
//     }
//     return previous;       //new head
// };

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// int getLength(Node* &head){
//     int length = 0;
//     while (head != NULL)
//     {
//         length++;
//         head = head->next;
//     }
//     return length;
// };
// Node* midOfLL(Node* &head){
//     Node* temp = head;
//     int count = 0;
//     int length = getLength(head);
//     int mid = (length/2);
//     while (count < mid)
//     {
//         temp = temp->next;
//         count++;
//     }
// return temp;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* kReverse(Node* &head, int k){
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node* forward = NULL;
//     Node* current = head;
//     Node* prev = NULL;
//     int count = 0;
//     while (current != NULL && count < k)
//     {
//         count++;
//         forward = current->next;
//         current->next = prev;
//         prev = current;
//         current = forward;
//     }
//     if (forward != NULL)
//     {
//         head->next = kReverse(head, k);
//     }
//     return prev;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// Node *getNode(int data)
// {
//     Node *node = new Node;
//     node->data = data;
//     node->next = NULL;
//     return node;
// };
// bool isCircular(Node *&head)
// {
//     if (head == NULL)
//     {
//         return true;
//     }
//     Node *ptr = head->next;
//     while (ptr != NULL && ptr != head)
//     {
//         ptr = ptr->next;
//     }
//     if (ptr == head)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// };
// int main()
// {
//     Node *head = getNode(10);
//     Node *second = getNode(20);
//     // Node *start;
//     // Node *second;
//     Node *third = getNode(30);
//     Node *fourth = getNode(40);
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = head;
//     if (isCircular(head))
//         cout << "The list is circular list";
//     else
//         cout << "The list is not circular list";
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *meetingpoint(Node *&head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node *slow = head;
//     Node *fast = head;
//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//         }
//         slow = slow->next;
//     }
//     if (slow == fast)
//     {
//         return slow;
//     }
//     else
//     {
//         return NULL;
//     }
// };
// Node* getStarting(Node* &head){
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node* intersection = meetingpoint(head);
//     Node* slow = head;
//     while (slow != intersection)
//     {
//         slow = slow->next;
//         intersection = intersection->next;
//     }
//     return slow;
// };
// Node* breakingpoint(Node* &head){
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node* StartOfLoop = getStarting(head);
//     Node* temp = StartOfLoop;
//     while (temp->next != StartOfLoop)
//     {
//         temp = temp->next;
//     }
//     temp->next = NULL;
//     return head;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[50], i, element, pos, size;
//     cout << "Enter size : ";
//     cin >> size;
//     cout << "Enter " << size << " Array Elements: ";
//     for (i = 0; i < size; i++)
//         cin >> arr[i];
//     cout << "Enter element for insertion : ";
//     cin >> element;
//     cout << "\nEnter position of that element : ";
//     cin >> pos;
//     for (i = size; i >= pos; i--)
//         arr[i] = arr[i - 1];
//     arr[i] = element;
//     size++;
//     cout << "\nThe New Array is:\n";
//     for (i = 0; i < size; i++)
//         cout << arr[i] << "  ";
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *findUniqueNode(Node *&head)
// {
//     // Base Case
//     if (head == NULL)
//     {
//         return head;
//     }
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if ((temp->next != NULL) && temp->data == temp->next->data)
//         {
//             Node *next_next = temp->next->next;
//             Node *deleteNode = temp->next;
//             delete (deleteNode);
//             temp->next = next_next;
//         }
//     }
//     return head;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* findUniqueNode(Node* &head){
//     if (head == NULL)
//     {
//         return head;
//     }
//     Node* temp = head;
//     Node* prev = NULL;
//     unordered_map<int, bool> visited;
//     while (temp != NULL)
//     {
//         if(visited[temp->data] != true){
//             visited[temp->data] = true;
//             prev = temp;
//             temp = temp->next;
//         }
//         else
//         {
//             prev->next = temp->next;
//             Node* deleteNode = temp;
//             temp = temp->next;
//             delete(deleteNode);
//         }

//     }
//     return head;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *sort(Node *&head)
// {
//     if (head == NULL)
//     {
//         return head;
//     }
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zero++;
//         }
//         else if (temp->data == 1)
//         {
//             one++;
//         }
//         else if (temp->data == 2)
//         {
//             two++;
//         }
//         temp = temp->next;
//     }
//     // Refreshing
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zero != 0)
//         {
//             temp->data = 0;
//             zero--;
//         }
//         else if (one != 0)
//         {
//             temp->data = 1;
//             one--;
//         }
//         else if (two != 0)
//         {
//             temp->data = 2;
//             two--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

// #include <bits/stdc++.h>
// using namespace std;
// template <typename T>
// class Node
// {
// public:
//     T data;
//     Node *next;

//     Node(T data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node<int> *Merge(Node<int> *&head1, Node<int> *&head2)
// {
//     if (head1->next == NULL)
//     {
//         head1->next = head2;
//         return head1;
//     }
//     Node<int> *curr1 = head1;
//     Node<int> *next1 = curr1->next;
//     Node<int> *curr2 = head2;
//     Node<int> *next2 = curr2->next;

//     while (next1 != NULL && curr2 != NULL)
//     {
//         // Insert element of 2nd LL in 1st LL
//         if (curr2->data >= curr1->data && curr2->data <= next1->data)
//         {
//             // 1st LL pointing at 2nd LL
//             curr1->next = curr2;
//             // 2nd LL pointing at 2nd LL next elements
//             next2 = curr2->next;
//             // 2nd LL next is pointing back at 1st LL
//             curr2->next = next1;
//             curr1 = curr2;
//             curr2 = next2;
//         }
//         else
//         {
//             curr1 = next1;
//             next1 = next1->next;
//             if (next1 == NULL)
//             {
//                 curr1->next = curr2;
//                 return head1;
//             }
//         }
//     }
//     return head1;
// }
// Node<int> *mergesort(Node<int> *&head1, Node<int> *&head2)
// {
//     if (head1 == NULL)
//     {
//         return head2;
//     }
//     if (head2 == NULL)
//     {
//         return head1;
//     }
//     if (head1->data <= head2->data)
//     {
//         sort(head1, head2);
//     }
//     else
//     {
//         sort(head2, head1);
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class Solution
// {
// private:
//     bool checkPalindrome(vector<int> arr)
//     {
//         int size = arr.size();
//         int e = 0;
//         int s = size - 1;
//         while (s <= e)
//         {
//             if (arr[s] != arr[e])
//             {
//                 return false;
//             }
//             s++;
//             e--;
//         }
//         return 1;
//     }

// public:
//     bool isPalindrome(Node *&head)
//     {
//         vector<int> arr;
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             arr.push_back(temp->data);
//             temp = temp->next;
//         }
//         return checkPalindrome(arr);
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class Solution
// {
// private:
//     Node *findMiddle(Node *&head)
//     {
//         Node *slow = head;
//         Node *fast = head->next;

//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         return slow;
//     }
//     Node *reverse(Node *&head)
//     {
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *next = NULL;
//         while (curr != NULL)
//         {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

// public:
//     bool isPalindrome(Node *&head)
//     {
//         if (head->next == NULL)
//         {
//             return true;
//         }
//         Node *middle = findMiddle(head);
//         Node *data = middle->next;

//         Node *headdata = head;
//         Node *headmidlledata = middle->next;
//         while (headdata != headmidlledata && headmidlledata != NULL)
//         {
//             if (headdata->data != headmidlledata->data)
//             {
//                 return 0;
//             }
//             headdata = headdata->next;
//             headmidlledata = headmidlledata->next;
//         }
//         data = middle->next;
//         middle->next = reverse(head);
//         return true;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class Solution
// {
//     Node *reverse(Node *&head)
//     {
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *next = NULL;

//         while (curr != NULL)
//         {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     Node *insertAtTail(Node *&head, Node *&tail, int digit)
//     {
//         Node *temp = new Node(digit);

//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }
//     Node *add(Node *&first, Node *&second)
//     {
//         int carry = 0;
//         Node *ansHead = NULL;
//         Node *ansTail = NULL;
//         while (first != NULL || second != NULL || carry != 0)
//         {
//             int val1 = 0;
//             if (first != NULL)
//             {
//                 val1 = first->data;
//             }
//             int val2 = 0;
//             if (second != NULL)
//             {
//                 val2 = second->data;
//             }
//             int sum = val1 + val2 + carry;
//             int digit = sum % 10;
//             insertAtTail(ansHead, ansTail, digit);
//             carry = sum / 10;
//             if (first != NULL)
//             {
//                 first = first->next;
//             }
//             if (second != NULL)
//             {
//                 second = second->next;
//             }
//         }
//         return ansHead;
//     }
//     Node *addTwoNodes(Node* &first, Node* &second)
//     {
//         first = reverse(first);
//         second = reverse(second);

//         Node *ans = add(first, second);

//         ans = reverse(ans);

//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *random;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->random = NULL;
//     }
// };
// class Solution
// {
// private:
//     void insertAtTail(Node *&head, Node *&tail, int digit)
//     {
//         Node *temp = new Node(digit);
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

// public:
//     Node *clone(Node *&head)
//     {
//         Node *a = head;
//         Node *cloneHead = NULL;
//         Node *cloneTail = NULL;

//         while (a != NULL)
//         {
//             insertAtTail(cloneHead, cloneTail, a->data);
//             a = a->next;
//         }

//         map<Node *, Node *> oldTonew;
//         Node *originalNode = head;
//         Node *cloneNode = cloneHead;

//         while (originalNode != NULL && cloneNode != NULL)
//         {
//             oldTonew[originalNode] = cloneNode;
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }
//         originalNode = head;
//         cloneNode = cloneHead;
//         while (originalNode != NULL)
//         {
//             cloneNode->random = oldTonew[originalNode->next];
//             cloneNode = cloneNode->next;
//             originalNode = originalNode->next;
//         }
//         return cloneHead;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *random;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->random = NULL;
//     }
// };
// class Solution
// {
// private:
//     Node *insertAtEnd(Node *&head, Node *&tail, int digit)
//     {
//         Node *temp = new Node(digit);
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

// public:
//     Node *copyList(Node *&head)
//     {
//         Node *cloneHead = NULL;
//         Node *cloneTail = NULL;
//         // Step 1
//         Node *temp1 = head;
//         while (temp1 != NULL)
//         {
//             insertAtEnd(cloneHead, cloneTail, temp1->data);
//             temp1 = temp1->next;
//         }
//         // Step 2
//         Node *originalNode = head;
//         Node *cloneNode = cloneHead;
//         while (originalNode != NULL && cloneNode != NULL)
//         {
//             Node *next = originalNode->next;
//             originalNode->next = cloneNode;
//             originalNode = next;

//             next = cloneNode->next;
//             cloneNode->next = originalNode;
//             cloneNode = next;
//         }
//         // Step 3
//         temp1 = head;
//         while (temp1 != NULL)
//         {
//             if (temp1->next != NULL)
//             {
//                 if (temp1->random != NULL)
//                 {
//                     temp1->next->random = temp1->random->next;
//                 }
//                 else
//                 {
//                     temp1->next->random = temp1->random;
//                 }
//             }
//             temp1 = temp1->next->next;
//         }
//         // Step 4
//         originalNode = head;
//         cloneNode = cloneHead;
//         while (originalNode != NULL && cloneNode != NULL)
//         {
//             originalNode->next = cloneNode->next;
//             originalNode = originalNode->next;
//             if (originalNode != NULL)
//             {
//                 cloneNode->next = originalNode->next;
//             }
//             cloneNode = cloneNode->next;
//         }
//         return cloneHead;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *findMid(Node *&head)
// {
//     Node *slow = head;
//     Node *fast = head->next;
//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }
// Node *merge(Node *&first, Node *&second)
// {
//     if (first == NULL)
//     {
//         return second;
//     }
//     if (second == NULL)
//     {
//         return first;
//     }
//     Node *ans = new Node(-1);
//     Node *temp = ans;
//     while (first != NULL && second != NULL)
//     {
//         if (first->data <= second->data)
//         {
//             temp->next = first;
//             temp = first;
//             first = first->next;
//         }
//         else
//         {
//             temp->next = second;
//             temp = second;
//             second = second->next;
//         }
//         while (first != NULL)
//         {
//             temp->next = first;
//             temp = first;
//             first = first->next;
//         }
//         while (second != NULL)
//         {
//             temp->next = second;
//             temp = second;
//             second = second->next;
//         }
//     }
//     ans = ans->next;
//     return ans;
// }
// Node *mergeSort(Node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *mid = findMid(head);
//     Node *left = head;
//     Node *right = mid->next;

//     left = mergeSort(left);
//     right = mergeSort(right);

//     Node *ans = merge(left, right);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *child;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->child = NULL;
//     }
// };
// Node* merge(Node* &first, Node* &second){
//     if (first == NULL)
//     {
//         return second;
//     }
//     if (second == NULL)
//     {
//         return first;
//     }
//     Node* temp;
//     if (first->data < second->data)
//     {
//         temp = first;
//         temp->child = merge(first->child, second);
//     }
//     else
//     {
//         temp = second;
//         temp->child = merge(first, second->child);
//     }
//     temp->next = NULL;
//     return temp;
// }
// Node* flatten(Node* &head){
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     head->next = flatten(head->next);
//     Node* ans = merge(head, head->next);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Solution(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             arr[top] = element;
//             top++;
//         }
//         else
//         {
//             cout << "Stack overflow" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack overflow" << endl;
//         }
//     }
//     int print()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };
// int main()
// {
//     Solution stack(10);
//     stack.push(5);
//     stack.push(10);
//     stack.push(14);
//     stack.push(18);
//     stack.push(20);
//     stack.pop();
//     cout << stack.print() << endl;
//     stack.pop();
//     cout << stack.print() << endl;
//     stack.pop();
//     cout<<stack.print()<<endl;
//     stack.pop();
//     cout<<stack.print()<<endl;
//     stack.pop();
//     cout << stack.print() << endl;
//     if (stack.isEmpty())
//     {
//     cout << "Empty stack" << endl;
//     }
//     else
//     {
//     cout << "Non Empty Stack" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     Solution(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top1 = -1;
//         top2 = size;
//     }
//     void push(int element){
//         if (top2 - top1 > 1)
//         {
//             arr[top1] = element;
//             top1++;
//         }
//         else
//         {
//             cout<<"Stack overflow"<<endl;
//         }
//     }
//     // Middle to end
//     void push2(int element){
//         if (top2 - top1 > 1)
//         {
//             top2++;
//             arr[top2] = element;
//         }
//         else
//         {
//             cout<<"Stack overflow"<<endl;
//         }
//     }

//     int pop1(){
//         if (top1 >= 0)
//         {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             cout<<"Stack underflow"<<endl;
//         }
//     }
//     int pop2(){
//         if (top2 < size)
//         {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//     }
//     bool isEmpty(){
//         if (top1 == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<char> stack;
//     string str = "Harry";
//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         stack.push(ch);
//     }
//     // Now we will have all char in stack
//     // Reverse
//     string ans = "";
//     while (!stack.empty())
//     {
//         char ch = stack.top();
//         stack.pop();
//         ans.push_back(ch);
//     }
//     cout<<"Reversed string is : "<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve(stack<int> &stack, int count, int size){
//     if (count == size / 2)
//     {
//         stack.pop();
//         return;
//     }
//     int ans = stack.top();
//     stack.pop();
//     // Recall solve() if not found count == size/2
//     solve(stack, count + 1, size);
//     // Store the removed part in stack
//     stack.push(ans);
// }
// void deleteMiddle(stack<int> &stack, int size){
//     int count = 0;
//     solve(stack, count, size);
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isValid(string str)
// {
//     stack<char> stack;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             stack.push(ch);
//         }
//         else
//         {
//             if (!stack.empty())
//             {
//                 char top = stack.top();
//                 if ((ch == ')' && top == '(') || (ch == '[' && top == ']') || (ch == '{' && top == '}'))
//                 {
//                     stack.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     if (stack.empty())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve(stack<int> &stack, int element){
//     if (stack.empty())
//     {
//         stack.push(element);
//         return;
//     }
//     int ans = stack.top();
//     stack.pop();
//     // Recall solve() if not found count == size/2
//     solve(stack, element);
//     // Store the removed part in stack
//     stack.push(ans);
// }
// void insertAtBottom(stack<int> &stack, int element){
//     solve(stack, element);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve(stack<int> &stack, int element)
// {
//     if (stack.empty())
//     {
//         return;
//     }
//     int ans = stack.top();
//     stack.pop();
//     // Recall solve() if not found count == size/2
//     solve(stack, element);
//     // Store the removed part in stack
//     stack.push(ans);
// }
// void reverse(stack<int> &stack)
// {
//     if (stack.empty())
//     {
//         return;
//     }
//     int element = stack.top();
//     stack.pop();
//     reverse(stack);
//     solve(stack, element);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve(stack<int> &stack, int element){
//     if (stack.empty() || (!stack.empty() && stack.top() < element))
//     {
//         stack.push(element);
//         return;
//     }
//     int num = stack.top();
//     stack.pop();
//     solve(stack, element);
//     stack.push(num);
// }
// void reverse(stack<int> stack){
//     if (stack.empty())
//     {
//         return;
//     }
//     int num = stack.top();
//     stack.pop();
//     reverse(stack);
//     solve(stack, num);
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isRedundant(string &str)
// {
//     stack<char> stack;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         {
//             stack.push(ch);
//         }
//         else
//         {
//             if (ch == ')')
//             {
//                 bool isRedundant = true;
//                 while (stack.top() != '(')
//                 {
//                     char top = stack.top();
//                     if (top == '+' || top == '-' || top == '/' || top == '*')
//                     {
//                         isRedundant = false;
//                     }
//                     stack.pop();
//                 }
//                 if (isRedundant == true)
//                 {
//                     return true;
//                 }
//                 stack.pop();
//             }
//         }
//     }
//     return false;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int solve(string &str){
//     if (str.length() % 2 == 1)
//     {
//         return -1;
//     }
//     stack<char> stack;
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         if (ch == '{')
//         {
//             stack.push(ch);
//         }
//         else
//         {
//             if (!stack.empty() && stack.top() == '{')
//             {
//                 stack.pop();
//             }
//             else
//             {
//                 stack.push(ch);
//             }
//         }
//     }
//     int a = 0;
//     int b = 0;
//     while (!stack.empty())
//     {
//         if (stack.top() == '{')
//         {
//             b++;
//         }
//         else
//         {
//             a++;
//         }
//         stack.pop();
//     }
//     int ans = (a + 1)/2 + (b + 1)/2;
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> solve(vector<int> &arr, int n){
//     stack<int> stack;
//     stack.push(-1);
//     vector<int> ans(n);
//     for (int i = n - 1; i >= 0; i--)
//     {
//         int current = arr[i];
//         while (stack.top() >= current)
//         {
//             stack.pop();
//         }
//         ans[i] = stack.top();
//         stack.push(current);
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     vector<int> nextSmaller(vector<int> &arr, int n)
//     {
//         stack<int> stack;
//         vector<int> ans(n);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             int current = arr[i];
//             while (stack.top() >= current)
//             {
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(current);
//         }
//         return ans;
//     }
//     vector<int> prevSmaller(vector<int> &arr, int n)
//     {
//         stack<int> stack;
//         vector<int> ans(n);
//         for (int i = 0; i < n; i++)
//         {
//             int current = arr[i];
//             while (stack.top() != -1 && arr[stack.top()] >= current)
//             {
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }

// public:
//     int largestRectangle(vector<int> &arr)
//     {
//         int n = arr.size();
//         vector<int> prev(n);
//         prev = prevSmaller(arr, n);
//         vector<int> next(n);
//         next = nextSmaller(arr, n);

//         int area = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             int length = arr[i];
//             if (next[i] == -1)
//             {
//                 next[i] = n;
//             }
//             int width = next[i] - prev[i] - 1;
//             int newArea = length * width;
//             area = max(area, newArea);
//         }
//         return area;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private:
//     bool knows(vector<vector<int>> &arr, int a, int b, int n)
//     {
//         if (arr[a][b] == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

// public:
//     int celebrity(vector<vector<int>> &arr, int n)
//     {
//         stack<int> stack;
//         for (int i = 0; i < n; i++)
//         {
//             stack.push(i);
//             while (stack.size() > 1)
//             {
//                 int a = stack.top();
//                 stack.pop();

//                 int b = stack.top();
//                 stack.pop();

//                 if (knows(arr, a, b, n))
//                 {
//                     stack.push(b);
//                 }
//                 else
//                 {
//                     stack.push(a);
//                 }
//             }
//             int ans = stack.top();
//             int zero = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (arr[i][ans] == 0)
//                 {
//                     zero++;
//                 }
//             }
//             if (zero != n)
//             {
//                 return -1;
//             }

//             int one = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (arr[i][ans] == 1)
//                 {
//                     one++;
//                 }
//             }
//             if (one != n - 1)
//             {
//                 return -1;
//             }
//             return ans;
//         }
//     }
// };

// #include <bits/stdc++.h>
// #define MAX 1000
// using namespace std;
// class Solution
// {
//     vector<int> nextSmaller(int *arr, int n)
//     {
//         stack<int> stack;
//         vector<int> ans(n);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             int current = arr[i];
//             while (stack.top() != -1 && arr[stack.top()] >= current)
//             {
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(current);
//         }
//         return ans;
//     }
//     vector<int> prevSmaller(int *arr, int n)
//     {
//         stack<int> stack;
//         vector<int> ans(n);
//         for (int i = 0; i < n; i++)
//         {
//             int current = arr[i];
//             while (stack.top() != -1 && arr[stack.top()] >= current)
//             {
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }
//     int largestRectangle(int *arr, int n)
//     {
//         vector<int> prev(n);
//         prev = prevSmaller(arr, n);
//         vector<int> next(n);
//         next = nextSmaller(arr, n);

//         int area = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             int length = arr[i];
//             if (next[i] == -1)
//             {
//                 next[i] = n;
//             }
//             int width = next[i] - prev[i] - 1;
//             int newArea = length * width;
//             area = max(area, newArea);
//         }
//         return area;
//     }

// public:
//     int maxarea(int array[MAX][MAX], int n, int m)
//     {
//         int area = largestRectangle(array[0], m);
//         for (int i = 1; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (array[i][j] != 0)
//                 {
//                     array[i][j] = array[i][j] + array[i - 1][j];
//                 }
//                 else
//                 {
//                     array[i][j] = 0;
//                 }
//             }
//             int newArea = largestRectangle(array[i], m);
//             area = max(area, newArea);
//         }
//         return area;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Nstack
// {
//     int *arr;
//     int *next;
//     int *top;

//     int n;
//     int s;

//     int freespot;

// public:
//     Nstack(int N, int S)
//     {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];

//         for (int i = 0; i < n; i++)
//         {
//             top[i] = -1;
//         }
//         for (int i = 0; i < s; i++)
//         {
//             next[i] = i + 1;
//         }
//         next[s - 1] = -1;

//         freespot = 0;
//     }

//     bool push(int X, int m)
//     {
//         if (freespot == -1)
//         {
//             return false;
//         }
//         int index = freespot;
//         arr[index] = X;
//         freespot = next[index];
//         next[index] = top[m - 1];
//         top[m - 1] = index;
//         return true;
//     }

//     int pop(int m)
//     {
//         if (top[m - 1] == -1)
//         {
//             return -1;
//         }
//         int index = top[m - 1];
//         top[m - 1] = next[index];
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class SpecialStack
// {
//     stack<int> stack;
//     int mini = INT_MAX;

// public:
//     void push(int data)
//     {
//         if (stack.empty())
//         {
//             stack.push(data);
//             mini = data;
//         }
//         else
//         {
//             if (mini > data)
//             {
//                 stack.push(2 * data - mini);
//                 mini = data;
//             }
//             else
//             {
//                 stack.push(data);
//             }
//         }
//     }
//     int pop()
//     {
//         if (stack.empty())
//         {
//             return -1;
//         }
//         int current = stack.top();
//         stack.pop();
//         if (current > mini)
//         {
//             return current;
//         }
//         else
//         {
//             int prevMin = mini;
//             int value = (2 * mini - current);
//             mini = value;
//             return prevMin;
//         }
//     }
//     int Top()
//     {
//         if (stack.empty())
//         {
//             return -1;
//         }
//         int current = stack.top();
//         if (current > mini)
//         {
//             return current;
//         }
//         else
//         {
//             return mini;
//         }
//     }
//     bool isEmpty()
//     {
//         return stack.empty();
//     }
//     int getMini()
//     {
//         if (stack.empty())
//         {
//             return -1;
//         }
//         else
//         {
//             return mini;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Queue
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;

// public:
//     Queue()
//     {
//         size = 1000;
//         arr = new int[size];
//         rear = 0;
//         front = 0;
//     }

//     bool isEmpty()
//     {
//         if (front == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void enqueue(int data)
//     {
//         if (rear == size)
//         {
//             cout << "Full Queue" << endl;
//         }
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int dequeue()
//     {
//         if (front == rear)
//         {
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         front++;
//         if (front == rear)
//         {
//             front = 0;
//             rear = 0;
//         }
//         return ans;
//     }
//     int front()
//     {
//         if (front == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Queue
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;

// public:
//     Queue(int n)
//     {
//         size = n;
//         arr = new int[size];
//         rear = -1;
//         front = -1;
//     }
//     bool push(int data){
//         if ((front == 0) && (rear == size - 1) || rear == (front - 1) % (size - 1))
//         {
//             return false;
//         }
//         else if (front == -1)
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0;
//         }
//         else
//         {
//             rear++;
//         }
//         arr[rear] = data;
//         return true;
//     }
//     int pop(){
//         if (front == -1)
//         {
//             return false;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Stack
// {
//     int *arr;
//     int size;
//     int front;
//     int rear;

// public:
//     Stack(int n)
//     {
//         size = n;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     bool pushfront(int data)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (rear != size - 1 && front == 0)
//         {
//             front = size - 1;
//         }
//         else
//         {
//             front--;
//         }
//         arr[front] = data;
//         return true;
//     }
//     bool pushback(int data)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0;
//         }
//         else
//         {
//             rear++;
//         }
//         arr[rear] = data;
//         return true;
//     }
//     int popfront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ans;
//     }
//     int popback()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (rear == 0)
//         {
//             rear = size - 1;
//         }
//         else
//         {
//             rear--;
//         }
//         return ans;
//     }
//     int getFront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
//     int getBack()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[rear];
//         }
//     }
//     bool isEmpty()
//     {
//         if (front == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool isFull()
//     {
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// queue<int> reverse(queue<int> queue){
//     stack<int> stack;
//     while (!queue.empty())
//     {
//         int element = queue.front();
//         queue.pop();
//         stack.push(element);
//     }
//     while (!stack.empty())
//     {
//         int element = stack.top();
//         stack.pop();
//         queue.push(element);
//     }
//     return queue;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<long long> negative(long long int arr[], long long int N, long long int k)
// {
//     deque<long long> deque;
//     vector<long long> ans;
//     for (int i = 0; i < k; i++)
//     {
//         if (arr[i] < 0)
//         {
//             deque.push_back(i);
//         }
//     }
//     if (deque.size() > 0)
//     {
//         ans.push_back(arr[deque.front()]);
//     }
//     else
//     {
//         ans.push_back(0);
//     }

//     for (int i = k; i < N; i++)
//     {
//         if (!deque.empty() && (i - deque.front()) >= k)
//         {
//             deque.pop_front();
//         }
//         if (arr[i] < 0)
//         {
//             deque.push_back(i);
//         }
//     }
//     if (deque.size() > 0)
//     {
//         ans.push_back(arr[deque.front()]);
//     }
//     else
//     {
//         ans.push_back(0);
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// queue<int> reverse(queue<int> queue, int k){
//     stack<int> stack;
//     for (int i = 0; i < k; i++)
//     {
//         int element = queue.front();
//         queue.pop();
//         stack.push(element);
//     }
//     while (!stack.empty())
//     {
//         int val = stack.top();
//         stack.pop();
//         stack.push(val);
//     }
//     int t = queue.size() - k;
//     while (t--)
//     {
//         int val = queue.front();
//         queue.pop();
//         queue.push(val);
//     }
//     return queue;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     string Nonrepeating(string arr)
//     {
//         string ans = "";
//         map<char, int> map;
//         queue<char> queue;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             char ch = arr[i];
//             queue.push(ch);
//             map[ch]++;
//             while (!queue.empty())
//             {
//                 if (map[queue.front()] > 1)
//                 {
//                     queue.pop();
//                 }
//                 else
//                 {
//                     ans.push_back(queue.front());
//                     break;
//                 }
//             }
//             if (queue.empty())
//             {
//                 ans.push_back('#');
//             }
//         }
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Petrolpump
// {
//     int petrol;
//     int distance;

// public:
//     int tour(Petrolpump arr[], int n)
//     {
//         int balance = 0;
//         int start = 0;
//         int deficit = 0;

//         for (int i = 0; i < n; i++)
//         {
//             balance += arr[i].petrol - arr[i].distance;
//             if (balance < 0)
//             {
//                 deficit += balance;
//                 start = i + 1;
//                 balance = 0;
//             }
//         }
//         if (balance + deficit >= 0)
//         {
//             return start;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// void interleave(queue<int> &queue){
//     stack<int> stack;
//     int halfSize = queue.size() / 2;
//     for (int i = 0; i < halfSize; i++)
//     {
//         stack.push(queue.front());
//         queue.pop();
//     }
//     while (!stack.empty())
//     {
//         queue.push(stack.top());
//         stack.pop();
//     }
//     for (int i = 0; i < halfSize; i++)
//     {
//         queue.push(queue.front());
//         queue.pop();
//     }
//     for (int i = 0; i < halfSize; i++)
//     {
//         stack.push(queue.front());
//         queue.pop();
//     }
//     while (!stack.empty())
//     {
//         queue.push(stack.top());
//         stack.pop();
//         queue.push(queue.front());
//         queue.pop();
//     }
// }
// int main()
// {
//     queue<int> queue;
//     queue.push(5);
//     queue.push(10);
//     queue.push(15);
//     queue.push(20);
//     interleave(queue);
//     for (int i = 0; i < queue.size(); i++)
//     {
//         cout<<queue.front()<<" ";
//         queue.pop();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private:
//     int *rear;
//     int *front;
//     int *arr;
//     int freespot;
//     int *next;
//     int n;
//     int k;

// public:
//     Solution(int n, int k)
//     {
//         this->k = k;
//         this->n = n;
//         front = new int[k];
//         rear = new int[k];
//         for (int i = 0; i < k; i++)
//         {
//             front[i] = -1;
//             rear[i] = -1;
//         }
//         freespot = 0;
//         arr = new int[n];
//         next = new int[n];
//         next[n - 1] = -1;
//         for (int i = 0; i < n; i++)
//         {
//             next[i] = i + 1;
//         }
//     }

//     void push(int queuen, int data)
//     {
//         if (freespot == -1)
//         {
//             cout << "Empty" << endl;
//             return;
//         }
//         int index = freespot;
//         freespot = next[index];
//         if (front[queuen - 1] == -1)
//         {
//             front[queuen - 1] == index;
//         }
//         else
//         {
//             next[rear[queuen - 1]] == index;
//         }
//         next[index] = -1;
//         rear[queuen - 1] = index;
//         arr[index] = data;
//     }
//     int pop(int queuen)
//     {
//         if (front[queuen - 1] == -1)
//         {
//             return -1;
//         }
//         int index = front[queuen - 1];
//         front[queuen - 1] = next[index];
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int solve(int *&arr, int k, int n)
// {
//     deque<int> maxi(k);
//     deque<int> mini(k);
//     for (int i = 0; i < k; i++)
//     {
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//         {
//             maxi.pop_back();
//         }
//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//         {
//             mini.pop_back();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);
//     }
//     int ans = 0;
//     ans += arr[maxi.front()] + arr[mini.front()];
//     for (int i = k; i < n; i++)
//     {
//         while (!maxi.empty() && i - maxi.front() >= k)
//         {
//             maxi.pop_front();
//         }
//         while (!mini.empty() && i - mini.front() >= k)
//         {
//             mini.pop_front();
//         }
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//         {
//             maxi.pop_front();
//         }
//         while (!mini.empty() && i - arr[mini.back()] >= arr[i])
//         {
//             mini.pop_front();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);
//         ans += arr[maxi.front()] + arr[mini.front()];
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *solve(Node *&root)
// {
//     int data;
//     cout << "Enter value of data : ";
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root = new Node(data);
//     root->left = solve(root->left);
//     root->right = solve(root->right);
//     return root;
// }
// int main()
// {
//     Node* root = NULL;
//     root = solve(root);
//     return 0;
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildTree(Node *root)
// {
//     int data;
//     cin>>data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root = new Node(data);
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// void leveloftraversal(Node* root){
//     queue<Node*> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node* temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout<<endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout<<temp->data<<" ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// int main()
// {
//     Node* root = NULL;
//     root = buildTree(root);
//     leveloftraversal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildTree(Node *root)
// {
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root = new Node(data);
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// void leveloftraversal(Node *root)
// {
//     queue<Node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// void Inorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     Inorder(root->left);
//     cout << root->data << " ";
//     Inorder(root->right);
// }
// void PreOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << endl;
//     PreOrder(root->left);
//     PreOrder(root->right);
// }
// void PostOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     PostOrder(root->left);
//     PostOrder(root->right);
//     cout << root->data << " ";
// }
// int main()
// {
//     Node* root = NULL;
//     root = buildTree(root);
//     leveloftraversal(root);
//     Inorder(root);
//     PreOrder(root);
//     PostOrder(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildTree(Node *root)
// {
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root = new Node(data);
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// void leveloftraversal(Node *root)
// {
//     queue<Node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// void reverse(Node *root)
// {
//     queue<Node *> queue;
//     vector<int> vector;
//     queue.push(root);
//     while (queue.size())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         vector.push_back(temp->data);
//         if (temp->left)
//         {
//             queue.push(temp->left);
//         }
//         if (temp->right)
//         {
//             queue.push(temp->right);
//         }
//         reverse(vector.begin(), vector.end());
//         cout<<temp->data<<" ";
//     }
// }
// int main()
// {
//     Node* root = NULL;
//     root = buildTree(root);
//     leveloftraversal(root);
//     cout<<"Reverse order is : ";
//     reverse(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void Binarytree(Node *root, int count)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     Binarytree(root->left, count);
//     if (root->left == NULL && root->right == NULL)
//     {
//         count++;
//     }
//     Binarytree(root->right, count);
// }
// int NoOfLeafNodes(Node *root)
// {
//     int count = 0;
//     Binarytree(root, count);
//     return count;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int HeightOfTree(Node *root){
//     if (root == NULL)
//     {
//         return;
//     }
//     int left = HeightOfTree(root->left);
//     int right = HeightOfTree(root->right);
//     int ans = max(left, right) + 1;
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int HeightOfTree(Node *root){
//     if (root == NULL)
//     {
//         return;
//     }
//     int left = HeightOfTree(root->left);
//     int right = HeightOfTree(root->right);
//     int ans = max(left, right) + 1;
//     return ans;
// }
// pair<int, int> diameterfast(Node *root){
//     if (root == NULL)
//     {
//         pair<int, int> p = make_pair(0, 0);
//         return p;
//     }
//     pair<int, int> left = diameterfast(root->left);
//     pair<int, int> right = diameterfast(root->right);
//     int op1 = left.first;
//     int op2 = right.first;
//     int op3 = left.second + right.second + 1;
//     pair<int, int> ans;
//     ans.second = max(op1, max(op2, op3));
//     return ans;
// }
// int diameter(Node *root){
//     return diameterfast(root).first;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// pair<bool, int> IsBalancedfast(Node *root)
// {
//     if (root == NULL)
//     {
//         pair<bool, int> p = make_pair(true, 0);
//         return p;
//     }
//     pair<int, int> left = IsBalancedfast(root->left);
//     pair<int, int> right = IsBalancedfast(root->right);
//     bool leftAns = left.first;
//     bool rightAns = right.first;
//     bool diff = max(left.second, right.second) + 1;
//     pair<bool, int> ans;
//     if (leftAns && rightAns && diff)
//     {
//         ans.first = true;
//     }
//     else
//     {
//         ans.first = false;
//     }
//     return ans;
// }
// bool IsBalanced(Node *root)
// {
//     return IsBalancedfast(root).first;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int HeightOfTree(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     int left = HeightOfTree(root->left);
//     int right = HeightOfTree(root->right);
//     int ans = max(left, right) + 1;
//     return ans;
// }
// bool IsEqual(Node *r1, Node *r2)
// {
//     if (r1 == NULL && r2 == NULL)
//     {
//         return true;
//     }
//     if (r1 != NULL && r2 == NULL)
//     {
//         return false;
//     }
//     if (r1 == NULL && r2 != NULL)
//     {
//         return false;
//     }
//     bool left = IsEqual(r1->left, r2->left);
//     bool right = IsEqual(r1->right, r2->right);
//     bool ans = r1->data == r2->data;
//     if (left && right && ans)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// pair<bool, int> IsSumTree(Node* root){
//     if (root == NULL)
//     {
//         pair<bool, int> p = make_pair(true, 0);
//         return p;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         pair<bool, int> p = make_pair(true, root->data);
//         return p;
//     }
//     pair<bool, int> leftAns = IsSumTree(root->left);
//     pair<bool, int> rightAns = IsSumTree(root->right);
//     bool leftSum = leftAns.first;
//     bool rightSum = rightAns.first;
//     int left = leftAns.second;
//     int right = rightAns.second;
//     bool condn = root->data == leftSum + rightSum;
//     pair<bool, int> ans;
//     if (leftSum && rightSum && condn)
//     {
//         ans.first = true;
//         ans.second = leftSum + rightSum + root->data;
//     }
//     else
//     {
//         ans.first = false;
//     }
//     return ans;
// }
// bool IsSum(Node* root){
//     return IsSumTree(root).first;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// vector<int> zigzagTraversal(Node *root)
// {
//     vector<int> result;
//     if (root == NULL)
//     {
//         return result;
//     }
//     queue<Node *> queue;
//     queue.push(root);
//     bool LeftToRight = true;
//     while (!queue.empty())
//     {
//         int size = queue.size();
//         vector<int> ans(size);
//         for (int i = 0; i < size; i++)
//         {
//             Node *frontNode = queue.front();
//             queue.pop();
//             int index = LeftToRight ? i : size - i - 1;
//             ans[index] = frontNode->data;

//             if (frontNode->left)
//             {
//                 queue.push(frontNode->left);
//             }
//             if (frontNode->right)
//             {
//                 queue.push(frontNode->right);
//             }
//         }
//         LeftToRight = !LeftToRight;
//         for (auto i : ans)
//         {
//             result.push_back(i);
//         }
//     }
//     return result;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     vector<int> TraverseLeft(Node *root, vector<int> &ans)
//     {
//         if (root == NULL || root->left == NULL && root->right == NULL)
//         {
//             return;
//         }
//         ans.push_back(root->data);
//         if (root->left)
//         {
//             TraverseLeft(root->left, ans);
//         }
//         else
//         {
//             TraverseLeft(root->right, ans);
//         }
//     }
//     void TraverseLeaf(Node *root, vector<int> &ans)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         if (root->left == NULL && root->right == NULL)
//         {
//             ans.push_back(root->data);
//             return;
//         }
//         TraverseLeaf(root->left, ans);
//         TraverseLeaf(root->right, ans);
//     }
//     void TraverseRight(Node *root, vector<int> &ans)
//     {
//         if (root == NULL || (root->left == NULL && root->right == NULL))
//         {
//             return;
//         }
//         if (root->right)
//         {
//             TraverseRight(root->right, ans);
//         }
//         else
//         {
//             TraverseRight(root->left, ans);
//         }
//         ans.push_back(root->data);
//     }
//     vector<int> solve(Node *root)
//     {
//         vector<int> ans;
//         if (root == NULL)
//         {
//             return ans;
//         }
//         ans.push_back(root->data);
//         TraverseLeft(root->left, ans);
//         TraverseLeaf(root->left, ans);
//         TraverseLeaf(root->right, ans);
//         TraverseRight(root->right, ans);
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// vector<int> verticalorder(Node *root)
// {
//     map<int, map<int, vector<int>>> node;
//     queue<pair<Node *, pair<int, int>>> queue;
//     vector<int> ans;
//     if (root == NULL)
//     {
//         return ans;
//     }
//     queue.push(make_pair(root, make_pair(0, 0)));
//     while (!queue.empty())
//     {
//         pair<Node *, pair<int, int>> temp = queue.front();
//         queue.pop();
//         Node *frontNode = temp.first;
//         int hd = temp.second.first;
//         int lvl = temp.second.second;
//         node[hd][lvl].push_back(frontNode->data);
//         if (frontNode->left)
//         {
//             queue.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
//         }
//         if (frontNode->right)
//         {
//             queue.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
//         }
//     }
//     for (auto i : node)
//     {
//         for (auto j : i.second){

//             for(auto k : j.second){
//                 ans.push_back(k);
//             }
//         }
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// vector<int> TopNode(Node *root)
// {
//     vector<int> ans;
//     map<int, int> topnode;
//     queue<pair<Node *, int>> queue;
//     queue.push(make_pair(root, 0));
//     if (root == NULL)
//     {
//         return ans;
//     }
//     while (!queue.empty())
//     {
//         pair<Node *, int> temp = queue.front();
//         queue.pop();
//         Node *frontNode = temp.first;
//         int hd = temp.second;
//         if (topnode.find(hd) == topnode.end())
//         {
//             topnode[hd] == frontNode->data;
//         }
//         if (frontNode->left)
//         {
//             queue.push(make_pair(frontNode->left, hd - 1));
//         }
//         if (frontNode->right)
//         {
//             queue.push(make_pair(frontNode->right, hd + 1));
//         }
//     }
//     for (auto i : topnode)
//     {
//         ans.push_back(i.second);
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// vector<int> TopNode(Node *root)
// {
//     vector<int> ans;
//     map<int, int> topnode;
//     queue<pair<Node *, int>> queue;
//     queue.push(make_pair(root, 0));
//     if (root == NULL)
//     {
//         return ans;
//     }
//     while (!queue.empty())
//     {
//         pair<Node *, int> temp = queue.front();
//         queue.pop();
//         Node *frontNode = temp.first;
//         int hd = temp.second;
//         topnode[hd] == frontNode->data;
//         if (frontNode->left)
//         {
//             queue.push(make_pair(frontNode->left, hd - 1));
//         }
//         if (frontNode->right)
//         {
//             queue.push(make_pair(frontNode->right, hd + 1));
//         }
//     }
//     for (auto i : topnode)
//     {
//         ans.push_back(i.second);
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void leftView(Node *root, vector<int> &ans, int level)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (level == ans.size())
//     {
//         ans.push_back(root->data);
//     }
//     leftView(root->left, ans, level + 1);
//     leftView(root->right, ans, level + 1);
// }
// vector<int> left(Node *root){
//     vector<int> ans;
//     leftView(root, ans, 0);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     void rightView(Node *root, vector<int> &ans, int level)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         if (level == ans.size())
//         {
//             ans.push_back(root->data);
//         }
//         rightView(root->right, ans, level + 1);
//         rightView(root->left, ans, level + 1);
//     }
//     vector<int> right(Node *root)
//     {
//         vector<int> ans;
//         rightView(root, ans, 0);
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     void solve(Node *root, int sum, int &maxSum, int len, int &maxLen)
//     {
//         if (root == NULL)
//         {
//             if (len > maxLen)
//             {
//                 maxLen = len;
//                 maxSum = sum;
//             }
//             else if (len == maxLen)
//             {
//                 maxSum = max(sum, maxSum);
//             }
//             return;
//         }
//         sum = sum + root->data;
//         solve(root->left, sum, maxSum, len + 1, maxLen);
//         solve(root->right, sum, maxSum, len + 1, maxLen);
//     }
//     int find(Node *root)
//     {
//         int sum = 0;
//         int len = 0;
//         int maxSum = INT_MIN;
//         int maxLen = 0;
//         solve(root, sum, maxSum, len, maxLen);
//         return maxSum;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     Node *lca(Node *root, int n1, int n2)
//     {
//         if (root == NULL)
//         {
//             return NULL;
//         }
//         if (root->data == n1 || root->data == n2)
//         {
//             return root;
//         }
//         Node* leftAns = lca(root->left, n1, n2);
//         Node* rightAns = lca(root->right, n1, n2);

//         if (leftAns != NULL && rightAns != NULL)
//         {
//             return root;
//         }
//         else if (leftAns != NULL && rightAns == NULL)
//         {
//             return leftAns;
//         }
//         else if (leftAns == NULL && rightAns != NULL)
//         {
//             return rightAns;
//         }
//         else
//         {
//             return NULL;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     Node *solve(Node *root, int &count, int k, vector<int> path)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         path.push_back(root->data);
//         Node* leftAns = solve(root->left, count, k, path);
//         Node* rightAns = solve(root->left, count, k, path);
//         int sum = 0;
//         int size = path.size();
//         for (int i = size - 1; i >= 0; i--)
//         {
//             sum += path[i];
//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//         path.pop_back();
//     }
//     int sumk(Node *root, int k)
//     {
//         vector<int> path;
//         int count = 0;
//         solve(root, count, k, path);
//         return count;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     Node *solve(Node *root, int k, int node)
//     {
//         if (root == NULL)
//         {
//             return NULL;
//         }
//         if (root->data == node)
//         {
//             return root;
//         }
//         Node *leftAns = solve(root->left, k, node);
//         Node *rightAns = solve(root->right, k, node);

//         if (leftAns != NULL && rightAns == NULL)
//         {
//             k--;
//             if (k <= 0)
//             {
//                 k = INT_MAX;
//                 return root;
//             }
//             return leftAns;
//         }

//         if (rightAns != NULL && leftAns == NULL)
//         {
//             k--;
//             if (k <= 0)
//             {
//                 k = INT_MAX;
//                 return root;
//             }
//             return rightAns;
//         }
//         return NULL;
//     }
//     int KthAncestor(Node *root, int k, int node)
//     {
//         Node *ans = solve(root, k, node);
//         if (ans == NULL || ans->data == node)
//         {
//             return -1;
//         }
//         else
//         {
//             return root->data;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     pair<int, int> solve(Node* root){
//         if (root == NULL)
//         {
//             pair<int, int> p = make_pair(0, 0);
//             return p;
//         }
//         pair<int, int> leftAns = solve(root->left);
//         pair<int, int> rightAns = solve(root->right);
//         pair<int, int> result;
//         result.first = root->data + leftAns.second + rightAns.second;
//         result.second = max(leftAns.first, leftAns.second) + max(rightAns.first, rightAns.second);
//         return result;
//     }
//     int getMaxSum(Node* root){
//         pair<int, int> ans = solve(root);
//         return max(ans.first, ans.second);
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     int createMapping(int inorder[], map<int, int> &nodeToIndex, int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             nodeToIndex[inorder[i]] = i;
//         }
//     }
//     Node *solve(int inorder[], int preorder[], int &preorderindex, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
//     {
//         if (preorderindex >= n || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
//         int element = preorder[preorderindex++];
//         Node* root = new Node(element);
//         int position = nodeToIndex[element];
//         root->left = solve(inorder, preorder, preorderindex, inorderStart, position - 1, n, nodeToIndex);
//         root->right = solve(inorder, preorder, preorderindex, position + 1, inorderEnd, n, nodeToIndex);
//         return root;
//     }
//     Node *buildTree(int inorder[], int preorder[], int n)
//     {
//         int preorderindex = 0;
//         map<int, int> nodeToIndex;
//         createMapping(inorder, nodeToIndex, n);
//         Node *ans = solve(inorder, preorder, preorderindex, 0, n - 1, n, nodeToIndex);
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     int creatMapping(int inorder[], map<int, int> &nodeToIndex, int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             nodeToIndex[inorder[i]] = i;
//         }
//     }
//     Node* solve(int inorder[], int postorder[], int &postorderindex, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex){
//         if (postorderindex < 0 || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
//         int element = postorder[postorderindex--];
//         Node* root = new Node(element);
//         int position = nodeToIndex[element];
//         root->right = solve(inorder, postorder, postorderindex, position + 1, inorderEnd, n, nodeToIndex);
//         root->left = solve(inorder, postorder, postorderindex, inorderStart, position - 1, n, nodeToIndex);
//         return root;
//     }
//     Node* getAns(int inorder[], int postorder[], int n){
//         int postorderindex = n - 1;
//         map<int, int> nodeToIndex;
//         creatMapping(inorder, nodeToIndex, n);
//         Node* ans = solve(inorder, postorder, postorderindex, 0, n - 1, n, nodeToIndex);
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     Node *createParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
//     {
//         Node *result = NULL;
//         queue<Node *> queue;
//         queue.push(root);
//         nodeToParent[root] = NULL;
//         while (!queue.empty())
//         {
//             Node *front = queue.front();
//             queue.pop();
//             if (front->data == target)
//             {
//                 result = front;
//             }
//             if (front->left)
//             {
//                 nodeToParent[front->left] = front;
//                 queue.push(front->left);
//             }
//             if (front->right)
//             {
//                 nodeToParent[front->right] = front;
//                 queue.push(front->right);
//             }
//         }
//         return result;
//     }
//     int solve(Node *targetNode, map<Node *, Node *> nodeToParent)
//     {
//         map<Node *, bool> visited;
//         queue<Node *> queue;
//         queue.push(targetNode);
//         visited[targetNode] = true;
//         int ans = 0;
//         while (!queue.empty())
//         {
//             bool flag = 0;
//             int size = queue.size();
//             for (int i = 0; i < size; i++)
//             {
//                 Node *front = queue.front();
//                 queue.pop();
//                 if (front->left && !visited[front->left])
//                 {
//                     flag = 1;
//                     queue.push(front->left);
//                     visited[front->left] = 1;
//                 }
//                 if (front->right && !visited[front->right])
//                 {
//                     flag = 1;
//                     queue.push(front->right);
//                     visited[front->right] = 1;
//                 }
//                 if (nodeToParent[front] && !visited[nodeToParent[front]])
//                 {
//                     flag = 1;
//                     queue.push(nodeToParent[front]);
//                     visited[nodeToParent[front]] = 1;
//                 }
//             }
//             if (flag == 1)
//             {
//                 ans++;
//             }
//         }
//         return ans;
//     }
//     int minTime(Node *root, int target)
//     {
//         map<Node *, Node *> nodeToParent;
//         Node *targetNode = createParentMapping(root, target, nodeToParent);
//         int ans = solve(targetNode, nodeToParent);
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     void morrisTraversal(Node *root)
//     {
//         while (root)
//         {
//             if (root->left == NULL)
//             {
//                 cout << root->data << " ";
//                 root = root->right;
//             }
//             else
//             {
//                 Node *current = root->left;
//                 while (current->right && current->right != root)
//                 {
//                     current = current->right;
//                 }
//                 if (current->right == root)
//                 {
//                     current->right = NULL;
//                     root = root->right;
//                 }
//                 else
//                 {
//                     cout << root->data << " ";
//                     current->right = root;
//                     root = root->left;
//                 }
//             }
//         }
//     }
//     void preorder(Node *root)
//     {
//         if (root)
//         {
//             cout << root->data << " ";
//             preorder(root->left);
//             preorder(root->right);
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }

// public:
//     void flattenBT(Node *root)
//     {
//         Node *current = root;
//         while (current != NULL)
//         {
//             if (current->left)
//             {
//                 Node *predecessor = current->left;
//                 while (predecessor->right)
//                 {
//                     predecessor = predecessor->right;
//                 }
//                 predecessor->right = current->right;
//                 current->right = current->left;
//                 current->left = NULL;
//             }
//             current = current->right;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// Node *insertIntoBST(Node *root, int data)
// {
//     if (root == NULL)
//     {
//         root = new Node(data);
//         return root;
//     }
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     if (data < root->data)
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// void takeInput(Node *&root, int data)
// {
//     while (data != -1)
//     {
//         root = insertIntoBST(root, data);
//         cin >> data;
//     }
// }
// int main()
// {
//     Node *root = NULL;
//     int data;
//     cin >> data;
//     takeInput(root, data);
//     levelOrderTraversal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// bool searchIntoBST(Node<int> *root, int element)
// {
//     Node<int> *temp = root;
//     while (temp != NULL)
//     {
//         if (temp->data == element)
//         {
//             return true;
//         }
//         if (temp->data > element)
//         {
//             temp = temp->left;
//         }
//         else
//         {
//             temp = temp->right;
//         }
//     }
//     return false;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// Node *insertIntoBST(Node *root, int data)
// {
//     if (root == NULL)
//     {
//         root = new Node(data);
//         return root;
//     }
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     if (data < root->data)
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// Node *minValue(Node *root)
// {
//     Node *temp = root;
//     if (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }
// Node *maxValue(Node *root)
// {
//     Node *temp = root;
//     if (temp->right != NULL)
//     {
//         temp = temp->right;
//     }
//     return temp;
// }
// void takeInput(Node *root, int data)
// {
//     while (data != -1)
//     {
//         root = insertIntoBST(root, data);
//         cin >> data;
//     }
// }
// int main()
// {
//     Node *root = NULL;
//     int data;
//     cin >> data;
//     takeInput(root, data);
//     levelOrderTraversal(root);
//     cout << minValue(root)->data << endl;
//     cout << maxValue(root)->data << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         Node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// Node *insertIntoBST(Node *root, int data)
// {
//     if (root == NULL)
//     {
//         root = new Node(data);
//         return root;
//     }
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     if (data < root->data)
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// Node *minValue(Node *root)
// {
//     Node *temp = root;
//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }
// Node *maxValue(Node *root)
// {
//     Node *temp = root;
//     while (temp->right != NULL)
//     {
//         temp = temp->right;
//     }
//     return temp;
// }
// Node *deletefromBST(Node *root, int value)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     if (root->data == value)
//     {
//         // 0th child
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // 1 child
//         if (root->left != NULL && root->right == NULL)
//         {
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         if (root->left == NULL && root->right != NULL)
//         {
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         // 2 child
//         if (root->left != NULL && root->right != NULL)
//         {
//             int mini = minValue(root->right)->data;
//             root->data = mini;
//             root->right = deletefromBST(root->right, mini);
//         }
//     }
//     else if (root->data > value)
//     {
//         root->left = deletefromBST(root->left, value);
//         return root;
//     }
//     else
//     {
//         root->right = deletefromBST(root->right, value);
//         return root;
//     }

// }
// void takeInput(Node *root, int data)
// {
//     while (data != -1)
//     {
//         root = insertIntoBST(root, data);
//         cin >> data;
//     }
// }
// int main()
// {
//     Node *root = NULL;
//     int data;
//     cin >> data;
//     takeInput(root, data);
//     levelOrderTraversal(root);
//     root = deletefromBST(root, 5);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// bool isBST(Node<int> *root, int min, int max)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     if (root->data >= min && root->data <= max)
//     {
//         bool left = isBST(root->left, min, root->data);
//         bool right = isBST(root->right, root->data, max);
//         return left && right;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool isValidBST(Node<int> *root)
// {
//     return isBST(root, INT_MIN, INT_MAX);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int solve(Node<int> *root, int &i, int k)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }
//     int left = solve(root->left, i, k);
//     if (left)
//     {
//         return left;
//     }
//     i++;
//     if (i == k)
//     {
//         return root->data;
//     }
//     int right = solve(root->right, i, k);
//     if (right)
//     {
//         return right;
//     }
// }
// int kthSmallest(Node<int> *root, int k)
// {
//     int i = 0;
//     int ans = solve(root, i, k);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// pair<int, int> presuccinBST(Node<int> *root, int key)
// {
//     Node<int> *temp = root;
//     int pre = -1;
//     int succ = -1;
//     while (temp->data != key)
//     {
//         if (temp->data > key)
//         {
//             succ = temp->data;
//             temp = temp->left;
//         }
//         else
//         {
//             pre = temp->data;
//             temp = temp->right;
//         }
//     }
//     // Pre and Succ
//     Node<int> *leftTree = temp->left;
//     while (leftTree != NULL)
//     {
//         pre = leftTree->data;
//         leftTree = leftTree->right;
//     }
//     Node<int> *rightTree = temp->right;
//     while (rightTree != NULL)
//     {
//         succ = rightTree->data;
//         rightTree = rightTree->left;
//     }
//     pair<int, int> ans = make_pair(pre, succ);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node<int> *LCAinBST(Node<int> *root, Node<int> *P, Node<int> *Q)
// {
//     while (root != NULL)
//     {
//         if (root->data < P->data && root->data < Q->data)
//         {
//             root = root->right;
//         }
//         else if (root->data > P->data && root->data > Q->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             return root;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int solve(Node<int>* root, vector<int> &in){
//     if (root == NULL)
//     {
//         return;
//     }
//     solve(root->left, in);
//     in.push_back(root->data);
//     solve(root->right, in);
// }
// bool inorder(Node<int> *root, int target){
//     vector<int> inorderVal;
//     solve(root, inorderVal);
//     int i = 0;
//     int j = inorderVal.size() - 1;
//     while (i < j)
//     {
//         int sum = inorderVal[i] + inorderVal[j];
//         if (sum == target)
//         {
//             return true;
//         }
//         else if (sum > target)
//         {
//             j--;
//         }
//         else if (sum < target)
//         {
//             i++;
//         }
//     }
//     return false;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void inorder(Node<int> *root, vector<int> &in)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// Node<int> *flatten(Node<int> *root)
// {
//     vector<int> inorderVal;
//     inorder(root, inorderVal);
//     int n = inorderVal.size();
//     Node<int> *newRoot = new Node<int>(inorderVal[0]);
//     Node<int> *current = newRoot;
//     for (int i = 1; i < n; i++)
//     {
//         Node<int> *temp = new Node<int>(inorderVal[i]);
//         current->left = NULL;
//         current->right = temp;
//         current = temp;
//     }
//     current->left = NULL;
//     current->right = NULL;
//     return newRoot;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node<int>* inorder(Node<int>* root, vector<int> &in){
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// Node<int>* ValidBST(int s, int e, vector<int> &in){
//     if (s > e)
//     {
//         return NULL;
//     }
//     int mid = (s + e) / 2;
//     Node<int>* root = new Node<int>(in[mid]);
//     root->left = ValidBST(0, mid - 1, in);
//     root->right = ValidBST(mid + 1, e, in);
//     return root;
// }
// Node<int>* balancedBST(Node<int>* root){
//     vector<int> inorderVal;
//     inorder(root, inorderVal);
//     return ValidBST(0, inorderVal.size() - 1, inorderVal);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node<int> *solve(vector<int> &preorder, int mini, int maxi, int &i)
// {
//     if (i > preorder.size())
//     {
//         return NULL;
//     }
//     if (preorder[i] < mini || preorder[i] > maxi)
//     {
//         return NULL;
//     }
//     Node<int> *root = new Node<int>(preorder[i++]);
//     root->left = solve(preorder, mini, root->data, i);
//     root->right = solve(preorder, root->data, maxi, i);
//     return root;
// }
// Node<int>* PreorderBST(vector<int> &preorder){
//     int i = 0;
//     int mini = INT_MIN;
//     int maxi = INT_MAX;
//     return solve(preorder, mini, maxi, i);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node<int> *convertToDLL(Node<int> *&head, Node<int> *&root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     convertToDLL(head, root->right);
//     root->right = head;
//     if (head)
//     {
//         head->left = root;
//     }
//     head = root;
//     convertToDLL(head, root->left);
// }
// Node<int> *merge(Node<int> *&head1, Node<int> *&head2)
// {
//     Node<int> *head = NULL;
//     Node<int> *tail = NULL;
//     while (head1 && head2)
//     {
//         if (head1->data < head2->data)
//         {
//             if (head == NULL)
//             {
//                 head = head1;
//                 tail = head1;
//                 head1 = head1->right;
//             }
//             else
//             {
//                 tail->right = head1;
//                 head1->left = tail;
//                 tail = head1;
//                 head1 = head1->right;
//             }
//         }
//         else
//         {
//             if (head == NULL)
//             {
//                 head = head2;
//                 tail = head2;
//                 head2 = head2->right;
//             }
//             else
//             {
//                 tail->right = head2;
//                 head2->left = tail;
//                 tail = head2;
//                 head2 = head2->right;
//             }
//         }
//     }
//     while (head1)
//     {
//         tail->right = head1;
//         head1->left = tail;
//         tail = head1;
//         head1 = head1->right;
//     }
//     while (head2)
//     {
//         tail->right = head2;
//         head2->left = tail;
//         tail = head2;
//         head2 = head2->right;
//     }
//     return head;
// }
// int countNodes(Node<int> *&head)
// {
//     int n = 0;
//     Node<int> *temp = head;
//     while (temp)
//     {
//         n++;
//         temp = temp->right;
//     }
//     return n;
// }
// Node<int> *converDLLToBST(Node<int> *&head, int n)
// {
//     if (n <= 0 || head == NULL)
//     {
//         return NULL;
//     }
//     Node<int> *leftTree = converDLLToBST(head, n / 2);
//     Node<int> *root = head;
//     root->left = leftTree;
//     head = head->right;
//     root->right = converDLLToBST(head, n - n / 2 - 1);
//     return root;
// }
// Node<int> *mergeBST(Node<int> *root1, Node<int> *root2)
// {
//     Node<int> *head1 = NULL;
//     Node<int> *head2 = NULL;
//     convertToDLL(head1, root1);
//     convertToDLL(head2, root2);
//     Node<int> *head = merge(head1, head2);
//     int n = countNodes(head);
//     Node<int> *ans = convertDLLIntoBST(head, n);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class info
// {
// public:
//     int size;
//     int mini;
//     int maxi;
//     bool isBST;
// };
// Node<int>* solve(Node<int>* root, int &maxsize){
//     if (root == NULL)
//     {
//         return {INT_MIN, INT_MAX, true, 0};
//     }
//     info left = solve(root->left, maxsize);
//     info right = solve(root->right, maxsize);
//     info currentNode;
//     currentNode.size = left.size + right.size + 1;
//     currentNode.maxi = max(root->data, right.maxi);
//     currentNode.mini = min(root->data, left.mini);
//     if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
//     {
//         currentNode.isBST = true;
//     }
//     else
//     {
//         currentNode.isBST = false;
//     }
//     if (currentNode.isBST)
//     {
//         ans = max(ans, currentNode.size);
//     }
//     return currentNode;
// }
// int largestBST(Node<int>* root){
//     int maxsize = 0;
//     info ans = solve(root, maxsize);
//     return maxsize;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }
//     void insertion(int value){
//         size = size + 1;
//         int index = size;
//         arr[index] = value;
//         while (index > 1)
//         {
//             int parent = index/2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }

//     }
//     void print(){
//         for (int i = 1; i <= size; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main()
// {
//     heap heap;
//     heap.insertion(50);
//     heap.insertion(100);
//     heap.insertion(150);
//     heap.insertion(200);
//     heap.insertion(250);
//     heap.print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }
//     void insertion(int value){
//         size = size + 1;
//         int index = size;
//         arr[index] = value;
//         while (index > 1)
//         {
//             int parent = index/2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void deletefromheap(){
//         if (size == 0)
//         {
//             cout<<"Nothing can be deleted"<<endl;
//         }
//         arr[1] = arr[size];
//         size--;
//         int i = 1;
//         while (i < size)
//         {
//             int leftAns = 2 * i;
//             int rightAns = 2 * i + 1;
//             if (leftAns < size && arr[i] < arr[leftAns])
//             {
//                 swap(arr[i], arr[leftAns]);
//                 i = leftAns;
//             }
//             else if (rightAns < size && arr[i] < arr[rightAns])
//             {
//                 swap(arr[i], arr[rightAns]);
//                 i = rightAns;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void print(){
//         for (int i = 1; i <= size; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main()
// {
//     heap heap;
//     heap.insertion(50);
//     heap.insertion(100);
//     heap.insertion(150);
//     heap.insertion(200);
//     heap.insertion(250);
//     heap.print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }
//     void insertion(int value)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = value;
//         while (index > 1)
//         {
//             int parent = index / 2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void deletefromheap()
//     {
//         if (size == 0)
//         {
//             cout << "Nothing can be deleted" << endl;
//         }
//         arr[1] = arr[size];
//         size--;
//         int i = 1;
//         while (i < size)
//         {
//             int leftAns = 2 * i;
//             int rightAns = 2 * i + 1;
//             if (leftAns < size && arr[i] < arr[leftAns])
//             {
//                 swap(arr[i], arr[leftAns]);
//                 i = leftAns;
//             }
//             else if (rightAns < size && arr[i] < arr[rightAns])
//             {
//                 swap(arr[i], arr[rightAns]);
//                 i = rightAns;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
// int main()
// {
//     heap heap;
//     heap.insertion(50);
//     heap.insertion(100);
//     heap.insertion(150);
//     heap.insertion(200);
//     heap.insertion(250);
//     heap.print();
//     heap.deletefromheap();
//     // Haepify
//     int arr[6] = {-1, 54, 55, 56, 52};
//     int n = 5;
//     for (int i = n / 2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     heap.print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }
//     void insertion(int value)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = value;
//         while (index > 1)
//         {
//             int parent = index / 2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void deletefromheap()
//     {
//         if (size == 0)
//         {
//             cout << "Nothing can be deleted" << endl;
//         }
//         arr[1] = arr[size];
//         size--;
//         int i = 1;
//         while (i < size)
//         {
//             int leftAns = 2 * i;
//             int rightAns = 2 * i + 1;
//             if (leftAns < size && arr[i] < arr[leftAns])
//             {
//                 swap(arr[i], arr[leftAns]);
//                 i = leftAns;
//             }
//             else if (rightAns < size && arr[i] < arr[rightAns])
//             {
//                 swap(arr[i], arr[rightAns]);
//                 i = rightAns;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
// void heapsort(int arr[], int n){
//     int size = n;
//     while (size > 1)
//     {
//         swap(arr[size], arr[1]);
//         size--;
//         heapify(arr, size, 1);
//     }
// }
// int main()
// {
//     heap heap;
//     heap.insertion(50);
//     heap.insertion(100);
//     heap.insertion(150);
//     heap.insertion(200);
//     heap.insertion(250);
//     heap.print();
//     heap.deletefromheap();
//     // Haepify
//     int arr[6] = {-1, 54, 55, 56, 52};
//     int n = 5;
//     for (int i = n / 2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     heapsort(arr, n);
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     heap.print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int, vector<int>, greater<int>> priority_queue;
//     priority_queue.push(5);
//     priority_queue.push(10);
//     priority_queue.push(15);
//     priority_queue.push(20);
//     priority_queue.push(25);
//     cout<<priority_queue.top()<<endl;
//     priority_queue.pop();
//     cout<<priority_queue.top()<<endl;
//     priority_queue.pop();
//     cout<<priority_queue.top()<<endl;
//     priority_queue.pop();
//     cout<<priority_queue.top()<<endl;
//     priority_queue.pop();
//     cout<<priority_queue.top()<<endl;
//     priority_queue.pop();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int maxFrequency(vector<int> &arr, int n){
//     unordered_map<int, int> count;
//     int maxFrequency = 0;
//     int maxAns = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         count[arr[i]]++;
//         maxFrequency = max(maxFrequency, count[arr[i]]);
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (maxFrequency == count[arr[i]])
//         {
//             maxAns = arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;
//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };
// class Trie
// {
//     TrieNode *root;

// public:
//     Trie()
//     {
//         root = new TrieNode('\0');
//     }
//     void insertutil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         if (root->children[idx] != NULL)
//         {
//             child = root->children[idx];
//         }
//         else
//         {
//             child = new TrieNode(word[0]);
//             root->children[idx] = child;
//         }
//         insertutil(child, word.substr(1));
//     }
//     void insert(string word)
//     {
//         insertutil(root, word);
//     }
//     bool searchutil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         int index = word[0] - 'a';
//         TrieNode *child;
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             return false;
//         }
//         return searchutil(child, word.substr(1));
//     }
//     bool search(string word)
//     {
//         return searchutil(root, word);
//     }
//     bool prefixutil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         int index = word[0] - 'a';
//         TrieNode *child;
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             return false;
//         }
//         return prefixutil(child, word.substr(1));
//     }
//     bool prefix(string word)
//     {
//         return prefixutil(root, word);
//     }
//     bool isEmpty(TrieNode* root){
//         if (root->children[i])
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }
//     TrieNode* remove(TrieNode* root, string key, int depth = 0){
//         if (!root)
//         {
//             return NULL;
//         }
//         if (depth == key.size())
//         {
//             if (root->isTerminal)
//             {
//                 root->isTerminal = false;
//             }
//             if (isEmpty(root))
//             {
//                 delete(root);
//                 root = NULL;
//             }
//             return root;
//         }

//         int index = key[depth] - 'a';
//         root->children[index] = remove(root->children[index], key, depth + 1);
//         if (isEmpty(root) && root->isTerminal == false)
//         {
//             delete(root);
//             root = NULL;
//         }
//         return root;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class graph
// {
// public:
//     unordered_map<int, list<int>> adj;
//     void addEdge(int u, int v, bool direction)
//     {
//         adj[u].push_back(v);
//         if (direction == 0)
//         {
//             adj[v].push_back(u);
//         }
//     }
//     void printAdj()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << ",";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;
//     graph g;
//     for (int i = 0; i < m; i++)
//     {
//         int u;
//         cin >> u;
//         int v;
//         cin >> v;
//         g.addEdge(u, v, 0);
//     }
//     g.printAdj();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> adjprint(int n, int m, vector<vector<int>> &edge)
// {
//     vector<int> ans[n];
//     for (int i = 0; i < m; i++)
//     {
//         int u = edge[i][0];
//         int v = edge[i][1];
//         ans[u].push_back(v);
//         ans[v].push_back(u);
//     }
//     vector<vector<int>> adj(n);
//     for (int i = 0; i < n; i++)
//     {
//         adj[i].push_back(i);
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             adj[i].push_back(ans[i][j]);
//         }
//     }
//     return adj;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void prepareadjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges)
// {
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
// }
// void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
// {
//     queue<int> queue;
//     queue.push(node);
//     visited[node] = 1;
//     while (!queue.empty())
//     {
//         int front = queue.front();
//         queue.pop();
//         ans.push_back(front);
//         for (auto i : adjList[front])
//         {
//             if (!visited[i])
//             {
//                 queue.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }
// vector<int> bfs(int vertex, vector<pair<int, int>> &edges)
// {
//     unordered_map<int, set<int>> adjList;
//     vector<int> ans;
//     unordered_map<int, bool> visited;
//     prepareadjList(adjList, edges);
//     for (int i = 0; i < vertex; i++)
//     {
//         while (!visited[i])
//         {
//             bfs(adjList, visited, ans, i);
//         }
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
// {
//     component.push_back(node);
//     visited[node] = true;
//     for (auto i : adj[node])
//     {
//         if (!visited[i])
//         {
//             dfs(i, visited, adj, component);
//         }
//     }
// }
// vector<vector<int>> DFS(int V, int E, vector<vector<int>> &edges)
// {
//     unordered_map<int, list<int>> adj;
//     unordered_map<int, bool> visited;
//     vector<vector<int>> ans;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[u].push_back(u);
//     }
//     for (int i = 0; i < V; i++)
//     {
//         if (!visited[i])
//         {
//             vector<int> component;
//             dfs(i, visited, adj, component);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> Dijkstras(vector<vector<int>> &vec, int vertices, int edges, int source)
// {
//     unordered_map<int, list<pair<int, int>>> adj;
//     for (int i = 0; i < edges; i++)
//     {
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
//     vector<int> distance(vertices);
//     for (int i = 0; i < vertices; i++)
//     {
//         distance[i] = INT_MAX;
//     }
//     set<pair<int, int>> set;
//     distance[source] = 0;
//     set.insert(make_pair(0, source));
//     while (!set.empty())
//     {
//         auto top = *(set.begin());
//         int NodeDistance = top.first;
//         int topNode = top.second;
//         set.erase(set.begin());

//         for (auto neighbour : adj[topNode])
//         {
//             if (NodeDistance + neighbour.second < distance[neighbour.first])
//             {
//                 auto record = set.find(make_pair(distance[neighbour.first], neighbour.first));
//                 if (record != set.end())
//                 {
//                     set.erase(record);
//                 }
//                 distance[neighbour.first] = NodeDistance + neighbour.second;
//                 set.insert(make_pair(distance[neighbour.first], neighbour.first));
//             }
//         }
//     }
//     return distance;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<pair<int, int>, int>> find(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     unordered_map<int, list<pair<int, int>>> adj;
//     for (int i = 0; i < g.size(); i++)
//     {
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int w = g[i].second;
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
//     vector<int> key(n + 1);
//     vector<bool> mst(n + 1);
//     vector<int> parent(n + 1);
//     for (int i = 0; i <= n; i++)
//     {
//         key[i] = INT_MAX;
//         parent[i] = -1;
//         mst[i] = false;
//     }
//     key[1] = 0;
//     parent[1] = -1;
//     for (int i = 1; i < n; i++)
//     {
//         int mini = INT_MAX;
//         int u;
//         for (int v = 1; v <= n; v++)
//         {
//             if (mst[v] == false && key[v] < mini)
//             {
//                 u = v;
//                 mini = key[v];
//             }
//         }
//         mst[u] = true;
//         for (auto it : adj[u])
//         {
//             int v = it.first;
//             int w = it.second;
//             if (mst[v] == false && w < key[v])
//             {
//                 parent[v] = u;
//                 mst[v] = w;
//             }
//         }
//     }
//     vector<pair<pair<int, int>, int>> result;
//     for (int i = 2; i <= n; i++)
//     {
//         result.push_back({{parent[i], i}, key[i]});
//     }
//     return result;
// };

// #include <bits/stdc++.h>
// using namespace std;
// bool component(vector<int> &a, vector<int> &b)
// {
//     return a[2] < b[2];
// }
// void makeset(vector<int> &parent, vector<int> &rank, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         parent[i] = i;
//         rank[i] = 0;
//     }
// }
// int findParent(vector<int> &parent, int node)
// {
//     if (parent[node] == node)
//     {
//         return node;
//     }
//     parent[node] = findParent(parent, parent[node]);
// }
// void unionset(int u, int v, vector<int> &parent, vector<int> &rank)
// {
//     u = findParent(parent, u);
//     v = findParent(parent, v);
//     if (rank[u] < rank[v])
//     {
//         parent[u] = v;
//     }
//     else if (rank[u] > rank[v])
//     {
//         parent[v] = u;
//     }
//     else
//     {
//         parent[v] = u;
//         rank[u]++;
//     }
// }
// int minimumTree(vector<vector<int>> &edges, int n)
// {
//     sort(edges.begin(), edges.end(), component);
//     vector<int> parent(n);
//     vector<int> rank(n);
//     makeset(parent, rank, n);
//     int minweight = 0;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = findParent(parent, edges[i][0]);
//         int v = findParent(parent, edges[i][1]);
//         int wt = edges[i][2];
//         if (u != v)
//         {
//             minweight += wt;
//             unionset(u, v, parent, rank);
//         }
//     }
//     return minweight;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
// {
//     vector<int> distance(n + 1, 1e9);
//     distance[src] = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];
//             if ((distance[u] < 1e9) && (distance[u] + wt) < distance[v])
//             {
//                 distance[v] = distance[u] + wt;
//             }
//         }
//     }
//     bool flag = 0;
//     for (int j = 0; j < m; j++)
//     {
//         int u = edges[j][0];
//         int v = edges[j][1];
//         int wt = edges[j][2];
//         if ((distance[u] < 1e9) && (distance[u] + wt < distance[v]))
//         {
//             distance[v] = distance[u] + wt;
//         }
//     }
//     if (flag == 0)
//     {
//         return distance[dest];
//     }
//     else
//     {
//         return -1;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int a = 0;
//     int b = 1;
//     for (int i = 0; i < num; i++)
//     {
//         int Fibonacci = a + b;
//         cout<<Fibonacci<<" ";
//         a = b;
//         b = Fibonacci;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int deleteElement(int arr[], int n, int x)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             break;
//         }
//     }
//     if (i < n)
//     {
//         n = n - 1;
//         for (int j = i; j < n; j++)
//         {
//             arr[j] = arr[j + 1];
//         }
//     }
//     return n;
// }
// int main()
// {
//     int arr[] = {11, 15, 6, 8, 9, 10};
//     int n = 6;
//     int x = 6;
//     n = deleteElement(arr, n, x);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// C++ program for insertion in array
// #include <iostream>
// using namespace std;

// // Function to print the array element
// void printArray(int arr[], int N)
// {
// 	// Traverse the element of arr[]
// 	for (int i = 0; i < N; i++) {

// 		// Print the element
// 		cout << arr[i] << " ";
// 	}
// }
// // Driver Code
// int main()
// {
// 	// size of array
// 	int n = 5;
// 	// Initialise array
// 	int arr[n];
// 	// Insert elements in array
// 	for (int i = 0; i < n + 1; i++) {
// 		arr[i - 1] = i;
// 	}
//  // Print array element
// 	printArray(arr, n);
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int isPalindrome(int num){
//     int ans = 0;
//     int newNumber = num;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         ans = (ans * 10) + digit;
//         num = num / 10;
//     }
//     cout<<"The result is : " <<endl;
//     if (newNumber == ans)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int num;
//     cin>>num;
//     if (isPalindrome(num))
//     {
//         cout<<"It is Palindrome"<<endl;
//     }
//     else
//     {
//         cout<<"It is not a Palindrome"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int binarysearch(int arr[], int key, int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int result = binarysearch(arr, 5, 3);
//     cout << result;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int print(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }
// int selection(int arr[], int num){
//     int temp = 0;
//     for (int i = 0; i < num - 1; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {64, 25, 12, 22, 18};
//     int n = 5;
//     print(arr, n);
//     selection(arr, n);
//     print(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int bubbleSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 4, 22, 8, 11};
//     int n = 5;
//     print(arr, n);
//     bubbleSort(arr, n);
//     print(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int insertion(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (j; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }
// int main()
// {
//     int arr[] = {10, 1, 7, 4, 8, 2, 11};
//     int n = 7;
//     print(arr, n);
//     insertion(arr, n);
//     print(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int print(int arr3[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr3[i]<<" ";
//     }
//     cout<<endl;
// }
// int merge(int arr1[], int n, int arr2[], int m, int arr3[]){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }
// int main()
// {
//     int arr1[] = {1, 3, 5, 7, 9};
//     int arr2[] = {2, 4, 6};
//     int arr3[8] = {0};
//     merge(arr1, 5, arr2, 3, arr3);
//     print(arr3, 8);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int merge(int arr[], int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *ptr = new int[len1];
//     int *ptrr = new int[len2];
//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         ptrr[i] = arr[mainArrayIndex++];
//     }
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (ptr[index1] < ptrr[index2])
//         {
//             arr[mainArrayIndex++] = ptr[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = ptrr[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = ptr[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = ptrr[index2++];
//     }
// }
// int sort(int arr[], int s, int e)
// {
//     if (s >= e)
//     {
//         return 0;
//     }
//     int mid = s + (e - s) / 2;
//     // Left side sorting
//     sort(arr, s, mid);

//     // Right part sorting
//     sort(arr, mid + 1, e);

//     // Merge
//     merge(arr, s, e);
// }
// int main()
// {
//     int num = 5;
//     int arr[] = {2, 44, 3, 55, 5};
//     cout << "Array Before Merge Sort : \n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << "Array after Merge Sort : \n";
//     sort(arr, 0, num - 1);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// int main()
// {
//     node *a = new node(10);
//     node *b = a;
//     cout << a->data << endl;
//     cout << a->ptr << endl;
//     cout << b->data << endl;
//     cout << b->ptr << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalOfLinkedList(node *a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// node *InsertAtFirst(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = a;
//     return e;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     a = InsertAtFirst(a, 2);
//     TraversalOfLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalOfLinkedList(node *a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// node *InsertAtFirst(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = a;
//     return e;
// }
// node *InsertAtAnyIndex(node *&a, int data, int index)
// {
//     node *e = (node *)malloc(sizeof(node));
//     node *p = a;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->ptr;
//         i++;
//     }
//     e->data = data;
//     e->ptr = p->ptr;
//     p->ptr = e;
//     return a;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     // a = InsertAtFirst(a, 2);
//     a = InsertAtAnyIndex(a, 12, 2);
//     TraversalOfLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalOfLinkedList(node *a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// node *InsertAtFirst(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = a;
//     return e;
// }
// node *InsertAtEnd(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     node *p = a;
//     while (p->ptr != NULL)
//     {
//         p = p->ptr;
//     }
//     e->data = data;
//     p->ptr = e;
//     e->ptr = NULL;
//     return a;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     a = InsertAtEnd(a, 2);
//     TraversalOfLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalOfLinkedList(node *a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// node *InsertAtFirst(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = a;
//     return e;
// }
// node *InsertAtEnd(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     node *p = a;
//     while (p->ptr != NULL)
//     {
//         p = p->ptr;
//     }
//     e->data = data;
//     p->ptr = e;
//     e->ptr = NULL;
//     return a;
// }
// node *InsertAfterANode(node *&a, node *&c, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = c->ptr;
//     c->ptr = e;
//     return a;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     a = InsertAfterANode(a, c, 15);
//     TraversalOfLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node *deletefirstelement(node *&a)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     a = a->ptr;
//     free(e);
//     return a;
// }
// void Traversal(node *&a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     a = deletefirstelement(a);
//     Traversal(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node *deletefirstelement(node *&a)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     a = a->ptr;
//     free(e);
//     return a;
// }
// node *deleteatindex(node *&a, int index)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     node *p = a->ptr;
//     for (int i = 0; i < index - 1; i++)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = p->ptr;
//     free(p);
//     return a;
// }
// void Traversal(node *&a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);k
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     // a = deletefirstelement(a);
//     // a = deleteatindex(a, 2);
//     a = deleteatindex(a, 2);
//     Traversal(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node *deletefirstelement(node *&a)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     a = a->ptr;
//     free(e);
//     return a;
// }
// node *deleteatindex(node *&a, int index)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     node *p = a->ptr;
//     for (int i = 0; i < index - 1; i++)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = p->ptr;
//     free(p);
//     return a;
// }
// node* deleteatend(node* &a){
//     node* e = (node*)malloc(sizeof(node));
//     e = a;
//     node* p = a->ptr;
//     while (p->ptr != NULL)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = NULL;
//     free(p);
//     return a;
// }
// void Traversal(node *&a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     // a = deletefirstelement(a);
//     // a = deleteatindex(a, 2);
//     a = deleteatend(a);
//     Traversal(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node *deletefirstelement(node *&a)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     a = a->ptr;
//     free(e);
//     return a;
// }
// node *deleteatindex(node *&a, int index)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e = a;
//     node *p = a->ptr;
//     for (int i = 0; i < index - 1; i++)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = p->ptr;
//     free(p);
//     return a;
// }
// node* deleteatend(node* &a){
//     node* e = (node*)malloc(sizeof(node));
//     e = a;
//     node* p = a->ptr;
//     while (p->ptr != NULL)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = NULL;
//     free(p);
//     return a;
// }
// node* deleteanyvalue(node* &a, int value){
//     node* p = (node*)malloc(sizeof(node));
//     p = a;
//     node* q = a->ptr;
//     while (q->data != value && q->ptr != NULL)
//     {
//         p = p->ptr;
//         q = q->ptr;
//     }
//     if (q->data == value)
//     {
//         p->ptr = q->ptr;
//         free(q);
//     }
//     return a;
// }
// void Traversal(node *&a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->ptr;
//     }
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = NULL;
//     // a = deletefirstelement(a);
//     // a = deleteatindex(a, 2);
//     // a = deleteatend(a);
//     a = deleteanyvalue(a, 40);
//     Traversal(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// void TraversalOfCircularLinkedList(node *&a)
// {
//     node *ptrr = a;
//     do
//     {
//         cout << ptrr->data << endl;
//         ptrr = ptrr->ptr;
//     } while (ptrr != a);
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = a;
//     TraversalOfCircularLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node* insertAtBeginning(node* &a, int data){
//     node* e = (node*)malloc(sizeof(node));
//     e->ptr = a;
//     e->data = data;
//     node* p = (node*)malloc(sizeof(node));
//     p = a->ptr;
//     while (p->ptr != a)
//     {
//         p = p->ptr;
//     }
//     p->ptr = e;
//     a = e;
//     return a;
// }
// void TraversalOfCircularLinkedList(node *&a)
// {
//     node *ptrr = a;
//     do
//     {
//         cout << ptrr->data << endl;
//         ptrr = ptrr->ptr;
//     } while (ptrr != a);
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = a;
//     a = insertAtBeginning(a, 5);
//     TraversalOfCircularLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
//     node(int data)
//     {
//         this->data = data;
//         this->ptr = NULL;
//     }
// };
// node* insertAtBeginning(node* &a, int data){
//     node* e = (node*)malloc(sizeof(node));
//     e->ptr = a;
//     e->data = data;
//     node* p = (node*)malloc(sizeof(node));
//     p = a->ptr;
//     while (p->ptr != a)
//     {
//         p = p->ptr;
//     }
//     p->ptr = e;
//     a = e;
//     return a;
// }
// node* deletefrombeginning(node* &a){
//     node* e = a;
//     while (e->ptr != a)
//     {
//         e = e->ptr;
//     }
//     e->ptr = a->ptr;
//     a = a->ptr;
//     return a;
//     free(e);
// }
// void TraversalOfCircularLinkedList(node *&a)
// {
//     node *ptrr = a;
//     do
//     {
//         cout << ptrr->data << endl;
//         ptrr = ptrr->ptr;
//     } while (ptrr != a);
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->ptr = b;
//     b->ptr = c;
//     c->ptr = d;
//     d->ptr = a;
//     // a = insertAtBeginning(a, 5);
//     deletefrombeginning(a);
//     TraversalOfCircularLinkedList(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void forwardTraversal(node *&a)
// {
//     do
//     {
//         cout << "The a->data is : " << a->data << endl;
//         cout << "Next : " << a->next << endl;
//         cout << "Previous : " << a->prev << endl;
//         a = a->next;
//         if (a->next == NULL)
//         {
//             cout << "Next element is NULL" << endl;
//         }
//     } while (a->next != NULL);
// }
// void backwardTraversal(node *&d)
// {
//     do
//     {
//         cout << "Data is : " << d->data << endl;
//         cout << "Next : " << d->next << endl;
//         cout << "Prev : " << d->prev << endl;
//         d = d->prev;
//         if (d->prev == NULL)
//         {
//             cout << "Previous element is NULL" << endl;
//         }
//     } while (d->prev != NULL);
// }
// node *InsertAtBeginning(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->next = a;
//     e->prev = NULL;
//     return e;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->next = b;
//     a->prev = NULL;
//     b->next = c;
//     b->prev = a;
//     c->next = d;
//     c->prev = b;
//     d->next = NULL;
//     d->prev = c;
//     a = InsertAtBeginning(a, 5);
//     forwardTraversal(a);
//     backwardTraversal(d);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void forwardTraversal(node *&a)
// {
//     do
//     {
//         cout << "The a->data is : " << a->data << endl;
//         cout << "Next : " << a->next << endl;
//         cout << "Previous : " << a->prev << endl;
//         a = a->next;
//         if (a->next == NULL)
//         {
//             cout << "Next element is NULL" << endl;
//         }
//     } while (a->next != NULL);
// }
// void backwardTraversal(node *&d)
// {
//     do
//     {
//         cout << "Data is : " << d->data << endl;
//         cout << "Next : " << d->next << endl;
//         cout << "Prev : " << d->prev << endl;
//         d = d->prev;
//         if (d->prev == NULL)
//         {
//             cout << "Previous element is NULL" << endl;
//         }
//     } while (d->prev != NULL);
// }
// node *InsertAtBeginning(node *&a, int data)
// {
//     node *e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->next = a;
//     e->prev = NULL;
//     return e;
// }
// node* DeleteAtBeginnning(node* &a){
//     node* e = (node*)malloc(sizeof(node));
//     e = a;
//     node* p = (node*)malloc(sizeof(node));
//     p = a->next;
//     p->prev = NULL;
//     a = a->next;
//     free(e);
//     return a;
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->next = b;
//     a->prev = NULL;
//     b->next = c;
//     b->prev = a;
//     c->next = d;
//     d->next = NULL;
//     d->prev = c;
//     a = DeleteAtBeginnning(a);
//     forwardTraversal(a);
//     backwardTraversal(d);
//     return 0;
// }

// Finding an element in Linked List
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void TraversalLinkedList(node *&a)
// {
//     while (a != NULL)
//     {
//         cout << a->data << endl;
//         a = a->next;
//     }
// }
// bool search(node *&a, int key)
// {
//     if (a->data == key)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
//     search(a->next, key);
// }
// int main()
// {
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = NULL;
//     int key = 10;
//     if (search(a, key))
//     {
//         cout << "Element found" << endl;
//     }
//     else
//     {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[50], i, elem, pos, total;
//     cout << "Enter the size : " << endl;
//     cin >> total;
//     cout << "Enter the " << total << " elements of array : " << endl;
//     for (int i = 0; i < total; i++)
//         cin >> arr[i];
//     cout << "Enter the element : ";
//     cin >> elem;
//     cout << "Enter the position where you insert : ";
//     cin >> pos;
//     for (i = total; i >= pos; i--)
//         arr[i] = arr[i - 1];
//     arr[i] = elem;
//     total++;
//     cout << "The new array is : " << endl;
//     for (int i = 0; i < total; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int> stack;
//     stack.push(5);
//     stack.push(10);
//     stack.push(15);
//     stack.push(20);
//     cout<<stack.top()<<endl;
//     stack.pop();
//     cout<<stack.top()<<endl;
//     stack.pop();
//     cout<<stack.top()<<endl;
//     stack.pop();
//     cout<<stack.top()<<endl;
//     stack.pop();
//     cout<<stack.top()<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Stack
// {
// public:
//     int top;
//     int *arr;
//     int size;
//     Stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << "Stack Overflow" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack underflow" << endl;
//         }
//     }
//     int print()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }
//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };
// int main()
// {
//     Stack st(5);
//     st.push(5);
//     st.push(10);
//     st.push(15);
//     st.push(20);
//     cout << st.print() << endl;
//     st.pop();
//     cout << st.print() << endl;
//     st.pop();
//     cout << st.print() << endl;
//     st.pop();
//     cout << st.print() << endl;
//     if (st.isEmpty())
//     {
//         cout << "Stack is Empty" << endl;
//     }
//     else
//     {
//         cout << "Stack is not empty" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<char> stack;
//     string str = "Harry";
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         stack.push(ch);
//     }
//     string ans = "";
//     while (!stack.empty())
//     {
//         char ch = stack.top();
//         ans.push_back(ch);
//         stack.pop();
//     }
//     cout << "Reverse of stack is : " << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool ValidParenthesis(string expression)
// {
//     stack<char> stack;
//     for (int i = 0; i < expression.size(); i++)
//     {
//         char ch = expression[i];
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             stack.push(ch);
//         }
//         else
//         {
//             if (!stack.empty())
//             {
//                 char top = stack.top();
//                 if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
//                 {
//                     stack.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     if (stack.empty())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int print(int arr[], int s, int e){
//     int pivot = arr[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     int pivotindex = s + count;
//     swap(arr[pivotindex], arr[s]);
//     while (s < pivotindex && e > pivotindex)
//     {
//         if (arr[s] < pivot)
//         {
//             s++;
//         }
//         if (arr[e] > pivot)
//         {
//             e--;
//         }
//         if (s < pivotindex && e > pivotindex)
//         {
//             swap(arr[s++], arr[e--]);
//         }
//     }
// }
// int sort(int arr[], int s, int e){
//     if (s >= e)
//     {
//         return 0;
//     }
//     int p = print(arr, s, e);
//     sort(arr, s, p - 1);
//     sort(arr, p + 1, e);
// }
// int main()
// {
//     int size;
//     cout << "Enter size of array : ";
//     cin >> size;
//     int arr[5] = {1, 22, 3, 44, 5};
//     cout << "Before swapping : \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     cout << "After swapping : \n";
//     sort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class queue
// {
// public:
//     int *arr;
//     int qfront;
//     int rear;
//     int size;
//     queue()
//     {
//         size = 1001;
//         arr = new int[size];
//         rear = 0;
//         qfront = 0;
//     }
//     bool isEmpty(){
//         if (qfront == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void enqueue(int data){
//         if (rear == size)
//         {
//             cout<<"Already Full";
//         }
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int dequeue(){
//         if (qfront == rear)
//         {
//             cout<<"Empty queue";
//         }
//         else
//         {
//             int temp = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if (rear == qfront)
//             {
//                 rear = 0;
//                 qfront = 0;
//             }
//             return temp;
//         }
//     }
//     int front(){
//         if (qfront == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[qfront];
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class queue
// {
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     queue(int n)
//     {
//         size = n;
//         arr = new int[n];
//         front = -1;
//         rear = -1;
//     }
//     bool enqueue(int data)
//     {
//         if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
//         {
//             return false;
//         }
//         else if (front == -1)
//         {
//             rear = 0;
//             front = 0;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0;
//         }
//         else
//         {
//             rear++;
//         }
//         arr[rear] = data;
//         return true;
//     }
//     int dequeue()
//     {
//         if (front == -1)
//         {
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (front = size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int> deque;
//     deque.push_front(10);
//     deque.push_back(20);
//     deque.pop_front();
//     deque.pop_back();
//     cout << deque.size() << endl;
//     if (deque.empty())
//     {
//         cout << "It is empty deque";
//     }
//     else
//     {
//         cout << "It is not an empty deque";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Deque
// {
//     int rear;
//     int *arr;
//     int front;
//     int size;

// public:
//     Deque(int n)
//     {
//         size = n;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     bool pushFront(int data)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (front == 0 && rear != size - 1)
//         {
//             front = size - 1;
//         }
//         else
//         {
//             front--;
//         }
//         arr[front] = data;
//         return true;
//     }
//     bool pushRear(int data)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         else if (isEmpty())
//         {
//             rear = 0;
//             front = 0;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0;
//         }
//         else
//         {
//             rear++;
//         }
//         arr[rear] = data;
//         return true;
//     }
//     bool popfront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int temp = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return temp;
//     }
//     bool poprear()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int temp = arr[rear];
//         arr[rear] = -1;
//         if (rear == front)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (rear == 0)
//         {
//             rear = size - 1;
//         }
//         else
//         {
//             rear--;
//         }
//         return temp;
//     }
//     int getFront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
//     int getRear()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[rear];
//         }
//     }
//     bool isEmpty()
//     {
//         if (front == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool isFull()
//     {
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int> queue;
//     queue.push(5);
//     queue.push(10);
//     queue.push(15);
//     queue.push(20);
//     // cout<<queue.top()<<endl;
//     queue.pop();
//     // cout<<queue.top()<<endl;
//     queue.pop();
//     priority_queue<int, vector<int>, greater<int>> minqueue;
//     minqueue.push(5);
//     minqueue.push(15);
//     minqueue.push(20);
//     minqueue.push(10);
//     cout<<minqueue.top()<<endl;
//     minqueue.pop();
//     cout<<minqueue.top()<<endl;
//     minqueue.pop();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Dqueue
// {
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     Dqueue(int n)
//     {
//         size = n;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     bool pushFront(int element)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (front == 0 && rear != size - 1)
//         {
//             front = size - 1;
//         }
//         else
//         {
//             front--;
//         }
//         arr[front] = element;
//         return true;
//     }
//     bool pushRear(int element)
//     {
//         if (isFull())
//         {
//             return false;
//         }
//         if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         else if (front != 0 && rear == size - 1)
//         {
//             rear = 0;
//         }
//         else
//         {
//             rear++;
//         }
//         arr[rear] = element;
//         return true;
//     }
//     int popFront()
//     {
//         if (isEmpty())
//         {
//             return false;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ans;
//     }
//     int popRear()
//     {
//         if (isEmpty())
//         {
//             return false;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else if (rear == 0)
//         {
//             rear = size - 1;
//         }
//         else
//         {
//             rear--;
//         }
//         return ans;
//     }
//     int getFront(){
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
//     int getRear(){
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[rear];
//         }
//     }
//     bool isEmpty(){
//         if (front == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool isFull(){
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node* buildTree(node* &root){
//     int data;
//     cin>>data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// int main()
// {
//     node* root = NULL;
//     root = buildTree(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildTree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// node *levelorderTravesal(node *root)
// {
//     queue<node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout<<temp->data<<" ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// int main()
// {
//     node *root = NULL;
//     root = buildTree(root);
//     levelorderTravesal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildTree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// node *LevelOrderTraversal(node *root)
// {
//     queue<node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         node *temp = queue.front();
//         queue.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }
// void postorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }
// void preorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main()
// {
//     node *root = NULL;
//     inorder(root);
//     preorder(root);
//     postorder(root);
//     LevelOrderTraversal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildTree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// node *levelorderTraversal(node *root)
// {
//     queue<node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         node *ans = queue.front();
//         queue.pop();
//         if (ans == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << ans->data << " ";
//             if (ans->left)
//             {
//                 queue.push(ans->left);
//             }
//             if (ans->right)
//             {
//                 queue.push(ans->right);
//             }
//         }
//     }
// }
// int height(node *root)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     int left = height(root->left);
//     int right = height(root->right);
//     int ans = max(left, right) + 1;
//     return ans;
// }
// int diameter(node *root)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     int op1 = diameter(root->left);
//     int op2 = diameter(root->right);
//     int op3 = height(root->left) + height(root->right) + 1;
//     int ans = max(op1, op2, op3);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildTree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
//     return root;
// }
// node *levelorderTraversal(node *root)
// {
//     queue<node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         node *ans = queue.front();
//         queue.pop();
//         if (ans == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << ans->data << " ";
//             if (ans->left)
//             {
//                 queue.push(ans->left);
//             }
//             if (ans->right)
//             {
//                 queue.push(ans->right);
//             }
//         }
//     }
// }
// node *insertIntoBST(node *root, int data)
// {
//     if (root == NULL)
//     {
//         root = new node(data);
//         return root;
//     }
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     else
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// void takeinput(node* root, int data){
//     while (data != -1)
//     {
//         root = insertIntoBST(root, data);
//         cin>>data;
//     }
// }
// int main()
// {
//     node* root = NULL;
//     int data;
//     cin>>data;
//     takeinput(root, data);
//     levelorderTraversal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildTree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root->left = buildTree(root->left);
//     root->right = buildTree(root->right);
// }
// node *levelorderTraversal(node *root)
// {
//     queue<node *> queue;
//     queue.push(root);
//     queue.push(NULL);
//     while (!queue.empty())
//     {
//         node *ans = queue.front();
//         queue.pop();
//         if (ans == NULL)
//         {
//             cout << endl;
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             cout << ans->data << " ";
//             if (ans->left)
//             {
//                 queue.push(ans->left);
//             }
//             if (ans->right)
//             {
//                 queue.push(ans->right);
//             }
//         }
//     }
// }
// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }
// void preorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }
// node *insertintoBST(node *root, int data)
// {
//     if (root == NULL)
//     {
//         root = new node(data);
//         return root;
//     }
//     if (data > root->data)
//     {
//         root->right = insertintoBST(root->right, data);
//     }
//     else
//     {
//         root->left = insertintoBST(root->left, data);
//     }
// }
// node *minvalue(node *root)
// {
//     node *ans = root;
//     while (ans->left != NULL)
//     {
//         ans = ans->left;
//     }
//     return ans;
// }
// node *maxvalue(node *root)
// {
//     node *ans = root;
//     while (ans->right != NULL)
//     {
//         ans = ans->right;
//     }
//     return ans;
// }
// node *deleteBST(node *root, int element)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     if (root->data == element)
//     {
//         // 0 child
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // 1 child
//         if (root->left != NULL && root->right == NULL)
//         {
//             node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         if (root->right != NULL && root->left == NULL)
//         {
//             node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         // 2 child
//         if (root->left != NULL && root->right != NULL)
//         {
//             int mini = minvalue(root->right)->data;
//             root->data = mini;
//             root->right = deleteBST(root->right, mini);
//             return root;
//         }
//     }
//     else if (root->data > element)
//     {
//         root->left = deleteBST(root->left, element);
//         return root;
//     }
//     else
//     {
//         root->right = deleteBST(root->right, element);
//         return root;
//     }
// }
// void takeinput(node *root, int data)
// {
//     while (data != -1)
//     {
//         root = insertintoBST(root, data);
//         cin >> data;
//     }
// }
// int main()
// {
//     node *root = NULL;
//     int data;
//     cin >> data;
//     root = buildTree(root);
//     takeinput(root, data);
//     inorder(root);
//     preorder(root);
//     postorder(root);
//     levelorderTraversal(root);
//     cout << minvalue(root)->data << endl;
//     cout << maxvalue(root)->data << endl;
//     root = deleteBST(root, 7);
//     cout << "After deletion the BST is : " << endl;
//     levelorderTraversal(root);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// bool searchBST(node *root, int element)
// {
//     node *temp = root;
//     while (temp != NULL)
//     {
//         if (temp->data == element)
//         {
//             return true;
//         }
//         if (temp->data > element)
//         {
//             temp = temp->left;
//         }
//         else if (temp->data < element)
//         {
//             temp = temp->right;
//         }
//     }
//     return false;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int size;
//     int arr[100];
//     node()
//     {
//         arr[0] = -1;
//         size = 0;
//     }
//     void insert(int value)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = value;
//         while (index > 1)
//         {
//             int parent = index / 2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//     void print(int arr[], int n)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     void deletefromHeap()
//     {
//         if (size == 0)
//         {
//             cout << "Empty Heap";
//         }
//         arr[1] = arr[size];
//         size--;
//         int i = 1;
//         while (i < size)
//         {
//             int leftindex = 2 * i;
//             int rightindex = 2 * i + 1;
//             if (leftindex < size && arr[i] < arr[leftindex])
//             {
//                 swap(arr[i], arr[leftindex]);
//                 i = leftindex;
//             }
//             else if (rightindex < size && arr[i] < arr[rightindex])
//             {
//                 swap(arr[i], arr[rightindex]);
//                 i = rightindex;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
// };
// int heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
// void heapsort(int arr[], int n)
// {
//     int size = n;
//     while (size > 1)
//     {
//         swap(arr[size], arr[1]);
//         size--;
//         heapify(arr, size, 1);
//     }
// }
// int main()
// {
//     // node heap;
//     // heap.insert(20);
//     // heap.insert(30);
//     // heap.insert(40);
//     // heap.insert(50);
//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n = 5;
//     // Run a loop from n/2 to 1st index reverse order from right to left
//     for (int i = n / 2; i > 0; i--)
//     {
//         // heapify those nodes (putting nodes at right place) except n/2 to n as they are leaf nodes
//         heapify(arr, n, i);
//     }
//     cout << "Before sorting the aray : " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     heapsort(arr, n);
//     cout << "After sorting the array : " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class graph
// {
// public:
//     unordered_map<int, list<int>> adjacent;
//     void addEdge(int u, int v, bool direction)
//     {
//         adjacent[u].push_back(v);
//         if (direction == 0)
//         {
//             adjacent[v].push_back(u);
//         }
//     }
//     void printAdjacent()
//     {
//         for (auto i : adjacent)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << ",";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the edge : "<<endl;
//     cin>>n;
//     int m;
//     cout<<"Enter the edge : "<<endl;
//     cin>>m;
//     graph g;
//     for (int i = 0; i < m; i++)
//     {
//         int u;
//         cin>>u;
//         int v;
//         cin>>v;
//         g.addEdge(u, v, 0);
//     }
//     cout<<"The Graph is : ";
//     g.printAdjacent();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     void printAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges)
//     {
//         for (int i = 0; i < edges.size(); i++)
//         {
//             int u = edges[i].first;
//             int v = edges[i].second;
//             adjList[u].insert(v);
//             adjList[v].insert(u);
//         }
//     }
//     void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
//     {
//         queue<int> queue;
//         queue.push(node);
//         visited[node] = 1;
//         while (!queue.empty())
//         {
//             int frontnode = queue.front();
//             queue.pop();
//             ans.push_back(frontnode);
//             for (auto i : adjList[frontnode])
//             {
//                 if (!visited[i])
//                 {
//                     queue.push(i);
//                     visited[i] = 1;
//                 }
//             }
//         }
//     }
//     vector<int> BFS(int vertex, vector<pair<int, int>> &edges)
//     {
//         unordered_map<int, set<int>> adjList;
//         vector<int> ans;
//         unordered_map<int, bool> visited;
//         printAdjList(adjList, edges);
//         for (int i = 0; i < vertex; i++)
//         {
//             if (!visited[i])
//             {
//                 bfs(adjList, visited, ans, i);
//             }
//         }
//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList, vector<int> &component)
//     {
//         component.push_back(node);
//         visited[node] = 1;
//         for (auto i : adjList[node])
//         {
//             if (!visited[i])
//             {
//                 dfs(i, visited, adjList, component);
//             }
//         }
//     }
//     vector<vector<int>> DFS(int V, int E, vector<vector<int>> &edges)
//     {
//         unordered_map<int, list<int>> adjList;
//         for (int i = 0; i < edges.size(); i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             adjList[u].push_back(v);
//             adjList[v].push_back(u);
//         }
//         vector<vector<int>> ans;
//         unordered_map<int, bool> visited;
//         for (int i = 0; i < V; i++)
//         {
//             if (!visited[i])
//             {
//                 vector<int> component;
//                 dfs(i, visited, adjList, component);
//                 ans.push_back(component);
//             }
//         }
//         return ans;
//     }
// };

