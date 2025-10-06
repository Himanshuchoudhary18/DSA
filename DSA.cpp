// Unsigned
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unsigned int a = -5; //This will give you value of ASCII code When you try to assign a negative number (like -5) to an unsigned int, the computer can't store that negative number directly. Instead, it wraps around to a large positive value due to how numbers are stored in memory.
//     // unsigned int a = 15; //This will give you value of ASCII code, so in +ve integers the ASCII value is same
//     cout<<a<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5;
//     unsigned int b = 10;
//     unsigned int c = -12;
//     int d = 12;
//     unsigned int e = 12;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<d<<endl;
//     cout<<e<<endl;
//     // Even if we have unsigned int variable like for ex = a or b or c having positive values then the result it will return will also be positive
//     // Whereas, for negative value it's value will be long and different
//     return 0;
// }

// ASCII values
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter number : ";
//     int num = cin.get();
//     cout<<"value of num in ASCII is : "<<num<<endl;
//     return 0;
// }

// All 3 methods will mork properly
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // cout << "Enter a number : ";
//     // int a = cin.get();
//     // cout << a << endl;
//     // OR //
//     // cout << "Enter a number : ";
//     // int b;
//     // cout << cin.get() << endl;
//     return 0;
// }

// Homework
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 9;
//     if (a == 9)
//     {
//         cout << "NO";
//     }
//     if (a > 0)
//     {
//         cout << "POSITIVE";
//     }
//     else if (a > 2)
//     {
//         cout << "NEGATIVE";
//     }
//     else
//     {
//         cout << "YES";
//     }
//     return 0;
// }

// Data Structures
// A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently

// Linear data structure
// Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure

// Static data structure: Static data structure has a fixed memory size. It is easier to access the elements in a static data structure

// Dynamic data structure: In dynamic data structure, the size is not fixed. It can be randomly updated during the runtime which may be considered efficient concerning the memory (space) complexity of the code.

// Non-linear data structure: Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only

// Prime Numbers
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Step 1 : First, we will store a check at 0, which will then increment it's value as the number user choose will get divided by (i) i.e (2, 3, 4, 5 -> number)
//     int num, check = 0;
//     cout << "Enter any number : ";
//     cin >> num;
//     // Step 2 : Then we will start with (i = 2) because (1 and 0) are not a prime number
//     for (int i = 2; i < num; i++)
//     {
//         // STEP 3 : We are dividing number with (i) if the remainder == 0 then we will increment count and it means that it is not a prime number because prime number are those number that are divisible by itself and 1 only
//         // But, here it will prove that it is divisible by numbers other than 1 and itself
//         if (num % i == 0)
//         {
//             // But if we have to check "how many are prime numbers" then we can let this loop run till the n - 1 and then at the end return check; instead of break; statement
//             check++;
//             // STEP 4 : Then break statement to stop the loop because, we only needed that number which is divisible by any other number once we get that we can stop the loop because that number is not the prime number for sure
//             break;
//         }
//     }
//     // So, if we give num = 0 || num == 1 then it will skip above step and directly come in the below category and acc. to that "it will be considered not as a prime number"
//     // STEP 6 : Because 0 and 1 are not a prime number
//     if (num == 1 || num == 0)
//     {
//         cout << "It is not a Prime Number";
//     }
//     else
//     {
//         // STEP 5 : If check increases we know that it is not a prime number because count will only increase when it is divisible by any number that is >= 2
//         if (check == 0)
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

// Better than previous one (Trial Version)
// #include <bits/stdc++.h>
// using namespace std;
// bool isPrime(long long n)
// {
//     // Base case
//     if(n == 0 || n == 1)
//     {
//         return false;
//     }
//     // Remaining cases
//     else
//     {
//         for(long long i = 2; i <= sqrt(n); i++)
//         {
//             if(n % i == 0)
//             {
//                 return false;
//                 break;
//             }
//         }
//         return true;
//     }
// }
// int main()
// {
//     long long n;  // 5
//     cout << "Enter the number to check it is prime or not : ";
//     cin >> n;
//     if(isPrime(n))
//     {
//         cout << "It is a Prime Number";
//     }
//     else
//     {
//         cout << "It is not a Prime number";
//     }    
// }

// Better optimized solution for finding prime number (using divisor count) usable for n ≤ 10^7 range
// #include <bits/stdc++.h>
// using namespace std;
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     int c = 0;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             if (n / i == i)
//                 c++;
//             else
//                 c += 2;
//         }
//     }
//     c += 2; 
//     return c == 2;
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
//     return 0;
// }

// Create an array and check how many elements are prime or not?
// #include <bits/stdc++.h>
// using namespace std;
// bool CountPrime(long long x)
// {
//     int count = 0;
//     if(x == 0 || x == 1)
//     {
//         return false;
//     }
//     else
//     {
//         for(int i = 2; i <= sqrt(x); i++)
//         {
//             if(x % i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// }
// int main()
// {
//     long long n;
//     cout << "Enter the size of the array : " << endl;
//     cin >> n;
//     long long arr[n];
//     cout << "Enter the elements in the array for checking : " << endl; 
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "\nPrime check for each element:\n";
//     for(int i = 0; i < n; i++)
//     {
//         if(CountPrime(arr[i]))
//         {
//             cout << "Prime number : " << arr[i] << endl;
//         }
//         else
//         {
//             cout << "Not a Prime are : " << arr[i] << endl;
//         }
//     }
// }

// 1. Sieve of Eratosthenes
// Time Complexity:
// O(N log log N)
// Space Complexity: O(N)
// Efficient Up To:
// N ≈ 10^7 to 10^8 on most modern machines with reasonable memory.
// Why:
// The Sieve of Eratosthenes requires storing an array of size N, which becomes memory-intensive for very large values of N. Beyond 10^8, the space requirements make it impractical unless optimizations like segmented sieves or parallel processing are used.

// 2. Miller-Rabin Primality Test
// Time Complexity:
// O(k log3 n), where k is the number of iterations (typically 5–10 for good accuracy)
// Efficient Up To:
// n≈ 10^100 or more
// Why:
// The Miller-Rabin test is a probabilistic primality test that works efficiently even for numbers with
// hundreds of digits. The runtime grows with the logarithm of n, making it highly suitable for very large numbers.
// Optimization Note:
// For numbers < 2^64, Miller-Rabin can be made deterministic using a predefined set of bases, turning it into a fully reliable test in those ranges.

// 3. Trial Division
// Time Complexity: O(√n)
// Efficient Up To: n≈ 10^6 to 10^7
// Why:
// This method checks divisibility by every integer up to √n, which becomes very slow for larger n. For numbers larger than 10^7, the number of divisions becomes excessive, making the method impractical.
// Summary of Use-Cases
// Task
// Generating primes
// Checking primality (small)
// Checking primality (large)
// Best Method
// Efficient Range
// Sieve of Eratosthenes
// Up to 10^7-10^8
// Trial Division
// Up to 10^6-10^7
// Miller-Rabin Tes
// > 10^7, up to 10^100+

// | **Aspect**                                   | **Sieve of Eratosthenes**                                            | **Miller-Rabin Primality Test**                                         | **Trial Division (using $\sqrt{n}$)**                    |
// | -------------------------------------------- | -------------------------------------------------------------------- | ----------------------------------------------------------------------- | -------------------------------------------------------- |
// | **Purpose**                                  | Generate all primes up to a given number $N$.                        | Check if a single number $n$ is prime.                                  | Check if a single number $n$ is prime.                   |
// | **Algorithm Type**                           | Sieve algorithm (deterministic)                                      | Probabilistic primality test                                            | Deterministic (based on division)                        |
// | **Time Complexity (for finding primes)**     | $O(N \log \log N)$                                                   | $O(k \log^3 n)$ for $k$ iterations                                      | $O(\sqrt{n})$                                            |
// | **Time Complexity (for checking primality)** | N/A (used for generating primes)                                     | $O(k \log^3 n)$ where $k$ is the number of iterations                   | $O(\sqrt{n})$                                            |
// | **Space Complexity**                         | $O(N)$ (storing primes or marking sieve array)                       | $O(1)$ (constant space for checks)                                      | $O(1)$                                                   |
// | **Best Use Case**                            | Generating a list of primes up to $N$.                               | Fast primality test for large numbers (with error bounds)               | Small numbers or when checking a single prime            |
// | **Memory Efficiency**                        | Moderate (storing sieve array for numbers up to $N$)                 | Very low (constant space)                                               | Very low (constant space)                                |
// | **Suitability for Large $n$**                | Not suitable for very large $N$ (requires $O(N)$ space)              | Very suitable for large numbers, with trade-offs in accuracy            | Not suitable for very large $n$ due to slow running time |
// | **Parallelism**                              | Can be parallelized for speed (e.g., sieve with multiple processors) | Can be parallelized for faster results (especially for multiple checks) | Hard to parallelize due to its sequential nature         |


// For 𝑛 = 10^6, trial division without the square root optimization will take approximately 10^6 iterations, which might be tolerable for small calculations. For 𝑛 = 10^7, you'll have about 10^7 divisions to check, and it starts becoming noticeably slower. For 𝑛 = 10^9, the number of divisions will be on the order of 10^9, which is too slow for practical use. Why Is This Slow? With 𝑛 optimization, you're reducing the number of checks significantly, since only divisors up to root 𝑛  need to be checked. Without it, you essentially check every integer from 2 to 𝑛 − 1, which results in a linear time complexity. 
// | **Approach**                            | **Time Complexity** | **Efficient Up To**                               |
// | --------------------------------------- | ------------------- | ------------------------------------------------- |
// | **Trial Division (with $\sqrt{n}$)**    | $O(\sqrt{n})$       | Up to $10^7$ to $10^8$                            |
// | **Trial Division (without $\sqrt{n}$)** | $O(n)$              | Up to $10^6$ (after which it becomes impractical) |

// Conclusion: Trial Division without root 𝑛  : It’s very inefficient and impractical for large numbers. It’s only useful for very small numbers, perhaps up to 10^6, but even then, more optimized primality tests (like Miller-Rabin) should be considered for much larger numbers.


// Pattern Printing
// #include <iostream>
// using namespace std;
// int printstar(int num){
//     // We put i < when we take i = 0 then it will print 0,1,2 but when we take i <= it means i = 1 so, it will print 1, 2 and 3
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<"\n";
//     }
// };
// int main()
// {
//     int num;
//     cout<<"Enter any number : ";
//     cin>>num;
//     printstar(num);
//     return 0;
// }

// Print star in reverse
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
// 	   for(int i = 1; i <= n; i++)
// 	   {
// 	       for(int j = 1; j <= n - i + 1; j++)
// 	       {
// 	           cout<< "*";
// 	       }
// 	       cout << endl;
// 	   }
//     return 0;
// }

// Print Stars in Rectangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number : ";
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Make a pattern of numbers in rectangle shape incrementing by one value
// 1 2 3 4 5        (i<=n)
// 6 7 8 9 10       (j<=n)
// 11 12 13 14 15   cout<<sum;
// 16 17 18 19 20   sum++;
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             sum++;
//             cout<<sum<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// Print same number in triangle form
// 1       (i<=n)
// 2 2     (j<=i)
// 3 3 3   cout<<i;
// 4 4 4 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter number : ";
//     cin >> num;
//     int row = 1;
//     while (row <= num)
//     {
//        int column = 1;
//        while (column <= row)
//        {
//           cout << row;
//           column = column + 1;
//        }
//        cout << endl;
//        row = row + 1;
//     }
//     //     OR         //
// for loop
//     for (row; row <= num; row++)
//     {
//         int column = 1;
//         for (column; column <= row; column++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print value in triangle shape like this
// 1          (i<=n)
// 2 3        (j<=i)
// 4 5 6      new = 0;
// 7 8 9 10   new++;
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number : ";
//     cin>>num;
//     int increment = 0;
//     for (int row = 1; row <= num; row++)
//     {
//         int column = 1;
//         for (column; column <= row; column++)
//         {
//             increment++;
//             cout<<increment<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 2
// 1 2 3 4
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9 10
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

// 1 1
// 2 2 2 2
// 3 3 3 3 3 3
// 4 4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5 5
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
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1 1
// 2 2 2
// 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5 5
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= 2 * i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1
// 222
// 33333
// 4444444
// 555555555
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Online C++ compiler to run C++ program online
// 1 2 
// 3 4 5 
// 5 6 7 8 
// 7 8 9 10 11 
// 9 10 11 12 13 14
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = i; j <= 2 * i; j++)
//         {
//             cout << i + j - 1 << " ";
//         }
//         cout << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= 2 * i; j++)
//         {
//             cout<<i + j - 1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 2
// 2 3 4
// 3 4 5 6
// 5 6 7 8 9
// 8 9 10 11 12 13
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= 2 * i; j++)
//         {
//             cout << i + j - 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 1234
// 123456789
// 12345678910111213141516
// 12345678910111213141516171819202122232425
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i * i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 222
// 3333333
// 4444444444444
// 555555555555555555555
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = i; j <= i * i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Print elements in triangular form like this
// 1       (i<=n)
// 2 3     (j<=i)
// 3 4 5   i + j - 1
// 4 5 6 7
// 5 6 7 8 9
// #include <iostream>
// using namespace std;  
// int main()
// {
//     int num;
//     cin>>num;
//     for (int row = 1; row <= num; row++)                       // Here, row = 1                                                 // 2
//     {                                                              // 3                                          // 4
//         for (int column = 1; column <= row; column++)
//         {
//             cout<<row + column - 1<<" ";                    // Here, column = 1 |column      |
//         }                                              //                2 |3(2+2-1)    |                                                       //                3 |4 5(3+3-1)  |                                                      //                4 |6 7 8(4+4-1)|
//         cout<<endl;
//     }
//     return 0;
// }

// Printing in triangular form like this
// 1        (i<=n)
// 2 1      (j<=i)
// 3 2 1    i - j + 1
// 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     for (row; row <= num; row++)
//     {
//         int column = 1;
//         for (column; column <= row; column++)
//         {
//             cout<<row - column + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print elements in rectangle/square format like this
// 1 1 1 1 | (row<=n)
// 2 2 2 2 | (column<=n)
// 3 3 3 3 | cout<<row<<" ";
// 4 4 4 4 |
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     for (int row = 1; row <= num; row++)
//     {
//         for (int column = 1; column <= num; column++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print elements in square format like this
// A B C (i<=n)
// A B C (j<=n)
// A B C ('A'+j-1)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     for (row; row <= num; row++)
//     {
//         int column = 1;
//         for (column; column <= num; column++)
//         {
//             cout<<char('A'+column-1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print elements
// A B C D E   (i<=n)
// F G H I J   (j<=n)
// K L M N O   'A'++
// P Q R S T
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     char start = 'A';
//     for (row; row <= num; row++)
//     {
//         int column = 1;
//         for (column; column <= num; column++)
//         {
//             cout<<start;
//             start++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print elements
// A B C
// B C D
// C D E
// D E F
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     char str = 'A';
//     for (int rows = 1; rows <= num; rows++)
//     {
//         for (int column = 1; column <= num; column++)
//         {
//             cout<<char(str + rows + column - 2);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print elements
// A
// B B
// C C C
// D D D D
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number : ";
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A'+ i - 1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print Elements
// A
// B C
// C D E
// D E F G
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char('A' + i + j - 2);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// N = 5
// A_
// A_B_
// A_B_C_
// A_B_C_D_
// A_B_C_D_E_
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int N = 5;

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << char('A' + j - 1) << "_";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// OR //

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int N = 5;
//     for (int i = 1; i <= N; i++) {
//         char ch = 'A';
//         for (int j = 1; j <= i; j++) {
//             cout << ch << "_";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// A
// B A
// C B A
// D C B A
// E D C B A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ans = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(ans + i - j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Print Pattern
// D
// C D
// B C D
// A B C D
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         char n = 'A' + num - i;  // D se start hoga isse (A + 4-1 = A + 3 = D)
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n;
//             // We are incrementing it everytime because once 'A' + n - i is done suppose n is 5 then A + 4 = D, so after that we have to do this 'A' + n - 2 = C but if we keep on doing this then after some time we will get 0 at the end but we needed
//             // D
//             // C D
//             // B C D
//             // A B C D
//             // So, therefore we will have to increment the value again after printing it to get the D value again at end of each line/row
//             n++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// OR //

// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         char sum = ('A' + num - 1);
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(sum + j - i)<<" ";
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

// E
// DD
// CCC
// BBBB
// AAAAA
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num; 
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         // char n = ('A' + n - 1);
//         char n = ('A' + num - i);  // D se start hoga isse (A + 4-1 = A + 3 = D)
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n;
//             // OR //
//             // cout << char(ans - i + 1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// F
// GG
// HHH
// IIII
// JJJJJ
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         char n = ('A' + (num - 2) + i);  // D se start hoga isse (A + 4-1 = A + 3 = D)
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// D
// DC
// DCB
// DCBA
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         char ans = ('A' + num - i);
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(ans + i - j);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// OR //

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         char ans = ('A' + num - 1);
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ans;
//             ans--;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Print like this format
// D
// E D
// F E D
// G F E D
// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         char sum = ('A' + num - 1);
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

// D
// DE
// DEF
// DEFG
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         char ans = ('A' + num - 1);
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ans;
//             ans++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Print Star Pattern
//      *
//     **
//    ***
//   ****
//  *****
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     for(row; row <= num; row++)
//     {
//         // Let's take space = num(5) - row => 5 - 1 = 4 like this it will start
//         int space = num - row + 1;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }
//         for(int col = 1; col <= row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print pattern
// *****
//  ****
//   ***
//    **
//     *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int row = 1; row <= num; row++)
//     {
//         int space = 1;
//         while (space <= row - 1)
//         {
//             cout << " ";
//             space++;
//         }
//         for (int column = num; column >= row; column--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Pattern
// 1 1 1 1
//   2 2 2
//     3 3
//       4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int row = 1; row <= num; row++)
//     {
//         int space = 1;
//         while (space <= row - 1)
//         {
//             cout << " ";
//             space++;
//         }
//         for (int column = num; column >= i ; column--)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Print Pattern
// 1 1 1 1 1         * * * * *
//  2 2 2 2           * * * *
//   3 3 3     or      * * *
//    4 4               * *
//     5                 *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
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
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i + 1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
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

// Pattern Print
//        1
//       12|1
//      123|21
//     1234|321
//    12345|4321
// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i + 1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         for (j; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         for (int k = 1; k < i; k++)
//         {
//             cout<<k + i - j + 1<<" ";
//         }
//         cout<<endl;
//     }
// }

// OR //

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // Space
//         // First we will give space which is decreasing so spac e--; initially space = num - i i.e if num = 5 so, num - i = 5 - 1 = 4, 5 - 2 = 3, 5 - 3 = 2, 5 - 4 = 1
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
//         int breakpoint = (2 * i - 1) / 2;
//         // Here, j will start from the point where space ends in each row but till what point the number have to print that will be determined by j <= 2*i will print 2,4,6,8,10....
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << count;
//             if (j <= breakpoint)
//             {
//                 count++;
//             }
//             else
//             {
//                 count--;
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

// #include <iostream>
// using namespace std;
// int main() {
//     int n; 
//     cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//        for(int j = 1; j <= 2 * i - 1; j++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//     }
//     return 0;
// }
// OUTPUT
// 5
// *
// ***
// *****
// *******
// *********

//      *
//     ***
//    *****
//   *******
//  *********
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

// *****1
// ****121
// ***12321
// **1234321
// *123454321
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
//            cout << "*";
//         }
//         int count = 1;
//         int breakpoint = (2 * i - 1) / 2;
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << count;
//             if (j <= breakpoint)
//             {
//                 count++;
//             }
//             else
//             {
//                 count--;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// *****121
// ****12321
// ***1234321
// **123454321
// *12345654321
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
// void printTriangle(int n)
// {
//       for(int i = 0; i < n; i++)
//       {
//           // Spaces
//           for (int j = 0; j < n - i + 1; j++)
//           {
//               cout << " ";
//           }
//           // Characters
//           int ans = 1;
//           int breakpoint = (2 * i + 1) / 2;
//           for(int j = 1; j <= 2 * i + 1; j++)
//           {
//               cout << ans;
//               if (j <= breakpoint)
//               {
//                   ans++;
//               }
//               else
//               {
//                   ans--;
//               }
//           }
//           // Spaces
//           for (int j = 0; j < n - i + 1; j++)
//           {
//               cout << " ";
//           }
//           cout << endl;
//       }
//     }
// }

//      123
//     12345
//    1234567
//   123456789
//  1234567891011
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
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << " ";
//         }
//         // OR //
//         int s = n - i + 1;
//         // while (s)
//         // {
//         //    cout << " ";
//         //    s--;
//         // }
//         // Here, we have to make a breakpoint from where the values will start decrementing or incrementing depending on if they are greater than value of j 
//         int ans = 1;
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ans;
//             ans++;
//         }
//         // Space
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


//     1
//    1 2 1
//   1 2 3 1 2
//  1 2 3 4 1 2 3
// 1 2 3 4 5 1 2 3 4
// #include <iostream>
// using namespace std;
// int print(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int space = num - i + 1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         for (j; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         for (int k = 1; k < i; k++)
//         {
//             cout<<k + i - j + 1<<" ";
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

//     *
//    ***
//   *****
//  *******
// *********
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     void printTriangle(int n)
//     {
//         // code here
//         for(int i=0;i<n;i++)
//         {
//             //space
//             for(int j=0;j<n-i-1;j++)
//             {
//                 cout<<" ";
//             }
//             //star
//             for(int j=0;j<2*i+1;j++)
//             {
//                 cout<<"*";
//             }
//             //space
//             for(int j=0;j<n-i-1;j++)
//             {
//                 cout<<" ";
//             }
//             cout<<endl;
//          }
//     }
// };

// *********
//  *******
//   *****
//    ***
//     *
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
// 	void printTriangle(int n) {
// 	    for(int i = 0; i < n; i++){
// 	        int space = 0;
// 	        while(space <= i - 1)
// 	        {
// 	           cout << " ";
// 	           space++;
// 	        }
// 	        for(int j = 1; j <= 2*n - (2 * i - 1); j++)
// 	        {
// 	           cout << "*";
// 	        }
// 	        cout << endl;
// 	    }
// 	}
// };


// **********1111111111
//  *********111111111
//   ********11111111
//    *******1111111
//     ******111111
//      *****11111
//       ****1111
//        ***111
//         **11
//          *1
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	for(int i = 1; i <= n; i++){
// 	    int space = 1;
// 	    while(space <= i - 1)
// 	    {
// 	        cout << " ";
// 	        space++;
// 	    }
// 	    for(int j = 1; j <= n - i + 1; j++)
// 	    {
// 	        cout << "*";
// 	    }
// 		space = n - i;
// 		while(space)
// 	    {
// 	        cout << "1";
// 	        space--;
// 	    }
// 	    cout << endl;
// 	  }
// }


// * * * * * * * *
//  * * * * * * *
//   * * * * * *
//    * * * * *
//     * * * *
//      * * * 
//       * *
//        *
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
// 	for(int i = 0; i < n; i++){
// 	    int space = 0;
// 	    while(space <= i - 1)
// 	    {
// 	        cout << " ";
// 	        space++;
// 	    }
// 	    int star = 0;
// 	    if(i <= 0)
// 	    {
// 	        star = n;
// 	    }
// 	    else
// 	    {
// 	        star = n - i;
// 	    }
//      // OR //
//      we can simply run this below loop from (j = 1; j <= n - i + 1; j++) then we don't have to do the above things
//      // for(int j = 1; j <= n - i + 1; j++)
//	    // {
//	    //    cout << "*" << " ";
//	    // }
// 	    for(int j = 1; j <= star; j++)
// 	    {
// 	        cout << "*" << " ";
// 	    }
// 	    cout << endl;
// 	 }
// }


//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     void printDiamond(int n) {
//         // above pattern
//         for(int i = 1; i <= n; i++)
//         {
//             //space
//             for(int j = 1; j <= n - i - 1; j++)
//             {
//                 cout<<" ";
//             }
//             //star
//             for(int j = 1; j <= i; j++)
//             // If starting from j = 1; then we have to use (j <= 2 * i - 1);
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         //below pattern
//         for(int i = 1; i <= n; i++)
//         {
//             //space
//             int space = 0;
//             while(space <= i - 1)
//             {
//                 cout << " ";
//                 space++;
//             }
//             //star
//             for(int j = 1; j <= n - i + 1; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
// #include <bits/stdc++.h>
// using namespace std;
// int func1(int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }
// int func2(int n)
// {
//     for (int i = 1; i <= n; i++) // OR i <= n
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     func1(n);
//     func2(n);
//     return 0;
// }

// OR //

// class Solution{
//     public:
//        void printdiagram(int n)
//        {
//           for (int i = 1; i <= 2 * (n - 1); i++)
//           {
//             int count = i;
//             if(i > n)
//             {
//                 count = 2 * n - i;
//             }
//             for (int j = 1; j <= count; j++)
//             {
//                 cout << "*" << " ";
//             }
//             cout << endl;
//           }
//        }
// };

// 1
// 00
// 111
// 0000
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     void printTriangle(int n) {
//         int start = 1;
//         // Step 1: At every even number we are getting 1 at the starting
//         for(int i = 0; i < n; i++)
//         {
//             if(i % 2 == 0)
//             {
//                 start = 1;
//             }
//             else
//             {
//                 start = 0;
//             }
//             for(int j = 0; j < i; j++)
//             {
//                 cout << start;
//             }
//             cout << endl;
//         }
//     }
// };

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     void printTriangle(int n) {
//         int start = 1;
//         // Step 1: At every even number we are getting 1 at the starting
//         for(int i = 0; i < n; i++)
//         {
//             if(i % 2 == 0)
//             {
//                 start = 1;
//             }
//             else
//             {
//                 start = 0;
//             }
//             for(int j = 0; j <= i; j++)
//             {
//                 cout << start << " ";
//                 start = 1 - start;
//             }
//             cout << endl;
//         }
//     }
// };

// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
// #include <bits/stdc++.h>
// using namespace std;
// void pattern12(int N)
// {
//       // initial no. of spaces in row 1.
//       int spaces = 2*(N-1);
//       // Outer loop for the number of rows.
//       for(int i=1;i<=N;i++){
//           // for printing numbers in each row
//           for(int j=1;j<=i;j++){
//               cout<<j;
//           }
//           // for printing spaces in each row
//           for(int j = 1;j<=spaces;j++){
//               cout<<" ";
//           }
//           // for printing numbers in each row
//           for(int j=i;j>=1;j--){
//               cout<<j;
//           }
//           // As soon as the numbers for each iteration are printed, we move to the
//           // next row and give a line break otherwise all numbers
//           // would get printed in 1 line.
//           cout<<endl;
//           // After each iteration nos. increase by 2, thus
//           // spaces will decrement by 2.
//           spaces-=2;
//       }
// }

//    A
//   ABA
//  ABCBA
// ABCDCBA
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
// void printTriangle(int N)
// {
//       // Outer loop for the number of rows
//       for(int i=0; i<N; i++){
//           // for printing the spaces
//           for(int j=0;j<N-i+1;j++)
//           {
//             cout<<" ";
//           }
//           // for printing the characters
//           char ch = 'A';
//           int breakpoint = (2 * i - 1) / 2;
//           for(int j = 1; j <= 2 * i - 1; j++){

//               cout << ch;
//               if(j <= breakpoint)
//               {
//                 ch++;
//               }
//               else
//               {
//                 ch--;
//               }
//           }
//           // for printing the spaces again after characters.
//           for(int j = 0; j < N-i-1; j++){
//               cout<<" ";
//           }
//           cout<<endl;
//           }
//       }
// };

//      E
//     DED
//    CDEDC
//   BCDEDCB
//  ABCDEDCBA
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ans = 'A' + n - 1;
//     // OR //
//     char ans = 'A' + n - i; put this under for-loop of 'i' everytime it will decrement one value
//     for (int i = 1; i <= n; i++)
//     {
//         // space
//         int space = n - i + 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
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

//      E
//     EFE
//    EFGFE
//   EFGHGFE
//  EFGHIHGFE
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
//         // Here, we have ans always as same as starting because no loop elements are here neither it is decreasing nor increasing, hence it will be ans = 'E'; or whatever user give as input
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


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     void printTriangle(int n) {
//         int spaces = 2 * n - 2;
//            // or //
//         // int spaces = 2 * (n - 1);
//         // Print only 9 rows if i/p is 5 then 9 rows
//         for(int i = 1; i <= 2 * n - 1; i++)
//         {
//             int stars = i;
//             if(i > n)
//             {
//                 stars = 2 * n - i;
//             }
//             // Stars
//             for (int j = 1; j <= stars; j++)
//             {
//                 cout << "*";
//             }
//             // Spaces
//             for(int j = 1; j <= spaces; j++)
//             {
//                 cout << " ";
//             }
//             // Stars
//             for(int j = 1; j <= stars; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//             // For bottom design of stars
//             if(i < n)
//             {
//                 spaces -= 2;
//             }
//             else
//             {
//                 spaces += 2;
//             }
//         }
//     }
// };

// **********
// ****  ****
// ***    ***
// **      **
// *        *
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
//         // OR //
//         // cout << endl;
//         // space += 2;
//         // Both are correct
//     }
//     return 0;
// }


// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// #include <bits/stdc++.h>
// using namespace std;
// void pattern19(int N)
// {
//       // for the upper half of the pattern
//       // initial spaces  
//       int iniS = 0;
//       for(int i = 0; i < N; i++){
//           //for printing the stars in the row
//           for(int j = 1; j <= N - i + 1; j++){
//               cout<<"*";
//           }
//           //for printing the spaces in the row.
//           for(int j=0;j<iniS;j++){
//               cout<<" ";
//           }
//           //for printing the stars in the row.
//           for(int j = 1; j <= N - i + 1; j++){
//               cout<<"*";
//           }
//           // The spaces increase by 2 every time we hit a new row.
//           iniS+=2;

//           // As soon as the stars for each iteration are printed, we move to the
//           // next row and give a line break otherwise all stars
//           // would get printed in 1 line.
//           cout<<endl; 
//       }

//       // for lower half of the pattern
//       // initial spaces.
//       iniS = 2 * N - 2;
//       for(int i=1;i<=N;i++){

//           //for printing the stars in the row.
//           for(int j=1;j<=i;j++){
//               cout<<"*";
//           }

//           //for printing the spaces in the row.
//           for(int j=0;j<iniS;j++){
//               cout<<" ";
//           }

//           //for printing the stars in the row.
//           for(int j=i;j>=1;j--){
//           // or //
//           // for(int j = 1; j <= i; j++){ cout << "*"; }
//               cout<<"*";
//           }
//           // The spaces decrease by 2 every time we hit a new row.
//           iniS-=2;

//           // As soon as the stars for each iteration are printed, we move to the
//           // next row and give a line break otherwise all stars
//           // would get printed in 1 line.
//           cout<<endl;
//       }
// }

// ****
// *  *
// *  *
// ****
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     void printSquare(int n) {
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++)
//             {
//                 if(i == 0 || j == 0 || i == n - 1 || j == n - 1)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
// };

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     void printSquare(int n) {
//         for(int i = 0; i < 2 * n - 1; i++)
//         {
//             for(int j = 0; j < 2 * n - 1; j++)
//             {
//                 // Top from any element = i
//                 int top = i;
//                 // Left from any element = j
//                 int left = j;
//                 // From right
//                 int right = (2 * n - 1) - 1 - i;
//                 // From bottom
//                 int bottom = (2 * n - 1) - 1 - j;
//                 // Only min can accept 2 args therefore we write like this
//                 cout << (n - min(min(top, bottom), min(left, right))) << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// Left Shift Operator
// 5<<1 --> Shift 5 for one time on the left side

// Right Shift Operator
// 5>>1 --> Shift 5 for one time on the right side

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10, b = 1;
//     if(++a){
//         // This means is ++a possible? if yes then print b
//         cout<<b;
//     }
//     else
//     {
//         cout<<++b;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     if(a-- > 0 && ++b > 2){
//     // In (&&) excute both condition always
//         cout<<"Yes\n";
//     }
//     else
//     {
//         cout<<"No\n";
//     }
//     cout<<a<<" & "<<b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// int a = 1;
// int b = a++;
// int c = ++a;
// cout<<b<< " & "<<c;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// int a = 1;
// int b = 2;
// if(a-- > 0 || ++b > 2){
//     // Here b will not excute because one statment in OR is sufficient to get true
//     cout<<"Yes\n";
// }
// else
// {
//     cout<<"No\n";
// }
// cout<<a<<" & "<<b;
// cout << endl;

// int c = 3;
// cout<<(25*(++c))<<endl;
// int d = ++a;
// d = ++b;
// d = a++;
// d = ++a;
// cout << d;
// return 0;
// }

// Fibonacci Series
// Print fibonacci Series in order
// #include <iostream>
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
//         cout << Fibonacci << " ";
//         a = b;  // a mein b ka value
//         b = Fibonacci; // b mein result and then both add and give result in loop
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 15; i++)
//     {
//         cout<<i<<endl;
//         i++;
//         // Here, basically i = 0 --> i<=5 tak loop tha, first i=0 print then it get incremented by 1 so i = 1 then i++ of for loop make i = 2 print 2 then i++; will make i = 3 and in for loop i++ will make i = 4 then at last i = 5
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 15; i += 2)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }

// Solve This
// 0 & 0
// 0 & 1
// 0 & 2
// 0 & 3
// 0 & 4
// 0 & 5
// 1 & 1
// 1 & 2
// 1 & 3
// 1 & 4
// 1 & 5
// 2 & 2
// 2 & 3
// 2 & 4
// 2 & 5
// 3 & 3
// 3 & 4
// 3 & 5
// 4 & 4
// 4 & 5
// 5 & 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout<<i<<" & "<<j<<endl;
//         }
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             if (i+j == 8)
//             {
//                 continue;
//             }
//             cout<<i<<" & "<<j<<endl;
//         }
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             if (i+j == 8)
//             {
//                 continue;
//             }
//             cout<<i<<" & "<<j<<endl;
//         }
//     }
//     return 0;
// }

// Find power of any number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     cin >> a;
//     cin >> b;
//     // using long long to handle big numbers
//     long long ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << ans << endl;
//     return 0;
// }


// STL in C++
// The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc.
// The STL provides a range of containers, such as vectors, lists, and maps, as well as algorithms for searching, sorting and manipulating data.
// Some of the key components of the STL include:
// Containers: The STL provides a range of containers, such as vector, list, map, set, and stack, which can be used to store and manipulate data.
// Algorithms: The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.
// Iterators: Iterators are objects that provide a way to traverse the elements of a container. The STL provides a range of iterators, such as forward_iterator, reverse_iterator, bidirectional_iterator and random_access_iterator, that can be used with different types of containers.
// Function Objects: Function objects, also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm, allowing you to customize its behavior.
// Fpr ex -> Functors are widely used in STL algorithms like:
// std::sort()
// std::for_each()
// std::transform()
// std::priority_queue
// std::map


// Example
// #include <iostream>
// #include <queue>

// int main() {
//     std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-heap

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);

//     while (!pq.empty()) {
//         std::cout << pq.top() << " "; // Output: 10 20 30
//         pq.pop();
//     }
// }

// Adapters: Adapters are components that modify the behavior of other components in the STL. For example, the reverse_iterator adapter can be used to reverse the order of elements in a container.

// #include <bits/stdc++.h>
// using namespace std;
// namespace Harry{
//     int a = 10;
//     // We cannot use std in this scope
//     std::cout << a << std::endl;
//     int getValue()
//     { 
//         return a * 10; 
//     }
// }
// int main()
// {
//     int a = 11;
//     std::cout << a << std::endl;
//     cout << a << endl;
//     std::cout << Harry::a << std::endl;
//     std::cout << Harry::getValue() << std::endl;
//     Harry::a = 20;
//     std::cout << Harry::a << std::endl;
// }

// Defining Array in STL
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int, 5> arr;
//     arr.begin();
//     // vector<int> arr1[10];
//     array<int, 5> a;
//     // will not work for array declared by STL
//     // a.push_back(20); (Arrays will not increase or insert elements in rows as they are not dynamic across rows they are dynamic across columns only)  
//     // Arrays or 1-D vectors are dynamic across columns not rows, means rows cannot be increased. once it has been defined while creating the array
//     // arr1[0].push_back(10);
//     // arr1[1].push_back(20);
//     // But this can be used to insert elements in an array but only till the amount of rows that have been already defined while creating the array not afterwards declaring it (and to do that this is the right/correct method not the one with push_back)
//     // arr.at(0) = 5;
//     // arr.at(1) = 10;
//     // arr.at(2) = 15;
//     // arr.at(3) = 20;
//     // arr.at(4) = 25;
//     for (auto it = arr.begin(); it != arr.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     // Whereas, 2-D arrays and 2-D vectors are dynamic across rows and columns both
//     // 2-D array (using STL it is not different from basic 2-D array approach)
//     // int arr[5][5];
//     // arr[0][0] = 10; 
//     // arr[0][1] = 20; 
//     // vector<vector<int>> vec4(10, vector<int>(20, 10));
//     // vec4.push_back(vector<int>(20, 5));
//     // vec4[2].push_back(5);

//     // 2-D vector
//     // vector<vector<int>> vec(10, vector<int>(20, 10));
//     // Traversing 2-D vector
//     // for (auto it : vec)
//     // {
//     //     for (auto it : vec)
//     //     {
//     //         cout<< it << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // OR //
//     // for (int i = 0; i < vec.size(); i++)
//     // {
//     //     for (int j = 0; j < vec[i].size(); j++)
//     //     {
//     //         cout << vec[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
    
//     // 3-D vector
//     // vector<vector<vector<int>>> vec(10, vector<vector<int>>(20, vector<int>(20, 10)));
//     return 0;
// }

// Sets
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         s.insert(x);
//         *s.begin();  
//         *s.begin() + 1;  
//         *s.begin() + 2;  
//         *s.begin() + 3;  
//         *s.begin() + 4;
//         // It is used to insert an element in the set
//         s.emplace(10);
//         s.erase(s.begin());
//         // Will erase elements
//         *s.begin(), *s.begin() + 2;  
//     }
//     return 0;
// }

// Traversing in set
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // for (int i = 1; i <= n; i++)
//     // {
//         // int x;
//         // cin >> x;
//         // set<int> s;
//         // s.insert(x);
//         // For printing the first element of the set which is the minimum element as in set we have the element organized in ascending order
//         // s.begin();
//         // If we write this code we can traverse in a set from the starting iterator to the next to next and so on index one by one
//         // *s.begin() + 1;
//         // *s.begin() + 2;
//         // *s.begin() + 3;
//         // *s.begin() + 4;
//         // Traversing in a set by some different method i.e using iterator
//         // for (auto it = s.begin(); it != s.end(); it++)
//         // {
//         //     cout << *it << endl;
//         // }
//         // Other method to traverse in set
//         // for(auto it : s)
//         // {
//         //     cout << it << endl;
//         // }   
        
//         // Delete Set
//         // s.erase(s.begin(), s.end());
//         // for(auto it : s)
//         // {
//         //     cout << it << endl;
//         // }   

//         // Unordered Set
//         // It can store elements in any order
//         // If your question doesn't tell you to store elements in ascending order in a set then always use unordered set if possible as it's T.C -> O(1) which is more optimized than normal set 
//         // But it's worst case is linear in nature
//         // If in Competitve programming using unordered set gives you TLE then switch to normal set
//         // unordered_set<int> s1;
//         // s1.insert(2);
//         // s1.insert(1);
//         // s1.insert(4);
//         // s1.insert(5);
//         // for(auto it : s1)
//         // {
//         //     cout << it << endl;
//         // }

//         // Multi - Set
//         // In this set we can insert repeated values again and again (not needed to be unique) but always provides the result in sorted or in ascending order (elements can be inserted in any order but results will be generated in sorted order always)
//         multiset<int> ms;
//         ms.insert(1);
//         ms.insert(3);
//         ms.insert(1);
//         ms.insert(2);
//         ms.insert(4);
//         ms.insert(5);
//         ms.insert(6);
//         ms.insert(7);
//         // Erase
//         // ms.erase(ms.begin(), ms.end());
//         // // Traversing
//         for(auto it : ms)
//         {
//             cout << it << endl;
//         }
//         // for (auto it = ms.begin(); it != ms.end(); it++)
//         // {
//         //     cout << *it << endl;
//         // }
//         // Find
//         // Will print the index of first occurence of 2 
//         // ms.find(2);
//         // Find can be used for any sets to find the specified element (i.e in the bracket)
//         // s.find(5);
//     }   
// // }

// Map
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<string, int> m;
//     // map only stores unique keys assigned to values
//     m["raj"] = 1;
//     m["ram"] = 2;
//     m["ranbir"] = 3;
//     m["ranvir"] = 4;
//     m["raghu"] = 5;
//     // Erase 
//     m.erase(m.begin());
//     m.erase(m.end());
//     m.clear();
//     // m.erase(m.begin(), m.begin()+2);
//     // Traversing in map
//     for (auto it : m)
//     {
//         cout << it.first << "&" << it.second << endl;
//     }
//     // Other method of traversing in map
//     for (auto it = m.begin(); it != m.end(); it++)
//     {
//         cout << it->first << "&" << it->second << endl;
//     }

//     // Unoredered map
//     // O(1) is in almost every case
//     // O(n) in the worst case T.C
//     // It has no order for storage means no need of any order to be followed
//     unordered_map<string, int> um;
//     // rest all function or methods are same
//     return 0;
// }

// Pair
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int, int> p;
//     pair<pair<int, int>, int> p1;
//     pair<pair<int, int>, pair<int, int>> p2 = {{1, 2}, {3, 4}};
//     // To access the second element of first element of pair
//     cout << p2.first.second << endl;
//     cout << p2.first.first << endl;
//     // Pairs can be either set, vector and map

//     // Multi-map
//     multimap<string, int> mpp;
//     mpp.emplace("raj", 1);
//     mpp.emplace("rohan", 2);
//     mpp.emplace("ram", 3);
//     mpp.emplace("rahul", 4);
//     mpp.emplace("raghav", 5);
//     // Multimap works similarly like multi-sets, it consider same keys with same values multiple times and always provide output in sorted order no matter what order is used to insert the elements in it.
//     multimap<string, int> multi;
//     multi.emplace("key1", 1);
//     multi.emplace("key1", 1);
//     multi.emplace("key4", 4);
//     multi.emplace("key2", 2);
//     for (auto it : multi)
//     {
//       cout << it.first << endl;
//       cout << it.second << endl; 
//     }
//     return 0;
// }

// Stack
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     // It follows LIFO
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     cout << s.top() << endl;
//     s.pop();
//     cout << s.top() << endl;
//     s.pop();
//     cout << s.top() << endl;
//     s.pop();
//     cout << s.top() << endl;
//     s.pop();
//     cout << s.top() << endl;
//     cout << s.size() << endl;
//     // Delete all element from stack
//     while (!s.empty())
//     {
//         s.pop();
//     }
//     return 0;
// }

// Queues
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int> q;
//     // It follows FIFO
//     // It is O(1)
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     // To print element in queue
//     cout << q.front() << endl; // 1 will be printed
//     // To delete all elements from queue the T.C is linear time
//     while (!q.empty())
//     {
//         q.pop();
//     }
//     return 0;
// }

// Priority Queue
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // priority_queue<int> pq;
//     // // It has all element in sorted order
//     // // It's T.C for all operations is O(log n)
//     // pq.push(1);
//     // pq.push(2);
//     // pq.push(3);
//     // pq.push(4);
//     // pq.push(5);
//     // cout << pq.top() << endl;
//     // // It will print the max. valued element at the result
//     // pq.pop();
//     // cout << pq.top() << endl;

//     // priority_queue<pair<int, int>> pq;
//     // pq.push(5);
//     // pq.push(10);
//     // pq.push(15);
//     // pq.push(20);
//     // pq.push(25);

//     // To print priority queue in opposite order
//     // 1) Use negative values 
//     // priority_queue<int> pq1;
//     // pq1.push(-1);
//     // pq1.push(-2);
//     // pq1.push(-3);
//     // pq1.push(-4);
//     // pq1.push(-5);

//     // 2) Use <greater> syntax in pq
//     priority_queue<int, vector<int>, greater<int>> pq2;
//     pq2.push(5);
//     pq2.push(10);
//     pq2.push(15);
//     pq2.push(20);
//     pq2.push(25);
//     cout << pq2.top() << endl;
//     pq2.pop();
//     cout << pq2.top() << endl;
//     pq2.pop();
//     cout << pq2.top() << endl;
//     pq2.pop();
//     cout << pq2.top() << endl;
//     pq2.pop();
//     cout << pq2.top() << endl;    
//     return 0;
// }

// DeQueue
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int> dq;
//     dq.push_back(5);
//     dq.push_back(10);
//     dq.push_back(15);
//     dq.push_back(20);
//     dq.push_back(25);
//     // Printing elements from dequeue
//     cout << dq.front() << endl;
//     dq.push_front(30);
//     dq.pop_front();
//     dq.size();
//     dq.clear();
//     dq.at(1);
//     // deque::begin() returns an iterator which is referencing to the first element of the deque
//     dq.begin();
//     // The deque::rbegin() is an inbuilt function in C++ STL which returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning)
//     dq.rbegin();
//     // deque::end() returns an iterator which is referencing next to the last element of the deque container (i.e n - 1)
//     dq.end();
//     // The deque::rend() is an inbuilt function in C++ STL which returns a reverse iterator which points to the position before the beginning of the deque (which is considered its reverse end)
//     dq.rend();
//     return 0;
// }

// #include <bits/stdc++.h> 
// using namespace std; 
// int main() 
// { 
//     deque<int> dq = { 10, 20, 30, 40, 50 }; 
//     cout << "The deque in reverse order: "; 
//     // prints the elements in reverse order 
//     for (auto it = dq.rbegin(); it != dq.rend(); ++it) 
//         cout << *it << " "; 
//     return 0; 
// } 

// Lists
// It's remove and all operations are of T.C -> O(1)
// front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list.
// push_front() – Adds a new element ‘g’ at the beginning of the list.
// push_back() – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// insert() – Inserts new elements in the list before the element at a specified position.
// size() – Returns the number of elements in the list.
// begin() – begin() function returns an iterator pointing to the first element of the list.
// end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l;
//     l.push_back(5);
//     l.push_front(5);
//     l.push_back(10);
//     l.push_back(15);
//     l.push_back(20);
//     l.push_back(25);
//     // Printing elements from list
//     cout << l.front() << endl;
//     l.pop_back();
//     l.pop_front();
//     cout << l.front() << endl;
//     l.size();
//     l.clear();
//     l.at(1);
//     l.begin();
//     l.rbegin();
//     l.end();
//     l.rend();
//     return 0;
// }


// Given N elements, print all elements in sorted order
// n = 6, elements are 6, 6, 3, 2, 3, 5
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     multiset<int> ms;
//     int n; 
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int x; 
//         cin >> x;
//         ms.insert(x);
//     }
//     // Printing in sorted order
//     for(auto it : ms)
//     {
//         cout << it << endl;
//     }
//     return 0;
// }

// BitSet
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // BitSet
//     // A container which is like a datatype but not a datatype actually, it only accepts either 0 or 1 in itself, we know int takes 16 bits wherease char takes 8 bits
//     // so using bitset tends to take up 1 bit which is 8 times smaller than normal int datatype
//     bitset<10> bt;
//     cin >> bt;
//     // We take bitset which will create a array kind of ds and it is starting from 0 and ending at 9 (i.e n - 1)
//     bitset<1> b;
//     cin >> b;
//     // It is like array from (0 -> n - 1 i.e 0)

//     // Functions of bitset
//     // It returns true or false in o/p
//     // For ex if bitset<5> bt contains 101110 then false, if 11111 then true, if 10111 then also false, if 00000 false
//     cout << bt.all();

//     cout << bt.any();
//     // This will print true if we have atleast one 1 only until we have all 0's
//     // For ex -> 100000 (true), 000001 (true), 00000(false), 00010(true)

//     cout << bt.count();
//     // This will print the number of bits in the bit set container

//     bt.flip(2);
//     // This will flip the bit from 0 -> 1 or vice-versa at the given index mentioned in parenthesis
//     // For ex -> 10011 -> 10111

//     cout << bt.none();
//     // It means that it is checking that bt is set to none or not if bt has all 00000 then it is none so it will return true else even one single one is present will return false
//     // For ex-> 10000 (false), 00000 (true)

//     // set 
//     bt.set();
//     // It will make the whole bt filled with 11111

//     bt.set(2);
//     // It will set the second index as 1 means 10011 -> 10111

//     bt.set(2, 0);
//     // It will turn the second index as 0 means 10111 -> 10011

//     bt.reset();
//     // It will turn all the index as 0

//     bt.reset(2);
//     // It will set the second index as 0

//     // bt.reset(2, 0);
//     // It is not possible

//     bt.test(1);
//     // Therefore, bt.test(1) will return false if the bit at position 1 is 0, and true if it is 1
//     // It will test whether the index 1 is set with a 1 bit or not and if 1 then true else false in 0 case
//     return 0;
// }

// Sorting
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // If the interviewer asks for writing the full sorting technique then show them insertion sort code, bubble sort, selection sort or some other sorting technique
//     // For normal array 
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // Use in-built sorting method
//     sort(arr, arr + n);
//     // For vector
//     vector<int> v(5, 0);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     return 0;
// }

// Sorting in an array from 1st index to 3rd index of the srray [1, 4) this "[" means include whereas, ")" doesn't include i.e exclude basically
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr + 1, arr + 4);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     // Declaring a vector
//     vector<int> vec(5, 0);
//     // Loop for inserting elements inside the vector
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cin >> vec[i];
//     }
//     // We have to sort it [1, 4)
//     // This sort technique usually starts from 0th index and ends at end - 1 that's why we end it at vec.begin() + 4 i.e at 3rd index
//     sort(vec.begin() + 1, vec.begin() + 4);
//     // Both have same meaning
//     // sort(vec.begin() + 1, vec.end() - 1);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << endl;
//     }
//     return 0;
// }

// Reverse in vector & array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     // For vectors
//     vector<int> vec(5, 0);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cin >> vec[i];   
//     }
//     reverse(vec.begin(), vec.end());
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << endl;
//     }
//     // For reversing only from 1st to 3rd index [1, 4)
//     reverse(vec.begin() + 1, vec.end() - 1);
//     // reverse(vec.begin() + 1, vec.begin() + 4);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << endl;
//     }
//     return 0;
// }

// Find max. elements in any index range
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // int *arr = new int[n];
//     // We create a variable that will contain the INT_MIN (min. value that is made by C++) and the elements from the array who is greater than INT_MIN will replace it everytime
//     // int maxi = INT_MIN;
//     // int mini = INT_MAX;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arr[i];
//     //     if (arr[i] > maxi)
//     //     {
//     //         maxi = arr[i];
//     //     }
//     //     if (arr[i] < mini)
//     //     {
//     //         mini = arr[i];
//     //     }
//     // }
//     // cout << "The max. element from the array : " << maxi << endl;
//     // cout << "The min. element from the array : " << mini << endl;

//     // // Optimized version of the above code
//     // maxi = *max_element(arr, arr + n);
//     // cout << "The optimized max. element of the array : " << maxi << endl;
//     // int mini = *min_element(arr, arr + n);
//     // cout << "The optimized min. element of the array : "<< mini << endl;

//     // // Same for vectors
//     // vector<int> vec(5, 0);
//     // for (int i = 0; i < vec.size(); i++)
//     // {
//     //     cin >> vec[i];
//     // }
//     // int maxivector = *max_element(vec.begin(), vec.end());
//     // int minivector = *min_element(vec.begin(), vec.end());
//     // std::cout << maxivector << endl;
//     // std::cout << minivector << endl;


//     // Sum each element of array with a value 
//     int n = 5;
//     int *arr = new int[15, 10, 2, 14, 1];
//     int sum = 5;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     std::cout << sum;
//     // 2nd method is using accumulate in - built method
//     int ans = accumulate(arr, arr+n, 5);
//     std::cout << ans << endl;
//     // Same for vector we can use accumulate
//     vector<int> v(5, 0);
//     int ansvector = accumulate(v.begin(), v.end(), 5);
//     std::cout << ansvector << endl;
//     return 0;
// }

// Find Largest and smallest element from the array?
// #include <bits/stdc++.h>
 
// using namespace std;
// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }
// int findSmallestElement(int arr[], int n)
// {
//     int mini = arr[n - 1];
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] < mini)
//         {
//             mini = arr[i];
//         }
//     }
//     return mini;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int mini = findSmallestElement(arr1, n);
//   cout << "The smallest element in the array is: " << mini<<endl;
//   return 0;
// }

// 2nd approach
// #include<bits/stdc++.h>
// using namespace std;
 
// int sortArr(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }
 
// int main() {
//     vector<int> arr1 = {2,5,1,3,0};
//     vector<int> arr2 = {8,10,5,7,9};
   
//     cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
//     cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int findMinUsingSort(vector<int>& arr) {
//   // Sort the vector in ascending order
//   sort(arr.begin(), arr.end());

//   // The first element after sorting will be the minimum
//   return arr[0];
// }

// int main() {
//   vector<int> arr1 = {2, 5, 1, 3, 0};
//   vector<int> arr2 = {8, 10, 5, 7, 9};

//   cout << "The Minimum element in arr1 using sort: " << findMinUsingSort(arr1) << endl;
//   cout << "The Minimum element in arr2 using sort: " << findMinUsingSort(arr2) << endl;

//   return 0;
// }


// Check whether the array is sorted or not?
// #include <bits/stdc++.h> 
// using namespace std;
// bool isSorted(int arr[], int size)
// {
//     for(int i = 0; i < size; i++)
//     {
//         for(int j = i + 1; j < size; j++)
//         {
//             if(arr[i] > arr[j])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
    
    
//     // More optimized (Approach)
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i] < arr[i - 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int size = 5;
//     int arr[size] = {1, 4, 5, 7, 88};
//     if(isSorted(arr, size))
//     {
//         cout << "The array is sorted";
//     }
//     else
//     {
//         cout << "The array is not sorted";
//     }
// }

// Shift first element to the last
// #include <bits/stdc++.h>
// using namespace std;
// void solve(int arr[], int n) {
//     // Brute force Method
//     int temp[n];
//     // for(int i = 0; i < n - 1; i++)
//     for(int i = 1; i < n; i++)
//     {
//         // temp[i] = arr[i + 1];
//         // OR //
//         temp[i - 1] = arr[i];
//     }
//     temp[n - 1] = arr[0];
//     for(int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }


// void solve(int arr[], int n) {
//     int temp = arr[0];
//     for(int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//   int n = 5;
//   int arr[n]= {1,2,3,4,5};
//   solve(arr, n);
// }

// Find max. number of consecutive one's in an array?
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int findMaxConsecutiveOnes(vector<int> & nums) {
//       int cnt = 0;
//       int maxi = 0;
//       // Iterate through the vector
//       for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == 1) {
//           cnt++; // Increment count of consecutive 1's
//         } else {
//           cnt = 0; // Reset count if current element is 0
//         }
//         maxi = max(maxi, cnt); // Update maximum count
//       }
//       return maxi; // Return the maximum number of consecutive 1's
//     }
// };

// int main() {
//   vector<int> nums = {1, 1, 0, 1, 1, 1};
//   Solution obj;
//   int ans = obj.findMaxConsecutiveOnes(nums);
//   cout << "The maximum consecutive 1's are " << ans;
//   return 0;
// }

// Calculate no. of times element occured in a data structure
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int key = 1;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             count++;
//         }
//     }
//     cout << "Key is present in the data structure for : " << count << " times"<< endl;
//     // Shortcut for finding the occurence of an element in an array or vector
//     auto cnt1 = count(arr, arr + n, 1);
//     // cout << "Key is present in the data structure for : " << cnt1 << " times"<< endl;
//     vector<int> vec(5, 0);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cin >> vec[i];
//     }
//     auto cnt2 = count(vec.begin(), vec.end(), 1);
//     // cout << "Key is present in the data structure for : " << cnt2 << " times"<< endl;
//     return 0;
// }
 
// If we have an array arr[] = {1, 2, 5, 1, 2, 4, 4};
// We have to find the first occurence of 2
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     int index = -1;
//     int *arr = new int[1, 2, 5, 1, 2, 4, 4];
//     int x = 2;
//     // In starting point the index at -1 because we have to find at which index 2 occured for the first time
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             // Pointed the index at the location where we got 2 for the first time and then break the loop
//             index = i;
//             break;
//         }
//     }
//     cout << index << endl;


//     // Another optimized method to do the same thing
//     auto findelement = find(arr, arr + n, 2);

//     // To get any element current address we have to substract iterator se begin() of array ka address
//     int findindexusingiterator = findelement - arr;
//     cout << findindexusingiterator << endl;

//     // Same for vector we have to write vce.begin() because in array the name of array is the first index only
//     vector<int> vec(5, 0);
//     auto findindex = find(vec.begin(), vec.end(), 2);
//     int findindexinvector = findindex - vec.begin();
//     cout << findindexinvector << endl;
//     // It means that we are finding element first occurence index in the array and then equating it with end of the vector if both are equal then in that case it means we are at the end and the element is not present in the array
//     // auto findindex = find(vec.begin(), vec.end(), 4);
//     if (findindex == vec.end())
//     {
//         cout << "element is not present";
//     }
//     else
//     {
//         // Else element is present in array and its first occurence can be calculated by substracting the current index(position) with first element
//         cout << "Element is first present at : " << findindex - vec.begin() << endl;
//     }
//     // This will return you the current address of the iterator jaha pe bhi ho
//     // auto itr = find(arr, arr + n, 2); is doing the same thing
//     return 0;
// }


// Binary Search
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     int index = -1;
//     int *arr = new int[1, 2, 5, 1, 2, 4, 4];
//     // In starting point the index at -1 because we have to find at which index 2 occured for the first time
//     vector<int> vec(5, 0);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cin >> vec[i];
//     }
//     int result = binary_search(arr, arr + n, 2);
//     // T.C -> O(log n) which is more optimized
//     int result2 = binary_search(vec.begin(), vec.end(), 2);
//     cout << result << endl;
//     cout << result2 << endl;

//     // Lower bound function has binary search in it
//     // LOWER BOUND FUNCTION -> It returns an iterator pointing at the first occurence of the key element which is not less than key
//     // So, array[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
//     // If key = 10 then the itr will be pointing at 10 at 5th index
//     // Here if key = 6 then in that case itr will be pointing at 2nd index i.e at 7
//     // If key = 13 then itr will be pointing at end i.e arr.end();
//     int key  = 10;
//     auto itr = lower_bound(arr, arr + n, key);
//     // This will find the current index where the first occurence of the element i.e fullfiling the condition and is > than key
//     int index = itr - arr;
//     cout << index << endl;


//     auto itr2 = lower_bound(vec.begin(), vec.end(), key);
//     // This will find the current index where the first occurence of the element i.e fullfiling the condition and is > than key
//     int vecindex = itr2 - vec.begin();
//     cout << vecindex << endl;


//     // UPPER BOUND FUNCTION
//     // It return an itr which point to an element which is just greater than key
//     // arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
//     // If x = 7, then itr will be pointing at 4th index i.e 8
//     // If x = 6, then itr will be pointing at 2nd index i.e 7
//     // If x = 12 then itr will be pointing at the end after the end or just greater than arr (i.e arr.end())
//     auto it = upper_bound(arr, arr + n, key);
//     int index = it - arr;
//     cout << index << endl;

//     vector<int> vec2(5, 0);
//     for (int i = 0; i < vec2.size(); i++)
//     {
//         cin >> vec2[i];
//     }
//     auto itr3 = upper_bound(vec2.begin(), vec2.end(), key);
//     int vecindex = itr3 - vec2.begin();
//     cout << vecindex << endl;
//     return 0;
// }

// Find the first index where the element occured first time in sorted given array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     int key = 2;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // vector<int> vec(5, 0);
//     // for (int i = 0; i < vec.size(); i++)
//     // {
//     //     cin >> vec[i];
//     // }
//     // auto indexarr = lower_bound(arr, arr + n, key);
//     // int currentindexofarray = indexarr - arr;
//     // cout << currentindexofarray << endl;

//     // auto indexvec = lower_bound(vec.begin(), vec.end(), key);
//     // int currentindexofvector = indexvec - vec.begin();
//     // cout << currentindexofvector << endl;

//     if(binary_search(arr, arr + n, key))
//     {
//         cout << "Found at : " << lower_bound(arr, arr + n, key) - arr << endl;
//     }
//     else
//     {
//         cout << "Does not exist" << endl;
//     }

//     // 2nd way
//     // For Binary Search
//     int index = lower_bound(arr, arr + n, key) - arr;
//     if (index != n && arr[index] == key)
//     {
//         cout << "Found at : " << index << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
//     return 0;
// }
 
// Find the last occurence of key element in an array
// arr[] = {1, 5, 7, 7, 8, 11, 15, 20}
// so, here if key = 7 then the last occurence of key will be at 3rd index which we can get by upper_bound = 8(i.e 4th index) - 1 = 8(at 4th index) - 1 = 7(3rd index);
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     int key = 7;
//     // This will return current index
//     int index = upper_bound(arr, arr + n, key) - arr; // 4th index = 8
//     index -= 1; // 3rd index = 7
//     if (arr[index] == key && index >= 0)
//     {
//         std::cout << "Exist at : " << index << endl;
//     }
//     else
//     {
//         std::cout << "Does not exists" << endl;
//     }
//     // Now, whatever value we are at currently we will substract -1 from it 
//     // But, if arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} & we are at 7 then the upper_bound will pointing at 8
//     // Then if we substract -1 from the index we will get to 7 (of 3rd index)
//     cout << "Last occurence : " << index << endl;
//     return 0;
// }

// Tell the amount of times an key element exist in the array or in a vector
// arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}; if x = 7 then it should return 2 times and for that we have to substract upperbound - lowerbound = 8(at 4th index) - 7(at 2nd index) = 2 times 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 11;
//     int key = 6;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int upperbound = upper_bound(arr, arr + n, key) - arr;
//     int lowerbound = lower_bound(arr, arr + n, key) - arr;
//     int occurence_of_an_element = upperbound - lowerbound;
//     // arr[upperbound] is indeed incorrect because upper_bound returns the index just past the last occurrence of the key. As such, accessing arr[upperbound] in that condition is not meaningful and might cause out-of-bounds access if the key is the largest element in the array.
//     // if (upperbound >= 0 && lowerbound >= 0 && arr[upperbound] == key && arr[lowerbound] == key)
//     if(occurrence_of_an_element > 0)
//     {
//         cout << occurence_of_an_element << endl; 
//     }
//     else
//     {
//         cout << "Does not exist" << endl;
//     }
//     return 0;
// }

// Next Permutation
// Suppose we have a string s = "abc";
// Permutations can be abc, acb, bac, bca, cab, cba
// All permutations are in sorted order like first we check taking a into consideration, then b and then c
// String s2 = "bca";
// bool result = next_permutation(s.begin(), s.end());
// It will return true because we have next permutation left for abc after bca
// String s3 = "cba"
// Then on bool result = next_permutation(s.begin(), s.end()) will return false as there is no such other permuatation left after cba
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1 = "abc";
//     // T.C -> O(n)
//     bool next_permutationofstring = next_permutation(s1.begin(), s1.end());
//     int next_permutationofstringinbool = next_permutation(s1.begin(), s1.end());
//     // This will return 0 or 1
//     cout << next_permutationofstring << endl; 
//     // This will return 0 or 1
//     cout << next_permutationofstringinbool << endl;
//     bool prevpermutation = prev_permutation(s1.begin(), s1.end());
//     cout << prevpermutation << endl;
//     int prevpermutationonint = prev_permutation(s1.begin(), s1.end());
//     cout << prevpermutationonint << endl;

//     // Q) If we have any random string s2 = "bca";
//     // Then how to print all the permuations (T.C -> O(n log n))
//     // For this we will use sort for sorting the string into abc format then use do while loop until it prints all of the permutations of the string using next_permutation(s2.begin(), s2.end());
//     string s2 = "bca";
//     sort(s2.begin(), s2.end());
//     do
//     {
//         cout << s2 << endl;
//     } while (next_permutation(s2.begin(), s2.end()));
//     // For traversing in array
//     int arr[] = {1, 5, 8, 15};
//     int n = 4;
//     sort(arr, arr + n);
//     do
//     {
//         for (int i = 0; i < n; i++)
//         {    
//             cout << arr[i] << endl;
//         }
//         cout << endl;
//     } while (next_permutation(arr, arr + n));
//     return 0;
// }
 
// Previous Permutation
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[] = {1, 6, 5, 8, 10};
//     sort(arr, arr + n);
//     bool result = prev_permutation(arr, arr + n);
//     cout << result << endl;
//     return 0;
// }

// COMPARATOR
// In comparator we have basically pair<int, int> p[] = {{1, 2}, {2, 4}, {3, 6}, {4, 8}};
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     pair<int, int> p;
//     pair<int, int> p2;
//     if (p.first < p2.first)
//     {
//         return true;
//     }
//     if (p.first == p2.first)
//     {
//         if (p.second > p2.second)
//         {
//             return true;
//         }
//     }
//     else
//     {
//         return false;
//     }
//     return 0;
// }

// Sort an array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // Ascending order
//     sort(arr, arr + n);
//     // Descending order
//     // sort(arr, arr + n, greater<int>());
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// Anagrams
// #include <bits/stdc++.h>
// using namespace std;
// bool checkAnagram(string &s1, string &s2)
// {
//     // Base case
//     if(s1.size() != s2.size())
//     {
//         return 0;
//     }
//     else
//     {
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         return s1 == s2;
//     }
// }
// int main() {
//     string s1 = "listen";
//     string s2 = "silent";
//     cout << checkAnagram(s1, s2);
//     return 0;
// }

// Panagram (Check string is panagram or not)
// #include <bits/stdc++.h>
// using namespace std;

// bool checkPangram(string &s) {

//   	for(char ch = 'a'; ch <= 'z'; ch++) {
//     	bool found = false;
        
//         for(int i = 0; i < s.length(); i++) {
//         	if(ch == tolower(s[i])) {
//             	found = true;
//                 break;
//             }
//         }
      
//         if(found == false)
//             return false;
//     }
//     return true;
// }

// int main() {

//     string s = "The quick brown fox jumps over the lazy dog";
//     if (checkPangram(s) == true)
//         cout << "true";  
//     else
//         cout << "false";  
//     return 0;
// }

// Number of Digits
// He stuck to a problem in which he has given a long integer ‘X’ and had to count the number of digits in it?
// Input: 'X' = 2
// Output: 1
// As only one digit is ‘2’ present in ‘X’ so answer is ‘1’
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

// 2nd Method of counting / finding number of digits 
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

// Reverse of a number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int lastdigit = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         lastdigit = n % 10;
//         n = n / 10;
//         ans = (ans * 10) + last_digit;
//     }
//     cout << ans << endl;
//     return 0;
// }


// Find diff. b/w sum & pro. of the number you provided
// #include <iostream>
// using namespace std;
// int solve(int num){
//     int product = 1;
//     int sum = 0;
//     while (num != 0)
//     {
//         // We are calculating remainder to multiply and sum them with there remaining numbers from the end to the start one by one i.e storing sum in sum = sum + remainder and product in pro = pro * remainder
//         // But if we do that without loop then it will happen only for the last element once, so for each and every element we have to use while loop and put some condition until it gets proved right the loop will stop
//         int remainder = num % 10;  // 234 = 4 then 3 then 2
//         product = product * remainder;  // 1*2 = 2 then this 2 will multiply with 3 then 2*3 = 6 will multiply with 4 and 4*6 = 24
//         sum = sum + remainder; // 2+0 = 2 then this 2 will added with 3 = 5 and then 5 will be added with 4 = 9
//         num = num / 10; // 234/10 = 23
//     }
//     // Difference b/w sum and product
//     int Total = product - sum;  // 26-9 = 15
//     return Total;
// }
// int main()
// {
//     int num;
//     cin >> num;
//     // solve(num);
//     cout<<"The diff. is : "<<solve(num)<<endl;
//     return 0;
// }

// Digit to Binary
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     float ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         // For its Binary value
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;     // reverse order, we can use this also
//         // ans = (ans * 10) + binary;       // same order and will be used in most digit questions

//         // Shifting for next character
//         n = n >> 1;
//         i++;
//     }
//     cout << "Answer is : " << ans << endl;
//     // cout << "Answer is : " << anss << endl;
//     // return 0;
// }

// Binary to Digit
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
//         // OR //
//         int digit = num & 1;
//         if (digit == 1)
//         {
//             ans = ans + pow(2, i);
//         }
//         num = num / 10;
//         // OR //
//         num = num >> 1;
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// Find same flow of any number
// ans = (digit * pow(10,i)) + ans;  This will work to find same flow of any number and it will help in finding binary numbers also
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
//         int digit = num % 10;
//         if ((ans > INT32_MAX/10) || (ans < INT32_MIN/10)){
//             return 0;
//         }
//         ans = (digit * pow(10, i)) + ans;        // we already have a digit and we want to reverse it so that's why we are using this method
//         num = num/10;
//         i++;
//     }
//     cout<<ans<<endl;
// }

// Find reverse flow of any number
// ans = (ans * 10) + digit; This will work in reverse as well as finding binary
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int ans = 0;
//     while (num != 0)
//     {
//        int digit = num % 10;
//        // if ((ans > INT32_MAX/10) || (ans < INT32_MIN/10)){
//        //     return 0;
//        // }
//        ans = (ans * 10) + digit;        // we already have a digit and we want to reverse it so that's why we are using this method
//        num = num/10;
//     }
//     cout<<ans<<endl;
// }

// Armstrong number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int count = 0;
//     int last_digit = 0;
//     // We will compare this value with the ans
//     int originalnumber = n;
//     // This is for checking what is the count of the digits in the given number
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
//         cout << "Yes it is an armstrong number" << endl;
//     }
//     else
//     {
//         cout << "No, it is not an armstrong number" << endl;
//     }
//     return 0;
// }

// Print all divisors (T.C -> O(N))
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
// But we don't want O(sqrt(N)) time complexity so in optimized way 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     vector<int> vec;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         // 1st case
//         if (n % i == 0)
//         {
//             vec.push_back(i);
//             cout << i << " ";
//             if ((n/i) != i)
//             {
//                 vec.push_back(n/i);
//                 cout << n/i << " ";
//             }
//         }
//     }
//     sort(vec.begin(), vec.end());
//     for(auto it : vec)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }


// Reversing the number but less optimized way and finding whether it is palindrome or not
// #include <stdio.h>
// #include <stdlib.h>

// int isPalindrome(int num)
// {
//     int ans = 0;
//     int originalNumber = num;

//     // Let's reverse the number
//     while (num != 0)
//     {
//         int digit = num % 10;
//         // reverse flow
//         ans = (ans * 10) + digit;
//         num = num / 10;
//     }
//     cout<"The reversed number is : "<<ans;
//     if (originalNumber == ans)
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
//     int number;
//     cout<<"Enter a number to check whether it is a palindrome or not : "<<endl;
//     cin >> number;
//     // Your task is to implement this function
//     if (isPalindrome(number))
//     {
//         cout<<"This number is a palindrome\n";
//     }
//     else
//     {
//         cout<<"This number is not a palindrome\n";
//     }
//     return 0;
// }

// Find GCD (T.C -> O(min(m, n)))
// #include <bits/stdc++.h>
// using namespace std;
// int findGCDothermethod(int a, int b)
// {
//     int result = min(a, b); 
//     for (int i = 1; i <= result; i++) { 
//         if (a % result == 0 && b % result == 0) { 
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
// 
//     // WRONG METHOD for 0 case
//     cout << findGCDothermethod(a, b) << endl;
//     return 0;
// }

// Find GCD(using ecluid's algorithm) (T.C -> O(log fie(min(m, n))))
// #include <bits/stdc++.h>
// using namespace std;
// int findGCD(int n, int m)
// {
//     // Base case
//     int gcd = 0;
//     if(m == 0)
//     {
//         return n;
//     }
//     if (n == 0)
//     {
//         return m;
//     }
//     else
//     {  
//         return findGCD(m, n % m);
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n, m;
//     cout << findGCD(n, m) << endl;
//     return 0;
// }

// 3rd Method to FindGCD
// C++ program to find GCD 
// of two numbers 
// #include <iostream> 
// using namespace std; 
// int gcd(int a, int b) 
// { 
// 	// Everything divides 0 
// 	if (a == 0) 
// 		return b; 
// 	if (b == 0) 
// 		return a; 

// 	// Base case 
// 	if (a == b) 
// 		return a; 
//      // OR //
//      return b;

// 	// a is greater 
// 	if (a > b) 
// 		return gcd(a - b, b); 
//     else
//     {
//         return gcd(a, b - a); 
//     }
// } 
// int main() 
// { 
// 	int a = 98, b = 56; 
// 	cout << "GCD of " << a << " and " << b << " : " << gcd(a, b); 
// 	return 0; 
// }


// Sum Of First N Numbers
// You are given an integer ‘n’.
// Your task is determining the sum of the first ‘n’ natural numbers and returning it.
// Example:
// Input: ‘n’ = 3
// Output: 6
// Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6
// #include <bits/stdc++.h>
// using namespace std;
// long long SumOfFirstNNumber(long long n)
// {
//     return (n * (n + 1) / 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << SumOfFirstNNumber(n) << endl;
//     return 0;
// }


// Reverse an array
// Given an array 'arr' of size 'n'
// Return an array with all the elements placed in reverse order
// Note:
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: n = 6, arr = [5, 7, 8, 1, 6, 3]
// Output: [3, 6, 1, 8, 7, 5]
// Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5] 
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> reverseanarray(int n, vector<int> &nums)
// {
//     vector<int> ans = nums;
//     reverse(ans.begin(), ans.end());
//     return ans;
// } 
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums;
//     reverseanarray(n, nums);
//     return 0;
// }

// 1 to N Without Loop
// You are given an integer ‘n’
// Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.
// Example:
// Input: ‘n’ = 5
// Output: 1 2 3 4 5
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> sortedanswer(int n)
// {
//     vector<int> ans;
//     if (n > 0)
//     {
//         ans = sortedanswer(n - 1);
//         ans.push_back(n);
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     sortedanswer(n);
//     return 0;
// }

// Reverse of an array (using single pointer)
// #include <bits/stdc++.h>
// using namespace std;
// void function1(int n, int arr[], int i)
// {
//     // It is checking that index 'i' is at half of the array or greater than half index if yes, then return array as it is
//     if (i >= n / 2)
//     {
//         return;
//     }
//     else
//     {
//         swap(arr[i], arr[n - i - 1]);
//         // OR //
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//         function1(n, arr, i + 1);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     function1(n, arr, 0);
//     cout << "Reverse of the array : " <<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Reverse of an array (using 2 pointers)
// #include <bits/stdc++.h>
// using namespace std;
// int function1(int arr[], int i, int r)
// {
//     if (i >= r)
//     {
//         return 0;
//     }
//     else
//     {
//         swap(arr[i], arr[r]);
//         function1(arr, i + 1, r - 1);
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
//     function1(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Palindrome (using recursion)
// #include <bits/stdc++.h>
// using namespace std;
// bool palindrome(string &s, int i)
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
//         return palindrome(s, i + 1);
//     } 
// }
// int main()
// { 
//     string s = "MADAM";
//     cout << palindrome(s, 0);
//     return 0;
// }


// Print n times
// Problem statement
// You are given an integer ‘n’.
// Print “Coding Ninjas ” ‘n’ times, without using a loop.
// Example:
// Input: ‘n’  = 4
// Output:
// Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 
// #include <bits/stdc++.h>
// using namespace std;
// int answer(int n)
// {
//     if (n != 0)
//     {
//         cout << "Coding Ninjas" << endl;
//         return answer(n - 1);
//     }    
//     else
//     {
//         return {};
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "The answer should be printed for  : " << n << endl;
//     answer(n);
//     return 0;
// }

// Print from "1 to N" w/o using check(i + 1, n);
// #include <bits/stdc++.h>
// using namespace std;
// void check(int i, int n)
// {
//     if(i < 1)
//     {
//         return;
//     }
//     return check(i - 1, n);
//     cout << i << " ";    
// }
// int main()
// {
//     int n;
//     cin >> n; 
//     check(n, n);
//     return 0;
// }


// Print from "N to 1" w/o using check(i - 1, n);
// #include <bits/stdc++.h>
// using namespace std;
// void check(int i, int n)
// {
//     if(i > n)
//     {
//         return;
//     }
//     return check(i + 1, n);
//     cout << i << " ";    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int i;
//     cin >> i; 
//     check(i, n);
//     return 0;
// }


// Print from "1 to N" with using check(i + 1, n);
// #include <bits/stdc++.h>
// using namespace std;
// void check(int i, int n)
// {
//     if(i > n)
//     {
//         return;
//     }
//     cout << i << " ";    
//     return check(i + 1, n);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int i;
//     cin >> i; 
//     check(i, n);
//     return 0;
// }

// // Print from "N to 1" with using check(i - 1, n);
// #include <bits/stdc++.h>
// using namespace std;
// void check(int i, int n)
// {
//     if(i < 1)
//     {
//         return;
//     }
//     cout << i << " ";    
//     return check(i - 1, n);
// }
// int main()
// {
//     int n;
//     cin >> n; 
//     check(n, n);
//     return 0;
// }

// Multiple Recursion
// Fibonnaci Series
// #include <bits/stdc++.h>
// using namespace std;
// int MultipleRecursion(int n)
// {
//     // Base case
//     if (n <= 1)
//     {
//         return n;
//     }
//     // OR //
//     // if(n == 0){return 0;}
//     // if(n == 1){return 1;}
//     else
//     {
//         int last = MultipleRecursion(n - 1);
//         int first = MultipleRecursion(n - 2);
//         return last + first;  
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << MultipleRecursion(n) << endl;
//     return 0;
// }


// Print all subsequences using recursion (T.C -> 2 ^ n * n & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// int printsubsequences(int index, vector<int> &v, int arr[], int n)
// {
//     // Base case
//     if (index >= n)
//     {
//         // Print whatever we have in vector
//         // To print the whole vector as all element will be inserted in it from the array
//         for (auto it : v)
//         {
//             cout << it << " ";
//         }
//         // If vector is empty after reaching to the end
//         if (v.size() == 0)
//         {
//             cout << "{}" << " ";
//         }
//         // For spacing
//         cout << endl;
//         return {};
//     }
//     // else arr is not traversed completely 
// 	   // Recursive calls
//     else
//     {
//         // If not-take
//         printsubsequences(index + 1, v, arr, n);

//         // If take
//         v.push_back(arr[index]);
//         printsubsequences(index + 1, v, arr, n);
//         v.pop_back();
//     }
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {3, 1, 2};
//     vector<int> v;
//     printsubsequences(0, v, arr, n);
//     return 0;
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

// Find Binary Complement of an integer  | 101 = 5 => 010 = 2 |
// #include <iostream>
// using namespace std;
// int product(int n){
//         int m = n;
//         int ans = 0;
//         int digit = 0;
//         if (m == 0)
//         {
//             return 1;
//         }
//         while (m != 0)
//         {
//             digit = (digit << 1) | 1;
//             m = m >> 1;
//         }
//         ans = (~n) & digit;
//         return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<product(n)<<endl;
//     return 0;
// }

// Return true if that integer is power of 2 else return false
// #include <iostream>
// #include <math.h>
// using namespace std;
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         for(int i = 0 ; i <= 30 ; i++){
//             int power = pow(2, i);
//             if(power == n){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// Switch Case
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter value of a : ";
//     cin>>a;

//     cout<<"Enter value of b : ";
//     cin>>b;

//     char calculator;
//     cout<<"Enter the operation you want to perform : ";
//     cin>>calculator;

//     switch (calculator)
//     {
//     case '+':
//         cout<<a+b<<endl;
//         break;
//     case '-':
//         cout<<a-b<<endl;
//         break;
//     case '*':
//         cout<<a*b<<endl;
//         break;
//     case '/':
//         break;
//         cout<<a/b<<endl;
//         break;
//     case '%':
//         cout<<a%b<<endl;

//     default:
//         cout<<"Error";
//         break;
//     }
//     return 0;
// }

// How to do pow() by your own
// #include <iostream>
// using namespace std;
// // Here, we will calculate 5 times the square of the a
// int power(int a, int b){
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"Answer of a^b is : "<<power(a,b)<<endl;
//     return 0;
// }

// Printing odd & Even Numbers
// #include <iostream>
// using namespace std;
// int odd(int a){
//     for (int i = 1; i <= a; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout<<"The even numbers are : "<<i<<endl;
//         }
//     }
// }
// int even(int b){
//   for (int j = 1; j <= b; j++)
//     {
//         if (j % 2 == 1)
//         {
//             cout<<"The odd numbers are : "<<j<<endl;
//         }
//     }
// }
// int main()
// {
//     int a;
//     int b;
//     odd(a);
//     even(b);
//     return 0;
// }

// Find nCr
// #include <iostream>
// using namespace std;
// int factorial(int num){
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * factorial(num-1));
//     }
// }
// int nCr(int num, int r){
//     int fact = factorial(num);
//     int deno = factorial(r) * factorial(num-r);
//     int ans = fact/deno;
//     return ans;
// }
// int main()
// {
//     int num;
//     cout<<"Enter your number : ";
//     cin>>num;
//     int r;
//     cout<<"Enter value of r : ";
//     cin>>r;
//     cout<<"The nCr is : "<<nCr(num, r);
//     return 0;
// }

// Find AP(using this formulae 3*n+7)
// #include <iostream>
// using namespace std;
// int AP(int num){
//     int result = (3 * num) + 7;
//     return result;
// }
// int main()
// {
//     int num;
//     cout<<"Enter your number : ";
//     cin>>num;
//     cout<<"The value of AP is : "<<AP(num)<<endl;
//     return 0;
// }

// Find sum of bits of each binary number
// Here, we already have binary numbers we just have to add them to find there sum ()
// #include <iostream>
// #include <math.h>
// using namespace std;
// int setBitA(int num)
// {
//     int ans = 0;
//     int i = 0;
//     while (num != 0)
//     {
//         ans = ans + pow(2, i);
//         num = num >> 1;
//     }
//     i++;
//     return ans;
// }
// int setBitB(int num2)
// {
//     int i = 0;
//     int ans = 0;
//     while (num2 != 0)
//     {
//         ans = ans + pow(2, i);
//         num2 = num2 >> 1;
//     }
//     i++;
//     return ans;
// }
// int main()
// {
//     int num;
//     cout << "Enter your number : ";
//     cin >> num;
//     int num2;
//     cout << "Enter your number : ";
//     cin >> num2;
//     cout << "The Bits of A is : " << setBitA(num) << endl;
//     cout << "The Bits of B is : " << setBitB(num2) << endl;
//     int Total = setBitA(num) + setBitB(num2);
//     cout << "The Total of A + B is : " << Total << endl;
//     return 0;
// }

// Fibonacci Series
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 0;
//     int b = 1;
//     cout<<"The Fibonnaci series is : "<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         int Fibonacci = a + b;
//         cout<<Fibonacci<<" ";
//         a = b;
//         b = Fibonacci;
//     }
//     return 0;
// }

// Find sum of all elements in an array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter elements : ";
//         cin>>arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"The elements in array : "<< arr[i] <<endl;
//         sum = sum + arr[i];
//     }
//     cout<<"The sum of elements of array : "<< sum <<endl;
//     return 0;
// }

// "ninja-is-given-an-integer-n-ninja-wants-to-find-whether-the-binary-representation-of-integer-n-is-palindrome-or-not"
// "ninja-is-busy-with-his-training-help-ninja-in-finding-out-whether-the-binary-representation-of-n-is-palindrome-or-not"
// #include <bits/stdc++.h>
// using namespace std;
// int func(long long n)
// {
//     int remainder;
//     string ans = " ";
//     while (n > 0)
//     {
//         remainder = n % 2;
//         n = n / 2;
//         ans.push_back(remainder);
//     }
//     int start = 0;
//     int end = ans.length() - 1;
//     // we have to traverse ans string to check whether it is a palindrome or not
//     while (start <= end)
//     {
//         if (ans[start++] != ans[end--])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// "Given-an-integer-n-you-are-supposed-to-return-the-square-of-the-given-integer-without-using-multiplication-division-or-power-function-pow"
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n)
// {
//     int sum = 0;
//     n = abs(n);
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + n;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << func(n) << endl;
//     return 0;
// }

// "Ninja-is-given-a-binary-number-as-a-string-s-of-size-n-he-is-asked-to-convert-it-into-its-decimal-equivalent-as-an-integer-and-print-it"
// #include <bits/stdc++.h>
// using namespace std;
// int convert(int n, string &str)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int digit = n % 10;
//         if (str[i] == '1')
//         {
//             ans = (ans + pow(2, n - i - 1));
//         }
//         n = n / 10;
//         i++;
//     }
//     return ans;
// }

// "you-are-given-an-array-a-of-length-n-where-n-is-always-an-odd-integer-there-are-(n-1)/2-elements-in-the-array-that-occur-twice-and-one-element-which-occurs-once-your-task-is-to-find-the-only-element-that-occurs-once-in-the-array"
// #include <bits/stdc++.h>
// using namespace std;
// int occursOnce(vector<int> &a, int n)
// {
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != a[i + 1])
//         {
//             return a[i];
//             break;
//         }
//         i++;
//     }
// }

// OR //

// In the given array a, all the elements that occur twice will cancel out each other when XORed, leaving only the element that occurs once in the result variable. Therefore, the result variable will contain the only element that occurs once in the array
// Because, XOR means 0 ^ 0 = 0, 1 ^ 1 = 0, 0 ^ 1 = 1 and 1 ^ 0 = 1 therefore same elements will cancel out whereas, different elements will come out as the output
// #include <bits/stdc++.h>
// using namespace std;
// int func(vector<int> &a, int n)
// {
//     sort(a.begin(), a.end());
//     int result = 0;
//     for (int i = 0; i < n; i++)
//     {
//         result = result ^ a[i];
//         // if (a[i] != a[i + 1])
//         // {
//             // return a[i];
//             // break;
//         // }
//     }
//     return result;
// }

// "you-are-given-an-array-of-n-elements-in-this-given-array-each-element-appears-an-even-number-of-times-except-one-element-which-appears-odd-no-of-times-your-task-is-to-find-the-element-which-occurs-an-odd-number-of-times"
// #include <bits/stdc++.h>
// using namespace std;
// int findOdd(int arr, int n)
// {
//     int ans = 0;
//     // In the given array a, all the elements that occur an even number of times will cancel out each other when XORed, leaving only the element that occurs an odd number of times in the result variable. Therefore, the result variable will contain the element that occurs an odd number of times in the array
//     // Because, XOR means 0 ^ 0 = 0, 1 ^ 1 = 0, 0 ^ 1 = 1 and 1 ^ 0 = 1 therefore same elements will cancel out whereas, different elements will come out as the output
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// given-a-number-n-you-are-supposed-to-calculate-the-number-of-1s-in-the-binary-representation-of-the-given-number
// #include <bits/stdc++.h>
// using namespace std;
// int countSetBits(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         if (n & 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

// find no. of mismatching bits for example let first be 11 and second be 15 writing both the given numbers-in-binary-we-get-first-1011-binary-representation-of-11-and-second-1111-binary-representation-of-15-we-can-see-all-the-bits-are-the-same-except-the-second-bit
// #include <bits/stdc++.h>
// using namespace std;
// int numberOfMismatchingBits(int first, int second)
// {
//     // Xoring first and second at each index to find mismatched bits because same values will be cancelled and diff. will return, so from here we will get all mismatched bits
//     int c = first ^ second;
//     int count = 0;
//     // Till the moment ans becomes 0 we will keep on traversing it, we are doing this because now we will check that which bit it was i.e (0 or 1)
//     while (c)
//     {
//         // '&' will let to find the 1 occurence and whenever we will get 1, we will increment count++ means here we are finding that mismatched bit is 1 or 0 by '&' method
//         if ((c & 1))
//         {
//             count++;
//         }
//         // right shift because we have to traverse and check for each and every element
//         c = c >> 1;
//     }
//     return count;
// }

// Count set bits in an integer (T.C -> O(log n) & S.C -> O(1))
// Write an efficient program to count the number of 1s in the binary representation of an integer n = 6; Output : 2 & Binary representation of 6 is 110 and has 2 set bits
// #include <bits/stdc++.h>
// using namespace std;
// int countSetBits(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         // n = 4 => 100 and 100
//         //                & 001
//         //                = 000
//         int bit = n & 1;
//         if(bit)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }
// int main()
// {
//     int i = 4;
//     cout << countSetBits(i);
//     return 0;
// }

// Set K Bits
// if-the-given-number-is-37-100101-and-k-4-then-we-need-to-set-the-0-1-2-3-bits-and-thus-after-the-kth-bit-set-our-answer-would-be-47-101111
// In the first test case, we have the number ‘N’ as 5 (101) and K=2. Thus after set 2 bits from the right, the answer will be 7 (111).
// In the second test case, we have the number ‘N’ as 16 (10000) and K=3. Thus after set 3 bit from right, the answer will be 23 (10111).
// #include <bits/stdc++.h>
// using namespace std;
// int setKBits(int n, int k)
// {
//     int mask = (1 << k) - 1;
//     return n | mask;
// }

// Check whether K-th bit is set or not
// Suppose we have a number n and another value k, We have to check whether the kth bit in n is set (1) or not. The value of k is considered from right hand side
// given-a-number-n-and-a-number-k-check-whether-k-th-bit-of-number-is-set-or-not
// #include <bits/stdc++.h>
// bool isKthBitSet(int n, int k)
// {
//     int temp = n >> (k - 1);
//     if (temp & 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// Find an element from array (Linear Searching)
// #include <iostream>
// using namespace std;
// bool search(int arr[], int size, int num){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == num)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// }
// int main()
// {
//     int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
//     cout<<"Enter the number which you are finding : ";
//     int found = search(arr, 10, 7);
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

// Swapping elements in an array
// #include <iostream>
// using namespace std;
// int array(int arr[]){
//     cout<<"The actual array : \n";
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int reversearray(int arr[]){
//     int temp;
//     for (int i = 0; i < 5; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[9 - i];
//         arr[9 - i] = temp;
//     }
// }
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     array(arr);
//     reversearray(arr);
//     array(arr);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int printarr(int arr[], int size){
// If you are writing arr[] then you don't have to use * pointer to show that we are taking reference from main()
// But if we are writing / using arr in the above function then we have to use pointer *arr to show that we are taking reference from arr of main()
//     cout<<"The elements are : \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int printarray(int arr[], int size){
//     cout<<"Sorted array\n";
//     int temp;
//     for (int i = 0; i < size; i+=2)
//     // We used i+=2 because we don't want to swap value of 0th index and 1st index again & again, once 0th & 1st is done loop should swap value of next elements after it which is at 2nd index
//     {
//         temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
// }
// int main()
// {
//     int size;
//     cin>>size;
//     int arr[5] = {1,2,3,4,5};
//     printarr(arr, size);
//     printarray(arr, size);
//     printarr(arr, size);
//     return 0;
// }

// Find unique value from array(which is non repeating and occured only once)
// #include <iostream>
// using namespace std;
// If you are writing arr[] then you don't have to use * pointer to show that we are taking reference from main()
// But if we are writing / using arr in the above function then we have to use pointer *arr to show that we are taking reference from arr of main()
// int print(int arr[], int num){
//     int ans = 0;
//     for (int i = 0; i < num; i++)
//     {
//         ans = ans ^ arr[i];
//         // We, XOR all elements of array so that we whenever same elem will XOR will give nothing (0 it will cris-cross each other) and when we XOR value which is not repeated = that elem(it gives that element)
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     int arr[] = {1,2,2,4,3,3,4};
//     cout<<print(arr, 7)<<endl;
//     return 0;
// }

// Find is there unique occurence of elements in array
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     bool uniqueOccurrences(vector<int> &arr)
//     {
//         int i = 0;
//         // sorting it to find same elements easily
//         sort(arr.begin(), arr.end());
//         // ans will have ans
//         vector<int> ans;
//         while (i < arr.size())
//         {
//             int count = 1;
//             // run a loop from next element till the end
//             for (int j = i + 1; j < arr.size(); j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                 }
//             }
//             // store ans in ans vector
//             ans.push_back(count);
//             // i will have i and count
//             // updates the value of i to skip the elements that have already been counted
//             i = i + count;
//         }
//         // sort ans vector
//         // We are doing this for checking duplicates
//         sort(ans.begin(), ans.end());
//         // run a loop for ans vector
//         // This code iterates through the ans vector from the beginning to the second-to-last element, comparing each element with the next element because no need to compare last element as it is the last element so, definitely it will be not repeated
//         for (int i = 0; i < ans.size() - 1; i++)
//         {
//             // if inside ans vector count of current element == count of next element that means they are duplicate occurences
//             if (ans[i] == ans[i + 1])
//             {
//                 // return false
//                 return false;
//             }
//         }
//         // else return true
//         return true;
//     }
// };

// Find is there unique occurence of elements in array
// #include <iostream>
// using namespace std;
// int findUnique(int arr[], int size)
// {
//     for(int i = 0; i < size; i++) {
//         int count = 0;
//         for(int j = i + 1; j < size; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if(count == 1) {        // This will run only when i == j and then only count++
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int size;
//     int arr[6] = {1,2,2,3,3,3};
//     cout<<findUnique(arr, 6)<<endl;
//     return 0;
// }

// Given Array of size 'n' has each elements b/w 1 & 'n - 1' at least once, there is single integer value which is present twice in array, Find the duplicate value present in array?
// #include <iostream>
// using namespace std;
// int print(int arr[]){
//     int ans = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         ans = ans ^ i;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[8] = {1,2,2,3,4,5,6,7};
//     print(arr);
//     cout<<print(arr)<<endl;
//     return 0;
// }

// Remove Duplicates from Sorted Array
// Given an integer array nums sorted in non-decreasing order ,remove the duplicates such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums
// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums
// Return k, basically k is the window in which we have to store the elements in (ascending order + diff. elements) mixture i.e {1,2,3,4____} rest after that it does'nt matter whatever is stored in that array either repeating or different
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         // This is the array {1, 2, 2, 3, 4, 5, 6} we will start i and j from 0th index
//         int j = 0;
//         // Now, we will move i forward and compare that whether the element at ith index is same to jth index
//         for(int i = 0; i < nums.size(); i++)
//         {
//             // Here, we are comparing both index element, if they are same then ignore because it is already sorted array and the order is correct, but if the elements are different then, we will not instantly swap or replace the element of j with i first we will increment j or move forward j because we need sorted array so definitely it will be palced after the element as it should be greater than the current element
//             if(nums[j] != nums[i])
//             {
//                 // Move j one step forward
//                 j++;
//                 // Then replaced j with i value
//                 nums[j] = nums[i];
//             }
//         }
//         // Now, we will return j + 1; because we need proper ans. in return without +1 it will return 1 less value than the ans. should return as the array became sorted like this {1, 2, 3, 1, 2, 5, 6} where first 3 are k elements and from 1 value it is 0th index, 2 is at 1st index and 3 is at 2nd index but we are at {1,2} value only because of array starting from 0th index therefore to print 3 also as it is the part of k elements therefore we will return j + 1;
//         return j + 1;
//     }
// };

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//        map<int,int> hash;
//        int n = nums.size();
//        for(int i = 0; i < n; i++){
//         hash[nums[i]]++;
//        } 
//        int indx = 0;
//        for(auto x:hash){
//             if(x.second>0){
//                 nums[indx++]=x.first;
//             }
//         }
//         return indx;
//     }
// };

// Find Intersection b/w 2 arrays
// #include <iostream>
// using namespace std;
// int first(int arr[], int array[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         int a = arr[i];
//         for (int j = 0; j < 5; j++)
//         {
//             int b = array[j];
//             if (a == b)
//             {
//                 cout << "yes\n";
//                 break;
//             }
//             else
//             {
//                 cout<<"false\n";
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int array[5] = {1, 2, 3, 7, 10};
//     first(arr, array);
//     return 0;
// }

// This is not optimized way plus it will take longer time //

// #include <bits/stdc++.h>
// using namespace std;
// int check(int *arr, int *array, int num, int num2)
// {
//     int i = 0;
//     int j = 0;
//     int ans = 0;
//     while (i < num && j < num2)   // This condition is necessary else it will go out of array
//     {
//         if (arr[i] == array[j])
//         {
//             ans = arr[i];        // or arr[j];
//             cout<<ans<<endl;
//         }
//         else if (arr[i] < array[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;  //because j mein next elem. will now compared with i
//         }
//         return ans;
//     }
// }
// int main()
// {
//     int num;      //num is lenght of arr
//     int num2;     //num2 is lenght of array
//     cin >> num;
//     cin >> num2;
//     int arr[5] = {29, 10, 5, 9, 14};
//     int array[5] = {11, 10, 5, 4, 15};
//     sort(arr, arr + num);
//     sort(array, array + num2);
//     cout<<check(arr, array, num, num2)<<endl;
//     return 0;
// }

// Put all 0's on one side and all 1's on one side basically sorting
// #include <iostream>
// using namespace std;
// int print(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//     cout<<arr[i]<<" ";
//     }
// }
// void sort_01(int arr[], int n) {
//     int i = 0, j = n - 1;
//     while(i<j){
//         //arr[i] is on desired position
//         if (arr[i]==0){
//             i++;
//         }
//         //arr[j] is on desired position
//         else if(arr[j]==1){
//             j--;
//         }
//         // if arr[i]==1 and arr[j]==0, both are on wrong position, so we just need to swap
//         else{
//             // Swapping
//             int temp;
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++;
//             j--;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
//     sort_01(arr, 8);
//     print(arr, 8);
//     return 0;
// }

// find an element in array(binary search) (T.C -> O(log N))
// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end) // Compulsory case else it will be outside the array
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,11,14,16};
//     int result = binarysearch(arr, 5, 1);
//     cout<<"The index of element is : "<<result<<endl;
//     return 0;
// }

// Hash Array & Hashing
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }
// Input: 

// 5
// 1 3 2 1 3
// 5
// 1 4 2 3 12

// Output: 

// 2
// 0
// 1
// 2
// 0

// Character occurence if the string contains only lowercase
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     //precompute:
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c - 'a'] << endl;
//     }
//     return 0;
// }
// Input: 
// abcdabehf
// 5
// a
// g
// h
// b
// c
// Output: 2
// 0
// 1
// 2
// 1

// Character occurence if the string contains only uppercase
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     //precompute:
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i] - 'A']++;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c - 'A'] << endl;
//     }
//     return 0;
// }

// Code if the string contains both uppercase and lowercase
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     //precompute:
//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i]]++;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c] << endl;
//     }
//     return 0;
// }
// Input:
// abcdabehf
// 5
// a
// g
// h
// b
// c
// Output: 
// 2
// 0
// 1
// 2
// 1


// How to hash large numbers like 10^9 or higher?
// Using maps
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     //precompute:
//     map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         mp[arr[i]]++;
//     }
//     // iterate over the map:
//     /* for(auto it : mp){
//             cout << it.first << "->" << it.second << endl;
//         }
//     */
//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetch:
//         cout << mp[number] << endl;
//     }
//     return 0;
// }
// Input: 
// 7
// 1 2 3 1 3 2 12
// 5
// 1 2 3 4 12
// Output: 
// 2
// 2
// 2
// 0
// 1


// Find the highest/lowest frequency element
// Brute Force (using 2 loops)
// #include <bits/stdc++.h>
// using namespace std;
// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);
//     int maxFreq = 0, minFreq = n;
//     int maxEle = 0, minEle = 0;
//     for (int i = 0; i < n; i++) {
//         // Skip this element if already processed
//         if (visited[i] == true)
//             continue;
//         // Count frequency
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         if (count > maxFreq) {
//             maxEle = arr[i];
//             maxFreq = count;
//         }
//         if (count < minFreq) {
//             minEle = arr[i];
//             minFreq = count;
//         }
//     }
//     cout << "The highest frequency element is: " << maxEle << "\n";
//     cout << "The lowest frequency element is: " << minEle << "\n";
// }

// Using Map
// #include <bits/stdc++.h>
// using namespace std;
// void Frequency(int arr[], int n)
// {
//     unordered_map<int, int> map;
//     for (int i = 0; i < n; i++)
//         map[arr[i]]++;
//     int maxFreq = 0, minFreq = n;
//     int maxEle = 0, minEle = 0;
//     // Traverse through map to find the elements.
//     for (auto it : map) {
//         int count = it.second;
//         int element = it.first;
//         if (count > maxFreq) {
//             maxEle = element;
//             maxFreq = count;
//         }
//         if (count < minFreq) {
//             minEle = element;
//             minFreq = count;
//         }
//     }
//     cout << "The highest frequency element is: " << maxEle << "\n";
//     cout << "The lowest frequency element is: " << minEle << "\n";
// }
// int main()
// {
//     int arr[] = {10, 5, 10, 15, 10, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     countFreq(arr, n);
//     return 0;
// }

// Find union of 2 sorted arrays
// Time Complexity: O(m*log(m) + n*log(n)), where ‘m’ and ‘n’ are the size of the arrays
// Auxiliary Space: O(m + n)
// #include <bits/stdc++.h>
// using namespace std;

// // Function to return the union of two arrays
// vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
// {
//     set<int> s;
//     // Remove the duplicates from arr1[]
//     for (int i = 0; i < n; i++) {
//         s.insert(arr1[i]);
//     }

//     // Remove duplicates from arr2[]
//     for (int i = 0; i < m; i++) {
//         s.insert(arr2[i]);
//     }

//     // Loading set to vector
//     vector<int> vec(s.begin(), s.end());

//     return vec;
// }

// // Driver code
// int main()
// {
//     int arr1[] = { 1, 2, 2, 2, 3 };
//     int arr2[] = { 2, 3, 3, 4, 5, 5 };
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);

//     // Function call
//     vector<int> uni = Unionarray(arr1, arr2, n, m);
//     for (int i : uni) {
//         cout << i << " ";
//     }

//     return 0;
// }

// find union of two sorted arrays (2nd Approach)
// #include <bits/stdc++.h>
// using namespace std;

// /* Function prints union of arr1[] and arr2[]
//    m is the number of elements in arr1[]
//    n is the number of elements in arr2[] */
// void printUnion(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j])
//             cout << arr1[i++] << " ";

//         else if (arr2[j] < arr1[i])
//             cout << arr2[j++] << " ";

//         else {
//             cout << arr1[i++] << " ";
//             // i++;
//             // OR //
//             // cout << arr2[j++] << " ";
//             j++;
//             // i++;
//         }
//     }

//     /* Print remaining elements of the larger array */
//     while (i < m)
//         cout << arr1[i++] << " ";

//     while (j < n)
//         cout << arr2[j++] << " ";
// }

// /* Driver program to test above function */
// int main()
// {
//     int arr1[] = { 1, 2, 4, 5, 6 };
//     int arr2[] = { 2, 3, 5, 7 };

//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     // Function calling
//     printUnion(arr1, arr2, m, n);

//     return 0;
// }
// Time Complexity : O(m + n)
// Auxiliary Space: O(1)


// 3rd Approach
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function to return the union of two arrays
// vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
// {
//     map<int, int> map;
     
//     // Remove the duplicates from arr1[]
//     for (int i = 0; i < n; i++)
//     {
//         if (map.find(arr1[i]) != map.end())
//         {
//             map[arr1[i]]++;
//         }
//         else
//         {
//             map[arr1[i]] = 1;
//         }
//     }
   
//     // Remove duplicates from arr2[]
//     for (int i = 0; i < m; i++)
//     {
//         if (map.find(arr2[i]) != map.end())
//         {
//             map[arr2[i]]++;
//         }
//         else
//         {
//             map[arr2[i]] = 1;
//         }
//     }
   
//     // Loading set to vector
//     vector<int> list;
//     for (auto i : map)
//     {
//         list.push_back(i.first);
//     }
  
//     return list;
// }
   
// // Driver code
// int main()
// {
//     int arr1[] = { 1, 2, 2, 2, 3 };
//     int arr2[] = {2, 3, 3, 4, 5, 5 };
//     int n = sizeof(arr1)/sizeof(arr1[0]);
//     int m = sizeof(arr2)/sizeof(arr2[0]);
//     cout << "Union is :"<<endl;
     
//     // Function call
//     vector<int> uni = Unionarray(arr1, arr2, n, m);
//     for (auto i : uni)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// Time Complexity:O(m*log(m) + n*log(n)), where ‘m’ and ‘n’ are the size of the arrays
// Auxiliary Space: O(m + n)


// Find the element which is present once in the array and rest are present more than once?
// Brute Force ((T.C -> O(n^2) & (S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;

// int findSingleElement(const vector<int>& arr) {
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         int count = 0;

//         // Compare arr[i] with all elements in the array
//         for (int j = 0; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }

//         // If count is 1, it means the element occurs only once
//         if (count == 1) {
//             return arr[i];
//         }
//     }

//     return -1;  // In case no unique element exists
// }

// int main() {
//     vector<int> arr = {4, 3, 2, 4, 1, 3, 2};
//     cout << "The single element is: " << findSingleElement(arr) << endl;
//     return 0;
// }


// 2nd Approach (t.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int getSingleElement(vector<int> &arr)
// {
//     // 1st Method
//     // int ans = 0;
//     // for(int i = 0; i < arr.size(); i++)
//     // {
//     //     ans = ans ^ arr[i];
//     // }
//     // return ans;
    
//     // 2nd Method
//     map<int, int> map;
    
//     for(int i = 0; i < arr.size(); i++)
//     {
//         map[arr[i]]++;
//     }
    
//     for(auto it : map)
//     {
//         if(it.second == 1)
//         {
//             cout << "The element that is present once is : "<< it.first;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     int ans = getSingleElement(arr);
//     cout << ans << " ";
//     return 0;
// }


// Count frequency of each element in the array (Using 2 Loops)
// #include <bits/stdc++.h>
// using namespace std;
 
// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);
 
//     for (int i = 0; i < n; i++) {
 
//         // Skip this element if already processed
//         if (visited[i] == true)
//             continue;
 
//         // Count frequency
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout << arr[i] << " " << count << endl;
//     }
// }
 
// int main()
// {
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     countFreq(arr, n);
//     return 0;
// }

// Using Map (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// void Frequency(int arr[], int n)
// {
//     unordered_map<int, int> map;
//     for (int i = 0; i < n; i++)
//         map[arr[i]]++;
//     // Traverse through map and print frequencies
//     for (auto x : map)
//         cout << x.first << " " << x.second << endl;
// }
// int main()
// {
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     Frequency(arr, n);
//     return 0;
// }



// // Merge Sort
// #include <iostream>
// using namespace std;
// void merge(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;   // This is for left side
//     int len2 = end - mid;         // This is for right side

//     int *ptr = new int[len1];     // creating new array after diving them
//     int *ptrr = new int[len2];    // creating new array after dividing them

//     int mainArrayIndex = start;
//     // This for loop will help in putting element of left side after dividing by mid in left array
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     // This for loop will help in putting element of right side after dividing by mid in right array
//     for (int i = 0; i < len2; i++)
//     {
//         ptrr[i] = arr[mainArrayIndex++];
//     }
//     // Merge 2 sorted array concept using here
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = start;
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
// int sort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return 0;
//     }
//     int mid = start + (end - start) / 2;
//     // Left side sorting
//     sort(arr, start, mid);
//     // Right part sorting
//     sort(arr, mid + 1, end);
//     // Merge
//     merge(arr, start, end);
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

// Find Second Largest and Second Smallest Element in the array
// #include <bits/stdc++.h>
// using namespace std;

// void findSecondLargestAndSecondSmallest(vector<int>& arr, int &secondLargest, int &secondSmallest) {
//     // Handle the edge case where the array has less than 2 elements
//     if (arr.size() < 2) {
//         secondLargest = -1;  // Indicate no second largest element
//         secondSmallest = -1;  // Indicate no second smallest element
//         return;
//     }

//     // Step 1: Initialize variables to store the largest, second largest, smallest, and second smallest values
//     int largest = arr[0];
//     int smallest = arr[0];
//     secondLargest = -1;  // Use -1 to indicate not found yet
//     secondSmallest = -1;  // Use -1 to indicate not found yet

//     // Step 2: Single pass to find the largest, second largest, smallest, and second smallest elements
//     for (int num : arr) {
//         // For largest and second largest
//         if (num > largest) {
//             secondLargest = largest;
//             largest = num;
//         } else if (num > secondLargest && num < largest) {
//             secondLargest = num;
//         }
//         // For smallest and second smallest
//         if (num < smallest) {
//             secondSmallest = smallest;
//             smallest = num;
//         } else if (num < secondSmallest && num > smallest) {
//             secondSmallest = num;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {13, 24, 15, 12};

//     int secondLargest;
//     int secondSmallest;
//     findSecondLargestAndSecondSmallest(arr, secondLargest, secondSmallest);
//     if (secondLargest != -1) {
//        cout << "The second largest element is " << secondLargest << std::endl;
//     } else {
//         cout << "There is no second largest element." << endl;
//     }
//     if (secondSmallest != -1) {
//         cout << "The second smallest element is " << secondSmallest << endl;
//     } else {
//         cout << "There is no second smallest element." << endl;
//     }
//     return 0;
// }


// 2nd Approach (T.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int findSecondLargest(vector<int>& arr) {
//     // Step 1: Initialize variables to store the largest and second largest values
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     // Step 2: First pass to find the largest element
//     for (int num : arr) {
//         if (num > largest) {
//             largest = num;
//         }
//     }

//     // Step 3: Second pass to find the second largest element
//     for (int num : arr) {
//         if (num > secondLargest && num < largest) {
//             secondLargest = num;
//         }
//     }
//     return secondLargest;
// }

// int main() {
//     vector<int> arr = {3, 5, 2, 9, 6, 19, 19};

//     int result = findSecondLargest(arr);

//     if (result != INT_MIN) {
//         cout << "The second largest element is " << result << endl;
//     } else {
//         cout << "There is no second largest element." << endl;
//     }
//     return 0;
// }

// Same code but proper answer
// #include <bits/stdc++.h>
// using namespace std;
// void findSecondLargestAndSecondSmallest(int n, vector<int>& arr, int &secondLargest, int &secondSmallest) {
//     // Step 1: Initialize variables to store the largest and second largest values
//     // int largest = arr[0];
//     // int secondLargest = INT_MIN;

//     // // Step 2: First pass to find the largest element
//     // for (int i = 0; i < n; i++) {
//     //     if (arr[i] > largest) {
//     //         largest = arr[i];     // 19 is the first largest
//     //     }
//     // }

//     // // Step 3: Second pass to find the second largest element
//     // for (int i = 0; i < n; i++) {
//     //     if (arr[i] > secondLargest && arr[i] < largest) {
//     //         secondLargest = arr[i];
//     //     }
//     // }
//     // return secondLargest;
    
//     int largest = arr[0];
//     int smallest = arr[0];
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] > largest)
//         {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > secondLargest && arr[i] < largest)
//         {
//             secondLargest = arr[i];
//         }
//     }
    
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] < smallest)
//         {
//             secondSmallest = smallest;
//             smallest = arr[i];
//         }
//         else if(arr[i] < secondSmallest && arr[i] > smallest)
//         {
//             secondSmallest = arr[i];
//         }
//     }
// }

// int main() {
//     vector<int> arr = {3, 5, 2, 9, 6, 19, 19};

//     int secondLargest;
//     int secondSmallest;
//     findSecondLargestAndSecondSmallest(7, arr, secondLargest, secondSmallest);
//     if (secondLargest != -1) {
//        cout << "The second largest element is " << secondLargest << std::endl;
//     } else {
//         cout << "There is no second largest element." << endl;
//     }
//     if (secondSmallest != -1) {
//         cout << "The second smallest element is " << secondSmallest << endl;
//     } else {
//         cout << "There is no second smallest element." << endl;
//     }
//     return 0;
// }

// Set Matrix Zero 
// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
//     // set all non-zero elements as -1 in the row i:
//     for (int j = 0; j < m; j++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }


// void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
//     // set all non-zero elements as -1 in the col j:
//     for (int i = 0; i < n; i++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // Set -1 for rows and cols
//     // that contains 0. Don't mark any 0 as -1:

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 markRow(matrix, n, m, i);
//                 markCol(matrix, n, m, j);
//             }
//         }
//     }

//     // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

// Time Complexity: O((N*M)*(N + M)) + O(N*M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
// Reason: Firstly, we are traversing the matrix to find the cells with the value 0. It takes O(N*M). Now, whenever we find any such cell we mark that row and column with -1. This process takes O(N+M). So, combining this the whole process, finding and marking, takes O((N*M)*(N + M)).
// Another O(N*M) is taken to mark all the cells with -1 as 0 finally.

// Space Complexity: O(1) as we are not using any extra space.



// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     int row[n] = {0}; // row array
//     int col[m] = {0}; // col array

//     // Traverse the matrix:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark ith index of row wih 1:
//                 row[i] = 1;

//                 // mark jth index of col wih 1:
//                 col[j] = 1;
//             }
//         }
//     }

//     // Finally, mark all (i, j) as 0
//     // if row[i] or col[j] is marked with 1.
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

// Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
// Reason: We are traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

// Space Complexity: O(N) + O(M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
// Reason: O(N) is for using the row array and O(M) is for using the col array.



// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // int row[n] = {0}; --> matrix[..][0]
//     // int col[m] = {0}; --> matrix[0][..]

//     int col0 = 1;
//     // step 1: Traverse the matrix and
//     // mark 1st row & col accordingly:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark i-th row:
//                 matrix[i][0] = 0;

//                 // mark j-th column:
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }

//     // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < m; j++) {
//             if (matrix[i][j] != 0) {
//                 // check for col & row:
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

// Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
// Reason: In this approach, we are also traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

// Space Complexity: O(1) as we are not using any extra space.

// Find first and last occurence of any number in an array
// #include <iostream>
// using namespace std;
// int checkarr(int arr[], int num, int key){
//     int start = 0;
//     int end = num - 1;   // size of array
//     int ans = -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;   // mid se right that means right side
//             // For right occurence/last occurence
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;  //updating mid value
//     }
//     return ans;
// }
// int checkarray(int arr[], int num, int key){
//     int start = 0;
//     int end = num - 1;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid - 1;   // mid se backwards that means left side
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[] = {1,2,3,3,5};
//     int total = checkarr(arr, 5, 3);
//     int total2 = checkarray(arr, 5, 3);
//     cout<<"First Occurence is present at "<<total<<endl;
//     cout<<"Last Occurence is present at "<<total2<<endl;
//     return 0;
// }

// Find total number occurence of any number in an array
// #include <iostream>
// using namespace std;
// int checkarr(int arr[], int num, int key){
//     int start = 0;
//     int end = num - 1;   // size of array
//     int ans = -1;
//     int mid = start + (end - start)/2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//             // For Right occurence/last occurence
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;  //updating mid value
//     }
//     return ans;
//     return -1;
// }
// int checkarray(int arr[], int num, int key){
//     int start = 0;
//     int end = num - 1;
//     int ans = -1;
//     int mid = start + (end - start)/2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;   // mid se backwards that means left side
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,3,3,3,3,3,3};
//     cout<<"First Occurence is present at "<<checkarr(arr, 8, 3)<<endl;
//     cout<<"Last Occurence is present at "<<checkarray(arr, 8, 3)<<endl;
//     int Total;
//     int a, b;
//     a = checkarr(arr, 8, 3);
//     b = checkarray(arr, 8, 3);
//     // Formulae to calculate total occurence of an element in an array
//     Total = (b - a + 1);
//     cout<<Total<<endl;
//     return 0;
// }

// Find the greatest element in the array or that element which will be the peak of mountain
// #include <iostream>
// using namespace std;
// int check(int arr[], int num){
//     int start = 0;
//     int end = num - 1;

//     int mid = start + (end - start)/2;
//     while (start < end)
//     {
//         if (arr[mid] < arr[mid+1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end  = mid;
//         }
//         mid = start + (end - start)/2;
//     }
//     return start;
// }
// int main()
// {
//     int arr[] = {1,2,10,5,2};
//     cout<<check(arr, 5)<<endl;
//     return 0;
// }

// Find Pivot in an array
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
//     return start;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     cout<<pivot(arr, 5)<<endl;
//     return 0;
// }

// Sorted and Rotated element in an array
// #include <iostream>
// using namespace std;
// int pivotElement(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
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
// }
// // Binary Search for finding position
// int findPosition(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size  - 1;
//     int pivot = pivotElement(arr, size);
//     if (arr[pivot] == key)
//     {
//         return pivot;
//     }

//     // spliting array based on pivot element
//     if (key >= arr[0])
//     {
//         end = pivot - 1;
//     }
//     else
//     {
//         start = pivot;
//     }
//     // Binary Search
//     int mid = (start + end) / 2;
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
//         mid = (start + end) / 2;
//     }
//     // key not found
//     return -1;
// }
// int main()
// {
//     int key;
//     cout << "Enter the key value" << endl;
//     cin >> key;
//     int arr[5] = {5, 6, 1, 2, 3};

//     int pivot = pivotElement(arr, 5);
//     int sorted = findPosition(arr, 5, key);

//     cout << "pivot element at index of " << pivot << endl;
//     cout << "key element at index of " << sorted << endl;
//     return 0;
// }

// Find square root through binary search
// #include <iostream>
// using namespace std;
// int binarysearch(int num)
// {
//     int start = 0;
//     int end = num - 1;
//     int ans = -1;
//     long long int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         long long int square = mid * mid;
//         if (square == num)
//         {
//             return mid; //because mid is the square root
//         }
//         else if (square < num)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int Total = binarysearch(4);
//     cout << Total << endl;
//     return 0;
// }

// Book Allocation
// #include<iostream>
// #include<vector>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;

//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(int arr[], int n, int m, int s, int e, int*p) {
//     s = 0;
//     int sum = 0;

//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
// 	int arr[4] = {10,20,30,40};
// 	int n=4, m=2;
// 	int sum = 0;
// 	for(int i=0; i<n; i++){
// 		sum += arr[i];
// 	}
// 	int ans = -1 ;
// 	ans = allocateBooks(arr, n, m, 0, sum, &ans);

// 	cout<<ans;
// 	return 0;
// }

// Aggressive Cow
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isPossible(vector<int> &stalls, int k, int mid, int n) {

//     int cowCount = 1;
//     int lastPos = stalls[0];

//     for(int i=0; i<n; i++ ){

//         if(stalls[i]-lastPos >= mid){
//             cowCount++;
//             if(cowCount==k)
//             {
//                 return true;
//             }
//             lastPos = stalls[i];       // when count == k then lastPos will contain the new position and from there next loop will begin
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(), stalls.end());
//     int s = 0;
//     int n = stalls.size();
//     int e = stalls[n-1];
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s<=e) {
//         if(isPossible(stalls, k, mid, n)) {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// Selection Sort
// #include <iostream>
// using namespace std;
// int print(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int sorting(int arr[], int num)
// {
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
//     int arr[] = {7,1,4,3,9};
//     cout << "Before Sorting\n";
//     print(arr, 5);
//     sorting(arr, 5);
//     cout << "After Sorting\n";
//     print(arr, 5);
//     return 0;
// }

// Bubble Sort
// #include <iostream>
// #include<vector>
// using namespace std;
// int sort(int arr[], int num)
// {
//     for(int i = 1; i < num; i++) {
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

// Insertion Sort
// #include <iostream>
// using namespace std;
// int sort(int arr[], int num)
// {
//     for (int i = 1; i < num; i++)
//     {
//     int temp = arr[i];
//     int j = i - 1;
//         for (j; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 // shift
//                 arr[j + 1] = arr[j];
//             }
//             else
//             { // ruk jao
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
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
//     int arr[] = {1, 2, 22, 5, 4};
//     sort(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// Array(STL)
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     // int arr[4] = {1,2,3,4};     //This is how we normally show an array
//     array<int,4> arr = {1,2,3,4};  //This is how we show array in STL
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     // For size of an array
//     cout<<arr.size()<<endl;
//     // First Element
//     cout<<arr.front()<<endl;
//     // Last Element
//     cout<<arr.back()<<endl;
//     // Element at specific index
//     cout<<arr.at(2)<<endl;

//     return 0;
// }

// Vector(STL)
// It can increase it's size when it's size is filled/exceed that's why it is dynamic(it can increase decrease it's size)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v1;  //Vector created in STL
//     // cout<<v1.size()<<endl;   //For it's size
//     v1.push_back(1);    // will put element from back in vector
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     cout<<v1.size()<<endl;   //For it's size
//     // It is similar like v1.size()
//     // cout<<v1.capacity()<<endl;
//     // Front Element
//     // cout<<v1.front()<<endl;
//     // Last element
//     // cout<<v1.back()<<endl;
//     // Pop_back will remove element from back
//     // v1.pop_back();
//     // Element at specific index
//     // cout<<v1.at(1)<<endl;
//     v1.clear();
//     return 0;
// }

// Deque(STL)
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {
//     deque<int> deque;
//     deque.push_back(4);
//     deque.push_back(3);
//     deque.push_back(2);
//     deque.push_back(1);
//     deque.push_back(0);
//     // Pop
//     // deque.pop_back();
//     // For size
//     // cout<<deque.size()<<endl;
//     // For element at specific index
//     // cout<<deque.at(1)<<endl;
//     // Front
//     // cout<<deque.front()<<endl;
//     // Back
//     // cout<<deque.back()<<endl;
//     // Empty
//     // cout<<deque.empty()<<endl;
//     return 0;
// }

// List(STL)
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> l1;
//     l1.push_back(5);
//     l1.push_back(4);
//     l1.push_back(3);
//     l1.push_back(2);
//     l1.push_back(1);

//     // pop
//     // l1.pop_back();
//     // pop front pop back
//     // l1.pop_back();
//     // l1.pop_front();
//     // size
//     // l1.size();
//     // This is how we copy l1 in l2 & we can perform all function of l1 in l2 now
//     // list<int>l2(l1);
//     // Empty
//     // l1.empty();
//     // l2.empty();
//     return 0;
// }

// Stack
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     // It can be of any datatype but usually we create it of string
//     // stack<int>s1;
//     stack<string>s1;
//     // push
//     s1.push("a");
//     s1.push("p");
//     s1.push("s");
//     s1.push("h");
//     s1.push("harry");
//     // pop
//     s1.pop();
//     // top
//     s1.top();
//     // size
//     s1.size();
//     // empty
//     cout<<s1.empty();
//     return 0;
// }

// Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     // It can also be of any datatype
//     queue<string> q1;
//     // Push
//     q1.push("h");
//     q1.push("a");
//     q1.push("r");
//     q1.push("r");
//     q1.push("y");

//     // Pop
//     q1.pop();
//     // front
//     q1.front();
//     // back
//     q1.back();
//     // size
//     q1.size();
//     // empty
//     q1.empty();
//     return 0;
// }

// Priority Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     // It can also be of any datatype
//     priority_queue<int>p1;
//     // push
//     p1.push(1);
//     p1.push(2);
//     p1.push(3);
//     p1.push(4);
//     p1.push(5);
//     // pop
//     p1.pop();
//     // size
//     cout<<p1.size()<<endl;
//     // top
//     cout<<p1.top()<<endl;
//     // empty
//     cout<<p1.empty()<<endl;
//     return 0;
// }

// Set(STL)
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     // It can also of any datatype
//     set<int> s1;
//     // push
//     s1.insert(5);
//     s1.insert(4);
//     s1.insert(3);
//     s1.insert(1);
//     s1.insert(2);

//     // erase(removes the element)
//     s1.erase(4);
//     // size
//     cout<<s1.size()<<endl;
//     // count(this will check whether the element is present in set or not, if present 1 else 0)
//     cout<<s1.count(3)<<endl;
//     return 0;
// }

// Map(STL)
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int,string> m1;
//     m1[1] = "Harry";
//     m1[2] = "Sarry";
//     m1[3] = "Barry";
//     m1[4] = "Larry";
//     m1[5] = "Parry";

//     // size
//     cout<<m1.size()<<endl;
//     // insert(this is another way of insering)
//     m1.insert({6,"Karry"});
//     // count
//     m1.count(5);
//     // erase
//     m1.erase(1);
//     // find
//     m1.find(3);
//     return 0;
// }

// STL ALgorithum
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int a = 4;
//     int b = 5;
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);

//     // swap
//     swap(a, b);
//     cout<<"After Swapping : "<<a<<endl;
//     cout<<"After Swapping : "<<b<<endl;
//     // for max
//     cout<<max(a,b)<<endl;
//     // for min
//     cout<<min(a,b)<<endl;
//     // reverse
//     string s = "harry";
//     reverse(s.begin(), s.end());
//     cout<<s<<endl;
//     return 0;
// }

// Reverse a vector/array
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v1;
//     v1.push_back(4);
//     v1.push_back(12);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(11);
//     reverse(v1.begin(), v1.end());
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<v1[i]<<endl;
//     }
//     return 0;
// }

// Merge of 2 sorted arrays
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
//     int i = 0,
//     int j = 0;
//     int k = 0;
//     while(i < n && j < m) {
//         if(arr1[i] < arr2[j]){
//             arr3[k++] = arr1[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }
//     //copy first array k element ko
//     while(i < n) {
//         arr3[k++] = arr1[i++];
//     }
//     //copy kardo second array k remaining element ko
//     while(j < m) {
//         arr3[k++] = arr2[j++];
//     }
// }
// void print(int arr3[], int num) {
//     for(int i=0; i<num; i++) {
//         cout<< arr3[i] <<" ";
//     }
//     cout << endl;
// }
// int main() {
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};
//     int arr3[8] = {0};
//     merge(arr1, 5, arr2, 3, arr3);
//     print(arr3, 8);
//     return 0;
// }

// Moving zeroes
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int movezero(int arr[], int num)
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
//     movezero(arr, 10);
//     print(arr, 10);
//     return 0;
// }

// Rotating Elements of an array
// #include <iostream>
// #include <vector>
// using namespace std;
// int rotate(int arr[], int num, int key)
// {
//     vector<int> temp(num);
//     for (int i = 0; i < num; i++)
//     {
//         temp[(i + key) % num] = arr[i];
//     }
//     // This is for assigning values of temp[i] in arr[i]
//     for (int i = 0; i < num; i++)
//     {
//         arr[i] = temp[i];
//         // we put value of temp[i] which is temp[(i+k) % n] value in arr[i]
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
//     int arr[] = {11, 12, 13, 14, 15};
//     rotate(arr, 5, 3);
//     print(arr, 5);
//     return 0;
// }

// Check whether the array is sorted and rotated or not
// #include <iostream>
// using namespace std;
// int sort(int arr[], int num){
//     int count = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             count++;
//         }
//     }
//     if (arr[num - 1] > arr[0])  // This is for when we swap from arr[n-1] to arr[0]
//     {
//         count++;
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
//     sort(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// Adding 2 vectors
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> print(vector<int> a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         /* code */
//         cout << a[i] << " ";
//     }
// }

// vector<int> reverse(vector<int> arr)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start < end)
//     {
//         int temp = 0;
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         // swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     return arr;
// }

// vector<int> Getsum(vector<int> a, int m, vector<int> b, int n)
// {
//     vector<int> ans;
//     int num1 = 0, num2 = 0;
//     for (int i = 0; i < m; i++)
//     {
//         num1 = ((num1 * 10) + a[i]);
//     }

//     for (int j = 0; j < n; j++)
//     {
//         num2 = ((num2 * 10) + b[j]);
//     }

//     int sum = num1 + num2;

//     while (sum != 0)
//     {
//         ans.push_back(sum % 10);
//         sum = sum / 10;
//     }
//     return reverse(ans);
// }

// int main()
// {
//     vector<int> a;
//     vector<int> b;
//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);

//     b.push_back(6);
//     b.push_back(7);

//     vector<int> ans = Getsum(a, a.size(), b, b.size());

//     cout << "The sum is : ";
//     print(ans);
//     return 0;
// }

// Char
// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[20];
//     // If we put space, \t, \n b/w char data then it will not print the after space data it will only print before we applied space
//     cout<<"Enter elements : ";
//     cin>>arr;
//     // This is for null character means it will terminate our character at arr[2]th index after that it will not print
//     arr[2] = '\0';

//     cout<<"Your elements are : ";
//     cout<<arr<<endl;
//     return 0;
// }

// for loop in char
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter size of char : ";
//     cin>>num;
//     char arr[num];
//     cout << "Enter elements : ";
//     for (int i = 0; i < num; i++)
//     {
//       cin>>arr[i];
//     }
//     int count = 0;
//     cout<<"Your Elements are : \n";
//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i] << endl;
//         count++;
//     }
//     cout<<"The size of char is : "<<count<<endl;
//     return 0;
// }

// Swapping in char
// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter size : ";
//     cin>>size;
//     char arr[size];
//     cout<<"Enter elements : ";
//     for (int i = 0; i < size; i++)
//     {
//       cin>>arr[i];
//     }
//     int temp = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[9 - i];
//         arr[9 - i] = temp;
//     }
//     cout<<"The reverse of char is : \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// String
// The main difference between Character and String is that Character refers to a single letter, number, space, punctuation mark or a symbol that can be represented using a computer while String refers to a set of characters.
// #include <iostream>
// using namespace std;
// int main()
// {
//     string a = "Harry";
//     cout << a << endl;
//     cout << a.length() << endl;
//     cout << a.find("H") << endl;
//     return 0;
// }

// Check valid Palindrome
// #include <string>
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     // Check whether it is valid or not
//     bool valid(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     char toLowerCase(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//             return ch;
//         else
//         {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }
//     // Checking Palindrome or not
//     bool checkPalindrome(string a)
//     {
//         int s = 0;
//         int e = a.length() - 1;

//         while (s <= e)
//         {
//             if (a[s] != a[e])
//             {
//                 return 0;
//             }
//             else
//             {
//                 s++;
//                 e--;
//             }
//         }
//     }

//     // Basically we are starting from here
//     bool isPalindrome(string s)
//     {
//         // For removing extra character we created temp
//         string temp = "";
//         // if it is valid then in temp we will store string s contents
//         for (int j = 0; j < s.length(); j++)
//         {
//             if (valid(s[j]))
//             {
//                 temp.push_back(s[j]);
//             }
//         }
//         // Converting the content stored in temp into lowercase
//         // lowercase me kardo
//         for (int j = 0; j < temp.length(); j++)
//         {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         // check palindrome
//         return checkPalindrome(temp);
//     }
// };

// reverse the words of string & the string
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size of string : ";
//     cin>>size;
//     string s = "my name is harry";
//     int start = 0;
//     int end = size - 1;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[size] == ' ' || s[size] == '\0')             // str[i] is also correct
//         {
//             while (start <= end)
//             {
//                 swap(s[start],s[end]);
//                 start++;
//                 end--;
//             }
//         }
//         size++;  //For Next Word
//     }
//     cout<<s;
//     return 0;
// }

// Check Palindrome in String
// #include <iostream>
// #include <string.h>
// using namespace std;
// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//         return ch;
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;

//     while (s <= e)
//     {
//         if (toLowerCase(a[s]) != toLowerCase(a[e]))
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
// }
// int main()
// {
//     char a[4];
//     cout << "Enter s : ";
//     cin >> a;
//     // cout<<toLowerCase('B')<<endl;
//     // cout<<toLowerCase('C')<<endl;
//     if (checkPalindrome(a, 4))
//     {
//         cout << "Yes it is Palindrome";
//     }
//     else
//     {
//         cout << "Not a Palindrome";
//     }
//     return 0;
// }

// Replace Space in String with "@40"
// #include <iostream>
// using namespace std;

// string replaceSpaces(string str, int size)
// {
//     for (int i = 0; i < size; i++)     // str.lenght() can also be taken
//     {
//         if (str[i] == ' ')             // ' ' is for denoting spaces
//         {
//             str.replace(i, 1, "@40");  //__pos – Index of first character to replace, __n – Number of characters to be replaced, __str – String to insert.
//         }
//     }
//     return str;
// }
// int main()
// {
//     int size;
//     cout<<"Enter size of string : ";
//     cin>>size;
//     string str = "My name is Harry";
//     cout<<replaceSpaces(str, size);
//     return 0;
// }

// Find Maximum Occurence of a char in string
// #include <iostream>
// using namespace std;
// char getMaxOccCharacter(string s)
// {

//     int arr[26] = {0};

//     // create an array of count of characters
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         // lowercase
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }

//     // find maximum occ character
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
//     string s;
//     cout << "Enter your string : ";
//     cin >> s;

//     cout << getMaxOccCharacter(s) << endl;

//     return 0;
// }

// Remove occurence in a string
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     string str = "baabcbaabcbc";
//     string key = "abc";
//     while (str.length() != 0 && str.find(key) < str.length())
//     {
//         str.erase(str.find(key), key.length());
//     }
//     cout<<"The answer : "<<"'"<<str<<"'"<<endl;
//     return 0;
// }

// Remove duplicate characters in string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "acbbbccaaca";
//     int i = 0;
// 	   while(str[i] != '\0')			//  OR we can use ->  while( i<str.length() )   &   // currently at s[i] == 0 the element is not \0 so it will check, then for next and so on until the element is null character \0
// 	   {
// 		if(str[i] == str[i+1])
// 		{
// 			str.erase(i,3);
//             // If 2 same characters together then 2 here it is 3 therefore we use 3
// 			i--;	// Decrementing i to check previous pair i.e 'aa' from 'aaca' after deleting 'bb' from 'abbaca'.
// 		}
// 		else
// 		{
// 			i++;    //otherwise we will move ahead if it is not matching
// 		}
// 	   }
//     cout<<str<<endl;
//     return 0;
// }

// String Compression (V Imp.)
// #include <vector>
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     int compress(vector<char> &chars)
//     {
//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();

//         while (i < n)
//         {
//             int j = i + 1;
//             while (j < n && chars[i] == chars[j])
//             {
//                 j++;
//             }

//             chars[ansIndex++] = chars[i];

//             int count = j - i;

//             if (count > 1)
//             {
//                 string cnt = to_string(count);
//                 for (char ch : cnt)
//                 {
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             i = j;
//         }
//         return ansIndex;
//     }
// };

// Permutation String (V. Imp)
// #include <iostream>
// #include <string.h>
// using namespace std;
// class Solution{
//     private:
//     bool checkEqual(int a[26], int b[26]){
//         for (int i = 0; i < 26; i++)
//         {
//             if (a[i] != b[i])
//                 return 0;
//             }
//             return 1;
//     }
//     public:
//     bool checkInclusion(string s1, string s2){
//         int count1[26] = {0};

//         for (int i = 0; i < s1.length(); i++)
//         {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};

//         while (i < windowSize && i < s2.length())
//         {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
//         if (checkEqual(count1, count2))
//             return 1;

//         while (i < s2.length())
//         {
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;

//             char oldChar = s2[i - windowSize];
//             index = oldChar - 'a';
//             count2[index]--;

//             i++;

//             if (checkEqual(count1, count2))
//                 return 1;
//             }
//         return 0;
//         }
// };

// 2-D Array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)       // Here we will put 2*2 elements which is 4
//         {
//             cin>>arr[i][j];
//             cout<<arr[i][j]<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Some more examples of 2-D Arrays
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][2];
//     // This is another way of implementing values in 2-D array
//     // arr[0][0] = 1;
//     // arr[0][1] = 2;
//     // arr[1][0] = 3;
//     // arr[1][1] = 4;
//     // for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 2; j++)       // Here we will put 2*2 elements which is 4
//     //     {
//     //         cout<<arr[i][j]<<endl;
//     //     }
//     //     cout<<endl;
//     // }
//     // int arrays[5][2];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     for (int j = 0; j < 5; j++)
//     //     {
//     //         cin>>arrays[i][j];
//     //         cout<<arrays[i][j]<<endl;  // 5*5 = 25
//     //     }
//     //     cout<<endl;
//     // }
//     // Now let's run it for columns
//     int arrays[5][2];
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cin>>arrays[i][j];
//             cout<<arrays[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Some more examples of 2-D Arrays
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     int array[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}; // So, this is also representation of i*j
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Linear Search in 2-D Arrays
// #include <iostream>
// using namespace std;
// int isPresent(int arr[3][4], int i, int j, int key){

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int arr[3][4];
//     cout<<"Enter elements for array : ";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"The elements of array is : \n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int key;
//     cout<<"Enter the element to search : \n";
//     cin>>key;
//     // cout<<isPresent(arr, 3 , 4, 1)<<endl;
//     if (isPresent(arr, 3, 4, key))
//     {
//         cout<<"Yes element found in array";
//     }
//     else
//     {
//         cout<<"Not found in array";
//     }
//     return 0;
// }

// Row wise sum in 2-D Array
// #include <iostream>
// using namespace std;
// void printRowSum(int arr[3][3], int i, int j) {
//     cout << "Printing Row Sum -> " << endl;
//     int sum = 0;
//     for(int i=0; i<3; i++) {
//         for(int j=0; j<3; j++) {
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// void printColSum(int arr[3][3], int row, int col) {
//     cout << "Printing Column Sum -> " << endl;
//     for(int col=0; col<3; col++) {
//         int sum = 0;
//         for(int row=0; row<3; row++) {
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[3][3];
//     cout << "Enter elements of array : ";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements in array are : \n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     printColSum(arr, 3, 3); // top-bottom adding like this
//     printRowSum(arr, 3, 3); //<--> adding like this
//     return 0;
// }

// Largest Row & Column Sum
// #include <iostream>
// using namespace std;
// int printRowSum(int arr[3][3], int i, int j)
// {
//     int maxi = INT32_MIN;
//     cout << "Printing Row Sum -> " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//         if (sum > maxi)
//         {
//             maxi = sum;
//         }
//     }
//     cout<<endl;
//     cout<<"The max. sum is : ";
//     return maxi;
// }

// int printColSum(int arr[3][3], int row, int col) {
//     int max = INT32_MIN;
//     cout << "Printing Column Sum -> " << endl;
//     for(int col=0; col<3; col++) {
//         int sum = 0;
//         for(int row=0; row<3; row++) {
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//         if (sum > max)
//         {
//             max = sum;
//         }
//     }
//     cout << endl;
//     cout<<"The max. sum is : ";
//     return max;
// }

// int main()
// {
//     int arr[3][3];
//     cout << "Enter elements of array : ";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "Elements in array are : \n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout<<printColSum(arr, 3, 3)<<endl; // top-bottom adding like this
//     cout<<printRowSum(arr, 3, 3)<<endl; //<--> adding like this
//     return 0;
// }

// Wave Print in 2-D Array (V.Imp)
// ^ down ^ down(like wave)
// So in every odd index we are going bottom to top(means every 0 - second column)
// In every even index we are going top to bottom(in every first to third column)
// #include <iostream>
// #include <vector>
// using namespace std;
// int waveprint(int arr[3][3], int nrow, int ncolumn)
// {
//     vector<int> ans;
//     int a;
//     for (int j = 0; j < ncolumn; j++)
//     {
//         if (j & 1) // odd(bottom to top)
//         {
//             for (int i = nrow - 1; i >= 0; i--)
//             {
//                 ans.push_back(arr[i][j]);
//                 a = arr[i][j];
//             }
//         }
//         else
//         {
//             for (int i = 0; i < nrow; i++)
//             {
//                 ans.push_back(arr[i][j]);
//                 a = arr[i][j];
//             }
//         }
//     }
//     return a;
// }
// int main()
// {
//     int arr[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<waveprint(arr, 3, 3);
// }

// Spiral Print in 2-D Array(V. Imp but easy)
//      --------
//      | ---- |
//      | |  | |
//      | ---| |
//      -------|
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
//     public :
//     vector<int> spiralOrder(vector<vector<int> >& matrix) {

//         vector<int> ans;
//         // We made this for using push_back()
//         int row = matrix.size();    // i
//         int col = matrix[0].size(); // j

//         int count = 0;
//         int total = row*col;

//         //index initialisation
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;

//         while(count < total) {

//             //print starting row
//             for(int index = startingCol; count < total && index<=endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             //print ending column
//             for(int index = startingRow; count < total && index<=endingRow; index++) {
//                 ans.push_back(matrix[endingCol][index]);
//                 count++;
//             }
//             endingCol--;

//             //print ending row
//             for(int index = endingCol; count < total && index>=startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             //print starting column
//             for(int index = endingRow; count < total && index>=startingRow; index--) {
//                 ans.push_back(matrix[startingCol][index]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };

// Rotating whole Matrix
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         reverse(matrix.begin() , matrix.end());                          //revese array
//         for(int row = 0 ; row < matrix.size() ; row++){
//             for(int col = row + 1 ; col < matrix[0].size() ; col++){
//                 swap(matrix[row][col] , matrix[col][row]);               //swap elements
//             }
//         }
//     }
// };

// Binary Search in 2-D Array
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> >& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end  = row*col-1;

//         int mid = start + (end-start)/2;

//         while(start<=end) {

//             int element = matrix[mid / col][mid % col];

//             if(element == target) {
//                 return 1;
//             }

//             if(element < target) {
//                 start = mid+1;
//             }
//             else
//             {
//                 end = mid-1;
//             }
//              mid = start + (end-start)/2;
//         }
//         return 0;
//     }
// };

// Searching in 2-D Array (when the array is not sorted)
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> >& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col-1;

//         while(rowIndex < row && colIndex>=0 ) {
//             int element = matrix[rowIndex][colIndex];

//             if(element == target) {
//                 return 1;
//             }

//             if(element < target){
//                 rowIndex++;
//             }
//             else
//             {
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };

// Sieve of Eratosthenes (Optimized code of finding prime numbers)
// #include <bits/stdc++.h>
// using namespace std;

// void SieveOfEratosthenes(int n)
// {
//     // Create a boolean array "prime[0..n]" and initialize
//     // all entries it as true. A value in prime[i] will
//     // finally be false if i is Not a prime, else true.
//     vector<bool> prime(n + 1, true);

//   for (int p = 2; p * p <= n; p++) {


//         if (prime[p] == true) {
            
//             // Update all multiples of p greater than or
//             // equal to the square of it numbers which are
//             // multiple of p and are less than p^2 are
//             // already been marked.
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }

// // Driver Code
// int main()
// {
//     int n = 30;
//     cout << "Following are the prime numbers smaller "
//          << " than or equal to " << n << endl;
//     SieveOfEratosthenes(n);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int countPrimes(int n)
// {
//     int ans = 0;
//     vector<int> v(n + 1, true);
//     if (n == 0 || n == 1)
//     {

//         cout << "Not a Prime" << endl;
//     }
//     //               OR            //

//     // v[0] = v[1] = false;
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (v[i])
//             {
//                 ans++;
//                 for (int j = 2 * i; j < n; j = j + i)
//                     v[j] = false;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     cout << countPrimes(50000000) << endl;
//     return 0;
// }

// Euclid's Algo
// #include <iostream>
// using namespace std;
// int checkgcd(int a, int b){
//     if (a == 0)
//     {
//         return b;     // a = 0, so b is the ans.
//     }
//     else if (b == 0)
//     {
//         return a;      // b = 0, so a is the ans.
//     }
//     else
//     { // While both are not equal to 0 then we have to make one equal to 0
//         while (a != b)
//         {
//             if (a > b)
//             {
//                 a = a - b;
//             }
//             else{
//                 b = b - a;
//             }
//         }
//         return a;
//     }
// }
// int main()
// {
//     int a,b;
//     cout<<"The ans is : "<<checkgcd(72, 24)<<endl;
//     return 0;
// }

// Find Exponent a^b (Optimized way)
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

// Find Catalan Number for nth term
// #include <iostream>
// using namespace std;
// long long int catalan(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += catalan(i) * catalan(n - i - 1);
//     }
//     return sum;
// }
// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << catalan(i) << endl;
//     }
//     return 0;
// }

// Pointers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     double b = 1.0;
//     double *ptrr = &b;
//     cout<<"Address is : "<<ptr<<endl;
//     cout<<"Address is : "<<&a<<endl;
//     cout<<"Address is : "<<ptrr<<endl;
//     cout<<"Address is : "<<&b<<endl;
//     cout<<"Value is : "<<*ptr<<endl;
//     cout<<"Value is : "<<a<<endl;
//     cout<<"Value is : "<<*ptrr<<endl;
//     cout<<"Value is : "<<b<<endl;
//     return 0;
// }

// More Examples of Pointer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout<<"Before Incrementing value is : \n";
//     cout<<"Address is : "<<ptr<<endl;
//     cout<<"Value is : "<<*ptr<<endl;
//     cout<<"Size is : "<<sizeof(ptr)<<endl;
//     // This will increase the value of ptr not the address
//     (*ptr)++;
//     // If we want to increase the value of address then we have to write like this
//     ptr++;
//     cout<<"After Incrementing value is : \n";
//     cout<<"Address is : "<<ptr<<endl;
//     cout<<"Value is : "<<*ptr<<endl;
//     cout<<"Size is : "<<sizeof(ptr)<<endl;

//     int *ptrr = ptr;       // Copying pointer
//     cout<<"Address is : "<<ptrr<<endl;
//     cout<<"Value is : "<<*ptrr<<endl;
//     cout<<"Size is : "<<sizeof(ptrr)<<endl;
//     // This will increase the value of ptr not the address
//     (*ptrr)++;
//     cout<<"Value is : "<<*ptrr<<endl;
//     cout<<"Address is : "<<ptrr<<endl;
//     // If we want to increase the value of address then we have to write like this
//     ptrr++;
//     cout<<"Value is : "<<*ptrr<<endl;
//     cout<<"Address is : "<<ptrr<<endl;
//     return 0;
// }

// Diff. b/w array and pointers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};      // 5*4 = 20 size of array
//     cout<<sizeof(arr)<<endl;
//     int *ptr = &arr[0];            // Pointed only towards 0th index therefore size is 4
//     cout<<sizeof(*ptr)<<endl;
//     // All three meaning is same
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     return 0;
// }

// Character Pointers
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int arr[5] = {1,2,3,4,5};
//     // int *ptr = arr;
//     // cout<<arr<<endl;
//     // char ch[6] = "abcde";     // Here we have 1 null character also
//     // For character array the implementation is diff. so when we print charac. array variable name then we will get its content printed
//     // cout<<ch<<endl;
//     // char *ptr = ch;
//     // Now we assigned first character of char and that will print
//     // cout<<(*ptr)<<endl;
//     // char *ptr = &ch[0];
//     // Here we were expecting that it will print address of char, but it printed it's content
//     // cout<<ptr<<endl;

//     // char c = 'T';
//     // cout<<c<<endl;
//     // char *ptr = &c;
//     // This will print anything until it will get /0(null character)
//     // cout<<ptr<<endl;
//     // This will print the character
//     // cout<<*ptr<<endl;
//     return 0;
// }

// Function Pointers
// #include <iostream>
// using namespace std;
// int print(int *ptr)
// {
//     (*ptr) = 10;    // This will do change in main() also
//     // cout<<"The value of ptr : "<<(*ptr)<<endl;        // If we print the change here it will be seen in call by value also but not in main()
//     // cout<<"The address of ptr : "<<ptr<<endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     // This is how we basically send the address of a variable to a function and this is called call by reference now whatever changes we will do in print() will reflect changes in main() also
//     // int *ptr = &n;       // This is basically assigning address of n in ptr now we are sending that to the print()
//     // print(ptr);
//     print(&n);
//     cout << n << endl;    //This will print 10
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int n)
// // (int n)  both are same here basically
// {
//     n = 10;
//     // cout<<"The value of ptr : "<<(*ptr)<<endl;
//     // cout<<"The address of ptr : "<<ptr<<endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
//     cout << n << endl;
//     return 0;
// }

// Double Pointer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout<<*ptr<<endl;
//     cout<<ptr<<endl;
//     // This is how we point double pointer towards single pointer
//     int **ptrr = &ptr;
//     cout<<**ptrr<<endl;
//     cout<<ptrr<<endl;
//     // This is how we point triple pointer towards double pointer
//     int ***ptrrr = &ptrr;
//     cout<<***ptrrr<<endl;
//     cout<<ptrrr<<endl;
//     int ****ptrrrr = &ptrrr;
//     // This is how we point 4th pointer towards third pointer
//     cout<<****ptrrrr<<endl;
//     cout<<ptrrrr<<endl;
//     return 0;
// }

// Double Pointer and Functions
// #include <iostream>
// using namespace std;
// int print(int *ptr){
//     (*ptr) = 10;           // This will do changes as it is come as (call by reference)
//     // ptr = ptr + 1;      //This will not do any changes as it come as (call by value)
// }
// int print1(int **ptrr){
//     (**ptrr) = 15;           // This will do changes as it come as (call by reference)
//     // ptrr = ptrr + 1;      //This will not do any changes as it come as (call by value)
// }
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout<<"Before : "<<a<<endl;
//     print(ptr);
//     cout<<"After : "<<a<<endl;
//     int **ptrr = &ptr;
//     cout<<"Before : "<<a<<endl;
//     print1(ptrr);
//     cout<<"After : "<<a<<endl;
//     return 0;
// }

// Question on Pointers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     *(1 + arr) = 5;
//     // Both will work
//     cout<<*(1 + arr)<<endl;
//     cout<<*(arr + 1)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     int *ptrr = ptr;
//     // This also works no need that you always have to write &ptr for assigning pointer to another pointer
//     (*ptrr)++;
//     cout<<a<<endl;      // 6
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     int *ptrr = ptr;
//     // This also works no need that you always have to write &ptr for assigning pointer to another pointer
//     cout<<(*ptrr)++<<endl;     //This is post increment therefore it will be 5 only
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 8;
//     int b = 11;
//     int *ptr = &b;
//     a = *ptr;
//     // This also works no need that you always have to write &ptr for assigning pointer to another pointer
//     *ptr = *ptr + 2;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3] = {1,2,3};
//     int *ptr = arr;
//     // This will print element at 2nd index of array
//     cout<<ptr[2]<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'a';
//     char *ptr = &ch;
//     ch++;       // b
//     (*ptr)++;   // c
//     (*ptr)++;   // d
//     ch++;       // e
//     cout<<*ptr<<endl;
//     cout<<ch<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "abcde";
//     char *ptr = &arr[0];
//     cout<<ptr<<endl;     // will print abcde
//     (*ptr)++;
//     cout<<*ptr<<endl;     // will print b
//     ptr++;
//     cout<<ptr<<endl;     // will print bcde
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "Harry";
//     char *ptr = arr;
//     cout<<arr[0]<<endl;       //Will print "H" which is at 0th index
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 110;
//     int *ptr = &a;
//     int **ptrr = &ptr;
//     int b = (**ptrr)++ + 9;
//     cout<<a<<" "<<b<<endl;       // 111 and 119
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
//     int *ptr = &a;
//     int **ptrr = &ptr;
//     int b = ++(**ptrr);
//     int *ptrrr = *ptrr;
//     ++(*ptrrr);
//     cout<<a<<" "<<b<<endl;     // 102 and 101
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int print(int **ptr){
//     ++(**ptr);
// }
// int main()
// {
//     int a = 110;
//     int *ptr = &a;
//     print(&ptr);
// If we have one *pointer imported from main() to print() it will show error
//     cout<<a<<endl;    // 111
//     return 0;
// }

// Reference Variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     // Reference Variable
//     int &b = a;     // This is how we allocate value of a in b
//     // int b = &a;  // This is wrong
//     cout<<b<<endl;
//     b++;
//     a++;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// }

// Local Variable
// #include <iostream>
// using namespace std;
// int fun(int n){
//     int *ptr = &n;
//     return ptr;       // because this is local variable (so it will not do any change in main())
// }
// int main()
// {
//     int n = 5;
//     fun(n);
//     cout<<n<<endl;
//     return 0;
// }

// 2-D Arrays Memory Allocation
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     // This is wrong practice of allocating memory to an 2-D array
//     return 0;
// }

// Dynamic Memory Allocation in 2-D Array
// This is correct method of allocating memory to an 2-D array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of row : \n";
//     cin>>n;
//     int m;
//     cout<<"Enter the size of column : \n";
//     cin>>m;
//     int **ptr = new int*[n];
//     // Creation
//     for (int i = 0; i < n; i++)
//     {
//         ptr[i] = new int[n];
//     }
//     // Assigning Input
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter value of %dth row : ", i);
//         for (int j = 0; j < m; j++)
//         {
//             cin>>ptr[i][j];
//         }
//     }
//     // Printing
//     cout<<"The output is : \n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // This will free the array
//     delete []ptr;
//     return 0;
// }

// Macros
// It is a peice of code in a program that is replaced by value of macro
// #include <iostream>
// #define PI 3.14
// using namespace std;
// int main()
// {
//     double radius = 5;
//     double Areaaofcircle = PI * radius * radius;
//     cout<<"Area of circle is : "<<Areaaofcircle<<endl;
//     return 0;
// }

// Why this not works?
// Because we did call by value not call by reference
// #include <iostream>
// using namespace std;
// int function(int a, int b){
//     a++;
//     b++;
//     cout<<a<<" "<<b<<endl;
// }
// int main()
// {
//     int a = 5;
//     int b = 5;
//     function(a, b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// Inline Functions
// They are used to reduce the function calls overhead
// In inline function, function calls get replaced by function body

// Recursion
// When a function calls itself is called as recursion for ex -> Catalan numbers and Factorial numbers code
// In base case return is mandatory
// When there is base case then it will stop the code when we get the result but when we don't have base case in that case we will get stack overflow that will cause (Segmentation Fault) means(never ending output keep on printing) that's why base case is mandatory
// #include <iostream>
// using namespace std;
// int factorial(int num)
// {
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * factorial(num - 1));
//     }
// }
// int main()
// {
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     printf("Factorial of %d is %d", num, factorial(num));
//     return 0;
// }

// Recurssion Tree of Factorial
// 4 = 4 --> 3 --> 2 --> 1 --> 0
// 4 = 4 * 3 * 2 * 1 = 24

// Power of 2^n using Recursion
// #include <iostream>
// using namespace std;
// int power(int num){
//     if (num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (2 * power(num - 1));
//     }
// }
// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     cout<<"Power of 2^n is : "<<power(num);
//     return 0;
// }

// Print Counting
// Recursion Tree of Print Counting num = num get printed then num - 1 then it got printed then num - 1 then it got printed then again num - 1 until it becomes equal to 0 (where 0 will print 1)
// #include <iostream>
// using namespace std;
// int count(int num){
//     if (num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         cout<<num<<endl;   // we did this so that the number we will put will also get printed else it will start printing from n-1 always
//         count(num - 1);
//     }
// }
// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     count(num);
//     return 0;
// }

// Fibonacci Series
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 0;
//     int b = 1;
//     int Fibonacci;
//     cout<<"The Fibonacci series is : "<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         Fibonacci = a + b;
//         cout<<Fibonacci<<" ";
//         a = b;
//         b = Fibonacci;
//     }
//     return 0;
// }

// Climb Stairs either by 1 jump on stairs or by 2 jump on stairs --> F(n - 1) + F(n - 2)
// #include <iostream>
// using namespace std;
// int stairs(int num){
//     if (num < 0)      // less than 0 or equal to 0 stairs
//     {
//         return 0;
//     }
//     else if (num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (stairs(num - 1) + stairs(num - 2));
//     }
// }
// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     cout<<stairs(num)<<endl;
//     return 0;
// }

// Say Digits
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
//         num = num / 10;         // This will now have the number which it will match in array and then give the output from it
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

// Sorted Array or Not? using Recursion
// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     if (size == 0 || size == 1)       // when array has no element and 1 element that means it is sorted for sure
//     {
//         return true;
//     }
//     else if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool ans = isSorted(arr + 1, size - 1);     // {1,2,3,4,5}
//         return ans;                                 //   {^ | | |}  this will check with rest of elements
//     }                                               //     {^ | |}  this will check with rest of elements
// }                                                   //       {^ |}  this will check with rest of elements
// int main()
// {
//     int arr[5] = {2,4,6,8,9};
//     int size = 5;
//     cout<<isSorted(arr, size)<<endl;;
//     return 0;
// }

// Sum of Array using Recursion
// #include <iostream>
// using namespace std;
// int Sum(int arr[], int n)
// {
//     // Base case
//     if (n == 1)
//         return arr[0];
//     int sum = arr[n - 1] + Sum(arr, n - 1);
//     return sum;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout<<"Sum of Array is : "<<Sum(arr, 5)<<endl;
//     return 0;
// }

// Linear Search using Recursion
// #include <iostream>
// using namespace std;
// bool LinearSearch(int arr[], int size, int key){
//     if (size == 0)
//     {
//         return false;
//     }
//     else if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         bool ans = LinearSearch(arr + 1, size - 1, key);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[] = {3,5,1,2,6};
//     int key;
//     cout<<"Enter key : ";
//     cin>>key;
//     if(LinearSearch(arr, 5, key)){
//         cout<<"Key is present in array";
//     }
//     else
//     {
//         cout<<"Key is not present in array";
//     }
//     return 0;
// }

// Binary Search using Recursion
// #include <iostream>
// using namespace std;
// bool binarySearch(int arr[], int start, int end, int key)
// {
//     // Base Case
//     if (start > end) // out of array
//     {
//         return false;
//     }
//     int mid = start + (end - start) / 2;
//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     else if (arr[mid] < key)
//     {
//         return binarySearch(arr, mid + 1, end, key);
//     }
//     else
//     {
//         return binarySearch(arr, start, mid - 1, key);
//     }
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 10, 14, 16, 18};
//     if (binarySearch(arr, 0, 6, 14))
//     {
//         cout << "Key is present in array";
//     }
//     else
//     {
//         cout << "Key is not present in array";
//     }
//     return 0;
// }

// Book Allocation using Recursion
// #include<iostream>
// using namespace std;
// bool isPossible(int arr[], int n, int m, int mid){
// 	int pageSum = 0;
//     int studentCount = 1;

//     for(int i=0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }else{
//             studentCount++;
//             if(studentCount>m || arr[i] > mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }

//     return true;
// }

// int allocateBooks(int arr[], int n, int m, int s, int e, int *p){
// 	if(s>e){
// 		return *p;
// 	}
// 	int mid = s+(e-s)/2;
// 	if(isPossible(arr, n, m, mid)){
// 		*p = mid;
// 		allocateBooks(arr, n, m, s, mid-1, p);
// 	}else{
// 		allocateBooks(arr, n, m, mid+1, e, p);
// 	}
// }

// int main(){
// 	int arr[4] = {10,20,30,40};
// 	int n=4, m=2;
// 	int sum = 0;
// 	for(int i=0; i<n; i++){
// 		sum += arr[i];
// 	}
// 	int ans = -1 ;
// 	ans = allocateBooks(arr, n, m, 0, sum, &ans);

// 	cout<<ans;
// 	return 0;
// }

// Pivot Element using Recursion
// #include<iostream>
// using namespace std;

// int pivot(int arr[], int s, int e){

// 	if(s>=e){
// 		return s;
// 	}

// 	int mid = s+(e-s)/2;

// 	if(arr[mid] < arr[mid+1]){
// 		return pivot(arr, mid+1, e);
// 	}else{
// 		return pivot(arr, s, mid);
// 	}
// }

// int main(){
// 	int arr[7] = {3,4,5,1,2,4,3};
// 	int ans = pivot(arr, 0, 6);
// 	cout<<"pivot index is: "<<ans;
// 	return 0;
// }

// Reverse String using Recursion
// #include <iostream>
// using namespace std;
// int reverse(string &s, int start, int end){             // we have to import its address then only the change happening here will show effect in main()
//     if (start > end)
//     {
//         return 0;
//     }
//     else
//     {
//         swap(s[start], s[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     string s = "Harry";
//     reverse(s, 0, s.length() - 1);
//     cout<<"The reversed string is : "<<s<<endl;
//     return 0;
// }

// Check Palindrome using Recursion
// #include <iostream>
// using namespace std;
// char isLowercase(char s){
//     char temp;
//     if (s >= 'a' && s <= 'z')
//     {
//         return s;
//     }
//     else
//     {
//         temp = s - 'A' + 'a';
//         return temp;
//     }
// }
// bool isPalindrome(string &s, int start, int end)
// {
//     if (start > end)
//     {
//         return true;
//     }
//     else if (isLowercase(s[start]) != isLowercase(s[end]))
//     {
//         return false;
//     }
//     else
//     {
//         return isPalindrome(s, start + 1, end - 1);
//     }
// }
// int main()
// {
//     string s = "NooN";
//     if (isPalindrome(s, 0, s.length() - 1))
//     {
//         cout << "Yes it is a palindrome";
//     }
//     else
//     {
//         cout << "Not a palindrome";
//     }
//     return 0;
// }

// Calculating Exponential Powers using Recursion
// #include <iostream>
// using namespace std;
// int Power(int a, int b)
// {
//     if (b < 1)
//     {
//         return 1;
//     }
//     int ans = Power(a, b / 2);
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         return a * ans * ans;
//     }
// }
// int main()
// {
//     int a, b;
//     cout << "Enter value of a and b : ";
//     cin >> a >> b;
//     cout << "Answer is : " << Power(a, b) << endl;
//     return 0;
// }

// Bubble Sort using Recursion
// #include <iostream>
// using namespace std;
// int sort(int arr[], int size){
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]  > arr[i + 1])
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
//     sort(arr, size - 1);     // in bubble sort we always want the greatest element reach to the end of the array that's why we are calling size - 1 for next steps
// }
// int main()
// {
//     int arr[] = {5,1,7,8,10};
//     sort(arr, 5);
//     cout<<"Sorted Array is : \n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// Selection Sort using Recursion
// #include <iostream>
// #include<climits>
// using namespace std;

// void selectionSort(int* arr, int n)
// {
//     if(n==0 || n==1)
//     {
//         return;
//     }
//     int min = INT_MAX;
//     int ans = 0;
//     for(int i = 0;i<n;i++)
//     {
//         if(arr[i] < min)
//         {
//             min = arr[i];
//             swap(arr[0],arr[i]);
//         }
//     }
//     selectionSort(arr+1,n-1);
// }

// int main()
// {
//     int arr[] = {1,22,3,44,5};
//     cout<<"Before sorting"<<endl;
//     for(int i= 0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     selectionSort(arr,5);
//     cout<<endl<<"After sorting"<<endl;
//     for(int i= 0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Insertion Sort using Recursion
// #include <iostream>
// using namespace std;

// void insertionSort(int *arr, int n, int i)
// {
//     if (i == n || n == 0)
//     {
//         return;
//     }
//     int x = arr[i];
//     int ans = i;
//     for (int j = i - 1; j >= 0; j--)
//     {
//         if (arr[j] > x)
//         {
//             ans = j;
//         }
//     }
//     for (int j = i; j > ans; j--)
//     {
//         arr[j] = arr[j - 1];
//     }

//     arr[ans] = x;
//     insertionSort(arr, n, ++i);
// }

// int main()
// {
//     int arr[] = {1, 22, 3, 44, 5};
//     cout << "Before sorting" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     insertionSort(arr, 5, 1);
//     cout << "After sorting" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Merge Sort
// #include <iostream>
// using namespace std;
// void merge(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;   // This is for left side
//     int len2 = end - mid;         // This is for right side

//     int *ptr = new int[len1];     // creating new array after diving them
//     int *ptrr = new int[len2];    // creating new array after dividing them

//     int mainArrayIndex = start;
//     // This for loop will help in putting element of left side after dividing by mid in left array
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     // This for loop will help in putting element of right side after dividing by mid in right array
//     for (int i = 0; i < len2; i++)
//     {
//         ptrr[i] = arr[mainArrayIndex++];
//     }
//     // Merge 2 sorted array concept using here
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = start;
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
// int sort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return 0;
//     }
//     int mid = start + (end - start) / 2;
//     // Left side sorting
//     sort(arr, start, mid);

//     // Right part sorting
//     sort(arr, mid + 1, end);

//     // Merge
//     merge(arr, start, end);
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

// Inversions(Counting) in an array using Merge Sort
// #include <iostream>
// using namespace std;
// int merge(int arr[], int s, int e)
// {

//     int mid = s + (e - s) / 2;
//     int inversion = 0;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *ptr = new int[len1];
//     int *ptrr = new int[len2];
//     int mainIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         ptr[i] = arr[mainIndex++];
//     }

//     mainIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         ptrr[i] = arr[mainIndex++];
//     }
//     Using Merge Sort Concept
//     mainIndex = s;
//     int index1 = 0;
//     int index2 = 0;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (ptr[index1] < ptrr[index2])
//         {
//             arr[mainIndex++] = ptr[index1++];
//         }
//         else
//         {
//             arr[mainIndex++] = ptrr[index2++];
//             inversion += len1 - index1;
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[mainIndex++] = ptr[index1++];
//     }

//     while (index2 < len2)
//     {
//         arr[mainIndex++] = ptrr[index2++];
//     }
//     return inversion;
// }
// int mergeSort(int arr[], int s, int e)
// {
//     if (s >= e)
//     {
//         return 0;
//     }

//     int mid = s + (e - s) / 2;
//     int inversion = 0;

//     // left part

//     inversion += mergeSort(arr, s, mid);

//     // right part

//     inversion += mergeSort(arr, mid + 1, e);

//     // merge

//     inversion += merge(arr, s, e);

//     return inversion;
// }

// int main()
// {
//     int size;
//     cout<<"Enter size of array : ";
//     cin>>size;
//     int arr[5] = {1,22,3,44,5};

//     int inv = mergeSort(arr, 0, size - 1);

//     cout << inv << endl;

//     return 0;
// }

// Quick Sort(Divide & Conqueror Algorithm) & (T.C -> N log N) & (S.C -> O(1))
// #include <iostream>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int pivot = arr[start];       // we always assign first element in pivot
//     int count = 0;
//     for (int i = start + 1; i <= end; i++) // from start+1 to end, we will run loop
//     {
//         if (arr[i] <= pivot)     // if 0th element is <= arr[i] other index elements then increase count++
//         {
//             count++;
//         }
//     }
//     // Place pivot at right position
//     int pivotindex = start + count;
//     swap(arr[pivotindex], arr[start]); // swap will be done if at i > p and j < p then we will swap each other

//     // For Handling Left and Right Part
//     while (start < pivotindex && end > pivotindex) // this tells that if start < pivotindex and j > pivotindex then we will run the loop
//     {
//         if (arr[start] < pivot)
//         {
//             start++;
//         }
//         if (arr[end] > pivot)
//         {
//             end--;
//         }
//         if (start < pivotindex && end > pivotindex) // and if both above cases are wrong then we will swap it because then i > mid && j < mid;
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
//     int p = partition(arr, start, end);

//     // Left side
//     sort(arr, start, p - 1);

//     // right side
//     sort(arr, p + 1, end);
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

// Power Set of an array
// {1,2,3} = {[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]}
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
//     {                                                                                       // we have to put &ans because we have to return this so we need call by reference
//         if (index >= arr.size()) // The moment it's index will go out of array then close the loop but before that store the output in ans array
//         {
//             ans.push_back(output);
//             return 0;
//         }
//         // Exclude case we are just returning same thing and moving forward to next index
//         solve(arr, output, index + 1, ans);
//         // Include case we are adding an element in output and then moving to next index
//         int element = arr[index];
//         output.push_back(element);
//         solve(arr, output, index + 1, ans);
//     }
// public:
//     vector<vector<int>> subsets(vector<int> &arr)
//     {
//         // We will store every ans (power set in this ans)
//         vector<vector<int>> ans;
//         // This is output array which we will left same while excluding and add element while including
//         vector<int> output;
//         int index = 0;
//         solve(arr, output, index, ans);
//         return ans;
//     }
// };

// Subsequences of String
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(vector<string> &ans, string str, string output, int index)         // Call by Reference therefore we put &ans
//     {
//         // Base case
//         if (index >= str.length())
//         {
//             // It does'nt want empty string in it's output string therefore we put this if condition, that when index > 0 then only we will pushback output in ans
//             if (output.length() > 0)
//             {
//                 ans.push_back(output);
//                 return 0;
//             }
//         }
//         // Exclude case, we are just returning same thing and moving one index ahead
//         solve(ans, str, output, index + 1);

//         // Include case we are adding that thing in output and then moving forward
//         char element = str[index];
//         output.push_back(element);
//         solve(ans, str, output, index + 1);
//     }
// public:
//     vector<string> subsequences(string str)
//     {
//         // In this will store all output
//         vector<string> ans;
//         // This is output string which will be empty in exclude case and in include it will include something in it
//         string output = "";
//         int index = 0;
//         solve(ans, str, output, index);
//         return ans;
//     }
// };

// Phone Keypad Problem
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(string digit, string output, int index, vector<string> &ans, string arr[])   // Call by Reference because we have to return ans
//     {
//         if (index >= digit.length())        // if index >= length of digit that means we are outside the string so now store that output and come out of the loop
//         {
//             ans.push_back(output);
//             return;
//         }
//         // So, that we can get equivalent <int> of that string
//         int number = digit[index] - '0';
//         string value = arr[number];
//         // Now we run a for loop where it will add the value[i] in output and that output will store in ans and that we will return as it is, because we did call by refernece &ans
//         for (int i = 0; i < value.length(); i++)
//         {
//             output.push_back(value[i]);
//             solve(digit, output, index + 1, ans, arr);
//             // After adding in include case we have to go backwards for exclude case / some other case therefore we have to use popback() so that we will back into empty state
//             // if we don't do this then suppose in include case if we add d in empty string ["34", "d"] now if we don't popback() it will remain in that empty string (output) and for the next include case it will become suppose ["34", "de"]; which we don't want
//             output.pop_back();
//         }
//     }
// public:
//     vector<string> letterCombinations(string digit)
//     {
//         // We created a ans string where we will store all the output
//         vector<string> ans;
//         // We checked wether the given digit or string is empty or not
//         if (digit.length() == 0)
//         {
//             return ans;
//             // If yes then return the ans
//         }
//         string output;
//         int index = 0;
//         // This is the array
//         string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         solve(digit, output, index, ans, arr);
//         return ans;
//     }
// };

// Permutations of String (V.Imp)
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solve(vector<int> arr, vector<vector<int>> &ans, int index)       // we will return ans therefore we did call by reference &ans
//     {
//         // Base case
//         if (index >= arr.size())       // if index >= size of string then we will return the ans and come out of the loop
//         {
//             ans.push_back(arr);
//             return;
//         }
//         // We run the loop from index = 0 to the size of string(n-1)
//         for (int i = index; i < arr.size(); i++)
//         {
//             // Swapping arr[index] with arr[i]
//             swap(arr[index], arr[i]);
//             // After swapping we will move to the next element
//             solve(arr, ans, index + 1);
//             // Backtracking is done here just because once we do swap of suppose abc --> bac then we have to go to its original state and for that we will again swap things back to normal like we did in previous question
//             swap(arr[index], arr[i]);
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int> &arr)
//     {
//         // We created a ans vector where we will store output
//         vector<vector<int>> ans;
//         int index = 0;
//         solve(arr, ans, index);
//         return ans;
//     }
// };

// Rat in Maze
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &arr)
//     {
//         if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && arr[x][y] == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void solve(vector<vector<int>> &arr, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
//     {
//         if (x == n - 1 && y == n - 1)
//         {
//             ans.push_back(path);
//             return;
//         }
//         visited[x][y] = 1;

//         // Rat have 4 choices whether to go // L , R , D , U
//         // Down
//         int newx = x + 1;
//         int newy = y;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('D');
//             solve(arr, n, ans, newx, newy, visited, path);
//             path.pop_back();
//         }
//         // Left
//         newx = x;
//         newy = y - 1;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('L');
//             solve(arr, n, ans, newx, newy, visited, path);
//             path.pop_back();
//         }
//         // Right
//         newx = x;
//         newy = y + 1;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('R');
//             solve(arr, n, ans, newx, newy, visited, path);
//             path.pop_back();
//         }
//         // Up
//         newx = x - 1;
//         newy = y;
//         if (isSafe(newx, newy, n, visited, arr))
//         {
//             path.push_back('U');
//             solve(arr, n, ans, newx, newy, visited, path);
//             path.pop_back();
//         }
//         visited[x][y] = 0;
//     }
// public:
//     vector<string> findPath(vector<vector<int>> &arr, int n)
//     {
//         vector<string> ans;
//         if (arr[0][0] == 0)
//         {
//             return ans;
//         }
//         // The place from where rat will start
//         int x = 0;
//         int y = 0;
//         // This is another array whose name is visited which have all values false in begining
//         vector<vector<int>> visited = arr;
//         // Initialise with 0
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 visited[i][j] = 0;
//             }
//         }
//         string path = "";
//         solve(arr, n, ans, x, y, visited, path);
//         // We sort this so that we get the proper order of path which the rat followed
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };

// What is OOPS?
// Object is such an entity which have some properties and some behaviour
// Class is user defined data types
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     void display()
//     {
//         cout << "I am Hero";
//     }
// };
// int main()
// {
//     Hero Harry;
//     Harry.display();
//     cout<<endl;
//     // So, when your class is empty means there is void class then it's size will 1
//     cout<<sizeof(Harry)<<endl;
//     return 0;
// }

// When class have any data in it then size of that object will be equal to the value assigned to it
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     int a = 5;
// };
// int main()
// {
//     Hero Harry;
//     cout << sizeof(Harry) << endl;
//     return 0;
// }

// More Example of OOPS
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     int a = 5;
//     void display(){
//         cout<<"I am Hero";
//     }
// };
// int main()
// {
//     // Static
//     // Hero Harry;
//     // cout << sizeof(Harry) << endl;
//     // Dynamic
//     Hero *ptr = new Hero;
//     (*ptr).display();
//     ptr->display();
//     return 0;
// }

// OOPS Full Concept
// #include<iostream>
// using namespace std;

// class Hero {

//     //properties
//     private:
//     int health;

//     public:
//     char *name;
//     char level;
//     static int timeToComplete;

//     Hero() {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }

//     //Paramerterised Constructor
//     Hero(int health) {
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         this -> level = level;
//         this -> health = health;
//     }

//     //copy constructor
//     Hero(Hero& temp) {

//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout << "Copy constructor called" << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print(){
//         cout << endl;
//         cout << "[ Name: " << this->name<< " ,";
//         cout << "health: " << this->health << " ,";
//         cout <<"level: " << this->level << " ]";
//         cout << endl << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     void setLevel(char ch) {
//         level = ch;
//     }

//     void setName(char name[]) {
//         strcpy(this->name, name);
//     }

//     static int random() {
//         return timeToComplete ;
//     }

//     //Destructor
//     ~Hero() {
//         cout << "Destructor bhai called" << endl;
//     }

// };

// int Hero::timeToComplete = 5;

// int main() {

//     //cout << Hero::timeToComplete << endl;
//     cout << Hero::random() << endl;

//     // Hero a;

//     // cout << a.timeToComplete << endl;

//     // Hero b;
//     // b.timeToComplete = 10 ;
//     // cout  << a.timeToComplete << endl;
//     // cout << b.timeToComplete << endl;

//     // //Static
//     // Hero a;

//     // //Dynamic
//     // Hero *b = new Hero();
//     // //manually destructor call
//     // delete b;

// //     Hero hero1;

// //     hero1.setHealth(12);
// //     hero1.setLevel('D');
// //     char name[7] = "Babbar";
// //     hero1.setName(name);

// //     //hero1.print();

// //     //use default copy constructor

// //     Hero hero2(hero1);
// //     //hero2.print();
// // //    Hero hero2 = hero1;

// //     hero1.name[0] = 'G';
// //     hero1.print();

// //     hero2.print();

// //     hero1 = hero2;

// //     hero1.print();

// //     hero2.print();

//     // //Hero tt;

//     // //object created statically
//     // Hero ramesh(10);
//     // //cout << "Address of ramesh " << &ramesh << endl;
//     // ramesh.print();

//     // //dynamically
//     // Hero *h =  new Hero(11);
//     // h->print();

//     // Hero temp(22, 'B');
//     // temp.print();

//     /*
//     //static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << "level is  " << a.level << endl;
//     cout << " health is " << a.getHealth() << endl;

//     //dynamicallly
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(70);
//     cout << "level is  " << (*b).level << endl;
//     cout << " health is " << (*b).getHealth() << endl;

//     cout << "level is  " << b->level << endl;
//     cout << " health is " << b->getHealth() << endl;
//     */
//     // //creation of Object
//     // Hero ramesh;
//     // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

//     // cout << "Ramesh health is " << ramesh.getHealth() << endl;
//     // //use setter
//     // ramesh.setHealth(70);
//     // ramesh.level = 'A';
//     // cout << "health is: " << ramesh.getHealth() << endl;
//     // cout << "Level is: " << ramesh.level << endl;
//     // //cout << "size : " << sizeof(h1) << endl;
//     return 0;
// }

// Destructor and Constructor in DMA and SMA
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     Hero()
//     {
//         cout<<"Constructor called"<<endl;
//     }
//     ~Hero()
//     {
//         cout << "Destructor called"<<endl;
//     }
// };
// int main()
// {
//     // Static
//     // In static when we call constructor then destructor automatically runs
//     Hero Harry;
//     // Dynamic
//     // In dynamic destructor does'nt automatically calls
//     Hero *ptr = new Hero();
//     // Here we have to call it manually by writing delete and pointer name
//     delete ptr;
//     return 0;
// }

// Static Keyword
// When we create static member using static keyword then we don't have to create object to access it
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     static int a;
//     void display(){
//         cout<<"I am Hero"<<endl;
//     }
// };
// // This is how we can intialize a static data member
// int Hero::a = 5;
// int main()
// {
//     Hero Harry;
//     // Harry.a;
//     Harry.display();
//     // This is how we can print a static data member
//     cout<<Hero::a<<endl;
//     return 0;
// }

// Static Function
// #include <iostream>
// using namespace std;
// class Hero
// {
// public:
//     static int a;
//     int b = 5;
//     // They can only access static members
//     static int print(){
//         cout<<"I am Hero"<<endl;
//     }
//     Hero(){
//         cout<<b<<endl;
//     }
// };
// // Here, we initialize static member data
// int Hero::a = 5;
// int main()
// {
//     // Constructors get automaticaaly evoked in static and dynamic both but not for destructors it is only evoked in static in dynamic we have to manually evoke them using delete then ptr name
//     Hero Harry;
//     Harry.print();
//     // cout<<Harry.a<<endl;    // we can print like this also but this is not correct way
//     cout<<Hero::a<<endl;    // This is correct method/way of printing a static member function
//     return 0;
// }

// Encapuslation
// #include <iostream>
// using namespace std;
// class Solution{
//     private:
//        int a;
//        int b;
//     public:
//        int c = 5;
//        void display(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
// };
// int main()
// {
//     Solution ans;
//     // ans.a = 5;    // we cannot access this because it is private until we make it public or protected
//     // ans.b = 5;
//     ans.c = 10;      // we can access this as it public class
//     ans.display();
//     return 0;
// }

// Polymorphism
// Compile Time Polymorphism
// Function Overloading
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     void sayhello()
//     {
//         cout << "Hello Harry" << endl;
//     }
//     void sayhello(int a)
//     {
//         cout << "Hello Sarry" << endl;
//     }
//     int sayhello(int a, int b){
//         cout<< "Hello Larry"<<endl;
//     }
// };
// int main()
// {
//     Solution Harry;
//     // We cannot run func of same name
//     Harry.sayhello();
//     // But if i give argument to one func then it will become diff. so then it will run
//     Harry.sayhello(5);
//     Harry.sayhello(5, 10);
//     return 0;
// }

// Operator Overloading
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     int a;
//     int b;
//     int add()
//     {
//         return a + b;
//     }
//     void operator+ (Solution &obj){
//         int value = this->a;
//         int value1 = obj.a;
//         cout<<"Output is : "<<value1 + value<<endl;
//     }
//     void operator- (Solution &obj){
//         int value = this->a;
//         int value1 = obj.a;
//         cout<<"Output is : "<<value1 - value<<endl;
//     }
//     void operator() (){
//         cout<<"This is Bracket"<<endl;
//     }
// };
// int main()
// {
//     Solution Harry, Sarry;
//     Harry.a = 5;
//     Sarry.a = 10;
//     Harry + Sarry;
//     Harry - Sarry;
//     Harry();
//     Sarry();
//     return 0;
// }

// Run Time Polymorphism
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void speak()
//     {
//         cout << "Barking" << endl;
//     }
// };
// int main()
// {
//     // So, at runtime we can see it is doing function overriding by using it's own class name and then calling it's function
//     Animal Harry;
//     Harry.speak();
//     Dog Sarry;
//     Sarry.speak();
//     return 0;
// }

// Linked List
// Sentinel indicates the end of the list
// It is Linear Data Structure which contains collection of Nodes
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr; // It is ptr which we will pointed towards next address of NODE

//     Node(int data)  // This is a constructor
//     {
//         this->data = data;    // So, whenever we create a new Node then this NODE constructor will be called where this->data = data and this->ptr = NULL;
//         this->ptr = NULL;
//     }
// };
// int main()
// {
//     // This is how we implement a Node
//     Node *a = new Node(10);  // It has 10 as a value
//     cout << a->data << endl; // It will print 10 as we give 10 to new NODE
//     cout << a->ptr << endl;  // It will print 0 because it is pointing at NULL
//     return 0;
// }

// Pointing One Node to the next Node
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *ptr; // It is ptr which we will pointed towards next address of NODE

//     Node(int data)  // This is a constructor
//     {
//         this->data = data;    // So, whenever we create a new Node then this NODE constructor will be called where this->data = data and this->ptr = NULL;
//         this->ptr = NULL;
//     }
// };
// // Traverse a linked list
// void print(Node* &b){  // we created this and send it by reference and here the pointer will be pointing towards b address
//     Node* third = b;
// };
// int main()
// {
//     // This is how we implement a Node / create a Node
//     Node *a = new Node(10);  // It has 10 as a value
//     cout << a->data << endl; // It will print 10 as we give 10 to new NODE
//     cout << a->ptr << endl;  // It will print 0 because we don't know what is the next node value

//     // This is how we take properties from one node to other
//     Node *b = a;
//     Node *c = b;
//     return 0;
// }

// Link List Traversal (T.C is O(n))
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;
//     LinkedlistTraversal(a);
//     return 0;
// }

// Insertion
// 1) Inserting Node At Head
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// node* insertAtFirst(node* &a, int data){
//     struct node* e = (node *)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = a;
//     return e;
// };
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 10;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in beginning
//     // node* e;
//     // e = (node*)malloc(sizeof(node));
//     // // Pointing towards head (a)
//     // e->ptr = a;
//     // // Assigining value to it
//     // e->data = 20;
//     // // a = e now, a will be the 2nd element of LL and e will be head
//     // a = e;
//     // LinkedlistTraversal(a);
//     a = insertAtFirst(a, 22);
//     LinkedlistTraversal(a);
//     return 0;
// }

// 2) Insertion in between
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// node* InsertAtIndex(node* &a, int data, int index){
//     node* e = (node *)malloc(sizeof(node));
//     node* p = a;
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
// };
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in between
//     // node* e;
//     // // DMA of new Node
//     // e = (node*)malloc(sizeof(node));
//     // // Assigining value to it
//     // e->data = 20;
//     // Pointing e->ptr towards a->ptr
//     // e->ptr = a->ptr;
//     // e->ptr = b->ptr;
//     // e->ptr = c->ptr;
//     // e->ptr = d->ptr;
//     // b->ptr = e now, b->ptr will be giving it's place to new Node e
//     // b->ptr = e;

//     // OR //
//     InsertAtIndex(a, 20, 2);
//     LinkedlistTraversal(a);
//     return 0;
// }

// 3) Insert at the end
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// node* InsertAtEnd(node* a, int data){
//     node* e = (node*)malloc(sizeof(node));
//     node* p = a;
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
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node at the end
//     // node* e;
//     // // DMA of new Node
//     // e = (node*)malloc(sizeof(node));
//     // // Assigining value to it
//     // e->data = 20;
//     // // Pointing d->ptr towards e(New Node)
//     // d->ptr = e;
//     // // e->ptr = NULL now, because last ptr have to point at something so till we don't get any node we will point it towards NULL
//     // e->ptr = NULL;

//     // OR //
//     InsertAtEnd(a, 20);
//     LinkedlistTraversal(a);
//     return 0;
// }

// 4) Insert after a Node
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// struct node* InsertAfterANode(struct node *a, struct node *c, int data){
//     struct node* e = (node*)malloc(sizeof(node));
//     e->data = data;
//     e->ptr = c->ptr;
//     c->ptr = e;
//     return a;
// }
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node after a node (at any place usually we insert it before any node)
//     // node* e;
//     // // DMA of new Node
//     // e = (node*)malloc(sizeof(node));
//     // // Assigining value to it
//     // e->data = 20;
//     // // Pointing e->ptr towards c->ptr
//     // // e->ptr = a->ptr;
//     // // e->ptr = b->ptr;
//     // e->ptr = c->ptr;
//     // // e->ptr = d->ptr;
//     // // c->ptr = e means now e will get c after place
//     // // a->ptr = e;
//     // // b->ptr = e;
//     // c->ptr = e;
//     // d->ptr = e;

//     // OR //
//     InsertAfterANode(a, c, 20);
//     LinkedlistTraversal(a);
//     return 0;
// }

// Deletion from Linked List
// 1) Deleting the first node
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// node* deletefromindex(node* a){
//     node *e = a;
//     a = a->ptr;
//     return a;
//     free(e);
// }
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in between
//     // node* ptr1;
//     // // DMA of new Node
//     // ptr1 = (node*)malloc(sizeof(node));
//     // // Pointing ptr1 to a(head)
//     // ptr1 = a;
//     // // After deleting we will point a->ptr to next node
//     // a = a->ptr;
//     // After deleting we will free the ptr1
//     // free(ptr1);
//     // OR //
//     LinkedlistTraversal(a);
//     deletefromindex(a);
//     return 0;
// }

// 2) Deleting an element at given index in between of Node
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// node* deleteatindex(node* &a, int index){
//     struct node *e = a;
//     struct node *p = a->ptr;   // pointing next element of LL
//     for (int i = 0; i < index - 1; i++)
//     {
//         e = e->ptr;
//         p = p->ptr;
//     }
//     e->ptr = p->ptr;
//     free(p);
//     return a;
// }
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in between
//     node *ptr1;
//     int index = 2;
//     // DMA of new Node
//     ptr1 = (node *)malloc(sizeof(node));
//     // Pointing ptr1 to a(head) and we will run a while loop which will move the ptr2 next to next until we will reach to n-1 condition
//     ptr1 = a;
//     // Create another pointer ptr2
//     // node* ptr2;
//     // // DMA of second new node
//     // ptr2 = (node *)malloc(sizeof(node));
//     // // We pointed new ptr2 to next element
//     // ptr2 = a->ptr;
//     // // We will run this loop until the index we want it to point
//     // for(int i = 0; i < index - 1; i++)
//     // {
//     //     ptr1 = ptr1->ptr;
//     //     ptr2 = ptr2->ptr;
//     // }
//     // // We made ptr1 to ptr2
//     // ptr1->ptr = ptr2->ptr;
//     // After deleting we will free the ptr2 (second ptr2)
//     // free(ptr2);

//     // OR //
//     deleteatindex(a, 2);
//     LinkedlistTraversal(a);
//     return 0;
// }

// 3) Deletion of last node
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// struct node* deletethelastnode(struct node* a){
//     struct node* p = a;
//     struct node* q = a->ptr;
//     while (q->ptr != NULL)
//     {
//         p = p->ptr;
//         q = q->ptr;
//     }
//     p->ptr = NULL;
//     free(q);
//     return a;
// };
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in between
//     // node* ptr1;
//     // // DMA of new Node
//     // ptr1 = (node*)malloc(sizeof(node));
//     // // Pointing ptr1 to a(head) and we will run a while loop which will move the ptr2 next to next until we will reach to n-1 condition
//     // ptr1 = a;
//     // // Creating a new ptr2
//     // node* ptr2;
//     // // DMA
//     // ptr2 = (node*)malloc(sizeof(node));
//     // // Pointing new ptr2 to next node / index of Linked List
//     // ptr2 = a->ptr;
//     // // Will run this loop until (new ptr2 will become equal to NULL)
//     // while (ptr2->ptr != NULL)
//     // {
//     //     ptr1 = ptr1->ptr;
//     //     ptr2 = ptr2->ptr;
//     // }
//     // // After deleting we made the old ptr1 equal to NULL
//     // ptr1->ptr = NULL;
//     // // After deleting we will free the ptr1
//     // free(ptr2);

//     // OR //
//     deletethelastnode(a);
//     LinkedlistTraversal(a);
//     return 0;
// }

// 4) Deletion a node with a given value
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// void LinkedlistTraversal(node *ptrr)
// {
//     // Until ptrr becomes equal to NULL this will keep on pointing ptrr to next to next node
//     while (ptrr != NULL)
//     {
//         cout << "Element is : " << ptrr->data << endl;
//         ptrr = ptrr->ptr; // This means we created a new ptrr which will point towards not on the first node, it will point on second node, then it will point to the next node and this will be done in loop so that it will keep on pointing on next to next node until it points to NULL
//     }
// };
// struct node* deleteanodeatvalue(struct node* a, int value){
//     struct node* p = a;
//     struct node* q = a->ptr;
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
// };
// int main()
// {
//     // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
//     // Creating Nodes
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     // DMA during run time(very impo.)
//     a = (node *)malloc(sizeof(node));
//     b = (node *)malloc(sizeof(node));
//     c = (node *)malloc(sizeof(node));
//     d = (node *)malloc(sizeof(node));
//     // Linking first and second node
//     a->data = 7;
//     a->ptr = b;
//     // Linking second and third node
//     b->data = 11;
//     b->ptr = c;
//     // Linking third and fourth node
//     c->data = 12;
//     c->ptr = d;
//     // Linking fourth and then pointing to NULL
//     d->data = 15;
//     // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
//     d->ptr = NULL;

//     // Inserting a new Node in between
//     // node *ptr1;
//     // // Value we will find and delete from Linked List
//     // int value = 12;
//     // // DMA of new Node
//     // ptr1 = (node *)malloc(sizeof(node));
//     // // Pointing ptr1 to a(head) and we will run a while loop which will move the ptr2 next to next until we will reach to n-1 condition
//     // ptr1 = a;
//     // // Creating a new ptr2
//     // node *ptr2;
//     // // DMA
//     // ptr2 = (node *)malloc(sizeof(node));
//     // // Pointing new ptr2 to next node / index of Linked List
//     // ptr2 = a->ptr;
//     // // Will run this loop until (until ptr2 will become equal to NULL && ptr2->data will become equal to the value which we are finding in the linked list)
//     // while (ptr2->data != value && ptr2->ptr != NULL)
//     // {
//     //     ptr1 = ptr1->ptr;
//     //     ptr2 = ptr2->ptr;
//     // }
//     // // After deleting we will check the data we get is it equal to value we are finding or not? if yes then only do deletion else don't delete that element from linked list
//     // if (ptr2->data == value)
//     // {
//     //     ptr1->ptr = ptr2->ptr;
//     //     free(ptr2);
//     // }
//     // After deleting we will free the ptr1

//     // OR //
//     deleteanodeatvalue(a, 11);
//     LinkedlistTraversal(a);
//     return 0;
// }

// // Finding an element in Linked List
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

// Traverse in Circular Linked List
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *ptr;
// };
// // void linkedListTraversal(struct node *a){
// //     struct node *ptrr = a;
// //     do{
// //         printf("Element is %d\n", ptrr->data);
// //         ptrr = ptrr->ptr;
// //     }while(ptrr!=a);
// // };
// int main()
// {
// // So, we used this method because it makes everything possible for us to add more and more nodes whenever we wanted to that using DMA(not like array)
// // Creating Nodes
// node *a;
// node *b;
// node *c;
// node *d;
// // DMA during run time(very impo.)
// a = (node *)malloc(sizeof(node));
// b = (node *)malloc(sizeof(node));
// c = (node *)malloc(sizeof(node));
// d = (node *)malloc(sizeof(node));
// // Linking first and second node
// a->data = 7;
// a->ptr = b;
// // Linking second and third node
// b->data = 11;
// b->ptr = c;
// // Linking third and fourth node
// c->data = 12;
// c->ptr = d;
// // Linking fourth and then pointing to NULL
// d->data = 15;
// // Pointing it NULL is impo. as it is wrong method to leave your ptr without assigning anything
// d->ptr = a;
//     // Creating a new Node
//     node *ptr1;
//     // DMA of new Node
//     ptr1 = (node *)malloc(sizeof(node));
//     // Pointing ptr1 to a(head) and we will run a while loop where ptr1->ptr != a means in circular loop it will again come to head(a) till then the loop will run
//     ptr1 = a;
//      while (ptr1->ptr != a)
//      {
//          cout<<"Element is : "<<ptr1->data<<endl;
//          ptr1 = ptr1->ptr;
//      }
//     // But as the loop will stop when ptr1->ptr = a, therefore to print the last element of Linked List we will have to print it separately
//     cout<<"Element is : "<<ptr1->data<<endl;

//     // OR   //

//     // Do-While Loop
//     // do
//     // {
//     //     cout << "Element is : " << ptr1->data << endl;
//     //     ptr1 = ptr1->ptr;
//     // } while (ptr1 != a);

//     // OR //
//     // linkedListTraversal(a);
//     return 0;
// }

// Insertion in Circular Linked List At first index
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// void linkedListTraversal(Node *head)
// {
//     Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// };
// Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;

//     struct Node *p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     // At this point p points to the last node of this circular linked list

//     p->next = ptr;
//     head = ptr;
//     return head;
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
//     cout<<"After adding elements : "<<endl;
//     head = insertAtFirst(head, 2);
//     linkedListTraversal(head);
//     return 0;
// }

// Deletion of First Node in CLL
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// void linkedListTraversal(Node *head)
// {
//     Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// };
// struct Node *deletionatfirstnode(struct Node *head)
// {
//     struct Node *ptr = head;
//     while (ptr->next != head)
//     {
//         ptr = ptr->next;
//     }
//     ptr->next = head->next;
//     head = head->next;
//     free(ptr);
//     return head;
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

//     // linkedListTraversal(head);
//     // cout << "After adding elements : " << endl;
//     // head = insertAtFirst(head, 58);
//     head = deletionatfirstnode(head);
//     linkedListTraversal(head);
//     return 0;
// }

// Doubly Linked List (Traversal) printing forward and backward
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     node *previous;
//     node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// node *forward(node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout<<endl;
//         printf("The element previous node address is: %x\n", head->previous);
//         cout<<endl;
//         printf("The element next node address is: %x\n", head->next);
//         cout<<endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             // printf("The element current value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             cout<<"Next Node is NULL";
//         }

//     } while (head->next != NULL);
// }

// // Backward
// node *backward(node *fourth)
// {
//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout<<endl;
//         printf("The element previous node address is: %x\n", fourth->previous);
//         cout<<endl;
//         printf("The element next node address is: %x\n", fourth->next);
//         cout<<endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             cout<<"Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// }

// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL;    // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL;      // always point last ptr to NULL

//     // calling forward and backward functions.
//     forward(head);
//     backward(fourth);
//     return 0;
// }

// Insertion At Beginning in Doubly Linked List
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// struct node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             // printf("The element current value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }

//     } while (head->next != NULL);
// }

// // Backward
// struct node *backward(struct node *fourth)
// {

//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *insertionatbeginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->previous = NULL;
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// };
// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions.
//     head = insertionatbeginning(head, 20);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Add a node after a given node in a Doubly Linked List
//  #include <iostream>
//  using namespace std;
//  // defining node class
//  class node
//  {
//  public:
//      int data;
//      struct node *previous;
//      struct node *next;
//  };
//  // creating fuction which can travel forward -> print and backward -> print the elements.
//  // Forward
//  struct node *forward(struct node *head)
//  {
//      do
//      {
//          printf("The element value is: %d\n", head->data);
//          cout << endl;
//          // printf("The element previous node address is: %x\n", head->previous);
//          // cout << endl;
//          // printf("The element next node address is: %x\n", head->next);
//          // cout << endl;
//          head = head->next;
//          if (head->next == NULL)
//          {
//              // printf("The element current value is: %d\n", head->data);
//              // printf("The element previous node address is: %x\n", head->previous);
//              // printf("The element next node address is: %x\n", head->next);
//              // cout << "Next Node is NULL" << endl;
//          }

//     } while (head->next != NULL);
// }

// // Backward
// struct node *backward(struct node *fourth)
// {

//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *insertionatbeginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->previous = NULL;
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// };
// node *insertAfter(node* prev_node, int new_data)
// {
//     // Base case
// 	// Check if the given prev_node is NULL
// 	if (prev_node == NULL) {
// 		cout << "the given previous node cannot be NULL";
// 		return;
// 	}
// 	// 1. allocate new node
// 	node* new_node = new node();

// 	// 2. put in the data
// 	new_node->data = new_data;

// 	// 3. Make next of new node as next of prev_node
// 	new_node->next = prev_node->next;

// 	// 4. Make the next of prev_node as new_node
// 	prev_node->next = new_node;

// 	// 5. Make prev_node as previous of new_node
// 	new_node->previous = prev_node;

// 	// 6. Change previous of new_node's next node
// 	if (new_node->next != NULL)
// 		new_node->next->previous = new_node;
// }
// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions.
//     head = insertionatbeginning(head, 20);
//     head = insertAfter(head, 24);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Add a node before a given node in a Doubly Linked List
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// struct node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             // printf("The element current value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }
//     } while (head->next != NULL);
// }
// // Backward
// struct node *backward(struct node *fourth)
// {
//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *insertionatbeginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->previous = NULL;
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// };
// node *insertAfter(node* prev_node, int new_data)
// {
//     // Base case
// 	// Check if the given prev_node is NULL
// 	if (prev_node == NULL) {
// 		cout << "the given previous node cannot be NULL";
// 		return;
// 	}
// 	// 1. allocate new node
// 	node* new_node = new node();

// 	// 2. put in the data
// 	new_node->data = new_data;

// 	// 3. Make next of new node as next of prev_node
// 	new_node->next = prev_node->next;

// 	// 4. Make the next of prev_node as new_node
// 	prev_node->next = new_node;

// 	// 5. Make prev_node as previous of new_node
// 	new_node->previous = prev_node;

// 	// 6. Change previous of new_node's next node
// 	if (new_node->next != NULL)
// 		new_node->next->previous = new_node;
// }
// node *insertBefore(node* next_node, int new_data)
// {
// 	// Check if the given next_node is NULL
// 	if (next_node == NULL) {
// 		printf("the given next node cannot be NULL");
// 		return;
// 	}

// 	// 1. Allocate new node
// 	node* new_node = new node();

// 	// 2. Put in the data
// 	new_node->data = new_data;

// 	// 3. Make previous of new node as previous of next_node
// 	new_node->previous = next_node->previous;

// 	// 4. Make the previous of next_node as new_node
// 	next_node->previous = new_node;

// 	// 5. Make next_node as next of new_node
// 	new_node->next = next_node;

// 	// 6. Change next of new_node's previous node
// 	if (new_node->previous != NULL)
//     {
// 		new_node->previous->next = new_node;
//     }
// }
// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions.
//     head = insertionatbeginning(head, 20);
//     head = insertBefore(head, 14);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Add a node at the end in a Doubly Linked List
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// struct node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             // printf("The element current value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }
//     } while (head->next != NULL);
// }
// // Backward
// struct node *backward(struct node *fourth)
// {
//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *insertionatbeginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->previous = NULL;
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// };
// node *insertAfter(node* prev_node, int new_data)
// {
//     // Base case
// 	// Check if the given prev_node is NULL
// 	if (prev_node == NULL) {
// 		cout << "the given previous node cannot be NULL";
// 		return;
// 	}
// 	// 1. allocate new node
// 	node* new_node = new node();

// 	// 2. put in the data
// 	new_node->data = new_data;

// 	// 3. Make next of new node as next of prev_node
// 	new_node->next = prev_node->next;

// 	// 4. Make the next of prev_node as new_node
// 	prev_node->next = new_node;

// 	// 5. Make prev_node as previous of new_node
// 	new_node->previous = prev_node;

// 	// 6. Change previous of new_node's next node
// 	if (new_node->next != NULL)
// 		new_node->next->previous = new_node;
// }
// node *insertBefore(node* next_node, int new_data)
// {
// 	// Check if the given next_node is NULL
// 	if (next_node == NULL) {
// 		printf("the given next node cannot be NULL");
// 		return;
// 	}

// 	// 1. Allocate new node
// 	node* new_node = new node();

// 	// 2. Put in the data
// 	new_node->data = new_data;

// 	// 3. Make previous of new node as previous of next_node
// 	new_node->previous = next_node->previous;

// 	// 4. Make the previous of next_node as new_node
// 	next_node->previous = new_node;

// 	// 5. Make next_node as next of new_node
// 	new_node->next = next_node;

// 	// 6. Change next of new_node's previous node
// 	if (new_node->previous != NULL)
//     {
// 		new_node->previous->next = new_node;
//     }
// }
// node *append(node* head_ref, int new_data)
// {
// 	// 1. allocate node
// 	node* new_node = new node();

// 	node* last = head_ref; /* used in step 5*/

// 	// 2. put in the data
// 	new_node->data = new_data;

// 	// 3. This new node is going to be the last node, so
// 	// make next of it as NULL
// 	new_node->next = NULL;

// 	// 4. If the Linked List is empty, then make the new
// 	// node as head
// 	if (head_ref == NULL) {
// 		new_node->previous = NULL;
// 		head_ref = new_node;
// 		return;
// 	}

// 	// 5. Else traverse till the last node
// 	while (last->next != NULL)
// 		last = last->next;

// 	// 6. Change the next of last node
// 	last->next = new_node;

// 	// 7. Make last node as previous of new node
// 	new_node->previous = last;

// 	return;
// }
// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions.
//     head = insertionatbeginning(head, 20);
//     head = append(head, 18);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Deletion of first element of Doubly Linked List
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// struct node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             printf("The element value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }

//     } while (head->next != NULL);
// }

// // Backward
// struct node *backward(struct node *fourth)
// {

//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// struct node *deletionatfirst(struct node *head)
// {
//     struct node *p = head;
//     struct node *q = head->next;

//     q->previous = NULL;
//     head = head->next;

//     free(p);
//     return head;
// }
// int main()
// {
//     // creating nodes.
//     struct node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions
//     deletionatfirst(head);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Delete a Doubly Linked List node at a given position
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             printf("The element value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }

//     } while (head->next != NULL);
// }

// // Backward
// node *backward(struct node *fourth)
// {

//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *deleteNode(node *head_ref, node *del)
// {
//     /* base case */
//     if (head_ref == NULL || del == NULL)
//         return;

//     /* If node to be deleted is head node */
//     if (head_ref == del)
//         head_ref = del->next;

//     /* Change next only if node to be deleted is NOT
//        the last node */
//     if (del->next != NULL)
//         del->next->previous = del->previous;

//     /* Change prev only if node to be deleted is NOT
//        the first node */
//     if (del->previous != NULL)
//         del->previous->next = del->next;

//     /* Finally, free the memory occupied by del*/
//     free(del);
// }

// node *deleteNodeAtGivenPos(node *head_ref, int n)
// {
//     /* if list in NULL or invalid position is given */
//     if (head_ref == NULL || n <= 0)
//         return;

//     node* current = head_ref;
//     int i;

//     /* traverse up to the node at position 'n' from
//        the beginning */
//     for (int i = 1; current != NULL && i < n; i++)
//         current = current->next;

//     /* if 'n' is greater than the number of nodes
//        in the doubly linked list */
//     if (current == NULL)
//         return;

//     /* delete the node pointed to by 'current' */
//     deleteNode(head_ref, current);
// };
// int main()
// {
//     // creating nodes.
//     node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions
//     deleteNodeAtGivenPos(head, 4);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Deletes an element from the end of the list
// #include <iostream>
// using namespace std;
// // defining node class
// class node
// {
// public:
//     int data;
//     struct node *previous;
//     struct node *next;
// };
// // creating fuction which can travel forward -> print and backward -> print the elements.
// // Forward
// node *forward(struct node *head)
// {
//     do
//     {
//         printf("The element value is: %d\n", head->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", head->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", head->next);
//         // cout << endl;
//         head = head->next;
//         if (head->next == NULL)
//         {
//             printf("The element value is: %d\n", head->data);
//             // printf("The element previous node address is: %x\n", head->previous);
//             // printf("The element next node address is: %x\n", head->next);
//             // cout << "Next Node is NULL" << endl;
//         }

//     } while (head->next != NULL);
// }

// // Backward
// node *backward(struct node *fourth)
// {

//     do
//     {
//         printf("The element value is: %d\n", fourth->data);
//         cout << endl;
//         // printf("The element previous node address is: %x\n", fourth->previous);
//         // cout << endl;
//         // printf("The element next node address is: %x\n", fourth->next);
//         // cout << endl;
//         fourth = fourth->previous;
//         if (fourth->previous == NULL)
//         {
//             // printf("The value is : %d\n", fourth->data);
//             // printf("The element previous node address is: %x\n", fourth->previous);
//             // printf("The element next node address is: %x\n", fourth->next);
//             // cout << "Previous of last node is NULL";
//         }

//     } while (fourth->previous != NULL);
// };
// node *deleteFromEnd(node *head_ref, node* tail) {
//         //Checks whether list is empty
//         if(head_ref == NULL) {
//             return;
//         }
//         else {
//             //Checks whether the list contains only one node
//             if(head_ref != tail) {
//                 //Previous node to the tail will become new tail
//                 tail = tail->previous;
//                 //Node next to current tail will be made null
//                 tail->next = NULL;
//             }
//             //If the list contains only one element
//             //Then it will remove node and now both head and tail will point to null
//             else {
//                 head_ref = tail = NULL;
//             }
//         }
//     }
// node *deleteNode(node *head_ref, node *del)
// {
//     /* base case */
//     if (head_ref == NULL || del == NULL)
//         return;

//     /* If node to be deleted is head node */
//     if (head_ref == del)
//         head_ref = del->next;

//     /* Change next only if node to be deleted is NOT
//        the last node */
//     if (del->next != NULL)
//         del->next->previous = del->previous;

//     /* Change prev only if node to be deleted is NOT
//        the first node */
//     if (del->previous != NULL)
//         del->previous->next = del->next;

//     /* Finally, free the memory occupied by del*/
//     free(del);
// }

// node *deleteNodeAtGivenPos(node *head_ref, int n)
// {
//     /* if list in NULL or invalid position is given */
//     if (head_ref == NULL || n <= 0)
//         return;

//     node* current = head_ref;
//     int i;

//     /* traverse up to the node at position 'n' from
//        the beginning */
//     for (int i = 1; current != NULL && i < n; i++)
//         current = current->next;

//     /* if 'n' is greater than the number of nodes
//        in the doubly linked list */
//     if (current == NULL)
//         return;

//     /* delete the node pointed to by 'current' */
//     deleteNode(head_ref, current);
// };

// int main()
// {
//     // creating nodes.
//     node *head, *second, *third, *fourth;

//     // allocating the memory in heap for nodes.

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->previous = NULL; // always point first node pre. to NULL
//     head->next = second;

//     // second note values
//     second->data = 34;
//     second->previous = head;
//     second->next = third;

//     // third note values
//     third->data = 56;
//     third->previous = second;
//     third->next = fourth;

//     // Fourth note values
//     fourth->data = 52;
//     fourth->previous = third;
//     fourth->next = NULL; // always point last ptr to NULL

//     // calling forward and backward functions
//     deleteNodeAtGivenPos(head, 4);
//     deleteFromEnd(head, fourth);
//     forward(head);
//     // backward(fourth);
//     return 0;
// }

// Reverse Linked List (Time Complexity: O(n), Space Complexity : O(1))
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     struct Node *previous;
//     struct Node *next;
//     struct Node *current;
//     int data;
// };

// struct Node *reverseLinkList(Node *head)
// {
//     if (head == NULL || head->next == NULL)     // we said if head == NULL and head ptr pointing at NULL then only return head because in that case we are already at the end of the list
//     {
//         return head;
//     }
//     // Node previous ptr is pointing at NULL
//     Node *previous = NULL;
//     // Current ptr is pointing at head
//     Node *current = head;
//     // Forward ptr is pointing at NULL
//     Node *forward = NULL;
//     // Till the current ptr becomes equal to NULL we will run this loop
//     while (current != NULL)
//     {
//         // Forward is pointed by current next ptr
//         forward = current->next;
//         // current ptr is at pointing at previous
//         current->next = previous;
//         previous = current;
//         current = forward;
//     }
//     // This will be the new head so we will return this
//     return previous;
// }

// Find Mid of LL    (T.C -> O(n) & S.C -> O(1))
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//       int data;
//       Node* next;
// };
// int getLength(Node *head){
//     int len = 0;
//     // This loop will run until the head will reach at end
//     while (head != NULL)
//     {
//         // As the loop will run it will increment len++ & head will point to the next to next to next index
//         len++;
//         head = head->next;
//     }
//     // Will return this
//     return len;
// };
// Node* findMiddle(Node *head)
// {
//     int len = getLength(head);  // This will give us the length of the Linked List and store it in len
//     int ans = (len/2);          // even if the linked list is even or odd we have to find mid by (len/2)

//     Node *temp =  head;         // Here temp (ptr) = head means it is pointing at the first element and the count = 0
//     int count = 0;
//     while (count < ans)         // While count < ans we will run the loop where temp(which is a ptr) will point to the next element of LL & count++
//     {
//         // temp will point to the next until count >= ans
//         temp = temp->next;
//         count++;
//     }
//     // We will return temp because it has the value of mid now
//     return temp;
// }

// Reverse LL in 'K' Group (T.C -> O(n) & S.C -> O(n))
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//       int data;
//       Node *next;
// };
// // First we will reverse the first two nodes
// Node* kReverse(Node* head, int k){
//     if (head == NULL)      // if head == NULL that means we are at end of LL
//     {
//         return NULL;
//     }
//     // Reverse first two Node
//     Node* next = NULL;    // After reversing next ptr will be pointing at NULL
//     Node* curr = head;    // current is at head
//     Node* prev = NULL;    // prev is pointing at NULL
//     int count = 0;
//     while (curr != NULL && count < k)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         // Will increase the count until the count >= k and curr = NULL
//         count++;
//     }
//     // Recursion for remaining nodes of LL
//     if (next != NULL)
//     {
//         head->next = kReverse(next, k);
//     }
//     // Return head of reversed list
//     return prev;
// }

// Check LL is Circular or not? (T.C -> O(n) & S.C -> O(1))
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// // Setter
// Node* getNode(int data){
//    Node *newNode = new Node;
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
// }
// bool isCircularList(Node *start)
// {
//     if (start == NULL)
//         return true;
//     Node *node = start->next;
//     while (node != NULL && node != start)
//     {
//         node = node->next;
//     }
//     if (node == start)
//         return true;
//     return false;
// };
// int main()
// {
//     Node *start = getNode(10);
//     Node *second = getNode(20);
//     // Node *start;
//     // Node *second;
//     Node *third = getNode(30);
//     Node *fourth = getNode(40);
//     start->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = start;
//     if (isCircularList(start))
//         cout << "The list is circular list";
//     else
//         cout << "The list is not circular list";
// }

// Detect and Remove Loop from Linked List
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// // Detect LL is cycle/loop or not
// Node *floydDetectLoop(Node *head)
// {
//     if (head == NULL) // Nothing in LL and we are at the end
//     {
//         return NULL;
//     }
//     // Both will start from head
//     Node *slow = head;
//     Node *fast = head;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next; // will move only one node then check whether it is NULL or not
//         if (fast != NULL)
//         {
//             // Then move 2nd block
//             fast = fast->next;
//         }
//         // Till then slow will move only one node
//         slow = slow->next;
//         if (slow == fast)
//         {
//             return slow;
//         }
//     }
//     return NULL;
// };
// // Get Starting Node
// Node* getStartingNode(Node *head){
//     if (head == NULL)     // Because this LL has nothing and we are already at end
//     {
//         return NULL;
//     }
//     Node* intersection = floydDetectLoop(head); // This means we will start intersection from the point where (slow == fast)
//     if (intersection == NULL)    // if floydDetectLoop == NULL means where slow == fast if it is NULL then it is wrong
//     {
//         return NULL;
//     }
//     Node* slow = head;   // start from head
//     while (slow != intersection)
//     {
//         // While loop will run until slow = intersection means (slow == fast) till then we will move slow one one node forward and same for fast
//         slow = slow->next;
//         intersection = intersection->next;
//     }
//     // Return slow because that will be the first node of LL
//     return slow;
// };
// // Remove Loop from LL
// Node* removeLoop(Node* head){
//     if (head == NULL)      // it means LL does'nt have anything and we are at the end
//     {
//         return NULL;
//     }
//     // startOfLoop will contain / have starting node of LL
//     Node* startOfLoop = getStartingNode(head);
//     // if starting Node == NULL means we are at that point where we remove the last node to stop the infinite loop
//     if (startOfLoop == NULL)
//     {
//         return head;   // will return head as startOfLoop is pointing at NULL now
//     }
//     Node* temp = startOfLoop;   // now temp have startOfLoop value means fast value
//     while (temp->next != startOfLoop)   // till temp->next not becomes equal to fast value means till the point next node becomes equal to starting node move next to next node
//     {
//         temp = temp->next;
//     }
//     // At the end temp->next should be pointing at NULL because this is the point where we remove the node
//     temp->next = NULL;
//     // will return head as the loop is removed and the value of head will be NULL
//     return head;
// }

// Add an element in an array at any position
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Array Created with 5 elements
//     int arr[50], i, elem, pos, tot;
//     cout<<"Enter the Size for Array: ";
//     cin>>tot;
//     cout<<"Enter "<<tot<<" Array Elements: ";
//     for(int i=0; i<tot; i++)
//         cin>>arr[i];
//     cout<<"\nEnter Element to Insert: ";
//     cin>>elem;
//     cout<<"At What Position ? ";
//     cin>>pos;
//     for(i=tot; i>=pos; i--)
//         arr[i] = arr[i-1];
//     arr[i] = elem;
//     tot++;
//     cout<<"\nThe New Array is:\n";
//     for(i=0; i<tot; i++)
//         cout<<arr[i]<<"  ";
//     cout<<endl;
//     return 0;
// }

// Find length of linked list
// Iterative C++ program to find length
// or count of nodes in a linked list
// #include <bits/stdc++.h>
// using namespace std;

// /* Link list node */
// class Node {
// public:
// 	int data;
// 	Node* next;
// };
// void push(Node** head_ref, int new_data)
// {
// 	/* allocate node */
// 	Node* new_node = new Node();

// 	/* put in the data */
// 	new_node->data = new_data;

// 	/* link the old list off the new node */
// 	new_node->next = (*head_ref);

// 	/* move the head to point to the new node */
// 	(*head_ref) = new_node;
// }

// /* Counts no. of nodes in linked list */
// int getCount(Node* head)
// {
// 	int count = 0; // Initialize count
// 	Node* current = head; // Initialize current
// 	while (current != NULL) {
// 		count++;
// 		current = current->next;
// 	}
// 	return count;
// }

// /* Driver code*/
// int main()
// {
// 	/* Start with the empty list */
// 	Node* head = NULL;

// 	/* Use push() to construct below list
// 	1->2->1->3->1 */
// 	push(&head, 1);
// 	push(&head, 3);
// 	push(&head, 1);
// 	push(&head, 2);
// 	push(&head, 1);
// 	// Function call
// 	cout << "count of nodes is " << getCount(head);
// 	return 0;
// }

// Remove Duplicates from Sorted Linked List
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->next = NULL;
//         this->data = data;
//     }
// };
// Node *Unique(Node *&head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node *current = head;
//     while (current != NULL)
//     {
//         if ((current->next != NULL) && current->data == current->next->data)
//         {
//             // Assigining
//             Node *next_next = current->next->next;
//             Node *deleteNode = current->next;
//             delete (deleteNode);
//             current->next = next_next;
//         }
//         else
//         {
//             current = current->next;
//         }
//     }
//     return head;
// }

// Remove Duplicates from Unsorted Linked List
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
// Node *removeDuplicates(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     // Using Map to create Visited which will store whether we visited or not
//     unordered_map<int, bool> visited;
//     Node *prev = NULL;
//     Node *curr = head;
//     // Will run this loop till we reach at NULL(end)
//     while (curr != NULL)
//     {
//         // Visited Map having curr->data != true then we will mark it true, prev = curr(so, prev is at curr now) and (curr move to the curr->next)
//         if (visited[curr->data] != true)
//         {
//             visited[curr->data] = true;
//             prev = curr;
//             curr = curr->next;
//         }
//         // Otherwise prev->next means base next node will be equal to next node from current
//         // Means if we had already visited to that node then we will proceed next
//         else
//         {
//             // For that we will assign prev->next = curr->next because prev was = to NULL so to move further we have to assign curr->next
//             prev->next = curr->next;
//             Node *temp = curr;
//             curr = curr->next;
//             // Will delete temp which contains curr and move curr to the next node
//             delete (temp);
//         }
//     }
//     return head;
// }

// Sort 0's, 1's and 2's in Linked List
// #include <iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* sortList(Node* &head){
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     // Assign head in temp
//     Node* temp = head;
//     // Till head != NULL (reaches end of the L.L) run this loop
//     while (temp != NULL)
//     {
//         // head->data == 0 then increase zerocount++
//         if (temp->data == 0)
//         {
//             zero++;
//         }
//         // head->data == 1 then increase onecount++
//         else if(temp->data == 1){
//             one++;
//         }
//         // head->data == 2 then increase twocount++
//         else if(temp->data == 2){
//             two++;
//         }
//         // Move to the next-next node for traversing
//         temp = temp->next;
//     }

//     // We did this already
//     temp = head;
//     // Till temp/head != NULL run the loop
//     while (temp != NULL)
//     {
//         // If zerocount != 0 then temp->data / head->data = 0 and decrease zerocount--
//         if(zero != 0){
//             temp->data = 0;
//             zero--;
//         }
//         // If onecount != 0 then temp->data / head->data = 0 and decrease onecount--
//         else if(one != 0){
//             temp->data = 1;
//             one--;
//         }
//         // If twocount != 0 then temp->data / head->data = 0 and decrease twocount--
//         else if(two != 0){
//             temp->data = 2;
//             two--;
//         }
//         // we have to move next-next element for traversing
//         temp = temp->next;
//     }
//     return head;
// }

// Merge 2 Linked Lists in Sorted order
// #include <iostream>
// using namespace std;
// // This is template we created to store the new merged LL
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
// Node<int> *solve(Node<int> *head1, Node<int> *head2)
// {
//     // If only one element is in LL
//     if (head1->next == NULL)
//     {
//         // We assigned head1->next = head2 and return it as the output
//         head1->next = head2;
//         return head1;
//     }
//     // If more than one element in LL
//     // We assigned curr1 = first LL
//     Node<int> *curr1 = head1;
//     // We assigned next1 = head1->next element/node
//     Node<int> *next1 = curr1->next;
//     // We assigned curr2 = second LL
//     Node<int> *curr2 = head2;
//     // We assigned next2 = head2->next element/node
//     Node<int> *next2 = curr2->next;
//     // Run Loop till head1->next(1st LL next element) is != NULL && head2(2nd LL next element) != NULL
//     while (next1 != NULL && curr2 != NULL)
//     {
//         // If 2nd LL->data >= 1st LL->data && 2nd LL->data <= 1st LL->data then 1st LL->next will point at 2nd LL
//         if (curr2->data >= curr1->data && curr2->data <= next1->data)
//         {
//             curr1->next = curr2;
//             // 2nd LL->next will be pointed to 2nd LL next element because 2nd LL have still some elements/nodes in it so we have to point towards them otherwise it will be lost
//             next2 = curr2->next;
//             // 2nd LL->next will pointing at 1st LL
//             curr2->next = next1;
//             // And these all three steps will add the element in b/w of 1st LL
//             // Now, 1st LL is at 2nd LL (the new element added from 2nd LL)
//             curr1 = curr2;
//             // 2nd LL is pointing at next element of 2nd LL
//             curr2 = next2;
//         }
//         else
//         {
//             // If it does'nt allow element from 2nd LL to add in 1st LL then 1st LL will move/point at the 1st LL next element/node
//             curr1 = next1;
//             // then 1st LL->next will be pointing at next to next element of 1st LL
//             next1 = next1->next;
//             // If 1st LL->next == NULL (at the end of 1st LL) then 1st LL->next pointer will point at the 2nd LL remaining part which was left and merge them
//             if (next1 == NULL)
//             {
//                 curr1->next = curr2;
//                 return head1;
//             }
//         }
//     }
//     return head1;
// };
// Node<int> *Merge(Node<int> *head1, Node<int> *head2)
// {
//     // If first LL is empty then second LL is the answer
//     if (head1 == NULL)
//     {
//         return head2;
//     }
//     // If second LL is empty then first LL is the answer
//     if (head2 == NULL)
//     {
//         return head1;
//     }
//     // If first LL->data is <= second LL->data
//     if (head1->data <= head2->data)
//     {
//         // Then we will use solve(head1, head2) which will pass 1st LL first and then 2nd after first means 1st will be the first LL and second will be 2nd LL
//         solve(head1, head2);
//     }
//     else
//     {
//         // Then we will use solve(head1, head2) which will pass 1st LL first and then 2nd after first means 1st will be the first LL and second will be 2nd LL
//         solve(head2, head1);
//     }
// }

// Check Palindrome in L.L (T.C -> O(n) & S.C -> O(n))
// #include <iostream>
// #include <vector>
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
//         int n = arr.size();
//         int s = 0;
//         int e = n - 1;

//         while (s <= e)
//         {
//             // If start of arr != end of array then it is not a Palindrome
//             if (arr[s] != arr[e])
//             {
//                 return 0;
//             }
//             s++;
//             e--;
//         }
//         return 1;
//     }

// public:
//     bool isPalindrome(Node* &head)
//     {
//         // We will store LL in this array
//         vector<int> arr;
//         // This temp contains head
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             // We will keep adding data of LL in array until it reaches to the NULL(end)
//             arr.push_back(temp->data);
//             temp = temp->next;
//         }
//         return checkPalindrome(arr);
//     }
// };

// Check Palindrome in L.L (T.C -> O(n) & S.C -> O(1))
// #include <iostream>
// #include <vector>
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
//     // We have to find Mid
//     Node *getMid(Node* &head)
//     {
//         // Slow will start from head
//         Node *slow = head;
//         // fast will start from head->next
//         Node *fast = head->next;

//         // Till fast != NULL and fast->next != NULL run the loop and fast will move 2 blocks/nodes whereas slow will only one node
//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         return slow;
//     }
//     // This will reverse the LL after middle
//     Node *reverse(Node* &head)
//     {
//         // This is how we reverse a LL
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
//     // Function to check whether the list is palindrome.
//     bool isPalindrome(Node* &head)
//     {
//         // If LL has only one element then it is already a Palindrome
//         if (head->next == NULL)
//         {
//             return true;
//         }
//         // step 1 -> get the middle value
//         Node *middle = getMid(head);
//         // step2 -> reverse List after Middle
//         // This temp will have next value after middle of LL which we will reverse
//         Node *temp = middle->next;
//         // we assigned middle->next the reversed value or reversed LL
//         middle->next = reverse(temp);
//         // step3 - Compare both halves
//         // One will have start of the LL
//         Node *head1 = head;
//         // Other will have next element to last element of LL which is reversed
//         Node *head2 = middle->next;
//         // Comparing both halves
//         // Run the loop till head2 reaches to the end and head1 becomes equal to head2
//         while (head1 != head2 && head2 != NULL)
//         {
//             if (head2->data != head1->data)
//             {
//                 return 0;
//             }
//             head1 = head1->next;
//             head2 = head2->next;
//         }
//         // step4 - repeat step 2 to arrange the 2nd half into proper order again
//         temp = middle->next;
//         middle->next = reverse(temp);

//         return true;
//     }
// };

// Add 2 Linked List(T.C -> O(M+n) and S.C -> O(Max(M,N)))
// #include <iostream>
// #include <vector>
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
//     private:
//     // This is how we reverse a LL
//     Node* reverse(Node* head) {

//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;

//         while(curr != NULL) {
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     // Now, we will insertAtTail using head and tail
//     void insertAtTail(Node* &head, Node* &tail, int val) {
//         // In temp we will create a new node with the value we imported from below function
//         Node* temp = new Node(val);
//         // If empty list
//         if(head == NULL) {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         // If not an Empty List
//         else
//         {
//             // tail->next = temp
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
//     // This is how we will add 2 LL
//     Node* add(Node* first, Node* second) {
//         int carry = 0;
//         // This is ans LL head and tail which we don't know so we assigned NULL
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;
//         // Means nothing is at end everything is in the LL
//         while(first != NULL || second != NULL || carry != 0) {

//             int val1 = 0;
//             if(first != NULL)
//             // Whatever node we will be at, we will assign that in val1 as it is not NULL(end)
//                 val1 = first -> data;
//             // Same we will do here
//             int val2 = 0;
//             if(second !=NULL)
//                 val2 = second -> data;
//             // Add both values with the carry
//             int sum = carry + val1 + val2;

//             int digit = sum%10;

//             //create node and add in answer Linked List
//             insertAtTail(ansHead, ansTail, digit);

//             carry = sum/10;
//             // If the first LL is not at the end then keep on going next-next node
//             if(first != NULL)
//                 first = first -> next;

//             // If in the second LL not at the end then keep on going next-next node
//             if(second != NULL)
//                 second = second -> next;
//         }
//         return ansHead;
//     }
//     public:
//     //Function to add two numbers represented by LL
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         //step 1 -  reverse both LL so that we can add them easily
//         first = reverse(first);
//         second = reverse(second);

//         //step2 - add 2 LL which is in reversed order
//         Node* ans = add(first, second);

//         //step 3 - To make ans. in correct order
//         ans = reverse(ans);

//         // Return ans as it contains the ans
//         return ans;
//     }
// };

// Clone a Linked List with Random Pointers(T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     // This is a random pointer which will be pointing at any node
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
//     // We will insertAtTail
//     void insertAtTail(Node *&head, Node *&tail, int data)
//     {
//         // creating new node with data we imported
//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

// public:
//     // Will copy the whole LL
//     Node *copyList(Node *&head)
//     {
//         // This is clone of Head
//         Node *cloneHead = NULL;
//         // This is clone of Tail
//         Node *cloneTail = NULL;
//         // Temp will have head
//         Node *temp = head;
//         // Till we are not at the end of LL run the loop
//         while (temp != NULL)
//         {
//             // Keep on inserting the elements from tail for that we require head tail and data and move next-next node
//             insertAtTail(cloneHead, cloneTail, temp->data);
//             temp = temp->next;
//         }
//         // Create a map where we will map old and new nodes
//         unordered_map<Node*, Node*> oldToNew;
//         // We need mapping oldNode to newNode
//         Node* originalNode = head;
//         // cloneNode have cloneHead
//         Node* cloneNode = cloneHead;
//         // until originalNode and cloneNode reaches the end of LL run the loop
//         while (originalNode != NULL && cloneNode != NULL)
//         {
//             // Keep equating and making similar values of both nodes
//             oldToNew[originalNode] = cloneNode;
//             // move next-next node
//             originalNode = originalNode->next;
//             // move next-next node
//             cloneNode = cloneNode->next;
//         }
//         // This is for refreshing
//         originalNode = head;
//         cloneNode = cloneHead;
//         // Till originalNode != NULL means at the end of clone LL
//         while (originalNode != NULL)
//         {
//             // cloneNode contains cloneHead and from head we are trying to make each value of originalNode and cloneNode same/equal
//             cloneNode->random = oldToNew[originalNode->random];
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }
//         // We will return this to see is cloneHead and originalNode are similar or not
//         return cloneHead;
//     }
// };

// Clone a Linked List with Random Pointers(T.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *arb;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->arb = NULL;
//         // arb = random
//     }
// };
// class Solution
// {
//     private:
//     void insertAtEnd(Node* &head, Node* &end, int data){
//         Node* newNode = new Node(data);
//         if(head == NULL){
//             head = newNode;
//             end = newNode;
//             return;
//         }
//         else{
//             end -> next = newNode;
//             end = newNode;
//         }
//     }
//     public:
//     Node *copyList(Node* &head)
//     {
//         //Write your code here
//         Node* cloneHead = NULL;
//         Node* cloneEnd = NULL;

//         Node* temp = head;

//         //step1 cloning a given list with next ptr
//         while(temp != NULL){
//             insertAtEnd(cloneHead, cloneEnd, temp -> data);
//             temp = temp -> next;
//         }

//         //step2 adding clone list nodes between original list
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;

//         while(originalNode != NULL && cloneNode != NULL){
//             Node* next = originalNode -> next;
//             originalNode -> next = cloneNode;
//             originalNode = next;

//             next = cloneNode -> next;
//             cloneNode -> next = originalNode;
//             cloneNode = next;
//         }

//         //step3 add random pointers to the cloned list nodes
//         temp = head;
//         while(temp != NULL){
//             if(temp -> next!= NULL){
//                 if(temp -> arb != NULL){
//                     temp -> next -> arb = temp -> arb -> next;
//                 }
//                 else{
//                     temp -> next -> arb = temp -> arb;
//                 }
//             }
//             temp = temp -> next -> next;
//         }

//         //step4 revert the step 2
//         originalNode = head;
//         cloneNode = cloneHead;

//         while(originalNode != NULL && cloneNode != NULL){
//             originalNode -> next = cloneNode -> next;
//             originalNode = originalNode -> next;

//             if(originalNode != NULL){
//                 cloneNode -> next = originalNode -> next;
//             }
//             cloneNode = cloneNode -> next;
//         }

//         //step5 return the cloneHead
//         return cloneHead;
//     }
// };

// Merge Sort in LL (without changing data, we have to change links)
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
// Node* findmid(Node* &head){
//     Node* slow = head;
//     Node* fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// // This is how we merge the 2 sorted LL
// Node* merge(Node* &left, Node* &right){
//     // If left is NULL then return right part
//     if (left == NULL)
//     {
//         return right;
//     }
//     // If right is NULL then return left part
//     if (right == NULL)
//     {
//         return left;
//     }
//     // This will contain both left and right sorted LL
//     Node* ans = new Node(-1);
//     // temp contains ans
//     Node* temp = ans;
//     // Till left != NULL and right != NULL means did'nt reached the end of LL
//     while (left != NULL && right != NULL)
//     {
//         // If left->data <= right->data
//         if (left->data <= right->data)
//         {
//             // This will sort them in ascending order
//             temp->next = left;
//             temp = left;
//             left = left->next;
//         }
//         else
//         {
//             temp->next = right;
//             temp = right;
//             right = right->next;
//         }
//     }
//     // This is also a part of merge sort
//     while (left != NULL)
//     {
//         temp->next = left;
//         temp = left;
//         left = left->next;
//     }
//     while (right != NULL)
//     {
//         temp->next = right;
//         temp = right;
//         right = right->next;
//     }
//     // We have to do this to remove that dummy node which we created with -1 value, which we have to remove because we had put the merge sorted value in it
//     ans = ans->next;
//     return ans;
// }
// Node* mergeSort(Node* &head){
//     //Base Case
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     // Find mid of LL
//     Node* mid = findmid(head);
//     // This left half contains from head to mid nodes
//     Node* left = head;
//     // This right half contains mid->next
//     Node* right = mid->next;
//     // In left half mid-> next means at end it is pointing at NULL
//     mid->next = NULL;

//     // Sorting both halfs
//     left = mergeSort(left);
//     right = mergeSort(right);

//     // Merge both halfs
//     Node* result = merge(left, right);

//     return result;
// }

// Flatten a Linked List
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
// Node *merge(Node* &left, Node* &right)
// {
//     if (left == NULL)
//     {
//         return right;
//     }
//     if (right == NULL)
//     {
//         return left;
//     }
//     Node *result;
//     if (left->data < right->data)
//     {
//         result = left;
//         result->child = merge(left->child, right);
//     }
//     else
//     {
//         result = right;
//         result->child = merge(left, right->child);
//     }
//     result->next = NULL;
//     return result;
// }
// Node *flattenLinkedList(Node* &head)
// {
//     // Base case
//     if (head == NULL or head->next == NULL)
//     {
//         return head;
//     }
//     // head->next node should have child elements in sorted order
//     head->next = flattenLinkedList(head->next);
//     // Will merge head and head->next nodes
//     Node *ans = merge(head, head->next);
//     return ans;
// };

// Given an array of size n that has the following specifications: Each element in the array contains either a policeman or a thief. Each policeman can catch only one thief ?
// #include <iostream>
// #include <vector>
// using namespace std;
// int policethief(char arr[], int n, int k)
// {
//     int COUNT = 0;
//     int a = 0;
//     int b = 0;
//     vector<int> t;
//     vector<int> p;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 'P')
//             p.push_back(i);
//         else if (arr[i] == 'T')
//             t.push_back(i);
//     }
//     while (a < t.size() && b < p.size())
//     {
//         if ((t[a] - p[b]) <= k)
//         {
//             COUNT++;
//             a++;
//             b++;
//         }
//     }
//     return COUNT;
// }

// int pt(int n)
// {
//     int k, i, coun;
//     char arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     k = 1;
//     coun = policethief(arr, n, k);
//     cout << "Thieves caught:" << coun << endl;
//     return coun;
// }

// int main()
// {
//     int count = 0, n;
//     cout << "Enter Size of matrix:";
//     cin >> n;
//     count = pt(n);
//     count += pt(n);
//     count += pt(n);
//     cout << "Total Thieves caught:" << count;
//     return 0;
// }
// Output //
// Enter Size of matrix:5
// P T P T 1
// Thieves caught:2
// P T P T 1
// Thieves caught:2
// P P P P P
// Thieves caught:0
// Total Thieves caught:4

// Static vs Constant
// Static variables can be defined as a class property that is used in a class and not on the class instance this type of variable is stored in the data segment area of the memory the value assigned to these types of variables is shared among every instance that is created in the class.
//
// We need to use the static keyword for creating any static entity like a static variable, static function, operators, properties, etc. The value of a static variable is set at the runtime of the application and serves as a global value for the whole application.
// Const − A constant can be defined as a variable that has a fixed defined value and remains the same throughout the program.
//
// A property of the const variable is that we cannot change or modify this value anywhere in a project once it is initialized.
//
// It is because the compiler is informed about the fixed value and therefore should be prevented from any modifications.
//
// Thus whenever any modification occurs in the const value an error is thrown instead of actually modification

// Stacks
// It is a linear data structure
// It works on the LIFO (Last in first out)
// It's operations are 1)Peek 2)pop 3)push 4)empty 5)top
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int>mystack;
//     // It will insert element from end so, 2->4->6->8->10
//     mystack.push(2);
//     mystack.push(4);
//     mystack.push(6);
//     mystack.push(8);
//     mystack.push(10);
//     // It will remove element from top so, 10 will be removed
//     mystack.pop();
//     // Will tell what is at the top
//     cout<<mystack.top()<<endl;
//     if (mystack.empty())
//     {
//         cout<<"It is empty stack"<<endl;
//     }
//     else
//     {
//         cout<<"It is not empty stack"<<endl;
//     }
//     // For size of stack
//     cout<<mystack.size()<<endl;
//     return 0;
// }

// Implementation of Stack
// We can do implementation of stack by 1) By array 2) By Linked List
// #include <iostream>
// #include <stack>
// using namespace std;
// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size)
//     {
//         this->size = size;
//         // Created an array
//         arr = new int[size];
//         // Assigning -1 as it is at beginning
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
//             cout << "Stack OverFlow" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//             // or //
//             // int ans = arr[top];
//             // return ans;
//         }
//         else
//         {
//             cout << "Stack UnderFlow" << endl;
//         }
//     }
//     // It prints the element at which top is currently present
//     // we can do this in pop function also
//     int print()
//     {
//         if (top >= 0)
//             return arr[top];
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
//             return false;
//         }
//     }
// };
// int main()
// {
//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(44);
//     st.push(22);
//     st.push(43);

//     cout << st.print() << endl;
//     // we have to do this to print next-next element of stack
//     st.pop();

//     cout << st.print() << endl;
//     // we have to do this to print next-next element of stack
//     st.pop();

//     cout << st.print() << endl;
//     // we have to do this to print next-next element of stack
//     st.pop();

//     cout << st.print() << endl;
//     if (st.isEmpty())
//     {
//         cout << "Stack is Empty" << endl;
//     }
//     else
//     {
//         cout << "Stack is Not Empty" << endl;
//     }
//     return 0;
// }

// 2 Stacks in an Array (T.C -. O(n) & S.C -> O(n))
// #include <iostream>
// #include <stack>
// using namespace std;
// class Stack
// {
// public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size)
//     {
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//         arr = new int[size];
//     }

//     void push(int num)
//     {
//         if (top2 - top1 > 1)
//         {
//             top1++;
//             arr[top1] = num;
//         }
//     }
//     // Middle to end
//     void push1(int num)
//     {
//         if (top2 - top1 > 1)
//         {
//             top2++;
//             arr[top2] = num;
//         }
//     }
//     int pop()
//     {
//         if (top1 >= 0)
//         {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     int pop1()
//     {
//         if (top2 < size)
//         {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };

// Reverse a stack
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // Created a char type stack
//     stack<char> stack;
//     // String
//     string str = "Harry";
//     // Run a loop till string reaches to it's end
//     for (int i = 0; i < str.length(); i++)
//     {
//         // In ch we are assigning string all values
//         char ch = str[i];
//         // Then pushing that ch in stack
//         stack.push(ch);
//     }
//     // String ans is empty
//     string ans = "";
//     // Till stack becomes empty run the loop
//     while (!stack.empty())
//     {
//         // In ch we are reversing the stack by printing the last element (from top as stack works on LIFO)
//         char ch = stack.top();  // will get the last element
//         // Then storing them in ans in reverse order
//         ans.push_back(ch);
//         // We have to pop them then only we will see every element of stack else same element will print
//         stack.pop();
//     }
//     cout<<"answer is : "<<ans<<endl;
//     return 0;
// }

// Remove middle element from stack
// #include <iostream>
// #include <stack>
// using namespace std;
// void solve(stack<int> &inputstack, int count, int size)
// {
//     // If count == size / 2 then we will pop element from stack
//     if (count == size / 2)
//     {
//         inputstack.pop();
//         return;
//     }
//     // In num we are storing top element of stack and removing element from the stack which is the top element only(because stack always remove top element in pop())
//     int num = inputstack.top();
//     inputstack.pop();

//     // After removing first element we will run Recursive call and move the count to 1 and remove next element until mid element is removed
//     solve(inputstack, count + 1, size);
//     // Store the num again in stack which we had aside while removing the middle element
//     inputstack.push(num);
// }
// void deleteMiddle(stack<int> &inputstack, int size)
// {
//     int count = 0;
//     // for deleting middle we are sending stack, count and number/size
//     solve(inputstack, count, size);
// }

// Valid Pranthesis(balanced brackets) in stack (T.C -> O(n))
// ex - (), [], {}, not this )(, }{, ][
// #include <iostream>
// #include <stack>
// using namespace std;
// bool ValidParenthesis(string expression)
// {
//     stack<char> stack;
//     // We will pick and check every character of this stack
//     for (int i = 0; i < expression.size(); i++)
//     {
//         char ch = expression[i];
//         // If opening bracket then push it in stack
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             stack.push(ch);
//         }
//         // It is closing bracket then we have to match it with top of stack (and remove the unnecessary conditions from the stack)
//         else
//         {
//             // This will verify stack is not empty
//             if (!stack.empty())
//             {
//                 // This will give top of stack
//                 char top = stack.top();
//                 // Now will match ch with every bracket and top
//                 if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
//                 {
//                     // If yes then pop
//                     stack.pop();
//                 }
//                 else
//                 {
//                     // Return false
//                     return false;
//                 }
//             }
//             // Empty stack
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     // After whole processing is our stack empty then it means it is done
//     if (stack.empty())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// Insert Element at the bottom of stack
// #include <bits/stdc++.h>
// using namespace std;
// void solve(stack<int> &stack, int element){
//     // It is for when stack got empty then push the element that we have to add in stack bottom
//     if (stack.empty())
//     {
//         stack.push(element);
//         return;
//     }
//     // Store top element of stack in num
//     int num = stack.top();
//     // Pop that top element from the stack every case
//     stack.pop();

//     // Now once we reach at the bottom where it will say stack is empty then run Recursive call and add the element
//     solve(stack, element);
//     // After running recurssive call it will reverse back and add all the elements in reverse order
//     stack.push(num);
// }
// stack<int> pushAtBottom(stack<int> &stack, int element){
//     solve(stack, element);
//     return stack;
// }

// Reverse stack using recurssion
// #include <bits/stdc++.h>
// using namespace std;
// void insertAtBottom(stack<int> &stack, int num){
//     if (stack.empty())
//     {
//         stack.push(num);
//         return;
//     }
//     // If stack is not empty and it has some elements in it for ex - 6, 7, 8, 9, 10 then we will eliminate each of them one by one like first we will remove 10 then insert 5 at the bottom, then remove 9 and add 4 at the second index after bottom
//     int num = stack.top();
//     stack.pop();

//     insertAtBottom(stack, num);
//     stack.push(num);
// }
// void reverseStack(stack<int> &stack){
//     if (stack.empty())
//     {
//         return;
//     }

//     int num = stack.top();
//     stack.pop();

//     // Recursive call
//     reverseStack(stack);

//     insertAtBottom(stack, num);
// }

// Sort a stack
// #include <bits/stdc++.h>
// using namespace std;
// void InsertSorted(stack<int> &stack, int element){
//     // If stack is empty || till stack becomes empty && top element of stack becomes < than the element, till then just keep on pushing the element and return
//     if (stack.empty() || (!stack.empty() && stack.top() < element))
//     {
//         stack.push(element);
//         return;
//     }
//     // In num we will store stack.top()
//     int num = stack.top();
//     // Then pop the top function and keep on doing that till the end
//     stack.pop();

//     // Recursive call for removing top element one by one and the moment we will get empty stack we will push the element
//     InsertSorted(stack, element);
//     // After adding the sorted element in stack we will add the elements which we had kept aside
//     stack.push(num);

// }
// void sort(stack<int> &stack){
//     // If stack is empty then that is the answer
//     if (stack.empty())
//     {
//         return;
//     }
//     // In num we will store top elements of stack
//     int num = stack.top();
//     // Then we will pop them one by one after storing in num
//     stack.pop();

//     // Recursive call to remove all the elements of stack and reach the point where it is empty
//     sort(stack);
//     // After getting it empty we will now start adding elements in sorted order
//     InsertSorted(stack, num);
// }

// Redundant Bracket
// ex -> (a + (a * b))
// Useless Bracket in stack we have to check they are redundant or not
// #include <bits/stdc++.h>
// using namespace std;
// bool findRedundantBracket(string &str)
// {
//     // We created a stack
//     stack<char> stack;
//     // Run a loop till the end of the string
//     for (int i = 0; i < str.length(); i++)
//     {
//         // ch will contain all elements of string
//         char ch = str[i];
//         // string can have ( + - * / if any of these are present then push it in the stack
//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         {
//             stack.push(ch);
//         }
//         // else ch == ')' or letter like + - / *
//         else
//         {
//             // If closing bracket we get in string then we will make isRedundant = true means (useless = true) and we know that we need opening bracket & it should be in stack
//             if (ch == ')')
//             {
//                 bool isRedundant = true;
//                 // Run loop from the top first element and check till it gets opening bracket
//                 while (stack.top() != '(')
//                 {
//                     // In top we will store top element of stack
//                     char top = stack.top();
//                     // If top have + - / * then mark isRedundant = false
//                     if (top == '+' || top == '-' || top == '*' || top == '/')
//                     {
//                         isRedundant = false;
//                     }
//                     // We will keep on poping the stack until the while condition get's satisfied that too in loop(so, it will not stop until the condition get's satisfied)
//                     stack.pop();
//                 }
//                 // If isRedundant == true then return true means even after finding ( we did'nt get + - * / and that's why )( is useless and we will pop it
//                 if (isRedundant == true)
//                 {
//                     return true;
//                 }
//                 // This pop we will do to remove the opening bracket because it was redundant and it was useless
//                 stack.pop();
//             }
//         }
//     }
//     // If nothing then return false
//     return false;
// }

// Minimum cost to make string valid
// a -> closed
// b -> open
// #include <iostream>
// #include <stack>
// using namespace std;
// // This is how we will find it is odd or even case
// int findMinimumCost(string &str)
// {
//     // Odd case
//     if (str.length() % 2 == 1)
//     {
//         return -1;
//     }
//     // Creating a stack
//     stack<char> stack;
//     // Will run the loop till the end of the string
//     for (int i = 0; i < str.length(); i++)
//     {
//         // In ch store all elements of string
//         char ch = str[i];
//         // If ch == {
//         if (ch == '{')
//         {
//             // Push ch in stack if it is == {
//             stack.push(ch);
//         }
//         else
//         {
//             // ch is not closed brace and if stack is not empty() && stack.top() == '{'
//             if (!stack.empty() && stack.top() == '{')
//             {
//                 // Then pop that element
//                 stack.pop();
//             }
//             else
//             {
//                 // Push ch in stack
//                 stack.push(ch);
//             }
//         }
//     }
//     // Stack contain invalid expression
//     int a = 0;
//     int b = 0;
//     // Run loop till stack is empty
//     while (!stack.empty())
//     {
//         // If stack.top() == '{'
//         if (stack.top() == '{')
//         {
//             // increase value of b
//             b++;
//         }
//         else
//         {
//             // increase value of a
//             a++;
//         }
//         // We have to pop stack everytime to see the next-next value
//         stack.pop();
//     }
//     // ans will be calculated by this formulae
//     int ans = (a + 1) / 2 + (b + 1) / 2;
//     return ans;
// }

// Find next smaller element (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> nextSmallerElement(vector<int> &arr, int n){
//     // Created a stack
//     stack<int> stack;
//     // Push -1 intially in stack
//     stack.push(-1);
//     // ans vector is created of the size n
//     vector<int> ans(n);
//     // Run the loop n - 1 because everytime we will pop one element so we have to run n-1, i>=0 i-- as stack run in reverse order
//     for (int i = n - 1; i >= 0; i--)
//     {
//         // In current we will store all elements of array
//         int current = arr[i];
//         // Will run the loop where we will compare the top element of stack with current element which we are trying to add
//         while (stack.top() >= current)
//         {
//             // If > element in stack then pop it from the stack, if not then store the element you have to add
//             stack.pop();
//         }
//         // When we will come out of the loop we will have the smallest element of stack
//         ans[i] = stack.top();
//         // Now we will push the current element in the stack as the smallest element is we have and when we compare it with current we can now add the current in stack
//         stack.push(current);
//     }
//     return ans;
// }

// Largest Rectangle in histogram (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private:
//     // First we will find smaller element next to the current element
//     vector<int> nextSmallerElement(vector<int> arr, int n)
//     {
//         // Created a stack where we push -1 in it
//         stack<int> s;
//         s.push(-1);
//         // This ans vector will be of same size as the one we got
//         vector<int> ans(n);
//         // For loop from n - 1 because everytime on pop one element will get removed and stack moves in reverse order that's why i--
//         for (int i = n - 1; i >= 0; i--)
//         {
//             int curr = arr[i];
//             // while we reached to the starting of the stack i.e -1 && arr[top element] >= current element then the curr element will be the next smaller digit
//             while (s.top() != -1 && arr[s.top()] >= curr)
//             {
//                 // That next smaller digit we will pop
//                 s.pop();
//             }
//             // ans is stack.top() as outside the loop we will have the least/minimum value of stack and it's index we will store in stack
//             ans[i] = s.top();
//             // We stored index because we wanted to store index as from index we will able to know how much rectangle can be extended
//             s.push(i);
//         }
//         return ans;
//     }

//     vector<int> prevSmallerElement(vector<int> arr, int n)
//     {
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
//         // For prev element we have to run a normal loop because stack run in reverse order so we have to run a normal loop to continue that
//         for (int i = 0; i < n; i++)
//         {
//             int curr = arr[i];
//             // Till stack got completely emty and s.top() >= curr element, run a loop
//             while (s.top() != -1 && arr[s.top()] >= curr)
//             {
//                 // Pop that element
//                 s.pop();
//             }
//             // ans is stack.top() because that is the prevSmallestElement
//             ans[i] = s.top();
//             // Push the index of that prevSmallestElement
//             s.push(i);
//         }
//         return ans;
//     }

// public:
//     int largestRectangleArea(vector<int> &heights)
//     {
//         int n = heights.size();

//         vector<int> next(n);
//         next = nextSmallerElement(heights, n);

//         vector<int> prev(n);
//         prev = prevSmallerElement(heights, n);

//         // We are assigning it the min. value
//         int area = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             int l = heights[i];

//             // One condition in which next == -1 means all elements are equal then it will store -1 in every case and when we try to find width through formuale we will get negative value which is wrong
//             if (next[i] == -1)
//             {
//                 // We will equate it to the value of n so that it will be not a negative
//                 next[i] = n;
//             }
//             // Formulae for calculating width
//             int width = next[i] - prev[i] - 1;
//             int newArea = l * width;
//             // Will use max() for area of Rectangle b/w area which contains int_min and newAreaa that contains the answer
//             area = max(area, newArea);
//         }
//         return area;
//     }
// };

// The Celebrity problem (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private:
//     bool knows(vector<vector<int>> &array, int a, int b, int n)
//     {
//         // This knows function will check that does a knows b
//         if (array[a][b] == 1)
//             return true;
//         else
//             return false;
//     }

// public:
//     // Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int>> &array, int n)
//     {
//         // First we created a stack where we will put all the elements
//         stack<int> s;
//         // step1: push all element in stack
//         for (int i = 0; i < n; i++)
//         {
//             s.push(i);
//         }
//         // step2: get 2 elements and compare them
//         while (s.size() > 1)
//         {
//             // a where we will store top element
//             int a = s.top();
//             s.pop();

//             // b where we will store other top element
//             int b = s.top();
//             s.pop();
//             // (knows) is a function which will check that a knows b or not
//             if (knows(array, a, b, n))
//             {
//                 // Then we will push b because a is not a celebrity
//                 s.push(b);
//             }
//             else
//             {
//                 // Then we will push a because b is not a celebrity
//                 s.push(a);
//             }
//         }
//         // Now when we come out of the loop we will have one element of the stack which have potential of being a celebrity
//         int ans = s.top();
//         // step3: single element in stack is potential celeb
//         // so verify it
//         int zeroCount = 0;
//         // Run a loop from start to end
//         for (int i = 0; i < n; i++)
//         {
//             // If array's all element and it's index during rowCheck == 0 then increase count of zero
//             if (array[ans][i] == 0)
//                 zeroCount++;
//         }

//         // If there are not that amount of zeroes as there is number of rows in array then return -1
//         if (zeroCount != n)
//             return -1;

//         // column check
//         int oneCount = 0;

//         for (int i = 0; i < n; i++)
//         {
//             // If array's all element is == 1 during colum check then increase one count++
//             if (array[i][ans] == 1)
//                 oneCount++;
//         }
//         // If there are not that amount of ones (except one case which is itself) as there is number of columns in array then return -1
//         if (oneCount != n - 1)
//         {
//             return -1;
//         }
//         return ans;
//     }
// };

// Max Rectangle in Binary Matrix with all 1's (T.C -> O(n * m) & S.C -> O(m))
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 1000
// class Solution
// {
// private:
//     // We know how to find next smaller element in Binary Stack
//     vector<int> nextSmallerElement(int *arr, int n)
//     {
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);

//         for (int i = n - 1; i >= 0; i--)
//         {
//             int curr = arr[i];
//             while (s.top() != -1 && arr[s.top()] >= curr)
//             {
//                 s.pop();
//             }
//             // ans is stack.top()
//             ans[i] = s.top();
//             // push the index in stack
//             s.push(i);
//         }
//         return ans;
//     }

//     vector<int> prevSmallerElement(int *arr, int n)
//     {
//         // For prevSmallerElement we will create a stack
//         stack<int> s;
//         // Push -1 in stack
//         s.push(-1);
//         // Vector ans of size n will store ans
//         vector<int> ans(n);
//         // For loop from start to end
//         for (int i = 0; i < n; i++)
//         {
//             // curr will have all elements of arr
//             int curr = arr[i];
//             // Till stack first element becomes = -1 && arr[top element] >= curr then pop it from the stack
//             while (s.top() != -1 && arr[s.top()] >= curr)
//             {
//                 s.pop();
//             }
//             // When we come out of the loop we will have least one value with us
//             ans[i] = s.top();
//             // We will push that one value index in stack
//             s.push(i);
//         }
//         return ans;
//     }

//     int largestRectangleArea(int *array, int n)
//     {
//         // This next vector will have next value
//         vector<int> next(n);
//         next = nextSmallerElement(array, n);

//         // This prev vector will have prev value
//         vector<int> prev(n);
//         prev = prevSmallerElement(array, n);

//         // area will be equal to int_min
//         int area = INT_MIN;
//         // run the loop from starting to end of array
//         for (int i = 0; i < n; i++)
//         {
//             // L will be length of array
//             int l = array[i];

//             if (next[i] == -1)
//             {
//                 next[i] = n;
//             }
//             // Formulae to calculate width
//             int width = next[i] - prev[i] - 1;
//             // NewArea will have l * breadth
//             int newArea = l * width;
//             // This will find max. area b/w area and length * width
//             area = max(area, newArea);
//         }
//         return area;
//     }

// public:
//     // 2-D array
//     int maxArea(int array[MAX][MAX], int n, int m)
//     {
//         // compute area for first row, where array[0] is the first row and m is no. of columns or the size of array[0] row
//         int area = largestRectangleArea(array[0], m);
//         // run a loop from i = 1 till the end for remaining rows
//         // So, we started from i = 1 because i = 0 already checked
//         for (int i = 1; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 // row udpate: by adding previous row's value
//                 // array[i][j] != 0 not at the end of 2-D array
//                 if (array[i][j] != 0)
//                 {
//                     // we added previous array's value
//                     array[i][j] = array[i][j] + array[i - 1][j];
//                 }
//                 else
//                 {
//                     // else we will set array[i][j] == 0
//                     array[i][j] = 0;
//                 }
//             }
//             // entire row is updated after we come out of the loop
//             int newArea = largestRectangleArea(array[i], m);
//             area = max(area, newArea);
//         }
//         return area;
//     }
// };

// N stacks in an Array (T.C -> O(1) & S.C -> O(s + n))
// #include <bits/stdc++.h>
// using namespace std;
// class Nstack
// {
//     int *arr;
//     int *top;
//     int *next;

//     int n;
//     int s;

//     int freespot;

// public:
//     // Initialize your data structure.
//     Nstack(int N, int S)
//     {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];

//         // top initialise
//         for(int i=0; i<n; i++) {
//             top[i] = -1;
//         }

//         //next initialise
//         for(int i=0; i<s; i++) {
//             next[i] = i+1;
//         }
//         // update last index value to -1
//         next[s-1] = -1;

//         //initialise freespot
//         freespot = 0;

//     }

//     // Pushes 'X' into the Mth stack return true if it gets pushed into the stack, and false otherwise
//     bool push(int x, int m)
//     {
//         //check for overflow
//         if(freespot == -1) {
//             return false;
//         }

//         //find index
//         int index = freespot;

//         //insert element into array
//         arr[index] = x;

//         //update freespot
//         freespot = next[index];

//         //update next;
//         next[index] = top[m-1];

//         //update top
//         top[m-1] = index;

//         return true;
//     }

//     // Pops top element from Mth stack return -1 if the stack is empty, otherwise returns the popped element
//     int pop(int m)
//     {
//         //check underflow condition
//         if(top[m-1] == -1) {
//             return -1;
//         }
//         // We will write everything in reverse order because whatever we write in bool() now we have to pop them so that's why we are reversing it
//         int index= top[m-1];

//         top[m-1] = next[index];

//         next[index] = freespot;

//         freespot = index;

//         return arr[index];
//     }
// };

// Design Special Stack (T.C -> O(1) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class SpecialStack
// {
//     // Define the data members.
//     stack<int> s;
//     int mini = INT_MAX;

// public:
//     void push(int data)
//     {
//         // for first element (if it is empty then it means it's first element we are pushing in stack)
//         if (s.empty())
//         {
//             s.push(data);
//             // Update mini with the data we push in stack
//             mini = data;
//         }
//         // If not the first element then
//         else
//         {
//             // if it is smaller than mini
//             if (data < mini)
//             {
//                 // Then we will use this formulae
//                 s.push(2 * data - mini);
//                 // After pushing the value we will update mini with the same value
//                 mini = data;
//             }
//             else
//             {
//                 // else we will just push that data in the stack
//                 s.push(data);
//             }
//         }
//     }
//     // Pop
//     int pop()
//     {
//         // If the stack is empty (then it will cause overflow if we try to pop it)
//         if (s.empty())
//         {
//             return -1;
//         }
//         // curr will have the top most element of stack
//         int curr = s.top();
//         // Pop that top element after storing in curr
//         s.pop();
//         // If curr > mini then return curr
//         if (curr > mini)
//         {
//             return curr;
//         }
//         // If smaller than mini
//         else
//         {
//             // prevMin will have mini value
//             int prevMin = mini;
//             // use this formulae
//             int val = 2 * mini - curr;
//             mini = val;
//             return prevMin;
//         }
//     }
//     // Top
//     int top()
//     {
//         // If empty stack (then stack overflow, if we try to pop it)
//         if (s.empty())
//             return -1;

//         // curr will have top most element of stack
//         int curr = s.top();
//         // If curr < mini then return mini
//         if (curr < mini)
//         {
//             return mini;
//         }
//         // else we will return curr value as it is
//         else
//         {
//             return curr;
//         }
//     }
//     // If empty stack then s.empty() will give empty stack value
//     bool isEmpty()
//     {
//         return s.empty();
//     }
//     // getMini will return min number of the stack
//     int getMini()
//     {
//         // If stack empty then return -1
//         if (s.empty())
//             return -1;
//         // else return mini
//         return mini;
//     }
// };

// Queues
// It works on FIFO(First In First Out)
// Queue is a pile in which items are added at one end and removed from the other
// We cannot insert/delete elements from middle in dequeue
// Whichever element is entering first will come out first
// In push there is rear which will be used while pushing elements in queue
// In pop there is front which will be used while removing elements from queue
// It has some operations like -> Pop, Push, isEmpty, size & create
// Queues serve major role in simulation of limited resource allocation
// Q.push(5);
// Q.pop();
// Q.size();
// Q.empty();
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int> queue;
//     queue.push(2);
//     queue.push(4);
//     queue.push(6);
//     queue.push(8);
//     queue.push(10);
//     // Print size of queue
//     cout<<queue.size()<<endl;
//     // Pop first element from queue
//     queue.pop();
//     cout<<queue.size()<<endl;
//     // Will return 1 for true & 0 for false
//     cout<<queue.empty()<<endl;
//     // Will print the front/first element of queue
//     cout<<queue.front()<<endl;
//     return 0;
// }

// Implementation of Queue
// We can do implementation in 2 ways -> 1) Arrays 2) Linked List
// Using Arrays (T.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class Queue
// {
//     int *arr;
//     int qfront;
//     int rear;
//     int size;

// public:
//     // Constructor
//     Queue()
//     {
//         // Size is set at some value it can be anything
//         size = 100001;
//         // made array of size of size
//         arr = new int[size];
//         // Both are at starting
//         // front  = 0
//         qfront = 0;
//         // rear = 0
//         rear = 0;
//     }
//     // If the queue is empty
//     bool isEmpty()
//     {
//         // Queue will be empty when front == rear
//         if (qfront == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     // enqueue (push data)
//     void enqueue(int data)
//     {
//         // If queue is full means equal to the size
//         if (rear == size)
//             // then print this
//             cout << "Queue is Full" << endl;
//         else
//         {
//             // arr[rear] will have data which we want to push in it
//             arr[rear] = data;
//             // After pushing data we will move to next index
//             rear++;
//         }
//     }
//     // Dequeue means (pop from queue)
//     int dequeue()
//     {
//         // if front == rear that means queue is empty because we are at starting and it is empty
//         if (qfront == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             // ans will have arr[qfront] value
//             int ans = arr[qfront];
//             // arr[qfront] will be at start now
//             arr[qfront] = -1;
//             // once we assign the value of qfront in ans we will move to next element
//             qfront++;
//             // if qfront == rear that means we are at the start and set qfront and rear = 0
//             if (qfront == rear)
//             {
//                 qfront = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }
//     // front is for front
//     int front()
//     {
//         // if qfront == rear it means we are at starting and it is empty
//         if (qfront == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             // else return arr[qfront]
//             return arr[qfront];
//         }
//     }
// };

// Circular Queue
// Circular Queue is also known as Ring Buffer
// #include <bits/stdc++.h>
// using namespace std;
// class CircularQueue{
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     // Initialize your data structure
//     CircularQueue(int n){
//         size = n;
//         // arr of size (size)
//         arr = new int[size];
//         // front and rear both at -1
//         front = -1;
//         rear = -1;
//     }
//     // Push data into the queue returns true if it gets pushed into the stack and false otherwise
//     bool enqueue(int value){
//         // check whther queue is full by setting front is at 0 and rear = end || rear = front - 1 % size - 1 then it is full
//         if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
//             //cout << "Queue is Full";
//             return false;
//         }
//         // we are at first element
//         else if(front == -1)
//         {
// 			front = 0;
//          rear = 0;
//         }
//         // if rear == size - 1 (at end) && front != 0 and front is somewhere else in queue then we have to move rear to the start because it is circular queue
//         else if(rear == size-1 && front != 0) {
//             // This will bring rear back to starting
//             rear = 0;
//         }
//         else
//         {
//             // just move to the next index if not at the end
//             rear++;
//         }
//         // after coming out of the loop we will insert value in array wherever we will be at
//         arr[rear] = value;
//         return true;
//     }

//     // Dequeues top element from queue returns -1 if the stack is empty, otherwise returns the popped element
//     int dequeue(){
//         // check queue is empty
//         if(front == -1){
//             return -1;
//         }
//         // ans will store the value/data wherever front is at
//         int ans = arr[front];
//         // arr[front] = -1 means when we remove data from it arr[front] will become equal to -1
//         arr[front] = -1;
//         // If front == rear means at same place
//         if(front == rear) {
//             // that means single element is present when we pop it, it will make front and rear = -1
//             front = -1;
//             rear = -1;
//         }
//         // If front is at end then we will move it to start as it is circular queue
//         else if(front == size - 1) {
//             // to maintain cyclic nature of cyclic queue
//             front = 0;
//         }
//         else
//         {
//             // we will maintain the normal flow of front and keep on moving next-next index
//             front++;
//         }
//         return ans;
//     }
// };

// Dequeue
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int> deque;
//     // pushing element from front
//     deque.push_front(12);
//     // pushing element from back
//     deque.push_back(14);
//     // Will show the element form front
//     cout<<deque.front()<<endl;
//     // Will show the element from back
//     cout<<deque.back()<<endl;
//     // Will pop from back
//     deque.pop_back();
//     // Will pop from front
//     deque.pop_front();
//     deque.push_front(10);
//     if (deque.empty())
//     {
//         cout<<"Empty"<<endl;
//     }
//     else
//     {
//         cout<<"Not Empty"<<endl;
//     }
//     return 0;
// }

// Implementation of Deque with it's all 4 properties
// #include <bits/stdc++.h>
// using namespace std;
// class Deque
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     // Initialize your data structure
//     Deque(int n)
//     {
//         size = n;
//         // arr of size n
//         arr = new int[n];
//         // front and rear both at -1 intially
//         front = -1;
//         rear = -1;
//     }

//     // Push X in the front of the deque returns true if it gets pushed into the deque, and false otherwise
//     bool pushFront(int x)
//     {
//         // check full or not
//         if (isFull())
//         {
//             return false;
//         }
//         // If empty then bring front and rear at 0
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//         }
//         // If front == 0 && rear != at it's end
//         else if (front == 0 && rear != size - 1)
//         {
//             // In that case put front at end as it works like circular queue
//             front = size - 1;
//         }
//         else
//         {
//             // Just move in backwards index-index
//             front--;
//         }
//         // After coming out of loop we will get the idea which type of dequeue it is
//         // Push the X data in array using front
//         arr[front] = x;
//         return true;
//     }

//     // Pushes X in the back of the deque returns true if it gets pushed into the deque, and false otherwise
//     bool pushRear(int x)
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
//         // If rear = end && front != 0 not at start means somewhere else in deque
//         else if (rear == size - 1 && front != 0)
//         {
//             // Then bring rear at 0(start)
//             rear = 0;
//         }
//         else
//         {
//             // Just move rear in forward direction index-index(as it works opp. to push)
//             rear++;
//         }
//         // After coming out of loop we will get the idea which type of dequeue it is
//         // Push the X data in array using front
//         arr[rear] = x;
//         return true;
//     }
//     // Pops an element from the front of the deque returns -1 if the deque is empty, otherwise returns the popped element
//     int popFront()
//     {
//         if (isEmpty())
//         { // to check queue is empty
//             // cout << "Queue is Empty " << endl;
//             return -1;
//         }
//         // In ans store arr[front] data
//         int ans = arr[front];
//         // Then set arr[front] = -1
//         arr[front] = -1;
//         // If front == rear means after poping front and rear = -1
//         if (front == rear)
//         {
//             // single element is present
//             front = -1;
//             rear = -1;
//         }
//         // If front is at end
//         else if (front == size - 1)
//         {
//             // Bring front at starting to maintain cyclic nature
//             front = 0;
//         }
//         else
//         {
//             // Move to the next-next element
//             front++;
//         }
//         return ans;
//     }
//     // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popRear()
//     {
//         if (isEmpty())
//         {
//             // check queue is empty
//             return -1;
//         }
//         // Store arr[rear] in ans
//         int ans = arr[rear];
//         // Then ans[rear] = -1
//         arr[rear] = -1;
//         // Front == rear means it has 1 element in deque so, when we remove it, rear and front = -1
//         if (front == rear)
//         { // single element is present
//             front = -1;
//             rear = -1;
//         }
//         // If rear == 0 then bring rear to end
//         else if (rear == 0)
//         {
//             // To maintain cyclic nature
//             rear = size - 1;
//         }
//         else
//         {
//             // Move rear in backward direction index-index
//             rear--;
//         }
//         return ans;
//     }
//     // Returns the first element of the deque if the deque is empty, it returns -1
//     int getFront()
//     {
//         // Just check Empty or not
//         if (isEmpty())
//         {
//             return -1;
//         }
//         // Else return arr[front] as usual
//         return arr[front];
//     }
//     // Returns the last element of the deque if the deque is empty, it returns -1
//     int getRear()
//     {
//         // Just check Empty or not
//         if (isEmpty())
//         {
//             return -1;
//         }
//         // Else return arr[rear] as usual
//         return arr[rear];
//     }
//     // Returns true if the deque is empty otherwise returns false
//     bool isEmpty()
//     {
//         // If front == -1 it means deque is empty otherwise if we write front == rear that means deque has 1 element
//         if (front == -1)
//             return true;
//         else
//             return false;
//     }
//     // Returns true if the deque is full otherwise returns false
//     bool isFull()
//     {
//         // If front == 0 && rear == end || front != 0 (front is at somewhere else in deque) then use this formulae to see it is full or not
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             // If full return true
//             return true;
//         }
//         else
//         {
//             // Else return false
//             return false;
//         }
//     }
// };

// Reverse the queue (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// // Function to reverse the queue
// queue<int> rev(queue<int> queue)
// {
//     // Created a stack
//     stack<int> stack;
//     // Run the loop until queue becomes empty
//     while (!queue.empty())
//     {
//         // Store the first/top element of queue in element and it is in loop so basically add every element of queue
//         int element = queue.front();
//         // Now pop the first element of queue and it is in loop so basically pop every element of queue
//         queue.pop();
//         // Push that in stack so all elements of queue will store in stack one by one
//         stack.push(element);
//     }
//     // Till stack becomes empty run the loop
//     while (!stack.empty())
//     {
//         // store top/first element of stack where all queue elements are stored
//         int element = stack.top();
//         // Now pop every element one by one from the stack
//         stack.pop();
//         // push all element into queue again, but now it will be stored in reverse order
//         queue.push(element);
//     }
//     // return it at the end
//     return queue;
// }

// Which sort is internal sort?
// Examples of internal sorting are bubble sort, insertion sort, selection sort
// Circular Queue the value of r = (r + 1) % queue_size
// In a linear queue, the traversal through the queue is possible only once an element is deleted, we cannot insert another element in its position this disadvantage of a linear queue is overcome by a circular queue, thus saving memory
// Dequeue is a linear list in which inserion and deletion is done from either end of structure and we cannot remove middle element from it

// Find first negative integer in every window of size k
// #include <bits/stdc++.h>
// using namespace std;
// // function for print first negative integer where N is the size of the arr and K is the no of elements of which we will create the window
// vector<long long> printFirstNegativeInteger(long long int arr[], long long int N, long long int K)
// {
//     // deque of long long int datatype so that very long data can be stored
//     deque<long long int> deque;
//     // ans will have the ans
//     vector<long long> ans;
//     // For first window of K size we will run the loop
//     for (int i = 0; i < K; i++)
//     {
//         // If current element is < 0 means -ve integer then we will store it in deque
//         if (arr[i] < 0)
//         {
//             // we will store it's index not the element
//             deque.push_back(i);
//         }
//     }
//     // Store ans of first k sized window
//     // If deque.size() > 0 means there is any element in deque for sure
//     if (deque.size() > 0)
//     {
//         // Store the front element of deque in ans because we want first negative integer only
//         ans.push_back(arr[deque.front()]);
//     }
//     else
//     {
//         // else it is empty deque so store 0 index
//         ans.push_back(0);
//     }
//     // Process for remaining windows
//     // So, we will start from K and run the loop till size of array (because we are doing this for remaining part of array)
//     for (int i = K; i < N; i++)
//     {
//         // deque is not empty && current pos. - front element >= K means we did'nt come under k no. of elements window
//         if (!deque.empty() && (i - deque.front()) >= K)
//         {
//             // Then just pop the element
//             deque.pop_front();
//         }
//         // Addition
//         // If -ve number then store it's index
//         if (arr[i] < 0)
//         {
//             deque.push_back(i);
//         }
//         // Ans store
//         // If deque.size() > 0 means it is not empty it has some element for sure
//         if (deque.size() > 0)
//         {
//             // Then store the deque.front() in ans
//             ans.push_back(arr[deque.front()]);
//         }
//         else
//         {
//             ans.push_back(0);
//         }
//     }
//     return ans;
// }

// Reverse First K elements of queue (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// queue<int> modifyQueue(queue<int> q, int k) {
//     // put first k element in stack and remove it from queue
//     // k element take it from stack & then put it back in queue
//     // fer queue k (n-k) starting k elements put them back in queue
//     // stack created
//     stack<int> s;
//     // Run loop from 0 to K
//     // Pop first k elements from queue and put it into stack
//     for(int i = 0; i<k; i++) {
//         // val will have queue.front()
//         int val = q.front();
//         // Then pop it out
//         q.pop();
//         // Then push it in stack
//         s.push(val);
//     }

//     // Fetch from stack and push into queue
//     // While stack is empty
//     while(!s.empty()) {
//         // val will contain top of stack
//         int val = s.top();
//         // Pop it out
//         s.pop();
//         // push the top element in queue
//         q.push(val);
//     }
//     // Now, we have the reversed element but that is stored in back of the queue
//     // So, we will first remove n-k elements from queue and then add them at back
//     // Fetch first n-k element(starting element) and then add them in back so that it will get in proper order
//     int t = q.size()-k;
//     // Loop will run till t-- (in reverse order so that we will get arranged manner)
//     while(t--) {
//         // Val will have q.front()
//         int val = q.front();
//         // pop top element from queue
//         q.pop();
//         // Push that top/front element in queue
//         q.push(val);
//     }
//     // return queue
//     return q;
// }

// First non repeating characters in a stream
// If repeating character append # at that place
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
//          // Create a map
// 		    map<char, int> map;
//          // Empty string where we will store ans
// 		    string ans = "";
//          // Queue where we will do all the append and delete functions
// 		    queue<char> q;

//          // Run a loop from 0 to the end of the string
// 		    for(int i=0; i<A.length(); i++) {
//              // In char ch will store all elements of string
// 		        char ch = A[i];

//              // Push all elements from string A into q
// 		        q.push(ch);
//              // Increase count if same character is repeated
// 		        map[ch]++;

//              // While loop will run till the queue becomes empty
// 		        while(!q.empty()) {
//                  // If (map[q.front()] > 1) map first element or front element is > 1 means that character is repeating and that's why it is repeating
// 		            if(map[q.front()] > 1){
//                      // Now pop that repeating character
// 		                q.pop();
// 		            }
// 		            else
// 		            {
//                      // else it is not repeating therefore store it in ans
// 		                ans.push_back(q.front());
//                      // after storing we don't need anything else therefore just break
// 		                break;
// 		            }
// 		        }
//              // If queue is empty means whole queue was empty then push('#') in ans
// 		        if(q.empty()){
// 		            ans.push_back('#');
// 		        }
// 		    }
//          // return ans
// 		    return ans;
// 		}
// };

// Circular Tour
// There are N size of petrol pumps on that circle you have 2 sets of data, find the starting point from where the truck will start and complete the circle without exhausting it's petrol
// #include <bits/stdc++.h>
// using namespace std;
// class PetrolPump
// {
// private:
//     int petrol;
//     int distance;
// public:
//     // Function to find starting point where the truck can start to get through
//     // the complete circle without exhausting its petrol in between
//     int tour(PetrolPump p[], int n)
//     {
//         // This is deficit set at 0
//         int deficit = 0;
//         // Balance is also 0
//         int balance = 0;
//         // Start is also at 0
//         int start = 0;
//         // Run a loop from 0 to the end of array p[]
//         for (int i = 0; i < n; i++)
//         {
//             // append in balance p[i].petrol - p[i].distance
//             balance += p[i].petrol - p[i].distance;
//             // If balance < 0 that means it is -ve and it is the deficit
//             if (balance < 0)
//             {
//                 // put this value of balance in deficit
//                 deficit += balance;
//                 // We have to move start because on that index we were unable to complete the circular path
//                 start = i + 1;
//                 // balance will be 0 because we will start from new index now where balance will be start from 0
//                 balance = 0;
//             }
//         }
//         // If balance + deficit >= 0 then return the answer which is start
//         if (balance + deficit >= 0)
//         {
//             return start;
//         }
//         // else return -1 because then the cycle will be not possible
//         else
//         {
//             return -1;
//         }
//     }
// };

// Interleave the first half of the queue with the second half (T.C -> O(n) S.C -> O(n))
// C++ program to interleave the first half of the queue
// with the second half
// #include <bits/stdc++.h>
// using namespace std;

// // Function to interleave the queue
// void interLeaveQueue(queue<int>& q)
// {
// 	// Initialize an empty stack of int type
// 	stack<int> s;
//  // halfSize will have queue.size() / 2; means it's half
// 	int halfSize = q.size() / 2;

// 	// Push first half elements into the stack
// 	// queue:16 17 18 19 20, stack: 15(T) 14 13 12 11
//  // Will run the loop from starting to the middle and push all the elements of first half in stack
// 	for (int i = 0; i < halfSize; i++) {
// 		s.push(q.front());
// 		q.pop();
// 	}

// 	// add back the stack elements in queue
// 	// queue: 16 17 18 19 20 15 14 13 12 11
//  // while stack becomes empty keep on pushing one by one element of stack in queue as it is reversed now
// 	while (!s.empty()) {
// 		q.push(s.top());
// 		s.pop();
// 	}

// 	// remove the first half elements of queue
// 	// and add them back
// 	// queue: 15 14 13 12 11 16 17 18 19 20
// 	for (int i = 0; i < halfSize; i++) {
// 		q.push(q.front());
// 		q.pop();
// 	}

// 	// Again push the first half elements into the stack
// 	// queue: 16 17 18 19 20, stack: 11(T) 12 13 14 15
// 	for (int i = 0; i < halfSize; i++) {
// 		s.push(q.front());
// 		q.pop();
// 	}

// 	// interleave the elements of queue and stack
// 	// queue: 11 16 12 17 13 18 14 19 15 20
//     // Until stack becomes empty push stack top element in queue then pop it and then do it for queue top/front element same thing keep on doing that until stack becomes empty, so one stack one queue
// 	while (!s.empty()) {
// 		q.push(s.top());
// 		s.pop();
// 		q.push(q.front());
// 		q.pop();
// 	}
// }

// // Driver program to test above function
// int main()
// {
// 	queue<int> q;
// 	q.push(11);
// 	q.push(12);
// 	q.push(13);
// 	q.push(14);
// 	q.push(15);
// 	q.push(16);
// 	q.push(17);
// 	q.push(18);
// 	q.push(19);
// 	q.push(20);
// 	interLeaveQueue(q);
// 	int length = q.size();
// 	for (int i = 0; i < length; i++) {
// 		cout << q.front() << " ";
//      // We have to pop so that next-next element will print in order as it is a loop
// 		q.pop();
// 	}
// 	return 0;
// }

// Implement K number of queues in a single array
// #include <bits/stdc++.h>
// using namespace std;
// class kQueue {
//     private:
//         // size of array
//         int n;
//         // K no. of queues we will insert
//         int k;
//         int *front;
//         int *rear;
//         // array where we will insert elements
//         int *arr;
//         // freespot will have 0 value in starting
//         int freeSpot;
//         // next will tell that next index block have free space or not
//         int *next;

//     public:
//         // constructor
//         kQueue(int n, int k) {
//             this -> n = n;
//             this -> k = k;
//             // front[k] of k queues will have initially -1 value
//             front = new int[k];
//             // rear[k] of k queues will have -1 value initially
//             rear = new int[k];
//             // for loop from 0 to k no. of queues initially front and rear have -1
//             for(int i=0; i<k; i++) {
//                 front[i] = -1;
//                 rear[i] = -1;
//             }
//             // Update next
//             // Run a loop from 0 to the size of array where we will tell next element/block have free space or not
//             next = new int[n];
//             for(int i=0; i<n; i++) {
//                 next[i] = i+1;
//             }
//             // Last index of next[n - 1] will have -1 value because after last there is no space
//             next[n-1] = -1;
//             // Array
//             arr = new int[n];
//             freeSpot = 0;
//         }
//         // push in queue
//         void enqueue(int data, int queuen) {

//             // overflow
//             if( freeSpot == -1) {
//                 cout << "No Empty space is present" << endl;
//                 return;
//             }

//             //find first free index as free spot will have free index
//             int index = freeSpot;

//             // update freespot with the next[index]
//             freeSpot = next[index];

//             // check whether first element or not
//             // if queue nth - 1 == -1 that means it is first element
//             if(front[queuen-1] == -1){
//                 // put the front at index of first element
//                 front[queuen-1] = index;
//             }
//             else{
//                 // else link new element to the prev element
//                 next[rear[queuen-1]] = index;
//             }

//             //update next with -1 because no empty space left after assigning value to array
//             next[index] = -1;

//             //update rear as front is also updated so we have to update rear also
//             rear[queuen-1] = index;

//             // push element in the array
//             arr[index] = data;
//         }
//         // Pop
//         int dequeue(int queuen) {
//             // underflow
//             if(front[queuen-1] == -1)
//             {
//                 cout << "Queue underFlow " << endl;
//                 return -1;
//             }
//             //find which index we want to pop
//             int index = front[queuen-1];

//             // Move front next-next
//             front[queuen-1] = next[index];

//             // Manage freepot
//             // Pointing free spot from first free index to the next free spot in that array
//             next[index] = freeSpot;
//             // This will point at that spot which is poped so that index is also part of free spot now
//             freeSpot = index;
//             // return it to see which element is poped
//             return arr[index];
//         }
// };
// int main() {
// kQueue q(10, 3);
// q.enqueue(10, 1);
// q.enqueue(15,1);
// q.enqueue(20, 2);
// q.enqueue(25,1);

// cout << q.dequeue(1) << endl;
// cout << q.dequeue(2) << endl;
// cout << q.dequeue(1) << endl;
// cout << q.dequeue(1) << endl;

// cout << q.dequeue(1) << endl;

// return 0;
// }

// Sum of max. and min. element of all sub array of size 'k' (T.C -> O(n))
// #include <iostream>
// #include <queue>
// using namespace std;

// int solve(int *arr, int n, int k)
// {
//     // Doubly ended queue of maxi of k size
//     deque<int> maxi(k);
//     // Doubly ended queue of mini of k size
//     deque<int> mini(k);

//     // Addition of first k size window
//     //  run loop from starting till the k elements
//     for (int i = 0; i < k; i++)
//     {
//         // while maxi becomes empty and arr[maxi.back()] <= arr[current element] till then keep poping elements and store max. value index only
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();

//         // while mini becomes empty and arr[mini.back()] >= arr[current element] till then keep poping elements from back and store mini. value index only
//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//             mini.pop_back();
//         // We will store index of max. element
//         maxi.push_back(i);
//         // We will store index of mini. element
//         mini.push_back(i);
//     }
//     // ans will be at 0
//     int ans = 0;
//     // ans will have
//     // We create this formular where we will append in ans the maxi + mini sum
//     ans += arr[maxi.front()] + arr[mini.front()];

//     // we will process remaining windows we will do same for them
//     for (int i = k; i < n; i++)
//     {
//         // while we go in next window
//         // we have to do first removal process
//         while (!maxi.empty() && i - maxi.front() >= k)
//         {
//             // pop element from front as we moved for next k element
//             maxi.pop_front();
//         }
//         // This formular we will use for pop element from front as we moved to k no. of element
//         while (!mini.empty() && i - mini.front() >= k)
//         {
//             mini.pop_front();
//         }

//         // Now, we will do addition process as we move to k no. of element
//         // for mini we will check it should not be empty and maxi.back <= arr[current element]
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//             // Then pop from back
//             maxi.pop_back();

//         // for mini we will check it should not be empty and mini.back >= arr[current element]
//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//             // Then pop from back
//             mini.pop_back();
//         // Now, push from back index of max element
//         maxi.push_back(i);
//         // Now, push from back index of mini element
//         mini.push_back(i);
//         // We will append in ans the maxi + mini sum
//         ans += arr[maxi.front()] + arr[mini.front()];
//     }
//     return ans;
// }

// int main()
// {
//     // We created array of 7 size
//     int arr[7] = {2, 5, -1, 7, -3, -1, -2}; // 18 is the answer
//     // K = 4
//     int k = 4;
//     cout << solve(arr, 7, k) << endl;
//     return 0;
// }

// Creating a Binary Tree
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
//     // we are assigning data given by user
//     cout << "Enter the data : " << endl;
//     int data;
//     cin >> data;
//     // node created with root name where data given by user will store in it
//     root = new Node(data);
//     // if data == -1 that means it is NULL
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // As it is a tree so it will insert elements on left and right both sides
//     cout << "Enter data for inserting in left : " << data << endl;
//     // Here, it will create tree on left side
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right : " << data << endl;
//     // Here, it will create tree on right side
//     root->right = buildTree(root->right);
//     return root;
// }
// int main()
// {
//     Node *root = NULL;
//     // Create a tree
//     root = buildTree(root);
//     return 0;
// }

// Insertion in a Binary Tree
// C++ program to insert element in Binary Tree
// #include <iostream>
// #include <queue>
// using namespace std;

// /* A binary tree node has data, pointer to left child
// and a pointer to right child */

// struct Node {
// 	int data;
// 	Node* left;
// 	Node* right;
// };

// // Function to create a new node
// Node* CreateNode(int data)
// {
// 	Node* newNode = new Node();
// 	if (!newNode) {
// 		cout << "Memory error\n";
// 		return NULL;
// 	}
// 	newNode->data = data;
// 	newNode->left = newNode->right = NULL;
// 	return newNode;
// }

// // Function to insert element in binary tree
// Node* InsertNode(Node* root, int data)
// {
// 	// If the tree is empty, assign new node address to root
// 	if (root == NULL) {
// 		root = CreateNode(data);
// 		return root;
// 	}

// 	// Else, do level order traversal until we find an empty
// 	// place, i.e. either left child or right child of some
// 	// node is pointing to NULL.
// 	queue<Node*> q;
// 	q.push(root);

// 	while (!q.empty()) {
// 		Node* temp = q.front();
// 		q.pop();

// 		if (temp->left != NULL)
// 			q.push(temp->left);
// 		else {
// 			temp->left = CreateNode(data);
// 			return root;
// 		}

// 		if (temp->right != NULL)
// 			q.push(temp->right);
// 		else {
// 			temp->right = CreateNode(data);
// 			return root;
// 		}
// 	}
// }
// void levelOrderTraversal(Node *root)
// {
//     // created a queue
//     queue<Node *> queue;
//     // push root in it
//     queue.push(root);
//     // We pushed this so that the order of output of binary tree will be in order
//     queue.push(NULL);
//     // Until queue becomes empty
//     while (!queue.empty())
//     {
//         // in temp store front element of queue
//         Node *temp = queue.front();
//         // pop that element
//         queue.pop();
//         // If temp == NULL then give 'enter'
//         if (temp == NULL)
//         {
//             cout << endl;
//             // If not empty means there is child nodes of it, so we will have to put NULL again so that when temp == NULL we will again get 'enter'
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             // Print data and give space
//             cout << temp->data << " ";
//             // When left data then push it in queue like left data
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             // If right data push it in queue like right data
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// int main()
// {
// 	Node* root = CreateNode(10);
// 	root->left = CreateNode(11);
// 	root->left->left = CreateNode(7);
// 	root->right = CreateNode(9);
// 	root->right->left = CreateNode(15);
// 	root->right->right = CreateNode(8);

// 	cout << "Level Order traversal";
//     levelOrderTraversal(root);
// 	cout << endl;

// 	int key = 12;
// 	root = InsertNode(root, key);
// 	return 0;
// }

// LevelOrderTraversing in Binary Tree
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
//     // we are assigning data given by user
//     cout << "Enter the data : " << endl;
//     int data;
//     cin >> data;
//     // node created with root name where data given by user will store in it
//     root = new Node(data);
//     // if data == -1 that means it is NULL
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // As it is a tree so it will insert elements on left and right both sides
//     cout << "Enter data for inserting in left : " << data << endl;
//     // Here, it will create tree on left side
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right : " << data << endl;
//     // Here, it will create tree on right side
//     root->right = buildTree(root->right);
//     return root;
// }
// // LevelOrderTraversal means we are traversing in level 0, level 1 then level 2 & we will print it in tree shape
// void levelOrderTraversal(Node *root)
// {
//     // created a queue
//     queue<Node *> queue;
//     // push root in it
//     queue.push(root);
//     // We pushed this so that the order of output of binary tree will be in order
//     queue.push(NULL);
//     // Until queue becomes empty
//     while (!queue.empty())
//     {
//         // in temp store front element of queue
//         Node *temp = queue.front();
//         // pop that element
//         queue.pop();
//         // If temp == NULL then give 'enter'
//         if (temp == NULL)
//         {
//             cout << endl;
//             // If not empty means there is child nodes of it, so we will have to put NULL again so that when temp == NULL we will again get 'enter'
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             // Print data and give space
//             cout << temp->data << " ";
//             // When left data then push it in queue like left data
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             // If right data push it in queue like right data
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// int main()
// {
//     Node *root = NULL;
//     // Create a tree
//     root = buildTree(root);

//     // LevelOrderTraversal
//     cout << "Printing the LevelOrderTraversal : " << endl;
//     levelOrderTraversal(root);
//     return 0;
// }
// Test Case
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// Traversal in Inorder, Preorder & Postorder
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
//     // we are assigning data given by user
//     cout << "Enter the data : " << endl;
//     int data;
//     cin >> data;
//     // node created with root name where data given by user will store in it
//     root = new Node(data);
//     // if data == -1 that means it is NULL
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // As it is a tree so it will insert elements on left and right both sides
//     cout << "Enter data for inserting in left : " << data << endl;
//     // Here, it will create tree on left side
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right : " << data << endl;
//     // Here, it will create tree on right side
//     root->right = buildTree(root->right);
//     return root;
// }
// // LevelOrderTraversal means we are traversing in level 0, level 1 then level 2 & we will print it in tree shape
// void levelOrderTraversal(Node *root)
// {
//     // created a queue
//     queue<Node *> queue;
//     // push root in it
//     queue.push(root);
//     // We pushed this so that the order of output of binary tree will be in order
//     queue.push(NULL);
//     // Until queue becomes empty
//     while (!queue.empty())
//     {
//         // in temp store front element of queue
//         Node *temp = queue.front();
//         // pop that element
//         queue.pop();
//         // If temp == NULL then give 'enter'
//         if (temp == NULL)
//         {
//             cout << endl;
//             // If not empty means there is child nodes of it, so we will have to put NULL again so that when temp == NULL we will again get 'enter'
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             // Print data and give space
//             cout << temp->data << " ";
//             // When left data then push it in queue like left data
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             // If right data push it in queue like right data
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }

// // InOrder
// void inorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left);    // L
//     cout<<root->data<<" ";  // N
//     inorder(root->right);   // R
// }
// // PreOrder
// void preorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" "; // N
//     preorder(root->left);  // L
//     preorder(root->right); // R
// }
// // PostOrder
// void postorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);  // L
//     postorder(root->right); // R
//     cout<<root->data<<" ";  // N
// }
// int main()
// {
//     Node *root = NULL;
//     // Create a tree
//     root = buildTree(root);

//     // LevelOrderTraversal
//     cout << "Printing the LevelOrderTraversal : " << endl;
//     levelOrderTraversal(root);
//     cout << "Inorder traversal : "<<endl;
//     inorder(root);
//     cout<<endl;
//     cout << "Preorder traversal : "<<endl;
//     preorder(root);
//     cout<<endl;
//     cout << "Postorder traversal : "<<endl;
//     postorder(root);
//     return 0;
// }

// BuildFromLevelOrder another method of creating a tree
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
// // This is the first method to built a tree
// // Node *buildTree(Node *root)
// // {
// //     // we are assigning data given by user
// //     cout << "Enter the data : " << endl;
// //     int data;
// //     cin >> data;
// //     // node created with root name where data given by user will store in it
// //     root = new Node(data);
// //     // if data == -1 that means it is NULL
// //     if (data == -1)
// //     {
// //         return NULL;
// //     }
// //     // As it is a tree so it will insert elements on left and right both sides
// //     cout << "Enter data for inserting in left : " << data << endl;
// //     // Here, it will create tree on left side
// //     root->left = buildTree(root->left);
// //     cout << "Enter data for inserting in right : " << data << endl;
// //     // Here, it will create tree on right side
// //     root->right = buildTree(root->right);
// //     return root;
// // }
// // LevelOrderTraversal means we are traversing in level 0, level 1 then level 2 & we will print it in tree shape
// void levelOrderTraversal(Node *root)
// {
//     // created a queue
//     queue<Node *> queue;
//     // push root in it
//     queue.push(root);
//     // We pushed this so that the order of output of binary tree will be in order
//     queue.push(NULL);
//     // Until queue becomes empty
//     while (!queue.empty())
//     {
//         // in temp store front element of queue
//         Node *temp = queue.front();
//         // pop that element
//         queue.pop();
//         // If temp == NULL then give 'enter'
//         if (temp == NULL)
//         {
//             cout << endl;
//             // If not empty means there is child nodes of it, so we will have to put NULL again so that when temp == NULL we will again get 'enter'
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             // Print data and give space
//             cout << temp->data << " ";
//             // When left data then push it in queue like left data
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             // If right data push it in queue like right data
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// // This is other method of creating a tree
// void buildFromLevelOrder(Node *&root)
// {
//     // Created a queue
//     queue<Node *> queue;
//     // We will store root in queue
//     cout << "Enter data for root" << endl;
//     int data;
//     cin >> data;
//     root = new Node(data);

//     queue.push(root);
//     // Till the queue becomes empty run the loop
//     while (!queue.empty())
//     {
//         // In temp store queue.front()
//         Node *temp = queue.front();
//         // Pop the front element
//         queue.pop();
//         // Now enter left node
//         cout << "Enter left node for: " << temp->data << endl;
//         int leftData;
//         cin >> leftData;
//         // If leftnode data is -1
//         if (leftData != -1)
//         {
//             // Then temp->left will create a left new node with leftData
//             temp->left = new Node(leftData);
//             // Push this new node of leftData in queue
//             queue.push(temp->left);
//         }
//         // Now for right Node
//         cout << "Enter right node for: " << temp->data << endl;
//         int rightData;
//         cin >> rightData;
//         // If rightdata is -1
//         if (rightData != -1)
//         {
//             // Then temp->right will have a new Node with right data
//             temp->right = new Node(rightData);
//             // Push the new node having right data in queue
//             // Now, queue have both left and right data
//             queue.push(temp->right);
//         }
//     }
// }
// int main()
// {
//     Node* root = NULL;
//     // This will create a queue which is a tree so, this is basically second method how we can create a tree
//     buildFromLevelOrder(root);
//     // This will print the tree we created
//     levelOrderTraversal(root);
//     return 0;
// }

// Traversing in Reverse Order
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
//     // we are assigning data given by user
//     cout << "Enter the data : " << endl;
//     int data;
//     cin >> data;
//     // node created with root name where data given by user will store in it
//     root = new Node(data);
//     // if data == -1 that means it is NULL
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // As it is a tree so it will insert elements on left and right both sides
//     cout << "Enter data for inserting in left : " << data << endl;
//     // Here, it will create tree on left side
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right : " << data << endl;
//     // Here, it will create tree on right side
//     root->right = buildTree(root->right);
//     return root;
// }
// // LevelOrderTraversal means we are traversing in level 0, level 1 then level 2 & we will print it in tree shape
// void levelOrderTraversal(Node *root)
// {
//     // created a queue
//     queue<Node *> queue;
//     // push root in it
//     queue.push(root);
//     // We pushed this so that the order of output of binary tree will be in order
//     queue.push(NULL);
//     // Until queue becomes empty
//     while (!queue.empty())
//     {
//         // in temp store front element of queue
//         Node *temp = queue.front();
//         // pop that element
//         queue.pop();
//         // If temp == NULL then give 'enter'
//         if (temp == NULL)
//         {
//             cout << endl;
//             // If not empty means there is child nodes of it, so we will have to put NULL again so that when temp == NULL we will again get 'enter'
//             if (!queue.empty())
//             {
//                 queue.push(NULL);
//             }
//         }
//         else
//         {
//             // Print data and give space
//             cout << temp->data << " ";
//             // When left data then push it in queue like left data
//             if (temp->left)
//             {
//                 queue.push(temp->left);
//             }
//             // If right data push it in queue like right data
//             if (temp->right)
//             {
//                 queue.push(temp->right);
//             }
//         }
//     }
// }
// vector<int> reverseLevelOrder(Node *root)
// {
//     vector<int> v;
//     queue<Node *> q;
//     q.push(root);
//     // will insert data of right node first in vector
//     while (q.size())
//     {
//         Node *front = q.front();
//         q.pop();
//         v.push_back(front->data);
//         // For right data
//         if (front->right)
//         {
//             q.push(front->right);
//         }
//         // For left data
//         if (front->left)
//         {
//             q.push(front->left);
//         }
//         // reverse the vector
//         reverse(v.begin(), v.end());
//         cout<<front->data<<" ";
//     }
// }
// int main()
// {
//     Node *root = NULL;
//     root = buildTree(root);
//     cout << "Printing the LevelOrderTraversal : " << endl;
//     levelOrderTraversal(root);
//     cout << "Printing the ReverseLevelOrderTraversal : " << endl;
//     reverseLevelOrder(root);
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     return 0;
// }

// Count Leaf Nodes (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class BinaryTreeNode
// {
// public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;

//     BinaryTreeNode(int data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };
// void inorder(BinaryTreeNode *root, int &count)
// {
//     // Base case
//     if (root == NULL)
//     {
//         return;
//     }
//     // For left side
//     inorder(root->left, count);

//     // For leaf node
//     // If root->left is NULL and root->right is also NULL then increase count value because leafNodes will be pointing at NULL values as they are the last nodes of Binary tree
//     if (root->left == NULL && root->right == NULL)
//     {
//         count++;
//     }
//     // For right side data
//     inorder(root->right, count);
// }
// int NoOfLeafNodes(BinaryTreeNode *&root)
// {
//     // set count at 0
//     int count = 0;
//     // calling inorder
//     inorder(root, count);
//     // return count because it will have count of leaf nodes
//     return count;
// }

// Find height of Tree (T.C -> O(n) & S.C -> O(height))
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class Solution
// {
// public:
//     // Function to find the height of a binary tree
//     int height(Node *root)
//     {
//         // Base case
//         // If node is empty then the height will be 0
//         if (root == NULL)
//         {
//             return 0;
//         }
//         // left will left node data
//         int left = height(root->left);
//         // right will right node data
//         int right = height(root->right);
//         // ans will have max b/w (left, right) node & we will add +1 to it for the root node to calculate total height
//         int ans = max(left, right) + 1;
//         // ans will have height
//         return ans;
//     }
// };

// Find diameter of Tree (T.C -> O(n2))
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   private:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// // From height we will calculate left side height and right side height and then add with + 1
// int height(Node *&root)
// {
//     // Base case
//     // If node is empty then the height will be 0
//     if (root == NULL)
//     {
//         return;
//     }
//     // left will left node data
//     int left = height(root->left);
//     // right will right node data
//     int right = height(root->right);
//     // ans will have max b/w (left, right) node & we will add +1 to it for the root node to calculate total height
//     int ans = max(left, right) + 1;
//     // ans will have height
//     return ans;
// }

// public:
//     int diameter(Node *&root)
//     {
//         // If empty then return 0
//         if (root == NULL)
//         {
//             return 0;
//         }
//         // op1 will have left side diameter
//         int op1 = diameter(root->left);
//         // op2 will have right side diameter
//         int op2 = diameter(root->right);
//         // op3 will have sum of right and left side + 1 for root node
//         int op3 = height(root->left) + 1 + height(root->right);
//         // ans will have max. lenght b/w all 3 heights
//         int ans = max(op1, op2, op3);
//         // return ans because it has the max. length
//         return ans;
//     }
// };

// Another method for finding diameter of Tree (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
//     // From height we will calculate left side height and right side height and then add with + 1
//     int height(Node *&root)
//     {
//         // Base case
//         // If node is empty then the height will be 0
//         if (root == NULL)
//         {
//             return 0;
//         }
//         // left will left node data
//         int left = height(root->left);
//         // right will right node data
//         int right = height(root->right);
//         // ans will have max b/w (left, right) node & we will add +1 to it for the root node to calculate total height
//         int ans = max(left, right) + 1;
//         // ans will have height
//         return ans;
//     }

// public:
//     // Created a pair having 2 space to set data, first is denoting diameter and second is denoting height
//     pair<int, int> diameterFast(Node *root)
//     {
//         // Base case
//         // If empty then make pair of 0,0
//         if (root == NULL)
//         {
//             pair<int, int> p = make_pair(0, 0);
//             return p;
//         }
//         // Pair for left will have left root diameter
//         pair<int, int> left = diameterFast(root->left);
//         // Pair for right will have right root diameter
//         pair<int, int> right = diameterFast(root->right);
//         // In op1 the left pair will be accessed by writing left.first
//         int op1 = left.first;
//         // In op2 the right pair will be accessed by writing right.first
//         int op2 = right.first;
//         // In op3 left second pair + right second pair + 1 will be added because second pair have height so adding both height with root node (+ 1)
//         int op3 = left.second + right.second + 1;
//         // Pair for storing ans
//         pair<int, int> ans;
//         // ans.left side will have max b/w op2 & op3
//         ans.first = max(op1, max(op2, op3));
//         // ans.right side will have max b/w left.second (means height which is in second pair) & right.second(which is also height)
//         ans.second = max(left.second, right.second) + 1;
//         // return ans
//         return ans;
//     }
//     // This will return diameter which is in first pair
//     int diameter(Node *root)
//     {
//         return diameterFast(root).first;
//     }
// };

// Check Balanced Tree or not (T.C -> O(n))
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
//     int height(Node *&root)
//     {
//         // Base case
//         // If node is empty then the height will be 0
//         if (root == NULL)
//         {
//             return 0;
//         }
//         // left will left node data
//         int left = height(root->left);
//         // right will right node data
//         int right = height(root->right);
//         // ans will have max b/w (left, right) node & we will add +1 to it for the root node to calculate total height
//         int ans = max(left, right) + 1;
//         // ans will have height
//         return ans;
//     }
// public:
//     //Function to check whether a binary tree is balanced or not.
//     pair<bool, int> isBalancedFast(Node* root) {
//         // Base case
//         if(root == NULL)
//         {
//             // Set (0,0)
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
//         // Create pair for left having left value
//         // First pair will tell it is balanced or not & second pair will have height
//         pair<int,int> left = isBalancedFast(root->left);
//         // Create pair for right having right value
//         pair<int,int> right = isBalancedFast(root->right);

//         // leftAns will have left first pair in it
//         bool leftAns = left.first;
//         // rightAns will have right first pair
//         bool rightAns = right.first;
//         // diff will have formulae which will check if height of left - right <= 1 or not
//         bool diff = abs (left.second - right.second ) <=1;
//         // another pair with bool and int named ans
//         pair<bool,int> ans;
//         // ans.second which is of int datatype will have max b/w left second(height) and right second(height)
//         ans.second = max(left.second, right.second) + 1;
//         // If leftAns which is balanced and rightAns && (diff <=1)
//         if(leftAns && rightAns && diff) {
//            // Then put true in ans first pair which contains balanced or not (set true in it)
//            ans.first = true;
//         }
//         else
//         {
//            // Then put false in ans first pair which contains balanced or not (set false in it)
//             ans.first = false;
//         }
//         // return ans which will have balanced or not ans in it
//         return ans;
//     }
//     // Whenever we call isBalanced then it will return Balanced block with is first block of pair
//     bool isBalanced(Node *root)
//     {
//         // isBalancedFast returns first block
//         return isBalancedFast(root).first;
//     }
// };

// Check both tree are identical (T.C -> O(n))
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
//     // Function to check if two trees are identical
//     // we will take both tree roots
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         // Base case
//         // If both are empty then both are identical
//         if (r1 == NULL && r2 == NULL)
//         {
//             return true;
//         }

//         // If r1 is NULL && r2 is not NULL then both are not identical
//         if (r1 == NULL && r2 != NULL)
//         {
//             return false;
//         }
//         // If r1 is not NULL && r2 is NULL then both are not identical
//         if (r1 != NULL && r2 == NULL)
//         {
//             return false;
//         }
//         // bool left will have both trees left node
//         bool left = isIdentical(r1->left, r2->left);
//         // bool right will have both trees right node
//         bool right = isIdentical(r1->right, r2->right);
//         // bool value will have current value of both r1 and r2
//         bool value = r1->data == r2->data;
//         // If left, right & value all true then identical
//         if (left && right && value)
//         {
//             return true;
//         }
//         // else not identical tree
//         else
//         {
//             return false;
//         }
//     }
// };

// Sum Tree (current node it can be any node = sum of left node + sum of right node)
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
//     // This pair will have first pair bool and second pair int
//     pair<bool, int> isSumTreeFast(Node *root)
//     {

//         // Base case
//         if (root == NULL)
//         {
//             // Then put (0,0) in pair
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
//         // root->left == NULL && root->right == NULL both are NULL this is for checking that, is the node after going left or right is leafNode means dead end(after that there is NULL only) or not
//         if (root->left == NULL && root->right == NULL)
//         {
//             // If it was leafNode then we will pass <true, root->data>
//             pair<bool, int> p = make_pair(true, root->data);
//             return p;
//             // So, after checking left and if right in left also then it will go to right it will do the same for it also <T, root->data>
//         }
//         // this will have left node ans
//         pair<bool, int> leftAns = isSumTreeFast(root->left);
//         // this will have right node ans
//         pair<bool, int> rightAns = isSumTreeFast(root->right);
//         // isLeftSumTree first block will tell whether it is sum of tree or not by true or false
//         bool isLeftSumTree = leftAns.first;
//         // isRightSumTree first block will tell whether it is sum of tree or not by true or false
//         bool isRightSumTree = rightAns.first;
//         // leftSum will have second pair means the sum of leftAns (left side node of tree)
//         int leftSum = leftAns.second;
//         // rightSum will have second pair means the sum of rightAns (right side of tree)
//         int rightSum = rightAns.second;
//         // This condn will check root->data == leftsum + rightSum if yes then stor in condn
//         bool condn = root->data == leftSum + rightSum;
//         // This will contain ans<T, sum> or <F, sum> like this
//         pair<bool, int> ans;
//         // If isLeftSumTree is true && isRightSumTree is true and condn is also true then set ans first pair as true & in second store the sum of root + leftSum + rightSum
//         if (isLeftSumTree && isRightSumTree && condn)
//         {
//             ans.first = true;
//             ans.second = root->data + leftSum + rightSum;
//         }
//         else
//         {
//             // else ans first pair will have <F, sum>
//             ans.first = false;
//         }
//         // ans will have the ans that the tree is balanced or not
//         return ans;
//     }
//     // bool isSumTree will always return first pair block because it contains <T or F>
//     bool isSumTree(Node *root)
//     {
//         return isSumTreeFast(root).first;
//     }
// };

// Zig-Zag Traversal in Tree (T.C -> O(n) & S.C -> O(n))
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
//     // Function to store the zig zag order traversal of tree in a list.
//     vector<int> zigZagTraversal(Node *root)
//     {
//         // This will have ans
//         vector<int> result;
//         // Base case
//         // If root == NULL return result
//         if (root == NULL)
//         {
//             return result;
//         }
//         // queue created where we will push all elements one by one
//         queue<Node *> q;
//         q.push(root);
//         // leftToRight will tell in which way the data was traversed and then stored in queue
//         bool leftToRight = true;
//         // Until queue becomes empty run a loop
//         while (!q.empty())
//         {
//             // size will have queue.size()
//             int size = q.size();
//             // we will create ans which is a temporary array that will have all data which we are storing in queue just to check which way of traversing was applied on those data while insertion, it will be of same size as queue
//             vector<int> ans(size);

//             // For Each Level Processing
//             for (int i = 0; i < size; i++)
//             {
//                 // frontNode will have front element
//                 Node *frontNode = q.front();
//                 // Pop that front element
//                 q.pop();

//                 // normal insert or reverse insert in queue
//                 int index = leftToRight ? i : size - i - 1;
//                 // ans[index] which is temporary array will have ans that, which way it was traversed
//                 ans[index] = frontNode->data;
//                 // If front element is left then push it in queue as left element
//                 if (frontNode->left)
//                     q.push(frontNode->left);

//                 // If front element right then push it in queue as right element
//                 if (frontNode->right)
//                     q.push(frontNode->right);
//             }

//             // Now, we have to change direction after every level
//             leftToRight = !leftToRight;
//             for (auto i : ans)
//             {
//                 // push index in result
//                 result.push_back(i);
//             }
//         }
//         return result;
//     }
// };

// Boundary Traversal of binary tree
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
//     // It will be for traversing in right part of tree from head node
//     void traverseLeft(Node *root, vector<int> &ans)
//     {
//         // Base case
//         if ((root == NULL) || (root->left == NULL && root->right == NULL))
//         {
//             return;
//         }
//         // push root->data in ans
//         ans.push_back(root->data);
//         // if root->left present on left side of tree then traverse in left direction
//         if (root->left)
//             traverseLeft(root->left, ans);
//         else
//             // if root->right present in left part of tree then traverse in right direction
//             traverseLeft(root->right, ans);
//     }
//     // traverseLeaf will be created for traversing in tree
//     void traverseLeaf(Node *root, vector<int> &ans)
//     {
//         // Base case
//         if (root == NULL)
//         {
//             return;
//         }
//         // root->left and root->right == NULL then push data in ans
//         if (root->left == NULL && root->right == NULL)
//         {
//             ans.push_back(root->data);
//             return;
//         }
//         // recursive call for left part and store ans
//         traverseLeaf(root->left, ans);
//         // recursive call for right part and store ans
//         traverseLeaf(root->right, ans);
//     }
//     // TraverseRight will be for traversing in right part from head node
//     void traverseRight(Node *root, vector<int> &ans)
//     {
//         // Base case
//         if ((root == NULL) || (root->left == NULL && root->right == NULL))
//         {
//             return;
//         }
//         // If root->right in right side of tree then traverse in right side and store data in ans
//         if (root->right)
//             traverseRight(root->right, ans);
//         else
//             // Else go to root->left in right side of tree then traverse in left side and store data in ans
//             traverseRight(root->left, ans);

//         // Push root->data in ans
//         ans.push_back(root->data);
//     }
//     // Boundary Traversal
//     vector<int> boundary(Node *root)
//     {
//         // Here we will store ans
//         vector<int> ans;
//         // Base case
//         if (root == NULL)
//         {
//             return ans;
//         }
//         // push root data in ans
//         ans.push_back(root->data);

//         // left part print/store from head node
//         traverseLeft(root->left, ans);

//         // Check Leaf Nodes on left and right subtree
//         // left subtree
//         traverseLeaf(root->left, ans);
//         // right subtree will also have leafnodes
//         traverseLeaf(root->right, ans);

//         // traverse right part from head node
//         traverseRight(root->right, ans);

//         return ans;
//     }
// };

// Vertical Traversal of Binary Tree
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
//     // Function to find the vertical order traversal of Binary Tree
//     vector<int> verticalOrder(Node *root)
//     {
//         // We created a map<int -> Horizontal Distance, map<int -> level, vector<int>> -> for list of nodes>
//         map<int, map<int, vector<int>>> nodes;
//         // created a queue for pushing in map inside it there is a pair first is for horizontal dist, second is for level
//         queue<pair<Node *, pair<int, int>>> q;
//         // we will return ans in ans
//         vector<int> ans;
//         // Base case
//         if (root == NULL)
//             return ans;
//         // Push in queue a new pair (0,0) because at first level both values are 0
//         q.push(make_pair(root, make_pair(0, 0)));
//         // Until queue becomes empty run the loop
//         while (!q.empty())
//         {
//             // Create a pair and another pair inside it of name temp which will have front node in it
//             pair<Node *, pair<int, int>> temp = q.front();
//             // Pop that front node
//             q.pop();
//             // frontNode will have front node
//             Node *frontNode = temp.first;
//             // it will have horizontal distance because hd is in pair<first, second-> pair<int, int>>> second part and second part have one more pair whose first have hd
//             int hd = temp.second.first;
//             // This will give level as it is present in temp pair second -> second pair
//             int lvl = temp.second.second;
//             // On that node we inserted data of front node
//             nodes[hd][lvl].push_back(frontNode->data);
//             // If left of frontNode then make pair of left node and make_pair in it having hd - 1, lvl + 1
//             if (frontNode->left)
//                 q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));

//             if (frontNode->right)
//             // If right of frontNode then make pair of right node and make_pair in it having hd + 1, lvl + 1
//                 q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
//         }
//         // When we will come out of loop, we will use loop for 2-D map
//         for (auto i : nodes)
//         {
//             for (auto j : i.second)
//             {
//                 // k will run loop from k to j.second value
//                 for (auto k : j.second)
//                 {
//                     // pushback k in ans
//                     ans.push_back(k);
//                 }
//             }
//         }
//         return ans;
//     }
// };

// Top View of Binary Tree
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
//     // Function to return a list of nodes visible from the top view
//     // from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         // This will store ans
//         vector<int> ans;
//         // If root == NULL then that is the ans
//         if (root == NULL)
//         {
//             return ans;
//         }
//         // We will create a map<int, int> topNode one int -> H.Dist and second int -> Node
//         map<int, int> topNode;
//         // Created a queue which will have Node*, H Dist.
//         queue<pair<Node *, int>> q;
//         // push head and 0 in queue as we are at starting
//         q.push(make_pair(root, 0));
//         // Until queue becomes empty
//         while (!q.empty())
//         {
//             // Create a pair of name temp which will have front element of queue
//             pair<Node *, int> temp = q.front();
//             // Pop the front element from queue
//             q.pop();
//             // frontNode will have temp.first
//             Node *frontNode = temp.first;
//             // H dist. will have H dist which is in second pair block
//             int hd = temp.second;

//             // if one value is present for a H Dist, then do nothing
//             // if we dont get topNode.find(h dist) == topNode.end() that means we are at first entry
//             if (topNode.find(hd) == topNode.end())
//                 // set hd with frontNode->data
//                 topNode[hd] = frontNode->data;
//             // if left data of frontNode push in queue
//             if (frontNode->left)
//                 q.push(make_pair(frontNode->left, hd - 1));
//             // if right data of frontNode push in queue
//             if (frontNode->right)
//                 q.push(make_pair(frontNode->right, hd + 1));
//         }
//         // for loop from i to topNode
//         for (auto i : topNode)
//         {
//             // push i.second where i -> row which is showing a row<int,int> first -> H dist. and second int for topNode in ans
//             // So, we pushed topNode in ans which is in second block of pair
//             ans.push_back(i.second);
//         }
//         return ans;
//     }
// };

// Bottom View of Binary Tree
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
//     vector<int> topView(Node *root)
//     {
//         // This will store ans
//         vector<int> ans;
//         // If root == NULL then that is the ans
//         if (root == NULL)
//         {
//             return ans;
//         }
//         // We will create a map<int, int> topNode one int -> H.Dist and second int -> Node
//         map<int, int> topNode;
//         // Created a queue which will have Node*, H Dist.
//         queue<pair<Node *, int>> q;
//         // push head and 0 in queue as we are at starting
//         q.push(make_pair(root, 0));
//         // Until queue becomes empty
//         while (!q.empty())
//         {
//             // Create a pair of name temp which will have front element of queue
//             pair<Node *, int> temp = q.front();
//             // Pop the front element from queue
//             q.pop();
//             // frontNode will have temp.first
//             Node *frontNode = temp.first;
//             // H dist. will have H dist which is in second pair block
//             int hd = temp.second;
//             // set hd with frontNode->data
//             topNode[hd] = frontNode->data;
//             // if left data of frontNode push in queue
//             if (frontNode->left)
//                 q.push(make_pair(frontNode->left, hd - 1));
//             // if right data of frontNode push in queue
//             if (frontNode->right)
//                 q.push(make_pair(frontNode->right, hd + 1));
//         }
//         // for loop from i to topNode
//         for (auto i : topNode)
//         {
//             // push i.second where i -> row which is showing a row<int,int> first -> H dist. and second int for topNode in ans
//             // So, we pushed topNode in ans which is in second block of pair
//             ans.push_back(i.second);
//         }
//         return ans;
//     }
// };

// Left View of Binary Tree
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
//     // Function to return a list containing elements of left view of the binary tree
//     void solve(Node *root, vector<int> &ans, int level)
//     {
//         // Base case
//         if (root == NULL)
//             return;

//         // we entered into a new level
//         // When level vector == ans.size()
//         if (level == ans.size())
//         {
//             // Push root->data in ans
//             ans.push_back(root->data);
//         }
//         // Recursive call for root->left and for next element
//         solve(root->left, ans, level + 1);
//         // Recursive call for root->right and for next element
//         solve(root->right, ans, level + 1);
//     }
//     vector<int> leftView(Node *root)
//     {
//         // This will have ans
//         vector<int> ans;
//         solve(root, ans, 0);
//         return ans;
//     }
// };

// Right View of Binary Tree
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
//     // Function to return list containing elements of right view of binary tree.
//     void solve(Node *root, vector<int> &ans, int level)
//     {
//         // base case
//         if (root == NULL)
//             return;

//         // we entered into a new level
//         if (level == ans.size())
//             ans.push_back(root->data);
//         solve(root->right, ans, level + 1);
//         solve(root->left, ans, level + 1);
//     }
//     vector<int> rightView(Node *root)
//     {
//         vector<int> ans;
//         solve(root, ans, 0);
//         return ans;
//     }
// };

// Sum of longest bloodline of a tree (T.C -> O(n) & S.C -> O(height))
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
//         // Base case
//         // If root == NULL then 2 cases will be formed 1) Path might be at end 2) If len and maxLen both are equal
//         if (root == NULL)
//         {
//             // len > maxLen
//             if (len > maxLen)
//             {
//                 // assign len value in maxLen
//                 maxLen = len;
//                 // maxSum will have sum value
//                 maxSum = sum;
//             }
//             // 2nd case if both are equal
//             else if (len == maxLen)
//             {
//                 // maxSum = max b/w sum and maxSum
//                 maxSum = max(sum, maxSum);
//             }
//             return;
//         }
//         // sum will have sum + root->data because whenever we move to next node we add the new data in the previous data
//         sum = sum + root->data;
//         // Recursive call for left node
//         solve(root->left, sum, maxSum, len + 1, maxLen);
//         // Recursive call for right node
//         solve(root->right, sum, maxSum, len + 1, maxLen);
//     }

//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         // len will be at 0 initially
//         int len = 0;
//         // maxLen will be at 0 initially
//         int maxLen = 0;
//         // Sum will be at 0 initially
//         int sum = 0;
//         // maxSum will have min value
//         int maxSum = INT_MIN;
//         // calling solve function
//         solve(root, sum, maxSum, len, maxLen);

//         return maxSum;
//     }
// };

// LCA(Lowest common ancestor) of Binary Tree (T.C -> O(n) & S.C -> O(height))
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
//     // Function to return the lowest common ancestor in a Binary Tree
//     Node *lca(Node *root, int n1, int n2)
//     {
//         // Base case
//         if (root == NULL)
//         {
//             return NULL;
//         }
//         // If root->data is same as n1 || root->data == n2 then return root
//         if (root->data == n1 || root->data == n2)
//         {
//             return root;
//         }
//         // leftAns will have recursive call for left side
//         Node *leftAns = lca(root->left, n1, n2);
//         // righttAns will have recursive call for right side
//         Node *rightAns = lca(root->right, n1, n2);
//         // If leftAns != NULL && rightAns != NULL then it is the ans
//         if (leftAns != NULL && rightAns != NULL)
//         {
//             // return root as it is the ans
//             return root;
//         }
//         // else if leftAns != NULL && rightAns is NULL then leftAns is the ans
//         else if (leftAns != NULL && rightAns == NULL)
//         {
//             return leftAns;
//         }
//         // else if leftAns == NULL && rightAns !=  NULL then rightAns is the ans
//         else if (leftAns == NULL && rightAns != NULL)
//         {
//             return rightAns;
//         }
//         else
//         {
//             // else return NULL
//             return NULL;
//         }
//     }
// };

// K sum paths, Path can start and end at any node
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
//     void solve(Node *root, int k, int &count, vector<int> path)
//     {
//         // Base case
//         if (root == NULL)
//         {
//             return;
//         }
//         // push/add current node in path which is root->data (if we are at 1 then add 1 and then proceed)
//         path.push_back(root->data);

//         // For left do recursive call
//         solve(root->left, k, count, path);
//         // For right do recursive call
//         solve(root->right, k, count, path);

//         // check for K == sum or K != sum
//         // size will have path size
//         int size = path.size();
//         // sum = 0 initially
//         int sum = 0;
//         // for loop from end to the starting
//         for (int i = size - 1; i >= 0; i--)
//         {
//             // append all values of path vector in sum one after other
//             sum += path[i];
//             // if sum == k then increase count++
//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//         // we will pop back because when we go back in binary tree to it's node or root after checking one side so in that case we don't want last element of path in previous node path like [1|2|3] now going back we don't want 1 in previous node therefore we removed it by pop()
//         path.pop_back();
//     }
//     int sumK(Node *root, int k)
//     {
//         // Created a path
//         vector<int> path;
//         // count is 0 initially
//         int count = 0;
//         // calling solve function
//         solve(root, k, count, path);
//         // return count which is the ans
//         return count;
//     }
// };

// Kth Ancestor in Tree (T.C -> O(n) & S.C -> O(height))
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
//     Node *solve(Node *root, int &k, int node)
//     {
//         // Base case
//         if (root == NULL)
//         {
//             return NULL;
//         }
//         // If root->data == node we found the element
//         if (root->data == node)
//         {
//             return root;
//         }
//         // leftAns will have recursive call for left side of tree
//         Node *leftAns = solve(root->left, k, node);
//         // rightAns will have recursive call for right side of tree
//         Node *rightAns = solve(root->right, k, node);

//         // Now, we will go backwards after finding the element, we have to find ancestor now
//         // leftAns != NULL and rightAns == NULL
//         if (leftAns != NULL && rightAns == NULL)
//         {
//             // Then k-- decrement value of k
//             k--;
//             // If k <= 0, that means we got the kth ancestor
//             if (k <= 0)
//             {
//                 // answer lock because we will never get k = 0 (reason)
//                 // assign k = max of int
//                 k = INT_MAX;
//                 // return root as it is the kth ancestor
//                 return root;
//             }
//             // return leftAns
//             return leftAns;
//         }
//         // If leftAns == NULL and rightAns is not NULL
//         if (leftAns == NULL && rightAns != NULL)
//         {
//             // decrement k to 0
//             k--;
//             // if k <= 0 that means we got the ancestor
//             if (k <= 0)
//             {
//                 // answer lock
//                 k = INT_MAX;
//                 // return root as it is the kth ancestor
//                 return root;
//             }
//             // return rightAns
//             return rightAns;
//         }
//         return NULL;
//     }
//     int kthAncestor(Node *root, int k, int node)
//     {
//         // ans have solve function
//         Node *ans = solve(root, k, node);
//         // if ans == NULL || ans->data == node (this means if ans is root node means head) then we will return -1 because kth ancestor cannot be a root node
//         if (ans == NULL || ans->data == node)
//         {
//             return -1;
//         }
//         else
//         {
//             return ans->data;
//         }
//     }
// };

// Maximum sum of non-adjacent nodes (T.C -> O(n) & S.C -> O(height))
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
//     //Function to return the maximum sum of non-adjacent nodes
//     pair<int,int> solve(Node* root) {
//         // Base case
//         if(root == NULL) {
//             pair<int,int> p = make_pair(0,0);
//             return p;
//         }
//         // Left pair for left recursive call
//         pair<int,int> left = solve(root->left);
//         // Right pair for right recursive call
//         pair<int,int> right = solve(root->right);
//         // This will have result first and second both blocks
//         pair<int,int> res;
//         // When we include first node parent node then res.first will have root->data +left.second + right.second
//         res.first = root->data + left.second + right.second;
//         // res.second = max b/w left.first and left.second + max b/w right.first and right.second just add them
//         res.second = max(left.first, left.second) + max(right.first, right.second);
//         // return result as it is the ans
//         return res;
//     }
//     int getMaxSum(Node *root)
//     {
//         // pair ans calling solve function
//         pair<int,int> ans = solve(root);
//         // return max b/w ans.first and ans.second where first contains maxSum including nodes at current & second contains maxSum by excluding nodes at current
//         return max(ans.first, ans.second);
//     }
// };

// Construct Tree from Inorder & Preorder (T.C -> O(n log n) & S.C -> O(height))
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
//     void createMapping(int inorder[], map<int, int> &nodeToIndex, int n)
//     {
//         // Creating Mapping where we are assinging every element index in map
//         for (int i = 0; i < n; i++)
//         {
//             nodeToIndex[inorder[i]] = i;
//         }
//     }
//     Node *solve(int inorder[], int preorder[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
//     {
//         // Base case
//         // If whole array covered and we are outside the array then return NULL
//         if (index >= n || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
//         // We got element from preorder and after taking element from preOrder move to next node
//         int element = preorder[index++];
//         // Created a new node root by using preorder element
//         Node *root = new Node(element);
//         // Find position of that same element of preorder in Inorder so that we can make a call for left and right
//         int position = nodeToIndex[element];
//         // Recursive calls for left and right
//         // It will start from starting of Inorder and run till the position of root element - 1
//         root->left = solve(inorder, preorder, index, inorderStart, position - 1, n, nodeToIndex);
//         // It will start from position + 1 and till end
//         root->right = solve(inorder, preorder, index, position + 1, inorderEnd, n, nodeToIndex);
//         return root;
//     }
//     Node *buildTree(int inorder[], int preorder[], int n)
//     {
//         int preOrderIndex = 0;
//         // created map
//         map<int, int> nodeToIndex;
//         // create nodes to index mapping
//         createMapping(inorder, nodeToIndex, n);
//         // Calling solve function
//         Node *ans = solve(inorder, preorder, preOrderIndex, 0, n - 1, n, nodeToIndex);
//         return ans;
//     }
// };

// Create a Binary tree from InOrder and PostOrder (T.C -> O(n log n) & S.C -> O(height))
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
//     void createMapping(int inorder[], map<int, int> &nodeToIndex, int n)
//     {
//         // Creating Mapping where we are assinging every element index in map
//         for (int i = 0; i < n; i++)
//         {
//             nodeToIndex[inorder[i]] = i;
//         }
//     }
//     Node *solve(int inorder[], int postorder[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
//     {
//         // Base case
//         // Here we are starting from last index so index should always smaller than 0 and then we are decrementing in order
//         if (index < 0 || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
//         // We got element from preorder and after taking element from preOrder move to next node and in postorder we always decrement
//         int element = postorder[index--];
//         // Created a new node root by using preorder element
//         Node *root = new Node(element);
//         // Find position of that same element of preorder in Inorder so that we can make a call for left and right
//         int position = nodeToIndex[element];
//         // Recursive calls for right and left, here we built right subtree first then left subtree
//         // It will start from position + 1 and till end
//         root->right = solve(inorder, postorder, index, position + 1, inorderEnd, n, nodeToIndex);
//         // It will start from starting of Inorder and run till the position of root element - 1
//         root->left = solve(inorder, postorder, index, inorderStart, position - 1, n, nodeToIndex);
//         return root;
//     }
//     Node *buildTree(int inorder[], int postorder[], int n)
//     {
//         // As we always start from end in postorder
//         int postOrderIndex = n - 1;
//         // created map
//         map<int, int> nodeToIndex;
//         // create nodes to index mapping
//         createMapping(inorder, nodeToIndex, n);
//         // Calling solve function
//         Node *ans = solve(inorder, postorder, preOrderIndex, 0, n - 1, n, nodeToIndex);
//         return ans;
//     }
// };

// Minimum Time to Burn the Entire Tree (T.C-> O(n log n) & S.C -> O(n))
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
//         // result will have NULL
//         Node *result = NULL;
//         // We created a queue
//         queue<Node *> queue;
//         // Will push root data in queue first
//         queue.push(root);
//         // nodeToParent[root] = NULL
//         nodeToParent[root] = NULL;
//         // Until queue becomes empty will run the loop
//         while (!queue.empty())
//         {
//             // front will have queue.front()
//             Node *front = queue.front();
//             // Will Pop the front element from queue
//             queue.pop();
//             // If front->data will become equal to target node
//             if (front->data == target)
//             {
//                 // result will be updated with front
//                 result = front;
//             }
//             // If it has front->left
//             if (front->left)
//             {
//                 // Then front->left will have front assigned to it
//                 nodeToParent[front->left] = front;
//                 // We will push that in queue
//                 queue.push(front->left);
//             }
//             // If it has right node
//             if (front->right)
//             {
//                 // Then we will update front->right with front value
//                 nodeToParent[front->right] = front;
//                 // Push that data in queue
//                 queue.push(front->right);
//             }
//         }
//         // return result
//         return result;
//     }
//     // BurnTree will burn the tree completely
//     int burnTree(Node *root, map<Node *, Node *> &nodeToParent)
//     {
//         // We created a visited map which will have values visited (if any node is visited then we will move to next and ignore, if it did'nt then we will store it)
//         map<Node *, bool> visited;
//         // This queue will have target node and parent node
//         queue<Node *> queue;

//         queue.push(root);
//         // When we push a new element in queue then we will mark it true
//         visited[root] = true;
//         // Initially ans is 0
//         int ans = 0;
//         // Until queue becomes empty run the loop
//         while (!queue.empty())
//         {
//             // flag is 0 means it is false and 1 means true
//             bool flag = 0;
//             // size will have queue.size
//             int size = queue.size();
//             // Run a loop from 0 to the end
//             for (int i = 0; i < size; i++)
//             {
//                 // process neighbouring node
//                 Node *front = queue.front();
//                 // Then pop the front element
//                 queue.pop();
//                 // If front->left && that element is not visited element
//                 if (front->left && !visited[front->left])
//                 {
//                     // Then store the element in queue and mark it 1 means true
//                     flag = 1;
//                     // push that in queue
//                     queue.push(front->left);
//                     // Now visited will be true
//                     visited[front->left] = 1;
//                 }
//                 // If front->right && it is not visited element
//                 if (front->right && !visited[front->right])
//                 {
//                     // Then flag will be marked as 1 which is true
//                     flag = 1;
//                     // Push it in queue
//                     queue.push(front->right);
//                     // Mark it as visited
//                     visited[front->right] = 1;
//                 }
//                 // Third condition : It is for checking does the current node has parent node && that parent node is not visited
//                 if (nodeToParent[front] && !visited[nodeToParent[front]])
//                 {
//                     // Mark flag to true
//                     flag = 1;
//                     // Push that element in queue
//                     queue.push(nodeToParent[front]);
//                     // visited will also mark true
//                     visited[nodeToParent[front]] = 1;
//                 }
//             }
//             // If flag == 1 means that element is visited
//             if (flag == 1)
//             {
//                 // We will increment ans
//                 ans++;
//             }
//         }
//         // Then we will return ans
//         return ans;
//     }
//     int minTime(Node *root, int target)
//     {
//         // We created a map which will store parent of every node
//         map<Node *, Node *> nodeToParent;
//         // targetNode will call function
//         Node *targetNode = createParentMapping(root, target, nodeToParent);
//         // ans will have burnTree function
//         int ans = burnTree(targetNode, nodeToParent);
//         // return ans as it has the count of Time
//         return ans;
//     }
// };

// Morris Traversal (Flatten a Binary Tree to Linked List) (T.C -> O(n) & S.C -> O(1))
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
//     void morrisTraversalPreorder(Node *root)
//     {
//         while (root)
//         {
//             // If left child is null, print the current node data move to right child
//             if (root->left == NULL)
//             {
//                 cout << root->data << " ";
//                 root = root->right;
//             }
//             else
//             {
//                 // Find inorder predecessor
//                 // move current to left of head node and then keep on going right side until you get NULL
//                 Node *current = root->left;
//                 // Now, we will have right && right != root(head)
//                 while (current->right && current->right != root)
//                     // Then current will shift
//                     current = current->right;

//                 // If the right child of inorder predecessor already points to this node(root)
//                 if (current->right == root)
//                 {
//                     // Remove the connection of node b/w them
//                     current->right = NULL;
//                     root = root->right;
//                 }

//                 // If right child doesn't point to this node(root), then print this node and make right child point to this node
//                 else
//                 {
//                     cout << root->data << " ";
//                     current->right = root;
//                     root = root->left;
//                 }
//             }
//         }
//     }

//     // Function for Standard preorder traversal
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

// Flatten Binary Tree to Linked List (T.C -> O(n) & S.C -> O(1))
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
//     void flatten(Node *root)
//     {
//         // Create a node curr which is at root
//         Node *curr = root;
//         // Run a loop until curr becomes NULL
//         while (curr != NULL)
//         {
//             // If curr->left exists
//             if (curr->left)
//             {
//                 // create predessor which will have curr->left means run left for once
//                 Node *predessor = curr->left;
//                 // Then move to right until predessor becomes NULL
//                 while (predessor->right)
//                 {
//                     // Move to right until it becomes NULL
//                     predessor = predessor->right;
//                 }
//                 // predessor->right will be connected with curr->right so right side connection is made
//                 predessor->right = curr->right;
//                 // curr->right is equal to left so it is also connected to it's right part
//                 curr->right = curr->left;
//                 // Make curr->left NULL because we have to cancel the left part and join them with it's right part
//                 curr->left = NULL;
//             }
//             // After doing all this move curr to it's right node
//             curr = curr->right;
//         }
//     }
// };

// Binary Search Tree (Insertion and Traversal) (T.C -> O(n))
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
// // LevelOrderTraversal for traversing and printing the Binary search tree
// Node *levelOrderTraversal(Node *root)
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
//         // return temp;
//     }
// }
// Node *insertIntoBST(Node *root, int data)
// {
//     // If root == NULL means it is either at last node or there is no node
//     if (root == NULL)
//     {
//         // create a new node with the data user wanted to store
//         root = new Node(data);
//         return root;
//     }
//     // If that data > root->data then it will store on the right side of binary search tree
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     // If that data < root->data then it will store on the left side of binary search tree
//     else
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }

// void takeInput(Node *&root, int data)
// {
//     // Run a loop till binary tree data becomes -1
//     while (data != -1)
//     {
//         // till then call insertIntoBST with root and data
//         root = insertIntoBST(root, data);
//         // we are adding data in the binary search tree
//         cin >> data;
//     }
// }
// int main()
// {
//     // Created a root = NULL
//     Node *root = NULL;
//     // Data we will add in Tree
//     int data;
//     cout << "Enter data for binary search tree : " << endl;
//     cin >> data;
//     // takeInput() which we take the input from user
//     takeInput(root, data);
//     cout << "Printing the Binary Search Tree :" << endl;
//     levelOrderTraversal(root);
//     return 0;
// }

// Inorder Preorder Postorder in Binary Search Tree (T.C -> O(n))
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
// void inorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void preorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(Node* root){
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// // LevelOrderTraversal for traversing and printing the Binary search tree
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
//         // return temp;
//     }
// }
// Node *insertIntoBST(Node *root, int data)
// {
//     // If root == NULL means it is either at last node or there is no node
//     if (root == NULL)
//     {
//         // create a new node with the data user wanted to store
//         root = new Node(data);
//         return root;
//     }
//     // If that data > root->data then it will store on the right side of binary search tree
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     // If that data < root->data then it will store on the left side of binary search tree
//     else
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }

// void takeInput(Node *&root, int data)
// {
//     // Run a loop till binary tree data becomes -1
//     while (data != -1)
//     {
//         // till then call insertIntoBST with root and data
//         root = insertIntoBST(root, data);
//         // we are adding data in the binary search tree
//         cin >> data;
//     }
// }
// int main()
// {
//     // Created a root = NULL
//     Node *root = NULL;
//     // Data we will add in Tree
//     int data;
//     cout << "Enter data for binary search tree : " << endl;
//     cin >> data;
//     // takeInput() which we take the input from user
//     takeInput(root, data);
//     cout << "Printing the Binary Search Tree :" << endl;
//     levelOrderTraversal(root);

//     cout<<"Printing inorder : "<<endl;
//     inorder(root);
//     cout<<endl;
//     cout<<"Printing order : "<<endl;
//     preorder(root);
//     cout<<endl;
//     cout<<"Printing postorder : "<<endl;
//     postorder(root);
//     return 0;
// }

// Search an element in Binary Search Tree (T.C -> O(n))
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
// bool searchInBST(Node<int> *root, int element)
// {
//     Node<int> *temp = root;
//     // Base case
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

// Find minimum and maximum element in Binary Search Tree (T.C -> O(n))
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
// Node *levelOrderTraversal(Node *root)
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
//     // If root == NULL means it is either at last node or there is no node
//     if (root == NULL)
//     {
//         // create a new node with the data user wanted to store
//         root = new Node(data);
//         return root;
//     }
//     // If that data > root->data then it will store on the right side of binary search tree
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     // If that data < root->data then it will store on the left side of binary search tree
//     else
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// Node *minValue(Node *root)
// {
//     // Base case
//     // temp is containing root
//     Node *temp = root;
//     // until temp -> left becomes NULL run the loop
//     while (temp->left != NULL)
//     {
//         // Go right to left on the Binary tree
//         temp = temp->left;
//     }
//     // return temp
//     return temp;
// }
// Node *maxValue(Node *root)
// {
//     // temp is containing root
//     Node *temp = root;
//     // until temp -> right becomes NULL run the loop
//     while (temp->right != NULL)
//     {
//         // Go right to right on the Binary tree
//         temp = temp->right;
//     }
//     // return temp
//     return temp;
// }
// void takeInput(Node *&root, int data)
// {
//     // Run a loop till binary tree data becomes -1
//     while (data != -1)
//     {
//         // till then call insertIntoBST with root and data
//         root = insertIntoBST(root, data);
//         // we are adding data in the binary search tree
//         cin >> data;
//     }
// }
// int main()
// {
//     // Created a root = NULL
//     Node *root = NULL;
//     // Data we will add in Tree
//     int data;
//     cout << "Enter data for binary search tree : " << endl;
//     cin >> data;
//     // takeInput() which we take the input from user
//     takeInput(root, data);
//     cout << "Printing the Binary Search Tree :" << endl;
//     levelOrderTraversal(root);
//     cout << "Minimum value : " << minValue(root)->data << endl;
//     minValue(root)->data;
//     cout << "Maximum value : " << maxValue(root)->data << endl;
//     return 0;
// }

// Deletion in Binary Search Tree (T.C -> O(n))
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
// Node *levelOrderTraversal(Node *root)
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
//     // If root == NULL means it is either at last node or there is no node
//     if (root == NULL)
//     {
//         // create a new node with the data user wanted to store
//         root = new Node(data);
//         return root;
//     }
//     // If that data > root->data then it will store on the right side of binary search tree
//     if (data > root->data)
//     {
//         root->right = insertIntoBST(root->right, data);
//     }
//     // If that data < root->data then it will store on the left side of binary search tree
//     else
//     {
//         root->left = insertIntoBST(root->left, data);
//     }
// }
// Node *minValue(Node *root)
// {
//     // Base case
//     // temp is containing root
//     Node *temp = root;
//     // until temp -> left becomes NULL run the loop
//     while (temp->left != NULL)
//     {
//         // Go right to left on the Binary tree
//         temp = temp->left;
//     }
//     // return temp
//     return temp;
// }
// Node *maxValue(Node *root)
// {
//     // temp is containing root
//     Node *temp = root;
//     // until temp -> right becomes NULL run the loop
//     while (temp->right != NULL)
//     {
//         // Go right to right on the Binary tree
//         temp = temp->right;
//     }
//     // return temp
//     return temp;
// }

// // Deletion
// Node* deleteFromBST(Node* root, int value){
//     // Base case
//     if (root == NULL)
//     {
//         return root;
//     }
//     // if root->data == value we are finding to delete
//     if (root->data == value)
//     {
//         // If that value is 0th child means it has no child
//         // 0th child
//         // When both left side of that subtree node and right side node is also NULL
//         if (root->left == NULL && root->right == NULL)
//         {
//             // Just delete that node and return NULL
//             delete root;
//             return NULL;
//         }
//         // If it has 1 child it can be either left or right
//         // 1st child
//         // Left child
//         // We will check is it left and for that we will right if root->left != NULL and right = NULL that means it has left child
//         if (root->left != NULL && root->right == NULL)
//         {
//             // In temp we will store the left node element
//             Node* temp = root->left;
//             // delete that root
//             delete root;
//             // return what we have deleted
//             return temp;
//         }
//         // If right child
//         // We have to check that is it right child or not
//         if (root->left == NULL && root->right != NULL)
//         {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }
//         // 2nd child
//         // If it has 2 childs both left and right
//         if (root->left != NULL && root->right != NULL)
//         {
//             // we will find min. value from right side of nodes until we will get it we will keep on finding
//             int mini = minValue(root->right)->data;
//             // Then replace the head of subtree value with mini node value
//             root->data = mini;
//             // Then after replacing we have to delete that node which was contained in mini
//             root->right = deleteFromBST(root->right, mini);
//             // return root which has new replaced value
//             return root;
//         }
//     }
//     // else if root->data > value then we have to go to left part to find the max. value of node
//     else if (root->data > value)
//     {
//         // Go to left part
//         root->left = deleteFromBST(root->left, value);
//         return root;
//     }
//     else
//     {
//         // Go to right part
//         root->right = deleteFromBST(root->right, value);
//         return root;
//     }
// }
// void takeInput(Node *&root, int data)
// {
//     // Run a loop till binary tree data becomes -1
//     while (data != -1)
//     {
//         // till then call insertIntoBST with root and data
//         root = insertIntoBST(root, data);
//         // we are adding data in the binary search tree
//         cin >> data;
//     }
// }
// int main()
// {
//     // Created a root = NULL
//     Node *root = NULL;
//     // Data we will add in Tree
//     int data;
//     cout << "Enter data for binary search tree : " << endl;
//     cin >> data;
//     // takeInput() which we take the input from user
//     takeInput(root, data);
//     cout << "Printing the Binary Search Tree :" << endl;
//     levelOrderTraversal(root);
//     cout << "Minimum value : " << minValue(root)->data << endl;
//     minValue(root)->data;
//     cout << "Maximum value : " << maxValue(root)->data << endl;

//     root = deleteFromBST(root, 10);
//     cout<<"After deletion the data : "<<endl;
//     // takeInput(root, data);
//     // cout << "Printing the Binary Search Tree :" << endl;
//     levelOrderTraversal(root);
//     cout << "Minimum value : " << minValue(root)->data << endl;
//     cout << "Maximum value : " << maxValue(root)->data << endl;
//     return 0;
// }

// Validate Binary Search Tree (T.C -> O(n))
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
// bool isBST(Node<int> *root, int min, int max){
//     // Base case
//     if (root == NULL)
//     {
//         return true;
//     }
//     // if root->data >= min which has min value of int && root->data <= max which has max. value of int basically we are checking that is it following the basic method/rule of Binary search tree that left will have root->data < rootnode && right side will have root->data > rootnode
//     if (root->data >= min && root->data <= max)
//     {
//         // Then traverse on left side of the tree
//         bool left = isBST(root->left, min, root->data);
//         // Then traverse on right side of the tree
//         bool right = isBST(root->right, root->data, max);
//         // return both left and right
//         return left && right;
//     }
//     else
//     {
//         // else return false as the answer
//         return false;
//     }
// }
// // validateBST will call isBST function which is basically checking that is this is a Binary Search Tree or not
// bool validateBST(Node<int> *root){
//     return isBST(root, INT_MIN, INT_MAX);
// }

// Find Kth Smallest Element in Binary Search Tree (T.C -> O(n))
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
//     // Base case
//     if (root == NULL)
//     {
//         // If root == NULL then come back because it is the end so we have to come back to the node
//         return -1;
//     }
//     // L
//     // search in the left side
//     int left = solve(root->left, i, k);
//     // If left != -1 this means it has the ans return it
//     if (left != -1)
//     {
//         return left;
//     }
//     // N
//     i++;
//     if (i == k)
//     {
//         return root->data;
//     }
//     // R
//     int right = solve(root->right, i, k);
//     if (right != -1)
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

// Find Kth Largest Element in Binary Search Tree (T.C -> O(n))
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
// // Function to find the k'th largest node in a BST
// // Here, `i` denotes the total number of nodes processed so far
// int kthLargest(Node* root, int &i, int k)
// {
//     // Base case
//     if (root == NULL) {
//         return -1;
//     }
//     // search in the right subtree
//     // R
//     int right = kthLargest(root->right, i, k);

//     // if k'th largest is found in the left subtree, return it
//     if (right) {
//         return right;
//     }

//     // if the current node is k'th largest, return its value
//     // N
//     i++;
//     if (i == k) {
//         return root->data;
//     }

//     // otherwise, search in the left subtree
//     // L
//     return kthLargest(root->left, i, k);
// }

// // Function to find the k'th largest node in a BST
// int findKthLargest(Node* root, int k)
// {
//     // maintain index to count the total number of nodes processed so far
//     int i = 0;
//     // traverse the tree in an inorder fashion and return k'th node
//     return kthLargest(root, i, k);
// }

// Predecessor & Successor in Binary Search Tree (T.C -> O(n))
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
// pair<int, int> predecessor(Node<int> *root, int key)
// {
//     // find key
//     Node<int> *temp = root;
//     // In starting pre and succ will be equal to -1
//     int pre = -1;
//     int succ = -1;
//     // Until temp->data becomes equal to key run the loop
//     while (temp->data != key)
//     {
//         // If temp->data > key
//         if (temp->data > key)
//         {
//             // succ will have temp->data
//             succ = temp->data;
//             // temp will go to left side of the tree
//             temp = temp->left;
//         }
//         else
//         {
//             // pre will have temp->data
//             pre = temp->data;
//             // temp will go to right side of the tree
//             temp = temp->right;
//         }
//     }
//     // Pred and succ
//     // leftTree will have temp->left
//     Node<int> *leftTree = temp->left;
//     // Until leftTree becomes NULL run the loop
//     while (leftTree != NULL)
//     {
//         // pre will have leftTree data
//         pre = leftTree->data;
//         // leftTree will go to right side of left tree
//         leftTree = leftTree->right;
//     }
//     // successor
//     // rightTree will have right side of tree
//     Node<int>* rightTree = temp->right;
//     // Until rightTree becomes NULL run the loop
//     while (rightTree != NULL)
//     {
//         // succ will have rightTree data
//         succ = rightTree->data;
//         // right tree will move to the left side of right tree
//         rightTree = rightTree->left;
//     }
//     // This pair ans will make a pair of predecessor and successor
//     pair<int,int> ans = make_pair(pre, succ);
//     return ans;
// }

// LCA(Lowest common ancestor) in Binary Search Tree (T.C -> O(n))
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
// // Iterative and Optimized way
// Node<int> *LCAinaBST(Node<int> *root, Node<int> *P, Node<int> *Q)
// {
//     // Run the loop until root becomes equal to NULL
//     while (root != NULL)
//     {
//         // If root->data < P->data && same with Q data then we will traverse in right direction
//         if (root->data < P->data && root->data < Q->data)
//         {
//             root = root->right;
//         }
//         // we will do for left side traversal if root->data > P->data && > Q->data
//         else if (root->data > P->data && root->data > Q->data)
//         {
//             root = root->left;
//         }
//         // else some other condition then just return root
//         else
//         {
//             return root;
//         }
//     }
// }

// 2 Sum in Binary Search Tree (T.C -> O(n))
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
//     // Base case
//     if (root == NULL)
//     {
//         return;
//     }
//     // Now we will do inorder traversal which is sorted
//     // Recurssive call for left trsversal L
//     inorder(root->left, in);
//     // Store data N
//     in.push_back(root->data);
//     // Recurssive call for right trsversal R
//     inorder(root->right, in);
// }

// bool twoSumInBST(Node<int> *root, int target)
// {
//     // vector inorderVal
//     vector<int> inorderVal;
//     // inorder call for storing inorder->sorted value
//     inorder(root, inorderVal);
//     // using 2 pointer approach to check if pair exists
//     int i = 0;
//     int j = inorderVal.size() - 1;
//     // Run a loop as i < j
//     while (i < j)
//     {
//         // sum = addition of i and j
//         int sum = inorderVal[i] + inorderVal[j];
//         // If sum == target then return true
//         if (sum == target)
//         {
//             return true;
//         }
//         // If sum > target
//         else if (sum > target)
//         {
//             // Then j-- go back
//             j--;
//         }
//         // If sum < target then move i forward
//         else if (sum < target)
//         {
//             i++;
//         }
//     }
//     // else return false
//     return false;
// }

// Flatten Binary Search Tree into a Sorted Linked List
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
//     // Base case
//     if (root == NULL)
//     {
//         return;
//     }
//     // Now we will do inorder traversal which is sorted
//     // Recurssive call for left trsversal L
//     inorder(root->left, in);
//     // Store data N
//     in.push_back(root->data);
//     // Recurssive call for right trsversal R
//     inorder(root->right, in);
// }
// Node<int> *flatten(Node<int> *root)
// {
//     // inorderVal will have all the elements
//     vector<int> inorderVal;
//     // Store inorder -> sorted values
//     inorder(root, inorderVal);
//     // n will have size of inorderVal size
//     int n = inorderVal.size();
//     // newRoot will have a new Node which have 0th index node value
//     Node<int> *newRoot = new Node<int>(inorderVal[0]);
//     // curr will be pointing at 0th index pointing new Root
//     Node<int> *curr = newRoot;
//     // Run a loop from 1 to the end of the vector
//     for (int i = 1; i < n; i++)
//     {
//         // create a node temp at index we are currently present
//         Node<int> *temp = new Node<int>(inorderVal[i]);
//         // curr->left will be NULL for every index node
//         curr->left = NULL;
//         // curr->right pointer will be pointing at next node
//         curr->right = temp;
//         // Then we will move to the next node and keep on doing this until we reach the end of the LL
//         curr = temp;
//     }
//     // 3rd step
//     // After we come out of the loop our curr->left will be pointing at NULL and current->right ptr is also pointing at NULL as there is no more node at which it will point
//     curr->left = NULL;
//     curr->right = NULL;
//     return newRoot;
// }

// Normal Binary Search Tree to Balanced Binary Search Tree (T.C -> O(n))
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
// void inorder(TreeNode<int> *root, vector<int> &in)
// {
//     // Base case
//     if (root == NULL)
//     {
//         return;
//     }
//     // Now we will do inorder traversal which is sorted
//     // Recurssive call for left trsversal L
//     inorder(root->left, in);
//     // Store data  N
//     in.push_back(root->data);
//     // Recurssive call for right trsversal R
//     inorder(root->right, in);
// }
// TreeNode<int> *inorderToBST(int s, int e, vector<int> in)
// {
//     // Base case
//     // If start > end that means it is not in inorder
//     if (s > e)
//     {
//         return NULL;
//     }
//     // Find mid
//     int mid = (s + e) / 2;
//     // Create a root new node where we will store mid value
//     Node<int> *root = new Node<int>(in[mid]);
//     // Left from the mid will be stored in a left tree
//     root->left = inorderToBST(s, mid - 1, in);
//     // Right from the mid will be stored in a right tree
//     root->right = inorderToBST(mid + 1, e, in);
//     // return root
//     return root;
// }
// TreeNode<int> *balancedBst(TreeNode<int> *root)
// {
//     // vector will store value in inorder sorted format
//     vector<int> inorderVal;

//     // STORE INORDER FOR SORTED VALUE
//     inorder(root, inorderVal);

//     return inorderToBST(0, inorderVal.size() - 1, inorderVal);
// }

// Create a Binary Search Tree from Preorder Traversed data given (T.C -> O(n))
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
//     // If i >= size of preorder means we are outside the array
//     if (i >= preorder.size())
//     {
//         // return NULL
//         return NULL;
//     }
//     // If preorder at [i] index < mini || > maxi that means the element is outside the range and return NULL
//     if (preorder[i] < mini || preorder[i] > maxi)
//     {
//         // Then return NULL
//         return NULL;
//     }
//     // When we will come out of the loop we will have elements in the range
//     // Create a root new node which will store those element
//     Node<int>* root = new Node<int>(preorder[i++]);
//     // left will create element on left side of that node but after checking the condition, here mini will be exactly same and maxi will become root->data at which we are currently on
//     root->left = solve(preorder, mini, root->data, i);
//     // right will create element on right side of that node but after checking the condition, here maxi will be exactly same and mini will become the root->data at which we are currently on
//     root->right = solve(preorder, root->data, maxi, i);
//     // return root
//     return root;
// }
// Node<int> *preorderToBST(vector<int> &preorder)
// {
//     int i = 0;
//     // We set a range of mini
//     int mini = INT_MIN;
//     // We set a range for maxi
//     int maxi = INT_MAX;
//     // calling solve()
//     return solve(preorder, mini, maxi, i);
// }

// Merged 2 Binary Search Tree (T.C -> O(m + n) & S.C -> O(height1 + height2))
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
// void convertToDLL(TreeNode<int> *root, TreeNode<int> *&head)
// {
//     // Base case
//     if (root == NULL)
//     {
//         return;
//     }
//     // Create Right part a Linked list
//     convertToDLL(root->right, head);
//     // root right is pointing at head
//     root->right = head;
//     // If head is present then head->left will be pointing at root
//     if (head)
//     {
//         head->left = root;
//     }
//     // Now place head at the root
//     head = root;
//     // Create Left part a Linked List
//     convertToDLL(root->left, head);
// }
// TreeNode<int> *merge(TreeNode<int> *head1, TreeNode<int> *head2)
// {
//     // head == NULL
//     TreeNode<int> *head = NULL;
//     // tail == NULL
//     TreeNode<int> *tail = NULL;
//     // head1 && head2 are present
//     while (head1 && head2)
//     {
//         // if 1st data > 2nd data
//         if (head1->data < head2->data)
//         {
//             // if head == NULL
//             if (head == NULL)
//             {
//                 // head will be at head1 means 1st index
//                 head = head1;
//                 // tail will be at head1 same point
//                 tail = head1;
//                 // now move head1 to it's right means next to next
//                 head1 = head1->right;
//             }
//             else
//             {
//                 // tail->right will be at head1
//                 tail->right = head1;
//                 // head1->left will be at tail
//                 head1->left = tail;
//                 // tail will be at head1 place
//                 tail = head1;
//                 // head1 will move right side
//                 head1 = head1->right;
//             }
//         }
//         else
//         {
//             // if head is NULL
//             if (head == NULL)
//             {
//                 // head will be at head2
//                 head = head2;
//                 // tail will be also at head2
//                 tail = head2;
//                 // move head2 to right side
//                 head2 = head2->right;
//             }
//             else
//             {
//                 // tail right will be pointing at head2
//                 tail->right = head2;
//                 // head2->left will be at tail
//                 head2->left = tail;
//                 // tail will be at head2
//                 tail = head2;
//                 // head2 will be move next node on right side
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

// int countNodes(TreeNode<int> *head)
// {
//     int n = 0;
//     TreeNode<int> *temp = head;
//     while (temp)
//     {
//         n++;
//         temp = temp->right;
//     }

//     return n;
// }

// TreeNode<int> *convertDLLtoBST(TreeNode<int> *&head, int n)
// {
//     // if size<=0 || head == NULL then the DLL is NULL
//     if (n <= 0 || head == NULL)
//         return NULL;
//     // lefttree will have left tree converted into BST
//     TreeNode<int> *leftTree = convertDLLtoBST(head, n / 2);
//     // root will be the head of BST
//     TreeNode<int> *root = head;
//     // root->left will be pointing at leftTree
//     root->left = leftTree;
//     // head will move to right from root
//     head = head->right;
//     // root->right will have right Tree converted into BST
//     root->right = convertDLLtoBST(head, n - n / 2 - 1);
//     return root;
// }

// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2)
// {
//     // Both head are at NULL intially
//     TreeNode<int> *head1 = NULL;
//     TreeNode<int> *head2 = NULL;
//     // convert both root and head into DLL
//     convertToDLL(root1, head1);
//     convertToDLL(root2, head2);
//     // head will have merge 2 LL
//     TreeNode<int> *head = merge(head1, head2);
//     // n will have count of nodes of LL
//     int n = countNodes(head);
//     // ans will have DLL converted into BST
//     TreeNode<int> *ans = convertDLLtoBST(head, n);
//     // return ans
//     return ans;
// }

// Largest BST in Binary Tree (T.C -> O(n))
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
//     int maxi;
//     int mini;
//     bool isBST;
//     int size;
// };
// info solve(Node<int> *root, int &ans)
// {
//     // BASE CASE
//     if (root == NULL)
//     {
//         // return all those 4 things {min, max, isBST, size}
//         return {INT_MIN, INT_MAX, true, 0};
//     }
//     // left call will have left ans
//     info left = solve(root->left, ans);
//     // right call will have right ans
//     info right = solve(root->right, ans);
//     // currNode is the node where we currently present
//     info currNode;
//     // currNode.size is equal to sum of left size + right size + 1
//     currNode.size = left.size + right.size + 1;
//     // currNode maxi = max of the node at which we are present
//     currNode.maxi = max(root->data, right.maxi);
//     // currNode maxi = min of the node at which we are present
//     currNode.mini = min(root->data, left.mini);
//     // left node or subtree.isBST && data of root > left maximum node && <right minimum node
//     if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
//     {
//         // Then set currNode is BST
//         currNode.isBST = true;
//     }
//     else
//     {
//         // else it is not
//         currNode.isBST = false;
//     }
//     // UPDATING ANSWER
//     // if currNode isBST
//     if (currNode.isBST)
//     {
//         // Then ans will have max b/w ans and the currNode size at which we are present
//         ans = max(ans, currNode.size);
//     }
//     // return currNode
//     return currNode;
// }
// // largestBST will have maxSize of BST
// int largestBST(TreeNode<int> *root)
// {
//     int maxSize = 0;
//     info temp = solve(root, maxSize);
//     return maxSize;
// }

// Insertion At End in Heaps (T.C -> O(log n))
// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     // created an arr[100]
//     int arr[100];
//     // size is 0 initially
//     int size;
//     // constructor
//     heap()
//     {
//         // arr[0th index] = -1;
//         arr[0] = -1;
//         // size = 0 initially
//         size = 0;
//     }
//     // insert function will insert value in array
//     void insert(int value)
//     {
//         // size = size + 1 means the last index where we will insert the element
//         size = size + 1;
//         // index is the place where we want to insert element
//         int index = size;
//         // In the array a new node will be inserted
//         arr[index] = value;
//         // Till index > 1 run the loop
//         while (index > 1)
//         {
//             // Find parent of that index or node
//             int parent = index / 2;
//             // Compare parent < index or node
//             if (arr[parent] < arr[index])
//             {
//                 // Then swap them with each other
//                 swap(arr[parent], arr[index]);
//                 // update index with the parent
//                 index = parent;
//             }
//             else
//             {
//                 // else just return
//                 return;
//             }
//         }
//     }
//     // print() will print the array
//     void print()
//     {
//         // for loop will start from 1 because at 0th index -1 is in the array
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     // Created a heap
//     heap heap;
//     // Inserting elements in heap
//     heap.insert(50);
//     heap.insert(100);
//     heap.insert(150);
//     heap.insert(200);
//     heap.insert(250);
//     // Printing the elements of heap
//     heap.print();
//     return 0;
// }

// Deletion from Heap (T.C -> O(log n))
// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     // created an arr[100]
//     int arr[100];
//     // size is 0 initially
//     int size;
//     // constructor
//     heap()
//     {
//         // arr[0th index] = -1;
//         arr[0] = -1;
//         // size = 0 initially
//         size = 0;
//     }
//     // insert function will insert value in array
//     void insert(int value)
//     {
//         // size = size + 1 means the last index where we will insert the element
//         size = size + 1;
//         // index is the place where we want to insert element
//         int index = size;
//         // In the array a new node will be inserted
//         arr[index] = value;
//         // Till index > 1
//         while (index > 1)
//         {
//             // Find parent of that index or node
//             int parent = index / 2;
//             // Compare parent < index or node
//             if (arr[parent] < arr[index])
//             {
//                 // Then swap them with each other
//                 swap(arr[parent], arr[index]);
//                 // update index with the parent
//                 index = parent;
//             }
//             else
//             {
//                 // else just return
//                 return;
//             }
//         }
//     }
//     // print() will print the array
//     void print()
//     {
//         // for loop will start from 1 because at 0th index -1 is in the array
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void deletefromHeap(){
//         if (size == 0)
//         {
//             cout<<"nothing to delete from the array";
//         }
//         // Step 1 : put last element at first node
//         arr[1] = arr[size];
//         // Step 2 : remove last element
//         size--;

//         // Step 2 : Take root node to it's correct position
//         int i = 1;
//         // Till index < size run the loop
//         while (i < size)
//         {
//             // leftindex = 2*i
//             int leftindex = 2 * i;
//             // int rightindex = 2* i + 1;
//             int rightindex = 2* i + 1;
//             // leftindex < size && arr current element < arr[leftindex]
//             if (leftindex < size && arr[i] < arr[leftindex])
//             {
//                 // Then swap both elements
//                 swap(arr[i], arr[leftindex]);
//                 // index will be equal to leftindex
//                 i = leftindex;
//             }
//             // rightindex < size && arr[i] < arr[rightindex]
//             else if (rightindex < size && arr[i] < arr[rightindex])
//             {
//                 // Then also swap them
//                 swap(arr[i], arr[rightindex]);
//                 // index will be equal to rightindex
//                 i = rightindex;
//             }
//             else
//             {
//                 // else return
//                 return;
//             }
//         }
//     }
// };
// int main()
// {
//     // Created a heap
//     heap heap;
//     // Inserting elements in heap
//     heap.insert(50);
//     heap.insert(100);
//     heap.insert(150);
//     heap.insert(200);
//     heap.insert(250);
//     // Printing the elements of heap
//     heap.print();
//     // Deleting element from heap
//     heap.deletefromHeap();
//     heap.print();
//     return 0;
// }

// Heapify Algorithum (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     // created an arr[100]
//     int arr[100];
//     // size is 0 initially
//     int size;
//     // constructor
//     heap()
//     {
//         // arr[0th index] = -1;
//         arr[0] = -1;
//         // size = 0 initially
//         size = 0;
//     }
//     // insert function will insert value in array
//     void insert(int value)
//     {
//         // size = size + 1 means the last index where we will insert the element
//         size = size + 1;
//         // index is the place where we want to insert element
//         int index = size;
//         // In the array a new node will be inserted
//         arr[index] = value;
//         // Till index > 1
//         while (index > 1)
//         {
//             // Find parent of that index or node
//             int parent = index / 2;
//             // Compare parent < index or node
//             if (arr[parent] < arr[index])
//             {
//                 // Then swap them with each other
//                 swap(arr[parent], arr[index]);
//                 // update index with the parent
//                 index = parent;
//             }
//             else
//             {
//                 // else just return
//                 return;
//             }
//         }
//     }
//     // print() will print the array
//     void print()
//     {
//         // for loop will start from 1 because at 0th index -1 is in the array
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     // deletefromHeap
//     void deletefromHeap()
//     {
//         // if size == 0 then it is empty
//         if (size == 0)
//         {
//             cout << "nothing to delete from the array";
//         }
//         // Step 1 : put last element at first node
//         arr[1] = arr[size];
//         // Step 2 : remove last element
//         size--;

//         // Step 2 : Take root node to it's correct position
//         int i = 1;
//         // Till index < size run the loop
//         while (i < size)
//         {
//             // leftindex = 2*i
//             int leftindex = 2 * i;
//             // int rightindex = 2* i + 1;
//             int rightindex = 2 * i + 1;
//             // leftindex < size && arr current element < arr[leftindex]
//             if (leftindex < size && arr[i] < arr[leftindex])
//             {
//                 // Then swap both elements
//                 swap(arr[i], arr[leftindex]);
//                 // index will be equal to leftindex
//                 i = leftindex;
//             }
//             // rightindex < size && arr[i] < arr[rightindex]
//             else if (rightindex < size && arr[i] < arr[rightindex])
//             {
//                 // Then also swap them
//                 swap(arr[i], arr[rightindex]);
//                 // index will be equal to rightindex
//                 i = rightindex;
//             }
//             else
//             {
//                 // else return
//                 return;
//             }
//         }
//     }
// };
// // heapify
// void heapify(int arr[], int n, int i){
//     // largest = index of the element
//     int largest = i;
//     // left child will be at 2 * i
//     int left = 2 * i;
//     // right child will be at 2 * i  + 1
//     int right = 2 * i + 1;
//     // if left < n && arr[largest] < arr[left] that means it is in array
//     if (left < n && arr[largest] < arr[left])
//     {
//         // then largest will be updated to left
//         largest = left;
//     }
//     // right < n && arr[largest] < arr[right] that means it is array
//     if (right < n && arr[largest] < arr[right])
//     {
//         // update largest with right
//         largest = right;
//     }
//     // if coming out of the loop largest != index that means it is updated
//     if (largest != i)
//     {
//         // Then swap arr[largest] with arr[current index] so, node is now at the right position
//         swap(arr[largest], arr[i]);
//         // heapify function will put the index at right place which is what heapify do
//         heapify(arr, n, largest);
//     }
// }
// int main()
// {
//     // Created a heap
//     heap heap;
//     // Inserting elements in heap
//     heap.insert(50);
//     heap.insert(100);
//     heap.insert(150);
//     heap.insert(200);
//     heap.insert(250);
//     // Printing the elements of heap
//     // heap.print();
//     // Deleting element from heap
//     // heap.deletefromHeap();
//     // heap.print();

//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n = 5;
//     // Run a loop from n/2 to 1st index reverse order from right to left
//     for (int i = n/2; i > 0; i--)
//     {
//         // heapify those nodes (putting nodes at right place) except n/2 to n as they are leaf nodes
//         heapify(arr, n, i);
//     }
//     cout<<"printing the array : "<<endl;
//     // Print all nodes when they become heap
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Heap Sort (T.C -> O(n log n))
// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
// public:
//     // created an arr[100]
//     int arr[100];
//     // size is 0 initially
//     int size;
//     // constructor
//     heap()
//     {
//         // arr[0th index] = -1;
//         arr[0] = -1;
//         // size = 0 initially
//         size = 0;
//     }
//     // insert function will insert value in array
//     void insert(int value)
//     {
//         // size = size + 1 means the last index where we will insert the element
//         size = size + 1;
//         // index is the place where we want to insert element
//         int index = size;
//         // In the array a new node will be inserted
//         arr[index] = value;
//         // Till index > 1
//         while (index > 1)
//         {
//             // Find parent of that index or node
//             int parent = index / 2;
//             // Compare parent < index or node
//             if (arr[parent] < arr[index])
//             {
//                 // Then swap them with each other
//                 swap(arr[parent], arr[index]);
//                 // update index with the parent
//                 index = parent;
//             }
//             else
//             {
//                 // else just return
//                 return;
//             }
//         }
//     }
//     // print() will print the array
//     void print()
//     {
//         // for loop will start from 1 because at 0th index -1 is in the array
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     // deletefromHeap
//     void deletefromHeap()
//     {
//         // if size == 0 then it is empty
//         if (size == 0)
//         {
//             cout << "nothing to delete from the array";
//         }
//         // Step 1 : put last element at first node
//         arr[1] = arr[size];
//         // Step 2 : remove last element
//         size--;

//         // Step 2 : Take root node to it's correct position
//         int i = 1;
//         // Till index < size run the loop
//         while (i < size)
//         {
//             // leftindex = 2*i
//             int leftindex = 2 * i;
//             // int rightindex = 2* i + 1;
//             int rightindex = 2 * i + 1;
//             // leftindex < size && arr current element < arr[leftindex]
//             if (leftindex < size && arr[i] < arr[leftindex])
//             {
//                 // Then swap both elements
//                 swap(arr[i], arr[leftindex]);
//                 // index will be equal to leftindex
//                 i = leftindex;
//             }
//             // rightindex < size && arr[i] < arr[rightindex]
//             else if (rightindex < size && arr[i] < arr[rightindex])
//             {
//                 // Then also swap them
//                 swap(arr[i], arr[rightindex]);
//                 // index will be equal to rightindex
//                 i = rightindex;
//             }
//             else
//             {
//                 // else return
//                 return;
//             }
//         }
//     }
// };
// // heapify
// void heapify(int arr[], int n, int i)
// {
//     // largest = index of the element
//     int largest = i;
//     // left child will be at 2 * i
//     int left = 2 * i;
//     // right child will be at 2 * i  + 1
//     int right = 2 * i + 1;
//     // if left < n && arr[largest] < arr[left] that means it is in array
//     if (left <= n && arr[largest] < arr[left])
//     {
//         // then largest will be updated to left
//         largest = left;
//     }
//     // right < n && arr[largest] < arr[right] that means it is array
//     if (right <= n && arr[largest] < arr[right])
//     {
//         // update largest with right
//         largest = right;
//     }
//     // if coming out of the loop largest != index that means it is updated
//     if (largest != i)
//     {
//         // Then swap arr[largest] with arr[current index] so, node is now at the right position
//         swap(arr[largest], arr[i]);
//         // heapify function will put the index at right place which is what heapify do
//         heapify(arr, n, largest);
//     }
// }
// void heapSort(int arr[], int n)
// {
//     int size = n;
//     // Until size > 1
//     while (size > 1)
//     {
//         // Step 1 : swap arr[size] with arr[1] first node
//         swap(arr[size], arr[1]);
//         // Step 2 : then remove the last element
//         size--;
//         // heapify the whole arr so that element / nodes will be at their right place in proper order
//         heapify(arr, size, 1);
//     }
// }
// int main()
// {
//     // Created a heap
//     heap heap;
//     // Inserting elements in heap
//     heap.insert(50);
//     heap.insert(100);
//     heap.insert(150);
//     heap.insert(200);
//     heap.insert(250);
//     // Printing the elements of heap
//     // heap.print();
//     // Deleting element from heap
//     // heap.deletefromHeap();
//     // heap.print();

// int arr[6] = {-1, 54, 53, 55, 52, 50};
// int n = 5;
// // Run a loop from n/2 to 1st index reverse order from right to left
// for (int i = n / 2; i > 0; i--)
// {
//     // heapify those nodes (putting nodes at right place) except n/2 to n as they are leaf nodes
//     heapify(arr, n, i);
// }
// cout << "printing normal array : " << endl;
// for (int i = 1; i <= n; i++)
// {
//     cout << arr[i] << " ";
// }
// cout << endl;
// // heapSort
// heapSort(arr, n);

// cout << "printing sorted array : " << endl;
// for (int i = 1; i <= n; i++)
// {
//     cout << arr[i] << " ";
// }
// cout << endl;
// return 0;
// }

// Find the Kth Smallest element of Heap (T.C -> O(n) & S.C -> O(k))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int KthSmallest(int arr[], int l, int r, int k)
//     {
//         // Created a priority queue
//         priority_queue<int> pq;
//         // Step 1 : push all elements of array in pq
//         for (int i = 0; i < k; i++)
//         {
//             pq.push(arr[i]);
//         }
//         // Step 2 : for remaining elements of array, we will compare that if current element is smaller than the top element of pq
//         // For this we will run the loop from k to <= r which means n - 1
//         for (int i = k; i <= r; i++)
//         {
//             if (arr[i] < pq.top())
//             {
//                 // Then pop the top element of pq
//                 pq.pop();
//                 // push the current element in pq
//                 pq.push(arr[i]);
//             }
//         }
//         // ans will have top element of pq because the top element of pq which is the max. element of pq is the ans
//         int ans = pq.top();
//         // we will return the ans as it contains the kth element of max heap
//         return ans;
//     }
// };

// Is Binary Tree Heap (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
// class Solution{
//     private:
//     int cnt(struct Node *tree)
//     {
//         // Base case
//         if (tree == NULL)
//         {
//             return 0;
//         }
//         // ans will have count of left nodes and right nodes + head node
//         int ans = 1 + cnt(tree->left) + cnt(tree->right);
//         return ans;
//     }

//     bool isCBT(struct Node *root, int i, int cnt)
//     {
//         // Base case
//         if (root == NULL)
//             return true;
//         // If index exceds or equal to countNode then return false
//         if (i >= cnt)
//             return false;
//         // else
//         // recursive call for left nodes
//         bool left = isCBT(root->left, 2 * i + 1, cnt);
//         // recursive call for right nodes
//         bool right = isCBT(root->right, 2 * i + 2, cnt);
//         // return both left && right
//         return (left && right);
//     }
//     // This will check is the Tree heap
//     bool isheap(struct Node *tree)
//     {
//         // If root->left is NULL && root->right is NULL so no child leaf node
//         if (tree->left == NULL && tree->right == NULL)
//             // return true as it is Heap
//             return true;
//         // If root->right == NULL means it is left node case
//         if (tree->right == NULL)
//             // compare root->data > root->left->data
//             return tree->data > tree->left->data;
//         // else if root->right != NULL && root->left != NULL meanse it has both childs case
//         else if (tree->right != NULL && tree->left != NULL)
//             //  Then return root->data > root->left->data && root->data > root->right->data
//             return ((tree->data > tree->left->data) && (tree->data > tree->right->data));
//         // else return false
//         else
//         {
//             return false;
//         }
//     }
// public:
//     bool isHeap(struct Node *tree)
//     {
//         // index is 0
//         int index = 0;
//         // cbt will have is the tree CBT or not
//         bool cbt = isCBT(tree, index, cnt(tree));
//         // heap will check the tree is heap or not
//         bool heap = isheap(tree);
//         // At the end if both then we will return that it is Heap
//         return (heap && cbt);
//     }
// };

// Merge 2 Binary Max Heaps (T.C -> O(n log n) & S.C -> O(n + m))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // This heapify algorithm we all know
//     void heapify(vector<int> &arr, int n, int i)
//     {
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;
//         if (left < n && arr[largest] < arr[left])
//         {
//             largest = left;
//         }
//         if (right < n && arr[largest] < arr[right])
//         {
//             largest = right;
//         }
//         if (largest != i)
//         {
//             swap(arr[largest], arr[i]);
//             heapify(arr, n, largest);
//         }
//     }
//     // MergeHeaps will merge 2 vectors together
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
//     {
//         // ans will have ans
//         vector<int> ans;
//         // run a loop for putting all the values of a vector
//         for (auto i : a)
//         {
//             // push values of a vector in ans
//             ans.push_back(i);
//         }
//         // run a loop for putting all the values of b vector
//         for (auto i : b)
//         {
//             // push values of b vector in ans
//             ans.push_back(i);
//         }
//         // size will have size of ans vector which will merge both vectors
//         int size = ans.size();
//         // build heap using merged array
//         for (int i = size / 2 - 1; i >= 0; i--)
//         {
//             // Calling heapify function to create heap
//             heapify(ans, size, i);
//         }
//         // return ans
//         return ans;
//     }
// };

// Minimum Cost of ropes (T.C -> O(n log n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     long long minCost(long long arr[], long long n)
//     {
//         // MinHeap
//         priority_queue<long long, vector<long long>, greater<long long>> pq;
//         // Run a loop from 0 to size
//         for (int i = 0; i < n; i++)
//         {
//             // Push all elements of array in minHeap
//             pq.push(arr[i]);
//         }
//         // res is 0 initially
//         long long res = 0;
//         // Until pq.size() > 1
//         while (pq.size() > 1)
//         {
//             // a will have top element
//             long long a = pq.top();
//             // pop the first element
//             pq.pop();
//             // b will have top of pq
//             long long b = pq.top();
//             // pop that element
//             pq.pop();
//             // sum will sum a & b
//             long long sum = a + b;
//             // result will append sum
//             res += sum;
//             // push that sum in pq
//             pq.push(sum);
//         }
//         // return res
//         return res;
//     }
// };

// Find Kth largest sum subarray (T.C -> O(n^2) & S.C -> O(K))
// #include<bits/stdc++.h>
// using namespace std;
// int getKthLargest(vector<int> &arr, int k)
// {
//     // Min Heap created
// 	   priority_queue<int, vector<int>, greater<int>> p;
//     // n will have size of array
//     int n = arr.size();
//     // Run a loop from 0 to end
//     for(int i = 0; i < n; i++){
//         // sum will be equal to 0
//         int sum = 0;
//         // Another loop from ith element to the end
//         for(int j = i ; j < n; j++){
//             sum = sum + arr[j];
//             // If size of min heap < kth element size
//             if(p.size() < k){
//                 // Then push that element in min Heap
//                 p.push(sum);
//             }
//             else
//             {
//                 // If sum > size of min heap
//                 if(sum > p.top()){
//                 // Then pop the min. element of the min heap from the top
//                 p.pop();
//                 // Push the sum in the min heap
//                 p.push(sum);
//             }}
//         }
//     }
//     // ans will be at the top of min heap
//     return p.top();
// }

// Merge K sorted Arrays (T.C -> O(n*k))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
// {
//     // ans vector will have the merge arrays
//     vector<int> ans;
//     // Run a loop from 0 to the kth size
//     for (int i = 0; i < k; i++)
//     {
//         // for loop from start to the end and push all the elements in ans array one by one
//         for (int j = 0; j < kArrays[i].size(); j++)
//         {
//             ans.push_back(kArrays[i][j]);
//         }
//     }
//     // Now we will sort the ans array
//     sort(ans.begin(), ans.end());
//     // return ans
//     return ans;
// }

// Merge K Sorted Linked Lists (T.C -> O(n log k) & S.C -> O(k))
// #include <bits/stdc++.h>
// using namespace std;
// void insertAtTail(Node<int> *&head, Node<int> *&tail, int val)
// {
//     // Temp will have the ans
//     Node<int> *temp = new Node<int>(val);
//     // If empty list
//     if (head == NULL)
//     {
//         // point head to the temp means top
//         head = temp;
//         // point tail to the temp means top
//         tail = temp;
//         return;
//     }
//     else
//     {
//         // add new node at the tail
//         tail->next = temp;
//         // now tail will be new added node
//         tail = temp;
//     }
// }
// Node<int> *mergeKLists(vector<Node<int> *> &listArray)
// {
//     // ans will have the merged linked lists
//     vector<int> ans;
//     // Run a loop from start to the end
//     for (int i = 0; i < listArray.size(); i++)
//     {
//         // Here temp will have all the elements of array
//         Node<int> *temp = listArray[i];
//         // Run the loop until temp becomes equal to NULL
//         while (temp != NULL)
//         {
//             // till then push temp->data in ans
//             ans.push_back(temp->data);
//             // move temp to the next to next new added node
//             temp = temp->next;
//         }
//     }
//     // Then sort the whole merged linked list
//     sort(ans.begin(), ans.end());

//     Node<int> *firstHead = NULL;
//     Node<int> *tail = NULL;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         int element = ans[i];
//         // This will insert elements at Tail
//         insertAtTail(firstHead, tail, element);
//     }
//     return firstHead;
// }

// Smallest Range from K Sorted List (T.C -> O(N*K*log(K))) & (S.C -> O(K))
// #include <bits/stdc++.h>
// using namespace std;
// int kSorted(vector<vector<int>> &a, int k, int n)
// {
//     // maxi will have MIN and mini will have MAX
//     int maxi = INT_MIN, mini = INT_MAX;
//     // Created a minHeap
//     priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
//     // Insert the first element of each list in Min heap
//     for (int i = 0; i < k; i++)
//     {
//         // Pushing the first element in MinHeap
//         pq.push({a[i][0], {i, 0}});
//         maxi = max(maxi, a[i][0]);
//         mini = min(mini, a[i][0]);
//     }

//     // Initialize the answer using current min and max
//     // This is the range
//     int ans = maxi - mini + 1;
//     while (!pq.empty())
//     {
//         // Remove the minimum element from Min heap as it is already stored in the minHeap initially
//         // MinHeap top element is the minimum element of minHeap so we have to remove that
//         pair<int, pair<int, int>> p = pq.top();
//         pq.pop();
//         // Updating the range
//         int row = p.second.first;
//         int col = p.second.second;
//         mini = p.first;
//         // Calculate new length of the range
//         int len = maxi - mini + 1;
//         // Update the answer with new range
//         ans = min(ans, len);
//         // Update the column number of new element to be inserted
//         col++;
//         // If this list is exhausted / finished then we can not further improve our answer so will break the loop
//         if (col == n)
//         {
//             break;
//         }
//         // Insert new element in Min heap
//         pq.push({a[row][col], {row, col}});
//         // Also update the maximum element
//         maxi = max(maxi, a[row][col]);
//     }
//     return ans;
// }

// Median in a stream (T.C -> O(n log n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int signum(int a, int b)
// {
//     // If a==b then return 0
//     if (a == b)
//     {
//         return 0;
//     }
//     // If a > b then 1
//     else if (a > b)
//     {
//         return 1;
//     }
//     // If a < b then -1
//     else
//     {
//         return -1;
//     }
// }

// void solve(int element, priority_queue<int> &maxi, priority_queue<int, vector<int>, greater<int>> &mini, int &median)
// {
//     // will use switch case for different cases
//     switch (signum(maxi.size(), mini.size()))
//     {
//     // Case 0 is when n & n & when element > median then push element in minHeap and median will the top element of minHeap
//     case 0:
//         if (element > median)
//         {
//             mini.push(element);
//             median = mini.top();
//         }
//         // else element < median then push in maxHeap and median is top of maxHeap
//         else
//         {
//             maxi.push(element);
//             median = maxi.top();
//         }
//         // break we have to do in switch case
//         break;
//     // When n and n - 1 this is the odd case
//     // when element > median then push element in minHeap and median will the top element of minHeap
//     case 1:
//         if (element > median)
//         {
//             // Push in minHeap the element
//             mini.push(element);
//             // odd case median is calculated by this formulae
//             median = (maxi.top() + mini.top()) / 2;
//         }
//         else
//         {
//             // Push in minHeap the top element
//             mini.push(maxi.top());
//             maxi.pop();
//             // Psuh in maxHeap the element
//             maxi.push(element);
//             // odd case median is calculated by this formulae
//             median = (maxi.top() + mini.top()) / 2;
//         }
//         // break we have to do in switch case
//         break;
//     // When n - 1 & n means odd case
//     case -1:
//         if (element > median)
//         {
//             // Push in maxi the top element
//             maxi.push(mini.top());
//             mini.pop();
//             // Push the element in mini
//             mini.push(element);
//             // odd case median is calculated by this formulae
//             median = (maxi.top() + mini.top()) / 2;
//         }
//         else
//         {
//             // Push in maxi the element
//             maxi.push(element);
//             // odd case median is calculated by this formulae
//             median = (maxi.top() + mini.top()) / 2;
//         }
//         // break we have to do in switch case
//         break;
//     }
// }

// vector<int> findMedian(vector<int> &arr, int n)
// {
//     // ans vector will have ans
//     vector<int> ans;
//     // maxi is maxHeap
//     priority_queue<int> maxi;
//     // mini is minHeap
//     priority_queue<int, vector<int>, greater<int>> mini;
//     // median is initially -1
//     int median = -1;
//     // run a loop from start to the end
//     for (int i = 0; i < n; i++)
//     {
//         // recursive call
//         solve(arr[i], maxi, mini, median);
//         // push median in the ans as it is the ans
//         ans.push_back(median);
//     }
//     // return ans
//     return ans;
// }

// Rearrange Strings
// #include <bits/stdc++.h>
// using namespace std;
// string reArrangeString(string &s)
// {
//     int n = s.size();
//     // int -> freq
//     map<char, int> m;

//     for (char ch : s)
//     {
//         m[ch]++;
//         // ch jab jab milega ++ kardenge frquency ko
//     }

//     priority_queue<pair<int, char>> pq;

//     for (auto itr : m)
//     {
//         pq.push(make_pair(itr.second, itr.first));
//     }

//     // block
//     pair<int, char> g = {-1, '$'};

//     string ans = "";

//     while (!pq.empty())
//     {
//         auto temp = pq.top();
//         pq.pop();

//         ans += temp.second;

//         temp.first--;

//         if (g.first > 0)
//         {
//             pq.push(g);
//         }
//         g = temp;
//     }

//     if (n == ans.size())
//     {
//         return ans;
//     }
//     return "Not Possible";
// }

// Priority Queue
// From which we can use min heap and max heap
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // Max Heap
//     cout << "Using Priority Queue : " << endl;
//     priority_queue<int> queue;
//     queue.push(4);
//     queue.push(5);
//     queue.push(6);
//     queue.push(7);
//     queue.push(8);
//     // Top element will be the max. element of that priority queue
//     cout << "Element at top : " << queue.top() << endl;
//     queue.pop();
//     cout << "Element at top : " << queue.top() << endl;
//     queue.pop();
//     cout << "Element at top : " << queue.top() << endl;
//     queue.pop();
//     cout << "Element at top : " << queue.top() << endl;
//     queue.pop();
//     cout << "Element at top : " << queue.top() << endl;
//     cout << endl;
//     cout << endl;
//     cout << "Element of min heap are : " << endl;
//     // Min Heap
//     priority_queue<int, vector<int>, greater<int>> queuemin;
//     queuemin.push(4);
//     queuemin.push(5);
//     queuemin.push(6);
//     queuemin.push(7);
//     queuemin.push(8);
//     // Top element will be the min. element of that priority queue
//     // first min. element is 4 which will pop first
//     cout << "Element at top : " << queuemin.top() << endl;
//     queuemin.pop();
//     // second min. element is 5 which will pop second
//     cout << "Element at top : " << queuemin.top() << endl;
//     queuemin.pop();
//     cout << "Element at top : " << queuemin.top() << endl;
//     queuemin.pop();
//     cout << "Element at top : " << queuemin.top() << endl;
//     queuemin.pop();
//     cout << "Element at top : " << queuemin.top() << endl;
//     return 0;
// }

// Features of Hashtable
// It is similar to HashMap, but is synchronized.
// The Hashtable class implements a hash table, which maps keys to values. Any non-null object can be used as a key or as a value
// Hashtable stores key/value pair in hash table.
// In Hashtable we specify an object that is used as a key, and the value we want to associate to that key. The key is then hashed, and the resulting hash code is used as the index at which the value is stored within the table.
// The initial default capacity of Hashtable class is 11 whereas loadFactor is 0.75
// The purpose of hashing is to achieve search, insert and delete an element in complexity O(1).

// Implementation of HashMaps / HashTable
// Unordered Map
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // Creation
//     // unordered_map<string, int> map;
//     unordered_map<string, int> map;
//     // Insertion
//     // We can do insertion in map by making pair
//     // 1st
//     pair<string, int> p = make_pair("Harry", 1);
//     map.insert(p);
//     // 2nd
//     pair<string, int> p1("Sarry", 2);
//     map.insert(p1);
//     // 3rd
//     map["Larry"] = 3;
//     map["Parry"] = 4;

//     // Searching
//     // It will print the value corresponding to the key
//     // 1st method
//     cout<<map["Harry"]<<endl;
//     cout<<map["Sarry"]<<endl;
//     cout<<map["Larry"]<<endl;
//     cout<<map["Parry"]<<endl;
//     // 2nd method
//     cout<<map.at("Parry")<<endl;
//     // This will create a entry for key Narry with 0 value
//     cout<<map["Narry"]<<endl;
//     cout<<map.at("Narry")<<endl;
//     // But this will not create, it will give errork
//     // cout<<map.at("Farry")<<endl;
//     // cout<<map["Farry"]<<endl;
//     cout<<map.size()<<endl;
//     // Checks presence of key
//     cout<<map.count("Harry")<<endl; // 1 for true and 0 for false
//     // Erase the key
//     map.erase("Harry");
//     cout<<map["Harry"]<<endl;
//     // Traverse and accessing the whole map
//     for (auto i:map)
//     {
//         cout<<i.first<<" "<<i.second<<" ";
//     }
//     // Traverse and accessing through iterators in unordered map (where the order of data is not in order)
//     unordered_map<string, int>::iterator itr = map.begin();
//     while (itr != map.end())
//     {
//         cout<<itr->first<<" "<<itr->second<<" "<<endl;
//         itr++;
//     }
//     // Traverse and accessing through iterators (where the data is in order)
//     // map<string, int>::iterator itr = map.begin();
//     // while (itr != map.end())
//     // {
//         // cout<<itr->first<<" "<<itr->second<<" "<<endl;
//         // itr++;
//     // }
//     return 0;
// }

// Collision Resolution
// When two or more keys are given the same hash value, it is called a collision. To handle this collision, we use collision resolution techniques
// 1) Separate chaining (open hashing)
// In this technique, a linked list is created from the slot in which collision has occurred, after which the new key is inserted into the linked list. This linked list of slots looks like a chain, so it is called separate chaining. It is used more when we do not know how many keys to insert or delete
// 2) Open addressing (closed hashing)
// Open addressing is collision-resolution method that is used to control the collision in the hashing table. There is no key stored outside of the hash table. Therefore, the size of the hash table is always greater than or equal to the number of keys. It is also called closed hashing
// 3) Linear Probing
// In this, when the collision occurs, we perform a linear probe for the next slot, and this probing is performed until an empty slot is found. In linear probing, the worst time to search for an element is O(table size). The linear probing gives the best performance of the cache but its problem is clustering. The main advantage of this technique is that it can be easily calculated
// 4) Quadratic Probing
// In this, when the collision occurs, we probe for i2th slot in ith iteration, and this probing is performed until an empty slot is found. The cache performance in quadratic probing is lower than the linear probing. Quadratic probing also reduces the problem of clustering
// 5) Double Hashing
// In this, you use another hash function, and probe for (i * hash 2(x)) in the ith iteration. It takes longer to determine two hash functions. The double probing gives the very poor the cache performance, but there has no clustering problem in it

// Maximum Frequency number (T.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// int maximumFrequency(vector<int> &arr, int n){
//     // unordered map because we don't need ordered map as we have to only count the number and T.C of unordered map is more optimized than normal map
//     unordered_map<int, int> count;
//     // maxFrequency is 0 initially
//     int maxFrequency = 0;
//     // maxAns is 0 initially
//     int maxAns = 0;
//     // Run a loop from 0 to the end of array
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // we will have count of element of arr++
//         count[arr[i]]++;
//         // maxFrequency will have max b/w maxFrequency and count of max occuring number in arr[i]
//         maxFrequency = max(maxFrequency, count[arr[i]]);
//     }
//     // Run a loop if maxFrequency which have max b/w maxFrequency and count of max occuring element of arr
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // If maxFrequency becomes equal to count of arr[i]
//         if (maxFrequency == count[arr[i]])
//         {
//             // Then store it in the maxAns
//             maxAns = arr[i];
//             // Stop the loop
//             break;
//         }
//     }
//     // return maxAns
//     return maxAns;
// }

// Trie Node (T.C -> O(Length of word) & S.C -> O(Length of word))
// #include <bits/stdc++.h>
// using namespace std;
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;
//     // Insertion
//     // Constructor
//     TrieNode(char ch)
//     {
//         data = ch;
//         // Run a loop from start to the end of the alphabetic character
//         for (int i = 0; i < 26; i++)
//         {
//             // ALl the children in starting will be NULL
//             children[i] = NULL;
//         }
//         // isTerminal will be false also
//         isTerminal = false;
//     }
// };
// class Trie
// {
//     TrieNode *root;

// public:
//     // Initialize your data structure here
//     Trie()
//     {
//         // root will have NULL value initially
//         root = new TrieNode('\0');
//     }
//     // Insertion
//     void insertUtil(TrieNode *root, string word)
//     {
//         // Base case
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         // assumption, word will be in small
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         // If present
//         if (root->children[idx] != NULL)
//         {
//             // Move to the next children node
//             child = root->children[idx];
//         }
//         // If absent
//         else
//         {
//             // Create a new TrieNode from starting
//             child = new TrieNode(word[0]);
//             root->children[idx] = child;
//         }
//         // Recursion
//         insertUtil(child, word.substr(1));
//     }
//     // Inserts a word into the trie
//     void insert(string word)
//     {
//         insertUtil(root, word);
//     }
//     bool searchUtil(TrieNode *root, string word)
//     {
//         // Base case
//         if (word.length() == 0)
//         {
//             return root->isTerminal;
//         }
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         // If present
//         if (root->children[idx] != NULL)
//         {
//             // Move to the next children node
//             child = root->children[idx];
//         }
//         // If absent
//         else
//         {
//             return false;
//         }
//         // Recursion call for further searching
//         return searchUtil(child, word.substr(1));
//     }
//     // Returns if the word is in the trie
//     // Search will run the searchUtil()
//     bool search(string word)
//     {
//         return searchUtil(root, word);
//     }
//     // Find prefix is present in trie
//     bool prifixUtil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             return true;
//         }
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         if (root->children[idx] != NULL)
//         {
//             child = root->children[idx];
//         }
//         else
//         {
//             return false;
//         }
//         // call Recursion
//         return prifixUtil(child, word.substr(1));
//     }
//     bool startsWith(string prefix)
//     {
//         return prifixUtil(root, prefix);
//     }
// };

// Delete in Trie (T.C -> O(L) & S.C -> O(L))
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

//     bool isEmpty(TrieNode *root)
//     {
//         for (int i = 0; i < 26; i++)
//             if (root->children[i])
//             {
//                 return false;
//             }
//             else
//             {
//                 return true;
//             }
//     }
//     // Recursive function to delete a key from given Trie
//     TrieNode *remove(TrieNode *root, string key, int depth = 0)
//     {
//         // If tree is empty
//         if (!root)
//             return NULL;

//         // If last character of key is being processed
//         if (depth == key.size())
//         {
//             // This node is no more end of word after
//             // removal of given key
//             if (root->isTerminal)
//                 root->isTerminal = false;

//             // If given is not prefix of any other word
//             if (isEmpty(root))
//             {
//                 delete (root);
//                 root = NULL;
//             }

//             return root;
//         }

//         // If not last character, recur for the child
//         // obtained using ASCII value
//         int index = key[depth] - 'a';
//         root->children[index] = remove(root->children[index], key, depth + 1);

//         // If root does not have any child (its only child got
//         // deleted), and it is not end of another word.
//         if (isEmpty(root) && root->isTerminal == false)
//         {
//             delete (root);
//             root = NULL;
//         }
//         return root;
//     }
// };

// int main()
// {
// 	// Input keys (use only 'a' through 'z'
// 	// and lower case)
// 	string keys[] = { "the", "a", "there",
// 					"answer", "any", "by",
// 					"bye", "their", "hero", "heroplane" };
// 	int n = sizeof(keys) / sizeof(keys[0]);

// 	struct TrieNode* root = getNode();

// 	// Construct trie
// 	for (int i = 0; i < n; i++)
// 		insert(root, keys[i]);

// 	// Search for different keys
// 	search(root, "the") ? cout << "Yes\n" : cout << "No\n";
// 	search(root, "these") ? cout << "Yes\n" : cout << "No\n";

// 	remove(root, "heroplane");
// 	search(root, "hero") ? cout << "Yes\n" : cout << "No\n";
// 	return 0;
// }

// Prefix Search in Trie (T.C -> O(L) & S.C -> O(L))
// #include <bits/stdc++.h>
// using namespace std;
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;
//     // Insertion
//     // Constructor
//     TrieNode(char ch)
//     {
//         data = ch;
//         // Run a loop from start to the end of the alphabetic character
//         for (int i = 0; i < 26; i++)
//         {
//             // ALl the children in starting will be NULL
//             children[i] = NULL;
//         }
//         // isTerminal will be false also
//         isTerminal = false;
//     }
// };
// class Trie
// {
//     TrieNode *root;

// public:
//     // Initialize your data structure here
//     Trie()
//     {
//         // root will have NULL value initially
//         root = new TrieNode('\0');
//     }
//     // Insertion
//     void insertUtil(TrieNode *root, string word)
//     {
//         // Base case
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         // assumption, word will be in CAPS
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         // If present
//         if (root->children[idx] != NULL)
//         {
//             // Move to the next children node
//             child = root->children[idx];
//         }
//         // If absent
//         else
//         {
//             // Create a new TrieNode from starting
//             child = new TrieNode(word[0]);
//             root->children[idx] = child;
//         }
//         // Recursion
//         insertUtil(child, word.substr(1));
//     }
//     // Inserts a word into the trie
//     void insert(string word)
//     {
//         insertUtil(root, word);
//     }
//     bool searchUtil(TrieNode *root, string word)
//     {
//         // Base case
//         if (word.length() == 0)
//         {
//             return root->isTerminal;
//         }
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         // If present
//         if (root->children[idx] != NULL)
//         {
//             // Move to the next children node
//             child = root->children[idx];
//         }
//         // If absent
//         else
//         {
//             return false;
//         }
//         // Recursion call for further searching
//         return searchUtil(child, word.substr(1));
//     }
//     // Returns if the word is in the trie
//     // Search will run the searchUtil()
//     bool search(string word)
//     {
//         return searchUtil(root, word);
//     }
//     // Find prefix is present in trie
//     bool prifixUtil(TrieNode *root, string word)
//     {
//         // Base case
//         if (word.length() == 0)
//         {
//             // return true
//             return true;
//         }
//         int idx = word[0] - 'a';
//         TrieNode *child;
//         // If present
//         if (root->children[idx] != NULL)
//         {
//             // Then move child to next children node
//             child = root->children[idx];
//         }
//         // If absent
//         else
//         {
//             // return false
//             return false;
//         }
//         // Recursion call
//         return prifixUtil(child, word.substr(1));
//     }
//     // If any word/letter is starting with prefix then return it
//     bool startsWith(string word)
//     {
//         return prifixUtil(root, word);
//     }
// };

// Longest Common Prefix Problem (T.C -> O(m * n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// string longestCommonPrefix(vector<string> &arr, int n)
// {
//     // It will have ans
//     string ans = "";
//     // for traversing all characters of first string
//     for (int i = 0; i < arr[0].length(); i++)
//     {
//         // ch will have character
//         char ch = arr[0][i];
//         // store first char of the first element form this array
//         bool match = true;
//         // for comparing ch with rest of the strings
//         // we started loop from 1 because we have to compare with remaining another element of this array
//         // Run a loop from 1 to the end
//         for (int j = 1; j < n; j++)
//         {
//             // If not match
//             if (arr[j].size() < i || ch != arr[j][i])
//             {
//                 // Mark match = false and break the loop
//                 match = false;
//                 break;
//             }
//         }
//         // If match == false after coming out of the loop then break don't try more
//         if (match == false)
//         {
//             break;
//         }
//         else
//         {
//             // Else we have the ans in ch so we will push it in the ans
//             ans.push_back(ch);
//         }
//     }
//     return ans;
// }

// Implement a Phone Directory using Trie (T.C -> O((m * n) ^ 2) & S.C -> O(m * n))
// #include <bits/stdc++.h>
// using namespace std;
// // Insertion and Deletion in Trie
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
// public:
//     TrieNode *root;

//     Trie()
//     {
//         root = new TrieNode('\0');
//     }

//     void insertUtil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }

//         int index = word[0] - 'a';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         // absent
//         else
//         {
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }

//         // recursion
//         insertUtil(child, word.substr(1));
//     }

//     void insertWord(string word)
//     {
//         insertUtil(root, word);
//     }
//     // This function will print the suggestions acc. to the element we found
//     void printSuggestions(TrieNode *curr, vector<string> &temp, string prefix)
//     {
//         // If curr->isTerminal means the element we have is the last element then push prefix in temp and this is the ans
//         if (curr->isTerminal)
//         {
//             temp.push_back(prefix);
//         }
//         // else run a loop from a to the z letter to check is there any element == curr->children
//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             // This is for checking current element at which we are present have any children if yes then store it in the prefix and move ahead
//             TrieNode *next = curr->children[ch - 'a'];
//             // If yes means not NULL
//             if (next != NULL)
//             {
//                 // push ch in prefix
//                 prefix.push_back(ch);
//                 // Recursive call for it's child suggestions
//                 printSuggestions(next, temp, prefix);
//                 // Now pop back it
//                 prefix.pop_back();
//             }
//         }
//     }
//     vector<vector<string>> getSuggestions(string &str)
//     {
//         // prev will start from root node
//         TrieNode *prev = root;
//         // output will have output
//         vector<vector<string>> output;
//         // prefix will be initially empty
//         string prefix = "";
//         // Run a loop from start to the end of the string
//         for (int i = 0; i < str.length(); i++)
//         {
//             // lastch will have all cahracter of string
//             char lastch = str[i];
//             // Push lastcharacter in prefix
//             prefix.push_back(lastch);
//             // check for last character
//             TrieNode *curr = prev->children[lastch - 'a'];

//             // If element not found
//             if (curr == NULL)
//             {
//                 break;
//             }
//             // If element found
//             // Create a temp
//             vector<string> temp;
//             // Recursive call for printing the suggestions acc. to the element we found
//             printSuggestions(curr, temp, prefix);
//             // Push temp in the output which is the ans
//             output.push_back(temp);
//             // clear temp because no use of it now
//             temp.clear();
//             // point prev to curr and curr to the next node
//             prev = curr;
//         }
//         // return output
//         return output;
//     }
// };
// vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr)
// {
//     // This will create a new trie node during insertion
//     Trie *t = new Trie();
//     // Run a loop from start to the end
//     for (int i = 0; i < contactList.size(); i++)
//     {
//         // Insert word in the trie node which is in the contact list at the ith index
//         t->insertWord(contactList[i]);
//     }
//     // Return the suggestions acc. to the element we found
//     return t->getSuggestions(queryStr);
// }

// Backtracking
// Rat in a maze (T.C -> O(4 ^ n^2) & S.C -> O(n* m))
// #include <bits/stdc++.h>
// using namespace std;
// // These are 2 vectors which is for left right up and down movement
// vector<int> vx = {1, 0, 0, -1};
// vector<int> vy = {0, -1, +1, 0};
// // These are 4 possible movements of rat
// string p = "DLRU";

// bool isSafe(vector<vector<int>> &arr, vector<vector<bool>> &visited, int x, int y, int n)
// {
//     // If x axis not outside the starting point and the destination plus the node is not visited and it is not 0, same for y axis
//     if ((x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1) &&
//         (visited[x][y] != 1) && (arr[x][y] == 1))
//     {
//         // Then yes it is safe mark it true
//         return true;
//     }
//     // else false
//     return false;
// }

// void solve(int x, int y, vector<vector<int>> &arr, vector<vector<bool>> &visited, vector<string> &ans, int n, string &path)
// {
//     // Base Case
//     // If Destination i.e final point is reached by the rat
//     if (x == n - 1 && y == n - 1)
//     {
//         // Then push path in ans
//         ans.push_back(path);
//         // Pop the top of the path
//         path.pop_back();
//         return;
//     }
//     // We have 4 movements D L R U
//     for (int i = 0; i < 4; i++)
//     {
//         // If down movement is safe
//         if (isSafe(arr, visited, x + vx[i], y + vy[i], n))
//         {
//             // Mark that box/node visited
//             visited[x][y] = 1;
//             // push that node in path
//             path.push_back(p[i]);
//             // Recursive call for the next nodes
//             solve(x + vx[i], y + vy[i], arr, visited, ans, n, path);
//         }
//     }
//     // Backtracking for finding all the possible ways to reach to the destination
//     // Mark visited nodes not visited by 0 as we are going back from that node
//     visited[x][y] = 0;
//     // pop it from the path
//     path.pop_back();
//     return;
// }

// vector<string> searchMaze(vector<vector<int>> &arr, int n)
// {
//     // ans will have the ans
//     vector<string> ans;
//     // string ans is empty which will have DLRU movement of rat
//     string path = "";
//     // Base Case
//     if (arr[0][0] == 0)
//     {
//         // Then return ans
//         return ans;
//     }
//     // Visited Array
//     vector<vector<bool>> visited(n, vector<bool>(n, 0));
//     // Function Call
//     solve(0, 0, arr, visited, ans, n, path);
//     // return ans
//     return ans;
// }

// N - Queen Problem (T.C -> (N!) & S.C -> (n * n))
// #include <bits/stdc++.h>
// using namespace std;
// void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
// {
//     // temp will have values in it of board
//     vector<int> temp;
//     // Run a loop from start to the end as it is matrix so 2d
//     for (int i = 0; i < n; i++)
//     {
//         // for loop from start to the end as it is matrix so 2d
//         for (int j = 0; j < n; j++)
//         {
//             // Push board values in temp
//             temp.push_back(board[i][j]);
//         }
//     }
//     // Push temp in ans and return
//     ans.push_back(temp);
// }
// // It is for queen should not attack each other
// bool isSafe(int row, int col, vector<vector<int>> &board, int n)
// {
//     // x is row
//     int x = row;
//     // y is column
//     int y = col;
//     // check for same row that queen is present or not
//     // Run a loop until col >= 0
//     while (y >= 0)
//     {
//         // if board x and y gets any queen == 1
//         if (board[x][y] == 1)
//         {
//             // Then return false
//             return false;
//         }
//         // y--
//         y--;
//     }
//     // no need to check for col as per the code
//     // check for Diagonals only
//     // Lower diagonals
//     x = row;
//     y = col;
//     // Run a loop until x >= 0 and y>= 0
//     while (x >= 0 && y >= 0)
//     {
//         // If values find any queen diagonally
//         if (board[x][y] == 1)
//         {
//             // Then return false
//             return false;
//         }
//         x--;
//         y--;
//     }
//     // check for upper diagonal
//     x = row;
//     y = col;
//     while (x < n && y >= 0)
//     {
//         // If queen found in upper diagonal then return false
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x++;
//         y--;
//     }
//     return true;
// }

// void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
// {
//     // Base case
//     // if all cols are filled
//     if (col == n)
//     {
//         // Then we will call addSolution which will add the values of board into ans by converting them into a vector
//         addSolution(board, ans, n);
//         return;
//     }

//     // solve 1 case
//     for (int row = 0; row < n; row++)
//     {
//         // If isSafe to move to that node
//         if (isSafe(row, col, board, n))
//         {
//             // if safe
//             // marks visitsed as true
//             board[row][col] = 1;
//             // recursion call for other nodes
//             solve(col + 1, ans, board, n);
//             // Backtrack for finding all possible values / nodes and mark those 0 from where we are returning
//             board[row][col] = 0;
//         }
//     }
// }
// vector<vector<int>> nQueens(int n)
// {
//     // Chess board (matrix) is created
//     vector<vector<int>> board(n, vector<int>(n, 0));
//     // ans will have ans
//     vector<vector<int>> ans;
//     // Function call
//     solve(0, ans, board, n);
//     // return ans
//     return ans;
// }

// Sudoke Solver Problem (T.C -> O(9 ^ m) where m -> no. of empty cells & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// bool issafe(int row, int col, vector<vector<int>> &board, int value, int n)
// {
//     // Traverse for every cell / node
//     for (int i = 0; i < n; i++)
//     {
//         // For row check
//         // if same value alredy exist in the in row
//         if (board[row][i] == value)
//         {
//             // Then return false
//             return false;
//         }

//         // For col check
//         // if same value alredy exist in the in col
//         if (board[i][col] == value)
//         {
//             // Then return false
//             return false;
//         }
//         // Checking for (3 X 3) matrix
//         // If same value in matrix
//         if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == value)
//         {
//             // Then return false
//             return false;
//         }
//     }
//     return true;
// }
// bool solve(vector<vector<int>> &board)
// {
//     // n has the size of the board we can write board.size() also
//     int n = board[0].size();
//     // Traversing row and col
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             // check wheather the cell / node is empty
//             if (board[row][col] == 0)
//             {
//                 // if empty then insert numbers / values and the condition is it should be b/w (1 & 9) only
//                 for (int val = 1; val <= 9; val++)
//                 {
//                     // check wheather the insertion is safe in the cell
//                     // call the isSafe()
//                     if (issafe(row, col, board, val, n))
//                     {
//                         // Then put the value at that position
//                         board[row][col] = val;

//                         // Recursive call for next row and col solutions
//                         bool nextpossibleans = solve(board);
//                         // If possible for next Solutions
//                         if (nextpossibleans)
//                         {
//                             // return true
//                             return true;
//                         }
//                         else
//                         {
//                             // else we need to backtrack the cell / node to previous form in which it was initially
//                             board[row][col] = 0;
//                         }
//                     }
//                 }
//                 // If outside the loop we did'nt get the ans. then only we reached here so return false
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// void solveSudoku(vector<vector<int>> &sudoku)
// {
//     // solve function will solve the question
//     solve(sudoku);
// }

// Implementation of Graph
// #include <bits/stdc++.h>
// using namespace std;
// class graph
// {
// public:
//     // unordered map is created for adjacent
//     unordered_map<int, list<int>> adjacent;
//     // addEdge with u = first edge & v = last edge
//     void addEdge(int u, int v, bool direction)
//     {
//         // Direction = 0 means unidrected
//         // Direction = 1 means directed

//         // create an edge from u to v
//         adjacent[u].push_back(v);
//         // That means it is undirected and we can make u -> v and v -> u
//         if (direction == 0)
//         {
//             adjacent[v].push_back(u);
//         }
//     }
//     // Print function for printing the graph
//     void printAdjList(){
//         // Run a loop from i to adjacent
//         for (auto i : adjacent)
//         {
//             cout<<i.first<<"->";
//             for (auto j : i.second)
//             {
//                 cout<<j<<",";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number of edges : "<<endl;
//     cin>>n;

//     int m;
//     cout<<"Enter the number of edges : "<<endl;
//     cin>>m;

//     // Created a graph
//     graph g;
//     // Run a loop from 0 to m (no. of edges)
//     for (int i = 0; i < m; i++)
//     {
//         int u;
//         int v;
//         cin>>u>>v;
//         // Add this edge in graph which is undirected graph
//         g.addEdge(u, v, 0);
//     }
//     // Print the graph
//     g.printAdjList();
//     return 0;
// }

// Creating / Implementing and Printing Graph using vectors (T.C -> O(N + E) & S.C -> O(N + E) where E -> time taken to visit nodes and E for travelling through adj nodes)
// #include <bits/stdc++.h>
// using namespace std;
// // Vector 2-D is created which will make the code more easier
// // n = no. of nodes
// // m = no. of edges
// vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
// {
//     // ans will also have equal of nodes like n have
//     // Answer Array will store all adjacent nodes corresponding on indexes
//     vector<int> ans[n];
//     for (int i = 0; i < m; i++)
//     {
//         // u is starting edge at ith row 0 column
//         int u = edges[i][0];
//         // v is ending edge at ith row 1st column
//         int v = edges[i][1];
//         // In ans starting edge u push v means it is an undirected graph
//         ans[u].push_back(v);
//         // In ans ending edge v push u means it is an undirected graph
//         ans[v].push_back(u);
//     }
//     // adjacency of size n
//     vector<vector<int>> adj(n);
//     // From 0 to the number of nodes
//     for (int i = 0; i < n; i++)
//     {
//         // push index at adj[index]
//         adj[i].push_back(i);

//         // Find neighbour / adjacency of that node
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             // This will push back the neighbour or adjacent node
//             adj[i].push_back(ans[i][j]);
//         }
//     }
//     // return adj
//     return adj;
// }

// BFS Traversal (T.C -> Linear)
// #include <bits/stdc++.h>
// using namespace std;
// // Prepare AdjList
// void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges)
// {
//     // Run the loop from starting to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         // u will have edges.first
//         int u = edges[i].first;
//         // v will have edges.second
//         int v = edges[i].second;
//         // insert v at u
//         adjList[u].insert(v);
//         // insert u at v
//         adjList[v].insert(u);
//     }
// }
// void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
// {
//     // queue will have all the values from where we will take out firstNode
//     queue<int> q;
//     // push node in queue
//     q.push(node);
//     // If node is in queue then set it at true
//     visited[node] = 1;
//     // Until queue becomes empty
//     while (!q.empty())
//     {
//         // frontNode will be taken from queue and then all function will be performed on it
//         int frontNode = q.front();
//         q.pop();

//         // STORE FRONTNODE INTO ANSWER
//         ans.push_back(frontNode);

//         // Now, we will traverse all neighbour of front node
//         for (auto i : adjList[frontNode])
//         {
//             // If not visited then store them in queue
//             if (!visited[i])
//             {
//                 q.push(i);
//                 // Mark visited true as it is in queue
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     // We will create an unordered map which is adjList
//     unordered_map<int, set<int>> adjList;
//     // It will have ans
//     vector<int> ans;
//     // It will have those elements which are visited
//     unordered_map<int, bool> visited;

//     // Call this function to create adjList
//     prepareAdjList(adjList, edges);
//     // Traverse all components of graph
//     for (int i = 0; i < vertex; i++)
//     {
//         // If node is not visited
//         if (!visited[i])
//         {
//             // Then call bfs()
//             bfs(adjList, visited, ans, i);
//         }
//     }
//     // return ans
//     return ans;
// }

// DFS Traversal (T.C -> Linear)
// #include <bits/stdc++.h>
// using namespace std;
// void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
// {
//     // Whatever node we have store in component
//     component.push_back(node);
//     // Marks visited that node true whichever come
//     visited[node] = true;
//     // recursive call for each connected or neighbour elements
//     for (auto i : adj[node])
//     {
//         // If that connected node is not visited
//         if (!visited[i])
//         {
//             // Then call dfs() function
//             dfs(i, visited, adj, component);
//         }
//     }
// }
// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     // Prepare AdjList
//     unordered_map<int, list<int>> adj;
//     // Run a loop from 0 to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         // Make an edge b/w u and v
//         adj[u].push_back(v);
//         // Make an edge b/w v and u
//         adj[v].push_back(u);
//     }
//     // This will have ans
//     vector<vector<int>> ans;
//     // This will have visited
//     unordered_map<int, bool> visited;
//     // Run a loop from 0 to the end
//     for (int i = 0; i < V; i++)
//     {
//         // If node not visited
//         if (!visited[i])
//         {
//             // Create a component
//             vector<int> component;
//             // Then call the dfs()
//             dfs(i, visited, adj, component);
//             // Store component in ans
//             ans.push_back(component);
//         }
//     }
//     // return ans
//     return ans;
// }

// Dijkstra's Algorithm (T.C -> O(Edges log Vertex) & S.C -> O(N + E))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
// {
//     // Create adjList
//     unordered_map<int, list<pair<int, int>>> adj;
//     // run a loop from start to the edges
//     for (int i = 0; i < edges; i++)
//     {
//         // u will first node
//         int u = vec[i][0];
//         // v will second node
//         int v = vec[i][1];
//         // w will have weight of node
//         int w = vec[i][2];
//         // It is undirected graph so we have to make edge from u->v and v->u
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
//     // Create a dist vector of size equal to vertices
//     vector<int> dist(vertices);
//     // run a loop from start to vertices
//     for (int i = 0; i < vertices; i++)
//     {
//         // set dist. of every node at infinity intially
//         dist[i] = INT_MAX;
//     }
//     // Creation of set on basis of (DISTANCE , NODE)
//     set<pair<int, int>> st;

//     // Initialize set and distance with src node
//     // so initially source dist is 0
//     dist[source] = 0;
//     // create a pair for 0th source
//     st.insert(make_pair(0, source));
//     // Until set becomes empty run the loop
//     while (!st.empty())
//     {
//         // Fetch top element record
//         auto top = *(st.begin());
//         // nodeDistance will be first value of st.begin()
//         int nodeDistance = top.first;
//         // topNode will be the second value of st.second()
//         int topNode = top.second;

//         // Remove top record
//         st.erase(st.begin());

//         // Traverse on neighbour
//         // run a loop from neighbour to adj[topNode]
//         for (auto neighbour : adj[topNode])
//         {
//             // if nodeDist and neighbour.second < dist[neighbour.first] then find the record pair
//             if (nodeDistance + neighbour.second < dist[neighbour.first])
//             {
//                 // This is the record which we are finding
//                 auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));

//                 // If record found, then erase it
//                 // Means we got the record
//                 if (record != st.end())
//                 {
//                     // erase the record from set
//                     st.erase(record);
//                 }
//                 // Update distance using this formulae
//                 dist[neighbour.first] = nodeDistance + neighbour.second;
//                 // Push record in set in the format of pair <distance of node, node>
//                 st.insert(make_pair(dist[neighbour.first], neighbour.first));
//             }
//         }
//     }
//     // return dist as it is the answer
//     return dist;
// }

// Minimum Spanning Tree Prim's Algorithm (T.C -> O(n^2))
// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // Create adjList by creating a unordered map
//     unordered_map<int, list<pair<int, int>>> adj;
//     // run a loop from start to the end
//     for (int i = 0; i < g.size(); i++)
//     {
//         // u will have first node
//         int u = g[i].first.first;
//         // v will have second node
//         int v = g[i].first.second;
//         // w will have weight of
//         int w = g[i].second;
//         // As it is unpaired graph so we need edges from both side
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
//     // key vector will have n + 1 size
//     vector<int> key(n + 1);
//     // mst vector will have n + 1 size
//     vector<bool> mst(n + 1);
//     // parent will also have n + 1 size
//     vector<int> parent(n + 1);
//     // In starting key parent mst will have these below values
//     for (int i = 0; i <= n; i++)
//     {
//         key[i] = INT_MAX;
//         mst[i] = false;
//         parent[i] = -1;
//     }

//     // Start from here the alogorithm process
//     // mark key 0 for first
//     key[1] = 0;
//     // parent -1
//     parent[1] = -1;
//     // run a loop from 1st index to the end
//     for (int i = 1; i < n; i++)
//     {
//         // mini will have max value
//         int mini = INT_MAX;
//         // u will be for node
//         int u;

//         // find the min. node
//         // run from 1 to the end
//         for (int v = 1; v <= n; v++)
//         {
//             // if mst[v] is false && key of v < mini
//             if (mst[v] == false && key[v] < mini)
//             {
//                 // update u with v
//                 u = v;
//                 // mini will be equal to key of v
//                 mini = key[v];
//             }
//         }
//         // Mark min node a strue
//         mst[u] = true;

//         // Check adj Node
//         // run a loop from it to adjacent node
//         for (auto it : adj[u])
//         {
//             // v will have adj node by it.first
//             int v = it.first;
//             // weight will be have weight of adjNode by it.second
//             int w = it.second;
//             // if mst of v is false and w < key of v
//             if (mst[v] == false && w < key[v])
//             {
//                 // Then update parent of v is equal to u
//                 parent[v] = u;
//                 // key of v will be equal to weight
//                 key[v] = w;
//             }
//         }
//     }
//     // Create a vector result
//     vector<pair<pair<int, int>, int>> result;
//     // run a loop from 2 to the end, run from 2 because 1's parent = -1
//     for (int i = 2; i <= n; i++)
//     {
//         // push the pair of parent of i to the i and key of i
//         result.push_back({{parent[i], i}, key[i]});
//     }
//     // return result as it contains the result
//     return result;
// }

// Cycle Detection in undirected graph using BFS (T.C -> linear)
// #include <bits/stdc++.h>
// using namespace std;
// bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
// {
//     // parent map will have nodes which are parent
//     unordered_map<int, int> parent;
//     // If parent of any node is -1 then it is not parent
//     parent[src] = -1;
//     // visited of src is 1 means true if node is visited
//     visited[src] = 1;
//     // queue will store each and every element which we will visit
//     queue<int> q;
//     // push src in queue
//     q.push(src);
//     // Until queue becomes empty run the loop for each element
//     while (!q.empty())
//     {
//         // pop front element from queue one by one until the while loop ends
//         int front = q.front();
//         q.pop();
//         // Run a for loop to get all the neighbour of front node of queue
//         for (auto neighbour : adj[front])
//         {
//             // if visited of neighbour is True && it's not a parent
//             if (visited[neighbour] == true && neighbour != parent[front])
//             {
//                 // Then return true that it is a cycle
//                 return true;
//             }
//             // else if it is not visited neighbour but a parent node
//             else if (!visited[neighbour])
//             {
//                 // Then just push it in queue
//                 q.push(neighbour);
//                 // Set visited true
//                 visited[neighbour] = 1;
//                 // Parent of that neighbour will be front element of queue
//                 parent[neighbour] = front;
//             }
//         }
//     }
//     // else false
//     return false;
// }

// string cycleDetection(vector<vector<int>> &edges, int n, int m)
// {
//     // Create adjacency list
//     unordered_map<int, list<int>> adj;
//     // Run a for loop from start to the end
//     for (int i = 0; i < m; i++)
//     {
//         // u for first vertex
//         int u = edges[i][0];
//         // v for second vertex
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // To handle disconnected component
//     // Visited will have visited nodes
//     unordered_map<int, bool> visited;
//     // Run a loop from start to the end
//     for (int i = 0; i < n; i++)
//     {
//         // If not visited node
//         if (!visited[i])
//         {
//             // ans will call isCyclicBFS function to make it cyclic
//             bool ans = isCyclicBFS(i, visited, adj);
//             // If ans == 1 then return it is cyclic
//             if (ans == 1)
//             {
//                 return "Yes";
//             }
//         }
//     }
//     // else return No
//     return "No";
// }

// Cycle Detection in Undirected graph using DFS (T.C -> Linear)
// #include <bits/stdc++.h>
// using namespace std;
// bool isCyclic(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
// {
//     // visited node will be true
//     visited[node] = true;
//     // Run a loop from start to the neighbour node and check is that neighbour node visited
//     for (auto neighbour : adj[node])
//     {
//         // If not visited neighbour
//         if (!visited[neighbour])
//         {
//             // Call the isCyclic function for next nodes
//             bool ans = isCyclic(neighbour, node, visited, adj);
//             // If we got the cyclic
//             if (ans)
//             {
//                 // return ans
//                 return true;
//             }
//         }
//         // else if neighbour != parent then return true because it is cyclic
//         else if (neighbour != parent)
//         {
//             return true;
//         }
//     }
//     // else return false
//     return false;
// }

// string cycleDetection(vector<vector<int>> &edges, int n, int m)
// {
//     // Creating an adjacency list
//     unordered_map<int, list<int>> adj;
//     // run a loop from start to m
//     for (int i = 0; i < m; i++)
//     {
//         // u will have first vertex
//         int u = edges[i][0];
//         // v will have second vertex
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     // visited will have visited nodes
//     unordered_map<int, bool> visited;
//     // run a loop from start to the end
//     for (int i = 0; i < n; i++)
//     {
//         // If not visited that node where we are currently present
//         if (!visited[i])
//         {
//             // call the dfsgraph() to make it visited
//             bool ans = isCyclic(i, -1, visited, adj);
//             // If ans == 1 then return yes it is cyclic
//             if (ans == 1)
//             {
//                 return "Yes";
//             }
//         }
//     }
//     // else return No
//     return "No";
// }

// Cycle Detection in Directed Graphs using DFS ((T.C -> Node + Edge) & S.C -> O(Linear))
// #include <bits/stdc++.h>
// using namespace std;
// bool dfsgraph(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited)
// {
//     // visited node will be true
//     visited[node] = true;
//     // dfsvisited node will also be true
//     dfsvisited[node] = true;
//     // run a loop from start to the adjacent node / neighbour node
//     for (auto neighbour : adj[node])
//     {
//         // If not visited node
//         if (!visited[neighbour])
//         {
//             // Then call dfsgraph() for next nodes
//             bool cylcic = dfsgraph(neighbour, adj, visited, dfsvisited);
//             if (cylcic)
//             {
//                 // return true it is cyclic
//                 return true;
//             }
//         }
//         // else if dfsvisited is true then also return ture
//         else if (dfsvisited[neighbour])
//         {
//             return true;
//         }
//     }
//     // else dfsvisited false then return false
//     dfsvisited[node] = false;
//     return false;
// }
// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
// {
//     // Create a adjList
//     unordered_map<int, list<int>> adj;
//     // run a loop from start to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         // u will have first node
//         int u = edges[i].first;
//         // v will second node
//         int v = edges[i].second;
//         // so, it is directed graph therefore only edge will be from u to v
//         adj[u].push_back(v);
//     }
//     // visited will have all visited nodes
//     unordered_map<int, bool> visited;
//     // dfsvisited will have all dfs visited nodes
//     unordered_map<int, bool> dfsvisited;
//     // call dfs for all components
//     for (int i = 1; i <= n; i++)
//     {
//         // If not visited
//         if (!visited[i])
//         {
//             // call the dfsgraph() to make it visited
//             bool ans = dfsgraph(i, adj, visited, dfsvisited);
//             if (ans)
//             {
//                 // return true
//                 return true;
//             }
//         }
//     }
//     // else return false
//     return false;
// }

// Minimum spanning tree using Kruskal's Algorithm (T.C -> O(m log m) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// bool component(vector<int> &a, vector<int> &b)
// {
//     // return a[2] < b[2] which will arrange in ascending order
//     return a[2] < b[2];
// }

// void makeSet(vector<int> &parent, vector<int> &rank, int n)
// {
//     // run a loop from start to the end
//     for (int i = 0; i < n; i++)
//     {
//         // In starting all nodes parent is equal to themselves
//         parent[i] = i;
//         // rank initially = 0
//         rank[i] = 0;
//     }
// }

// int findParent(vector<int> &parent, int node)
// {
//     // If parent[node] == node that means we reach to the head node which is parent
//     if (parent[node] == node)
//     {
//         // return node as it is the parent
//         return node;
//     }
//     // return recursive call for going upwards until parent[node] = node means until we are our own parent till then run the recursive call plus we are using path compression also for reducing time
//     return parent[node] = findParent(parent, parent[node]);
// }
// void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
// {
//     // Let's find u node parent
//     u = findParent(parent, u);
//     // find v node parent
//     v = findParent(parent, v);
//     // If rank of u node < rank of node v
//     if (rank[u] < rank[v])
//     {
//         // Then set parent[u] = v
//         parent[u] = v;
//     }
//     // else if rank of v > rank of u then set parent of v = u
//     else if (rank[v] < rank[u])
//     {
//         parent[v] = u;
//     }
//     // else both rank is equal, we can set parent of v = u or vice versa but the right one will increment
//     else
//     {
//         parent[v] = u;
//         rank[u]++;
//     }
// }
// // Using Kruskal's Algorithm
// int minimumSpanningTree(vector<vector<int>> &edges, int n)
// {
//     // sort the edges vector in ascending order
//     sort(edges.begin(), edges.end(), component);
//     // We want a parent array of size n
//     vector<int> parent(n);
//     // We want a rank array of size n
//     vector<int> rank(n);
//     // This will make set of parent and rank
//     makeSet(parent, rank, n);
//     // Spanning tree which we get from previous function will be 0
//     int minWeight = 0;
//     // run a loop from start to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         // find parent of the first node
//         int u = findParent(parent, edges[i][0]);
//         // find parent for second node
//         int v = findParent(parent, edges[i][1]);
//         // wt will have weight of merged nodes
//         int wt = edges[i][2];
//         // If both nodes are different
//         if (u != v)
//         {
//             // add the weight in minWeight
//             minWeight += wt;
//             // Then do union of u, v, parent and rank
//             unionSet(u, v, parent, rank);
//         }
//     }
//     // return minWeight as it is the answer
//     return minWeight;
// }

// Bellman Ford Algorithm (T.C -> O(n * m))
// #include <bits/stdc++.h>
// using namespace std;
// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
// {
//     // create a vector from n + 1 of size 1000000000
//     vector<int> dist(n + 1, 1e9);
//     // We will start from src, so dist. from src to src is 0
//     dist[src] = 0;

//     // Update for n - 1 times
//     for (int i = 0; i <= n; i++)
//     {
//         // Traverse for all edges
//         for (int j = 0; j < m; j++)
//         {
//             // u will have first edge
//             int u = edges[j][0];
//             // v will have second edge
//             int v = edges[j][1];
//             // wt will have weight of edge
//             int wt = edges[j][2];
//             // if dist[u] != max. number && dist[u] + wt < dist[v]
//             if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
//             {
//                 // Then dist[v] = dist[u] + wt
//                 dist[v] = dist[u] + wt;
//             }
//         }
//     }
//     // return dist[dest] distance to reach destination
//     // return dist[dest];
//     // Check for negative cycle
//     bool flag = 0;
//     for (int j = 0; j < m; j++)
//     {
//         int u = edges[j][0];
//         int v = edges[j][1];
//         int wt = edges[j][2];
//         if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
//         {
//             flag = 1;
//         }
//     }
//     // If outside the loop still flag is 0 then return dist[destination]
//     if (flag == 0)
//     {
//         // return dist[dest] distance to reach destination
//         return dist[dest];
//     }
//     else
//     {
//         // else return -1
//         return -1;
//     }
// }

// Cycle Detection in Directed Graph (T.C -> O(N + E) & S.C -> O(Linear))
// #include <bits/stdc++.h>
// using namespace std;
// // Using Kahn's algorithm
// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
// {
//     // Create adj List
//     unordered_map<int, list<int>> adj;
//     // run a loop from start to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         // u will have first vertex (.first because it is pair)
//         int u = edges[i].first - 1;
//         // v will have second vertex (.second because it is pair)
//         int v = edges[i].second - 1;
//         adj[u].push_back(v);
//     }

//     // find all the indegress
//     vector<int> indegree(n);
//     // run a foreach loop from i to adj
//     for (auto i : adj)
//     {
//         // run a loop from j to i.second
//         for (auto j : i.second)
//         {
//             // increment indegree
//             indegree[j]++;
//         }
//     }

//     // Push 0 indegree in queue
//     queue<int> q;
//     // run a loop from start to the end
//     for (int i = 0; i < n; i++)
//     {
//         // if indegree == 0
//         if (indegree[i] == 0)
//         {
//             // Then push it in queue
//             q.push(i);
//         }
//     }

//     // Do bfs
//     int cnt = 0;
//     // run the loop until queue is empty
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();

//         // inc count
//         cnt++;

//         // neighbour indegree update
//         for (auto x : adj[front])
//         {
//             // decrement indegree
//             indegree[x]--;
//             // if indegree == 0
//             if (indegree[x] == 0)
//             {
//                 q.push(x);
//             }
//         }
//     }
//     // if it is valid topological sort then count will be equal to the number of node
//     if (cnt == n)
//     {
//         // It is valid topological sort as it is valid asyclic graph so, it does'nt have cycle
//         return false;
//     }
//     else
//     {
//         // else return true
//         return true;
//     }
// }

// Shortest Path in Undirected Graph (T.C -> O(N + E) & S.C -> O(N + E))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> shortestPath(vector<pair<int, int>> &edges, int n, int m, int s, int t)
// {

//     // Create adjList
//     unordered_map<int, list<int>> adj;
//     // run a loop from start to the end
//     for (int i = 0; i < edges.size(); i++)
//     {
//         // u will have first vertex
//         int u = edges[i].first;
//         // v will have second vertex
//         int v = edges[i].second;
//         // It is undirected graph so it will have edges from both side
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // Do BFS
//     // visited will have visited nodes
//     unordered_map<int, bool> visited;
//     // Parent will have parent nodes
//     unordered_map<int, int> parent;
//     // queue will have all nodes
//     queue<int> q;
//     q.push(s);
//     // parent for the starting node will have -1
//     parent[s] = -1;
//     // visited nodes will be true
//     visited[s] = true;
//     // Until queue becomes empty run the loop
//     while (!q.empty())
//     {
//         // front will have front node
//         int front = q.front();
//         // pop the front node
//         q.pop();
//         // run a loop from start to the adjacent / neighbour node
//         for (auto i : adj[front])
//         {
//             // If neighbour node is not visited
//             if (!visited[i])
//             {
//                 // Then mark it visited
//                 visited[i] = true;
//                 // Parent of that neighbour node will front node
//                 parent[i] = front;
//                 // push that neighbour node is queue
//                 q.push(i);
//             }
//         }
//     }

//     // Prepare shortest path
//     // ans will have ans
//     vector<int> ans;
//     // currentNode is the destination where we have to reach which is denoted by (t)
//     int currentNode = t;
//     // Push that destination node in queue
//     ans.push_back(t);
//     // Until currNode becomes equal to source node(s) because we are backtracking this time to get the shortest path and that's why we created parent data structure
//     while (currentNode != s)
//     {
//         // Then currNode will be equal to parent of that currNode
//         currentNode = parent[currentNode];
//         // Store that currNode in ans
//         ans.push_back(currentNode);
//     }
//     // Now the ans was in opposite order because we were backtracking so we will reverse it to put it in proper order
//     reverse(ans.begin(), ans.end());
//     // return ans
//     return ans;
// }

// Topological Sort Using DFS (T.C -> O(N + E) & S.C -> 0(Linear))
// #include <bits/stdc++.h>
// using namespace std;
// void topoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
// {
//     // visited node will be true
//     visited[node] = 1;
//     // run a loop from neighbour to adj[node]
//     for (auto neighbour : adj[node])
//     {
//         // If not visited neighbour node
//         if (!visited[neighbour])
//         {
//             // Then recall the function for next nodes
//             topoSort(neighbour, visited, s, adj);
//         }
//     }
//     // push node in stack because whenever we will comeback from any node then we push that element in stack
//     s.push(node);
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
// {
//     // Create adjList
//     unordered_map<int, list<int>> adj;
//     // run a loop from starting to the end
//     for (int i = 0; i < e; i++)
//     {
//         // u will have first node
//         int u = edges[i][0];
//         // v will have second node
//         int v = edges[i][1];
//         // We only need edge from u to v as it is directed graph
//         adj[u].push_back(v);
//     }

//     // call dfs topological sort for all components
//     // visited will have all visited nodes and it's size is v
//     vector<bool> visited(v);
//     // create a stack s
//     stack<int> s;
//     // run a loop from start to the v
//     for (int i = 0; i < v; i++)
//     {
//         // If not visited node then call the topSort function
//         if (!visited[i])
//         {
//             // For sorting
//             topoSort(i, visited, s, adj);
//         }
//     }
//     // ans will have ans
//     vector<int> ans;
//     // Until stack becomes empty run the loop
//     while (!s.empty())
//     {
//         // push top element of stack one by one in ans
//         ans.push_back(s.top());
//         // pop each element from stack
//         s.pop();
//     }
//     // return ans
//     return ans;
// }

// Topological Sort Using Kahn's Algorithm using BFS (T.C -> O(Node + Edges) & S.C -> O(Linear))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
// {
//     // Create adjList
//     unordered_map<int, list<int>> adj;
//     // run a loop from start to the end
//     for (int i = 0; i < e; i++)
//     {
//         // u will have first vertex
//         int u = edges[i][0];
//         // v will have second vertex
//         int v = edges[i][1];
//         // We only need edge from u to v as it is directed graph
//         adj[u].push_back(v);
//     }

//     // Find all indegree, it's size is v
//     vector<int> indegree(v);
//     // run a loop from i to adj
//     for (auto i : adj)
//     {
//         // run a loop from j to i.second
//         for (auto j : i.second)
//         {
//             // Increment indegree value
//             indegree[j]++;
//         }
//     }

//     // Zero indegeree will push
//     // Create a queue where we will push 0 indegree nodes
//     queue<int> q;
//     // run a loop from start to the end
//     for (int i = 0; i < v; i++)
//     {
//         // If indegree == 0 then push that node in queue
//         if (indegree[i] == 0)
//         {
//             q.push(i);
//         }
//     }

//     // Do BFS
//     // ans will have ans
//     vector<int> ans;
//     // run a loop until queue becomes empty
//     while (!q.empty())
//     {
//         // front will have front element of queue
//         int front = q.front();
//         // pop that front element
//         q.pop();

//         // Store front element in ans
//         ans.push_back(front);

//         // Update neighbour indegree node
//         // run a loop from neighbour to adj[front] node
//         for (auto neighbour : adj[front])
//         {
//             // indegree of neighbour node will decrement
//             indegree[neighbour]--;
//             // If indegree[neighbour] == 0
//             if (indegree[neighbour] == 0)
//             {
//                 // push neighbour node in queue
//                 q.push(neighbour);
//             }
//         }
//     }
//     // return ans
//     return ans;
// }

// Bridge (T.C -> O(n + e) & S.C -> O(linear))
// #include <bits/stdc++.h>
// using namespace std;
// void dfs(int node, int parent, int timer, unordered_map<int, bool> &vis, vector<int> &low, vector<int> &dis, unordered_map<int, list<int>> &adj,
//          vector<vector<int>> &result)
// {
//     // visited node will be true or 1
//     vis[node] = true;
//     // dicovery of node = lowest time taken to visit any node (both are equal to timer) = timer++;
//     dis[node] = low[node] = timer++;
//     // for loop from neighbour to adjacent node
//     for (auto nbr : adj[node])
//     {
//         // if neighbour node == parent then ignore that case
//         if (nbr == parent)
//         {
//             continue;
//         }
//         // If not visited neighbour
//         if (!vis[nbr])
//         {
//             // Call dfs function
//             dfs(nbr, node, timer, vis, low, dis, adj, result);
//             // lowest time of node will be updated after dfs call
//             low[node] = min(low[node], low[nbr]);
//             // Check that edge is bridge or not
//             // if low of neigbour ? discover of node
//             if (low[nbr] > dis[node])
//             {
//                 // ans will have ans
//                 vector<int> ans;
//                 // push that node in the ans
//                 ans.push_back(node);
//                 // push neigbour in ans
//                 ans.push_back(nbr);
//                 // result will have ans
//                 result.push_back(ans);
//             }
//         }
//         else
//         {
//             // if it is visited plus it is not parent then it is back edge
//             // In backedge then find lowest of node = minimum b/w lowest of node and discovery of neighbour
//             low[node] = min(low[node], dis[nbr]);
//         }
//     }
// }
// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e)
// {
//     // visited map for visited nodes
//     unordered_map<int, bool> vis;
//     // map for adjList
//     unordered_map<int, list<int>> adj;
//     // Run a loop for creating adjList
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     // lowest time to reach any node
//     vector<int> low(v);
//     // discovery will have the time taken to reach any node
//     vector<int> dis(v);
//     // parent will be -1 initially
//     int parent = -1;
//     // timer will be 0 initially
//     int timer = 0;
//     // DFS
//     for (int i = 0; i < v; i++)
//     {
//         // lowest will be -1 initially for every node
//         low[i] = -1;
//         // discovery will be -1 initially for every node
//         dis[i] = -1;
//     }
//     // result will have ans
//     vector<vector<int>> result;
//     // for loop from start to the end
//     for (int i = 0; i < v; i++)
//     {
//         // If node is not visited
//         if (!vis[i])
//         {
//             // call dfs function to visit that node and check all the condition
//             dfs(i, parent, timer, vis, low, dis, adj, result);
//         }
//     }
//     // return result
//     return result;
// }

// Articulation Point (T.C -> O(N + E) & S.C -> O(N))
// #include <bits/stdc++.h>
// using namespace std;
// // A function to add edges in the graph and create adjList
// void addEdge(vector<vector<int>> &adj, int u, int v)
// {
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// void APUtil(vector<vector<int>> &adj, vector<bool> &visited, vector<int> &disc, vector<int> &low, int &time, int u, int parent, vector<bool> &AP)
// {
//     // To count the children in the DFS Tree
//     int child = 0;
//     // visited nodes will mark True
//     visited[u] = true;

//     // Initialise the discovery time and the low value for u
//     disc[u] = ++time;
//     low[u] = time;
//     // for each loop from v to adjacent node of V
//     for (auto v : adj[u]) {
//         // If v is not visited yet, make it a child of u in the DFS tree and repeat for it
//         if (!visited[v])
//         {
//             child++;
//             // Recursive call for rest of nodes
//             APUtil(adj, visited, disc, low, time, v, u, AP);
//             // For Back Edge
//             // Check if the subtree rooted at v has a (back edge) to the ancestors of u
//             // low of node = min b/w low of node and low of neighbour
//             low[u] = min(low[u], low[v]);

//             // If u is not the root and the low value of one of its children is more than the discovery time value of u then it is Articulation point
//             if (low[v] >= disc[u] && parent != -1)
//                 AP[u] = true;
//         }
//         // Update low value of u for the parent function calls
//         // If neighbour is not parent then update low of current node otherwise just ignore
//         else if (v != parent)
//         {
//             low[u] = min(low[u], disc[v]);
//         }
//     }
//     // For root node that it can also be articulation point so we will check for it with this condition
//     // Case 1 : if u is the root of the DFS tree and has more than one child
//     if (parent == -1 && child > 1)
//     {
//         AP[u] = true;
//     }
// }
// void AP(vector<vector<int>> &adj, int V)
// {
//     vector<int> disc(V);

//     vector<int> low(V);

//     vector<bool> visited(V, false);

//     vector<bool> AP(V, false);
//     // time will be 0 initially
//     int time = 0;
//     // parent will be -1 for root node
//     int par = -1;
//     // Using the for loop so that the code works for disconnected the graph
//     for (int u = 0; u < V; ++u)
//     {
//         if (!visited[u])
//             APUtil(adj, visited, disc, low, time, u, par, AP);
//     }
//     // Printing the Articulation points
//     for (int i = 0; i < V; i++){
//         if (AP[i] == true)
//             cout << i << " ";
//     }
// }

// int main()
// {
//     cout << "Articulation points: ";
//     // Vertices
//     int V = 5;
//     // Edges
//     int E = 6;
//     // adjList of size V
//     vector<vector<int>> adj(V);
//     // Calling function with V and E
//     addEdge(adj, 1, 0);
//     addEdge(adj, 0, 4);
//     addEdge(adj, 1, 4);
//     addEdge(adj, 2, 3);
//     addEdge(adj, 2, 4);
//     addEdge(adj, 3, 4);
//     // Calling AP function
//     AP(adj, V);
//     return 0;
// }

// Kosaraju's Algorithm for Strongly Connected Components (T.C -> O(V+E))
// #include <bits/stdc++.h>
// using namespace std;
// // dfs function
// void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adjlist)
// {
//     // Visited node will marked true
//     visited[node] = true;
//     // for each loop from nbr to adjList node
//     for (auto nbr : adjlist[node])
//     {
//         // If nbr node is not visited
//         if (!visited[nbr])
//         {
//             // Then call dfs function
//             dfs(nbr, visited, s, adjlist);
//         }
//     }
//     // topological logic
//     // Push node in stack s after coming out of the loop
//     s.push(node);
// }

// void transdfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjlist)
// {
//     // visited node will be marked true
//     visited[node] = true;
//     // for each loop nbr belongs to adjList node
//     for (auto nbr : adjlist[node])
//     {
//         // if not visited nbr then
//         if (!visited[nbr])
//         {
//             // Then call transdfs function
//             transdfs(nbr, visited, adjlist);
//         }
//     }
// }
// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {
//     // adj list
//     unordered_map<int, list<int>> adjlist;
//     // This will create adjList
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adjlist[u].push_back(v);
//     }
//     // step 1: sort all node
//     // topological sort
//     stack<int> s;
//     // visited will have visited node
//     unordered_map<int, bool> visited;
//     // for loop for not visited nodes we will call dfs
//     for (int i = 0; i < v; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(i, visited, s, adjlist);
//         }
//     }
//     // step 2:
//     // create transpose : here we will switch the sides of edges
//     unordered_map<int, list<int>> transpose;
//     for (int i = 0; i < v; i++)
//     {
//         visited[i] = 0;
//         // for each loop nbr belongs to adjList of current node
//         for (auto nbr : adjlist[i])
//         {
//             // push back current node in transpose[nbr]
//             transpose[nbr].push_back(i);
//         }
//     }
//     // step 3:
//     // call dfs using above ordering (transpose ordering)
//     int count = 0;
//     // while stack becomes empty we have to run the loop
//     while (!s.empty())
//     {
//         // top will have top element of stack
//         int top = s.top();
//         // pop the top element one by one
//         s.pop();
//         // if not visited top then increment the count
//         if (!visited[top])
//         {
//             count++;
//             // call transdfs function
//             transdfs(top, visited, transpose);
//         }
//     }
//     // return count
//     return count;
// }

// Dynamic Programming
// Fibonacci (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n, vector<int> &dp)
// {
//     // BASE CASE
//     if (n <= 1)
//     {
//         return n;
//     }
//     // STEP-1-->
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     // STEP-2 -->
//     dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1);
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i] = -1;
//     }
//     cout << fib(n, dp) << endl;
//     return 0;
// }

// T.C -> O(n) & S.C -> O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 1;
//     int b = 0;
//     if (n == 0)
//     {
//         return b;
//     }
//     int fibonacci;
//     for (int i = 2; i <= n; i++)
//     {
//         fibonacci = a + b;
//         cout << fibonacci << endl;
//         a = b;
//         b = fibonacci;
//     }
//     return 0;
// }

// Count ways to reach Nth Stairs
// #include <bits/stdc++.h>
// using namespace std;
// long long mod = 1000000007;
// int helper(int n, vector<int> &dp)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     return dp[n] = (helper(n - 1, dp) + helper(n - 2, dp)) % mod;
// }
// int countDistinctWays(int n)
// {
//     vector<int> dp(n + 1, -1);
//     return helper(n, dp);
// }

// Minimum cost climbing stairs (T.C -> O(n) & S.C -> O(1))
// Bottom Up + Space Optimized
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         // we created variables and put cost[0] in stand 1 and for stand2 it has cost[1]
//         int stand1 = cost[0];
//         int stand2 = cost[1];
//         // run a loop for reamining steps / cases
//         for (int i = 2; i < cost.size(); i++)
//         {
//             // min b/w stand1 and stand2 and add cost also because we have to go to the next step also and next step requires cost
//             int stand = min(stand1, stand2) + cost[i];
//             // stand1 will become stand2
//             stand1 = stand2;
//             // stand2 will become stand
//             stand2 = stand;
//         }
//         // return min b.w stand1 and stand2
//         return min(stand1, stand2);
//     }
// };

// Recursion + Memoization (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(vector<int> &cost, int n)
//     {
//         // Base case
//         if (n == 0)
//         {
//             return cost[0];
//         }
//         if (n == 1)
//         {
//             return cost[1];
//         }
//         // Store in ans cost and min b/w previous 1 step and previous 2 step
//         int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
//         return ans;
//     }
//     int solve2(vector<int> &cost, int n, vector<int> &dp)
//     {
//         // Base case same as of solve1
//         if (n == 0)
//         {
//             return cost[0];
//         }
//         if (n == 1)
//         {
//             return cost[1];
//         }
//         if (dp[n] != -1)
//         {
//             return dp[n];
//         }
//         // store cost and min of n - 1 and n - 2 in dp[n]
//         dp[n] = cost[n] + min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));
//         return dp[n];
//     }
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         int ans = min(solve(cost, n - 1), solve(cost, n - 2));
//         return ans;
//     }
// };

// Tabulation method (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     int solve3(vector<int> &cost, int n)
//     {
//         // Creat dp of size n + 1
//         vector<int> dp(n + 1);
//         // dp of 0 = cost of 0
//         dp[0] = cost[0];
//         // dp of 1 = cost of 1
//         dp[1] = cost[1];
//         // run a loop for remaining case
//         for (int i = 2; i < n; i++)
//         {
//             // store in dp array the cost and min of dp[i - 1] and dp[i - 2]
//             dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
//         }
//         return min(dp[n - 1], dp[n - 2]);
//     }
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         return solve3(cost, n);
//     }
// };

// Minimum number of coins
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion (T.C -> O(exponential))
// int solveRec(vector<int> &num, int target)
// {
//     // Base case
//     if (target == 0)
//     {
//         return 0;
//     }
//     // If negative
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     // run a loop from start to the end for the multiple coins because it is possible there are multiple coins
//     for (int i = 0; i < num.size(); i++)
//     {
//         // ans will have recursive call
//         int ans = solveRec(num, target - num[i]);
//         // If ans != INT_MAX
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, 1 + ans);
//         }
//     }
//     return mini;
// }
// int minimumElements(vector<int> &num, int target){
// {
//     int ans = solveRec(num, target);
//     if (ans == INT_MAX)
//     {
//         return -1;
//     }
//     return ans;
// }
// // Memoization (T.C -> O(target * n) & S.C -> O(target))
// int solveMem(vector<int> &num, int target, vector<int> &dp)
// {
//     // Base case same as recursive one
//     if (target == 0)
//     {
//         return 0;
//     }
//     // If negative
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     // Check if dp[target] != -1 if we already have the ans then return that
//     if (dp[target] != -1)
//     {
//         return dp[target];
//     }
//     // run a loop from start to the end for the multiple coins because it is possible there are multiple coins
//     for (int i = 0; i < num.size(); i++)
//     {
//         // ans will have recursive call
//         int ans = solveMem(num, target - num[i]);
//         // If ans != INT_MAX
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, 1 + ans);
//         }
//     }
//     // We stored in dp and then returning the ans
//     dp[target] = mini;
//     return mini;
// }
// int minimumElements(vector<int> &num, int target){
// {
//     vector<int> dp(target + 1, -1);
//     int ans = solveMem(num, target, dp);
//     if (ans == INT_MAX)
//     {
//         return -1;
//     }
//     else
//     {
//        return ans;
//     }
// }
// // Tabulation (T.C -> O(target * n) & S.C -> O(target))
// int solveTab(vector<int> &num, int target)
// {
//     // dp array created of target + 1 size
//     vector<int> dp(target + 1, INT_MAX);
//     // Base case
//     dp[0] = 0;
//     // Run a loop from coin remaining
//     for (int i = 1; i <= target; i++)
//     {
//         // For every amount we have to use all coins
//         for (int j = 0; j < num.size(); j++)
//         {
//             if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
//             {
//                 dp[i] = min(dp[i], 1 + dp[i - num[j]]);
//             }
//         }
//     }
//     if (dp[target] == INT_MAX)
//     {
//         return -1;
//     }
//     return dp[target];
// }
// int minimumElements(vector<int> &num, int target){
//     return solveTab(num, target);
// }

// Max. sum of non-adjacent elements
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion + Memomization (T.C -> O(n) & S.C -> O(n))
// int maxNonAdjacent(vector<int> &nums, int dp[], int n)
// {
//     // Base case
//     // If n is 0 or negative
//     if (n < 1)
//     {
//         return 0;
//     }
//     // 3rd step : After base case check if we got the ans already then return dp[n]
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     // dp[n] will have max b/w nums[n - 1] + recursive call for n - 2(when it includes) + recursive call for n - 1 (when it excludes)
//     return dp[n] = max(nums[n - 1] + maxNonAdjacent(nums, dp, n - 2), maxNonAdjacent(nums, dp, n - 1));
// }
// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     // n have the size of array
//     int n = nums.size();
//     // created a dp array of n + 1 size
//     int dp[n + 1];
//     // call memoization function
//     memset(dp, -1, sizeof(dp));
//     // return to get the ans
//     return maxNonAdjacent(nums, dp, n);
// }

// // Tabulation (T.C -> O(n) & S.C -> O(n))
// int solveTab(vector<int> &nums){
//     // n have the size of array
//     int n = nums.size();
//     // created a dp array of n size
//     vector<int> dp(n, 0);
//     // Base case
//     dp[0] = nums[0];
//     // Run a loop for remaining elements
//     for (int i = 1; i < n; i++)
//     {
//         // if include then i will move i - 2 + the element at which we are currently present it's value
//         int include = dp[i - 2] + nums[i];
//         // if include then i will move i - 1 + 0
//         int exclude = dp[i - 1] + 0;
//         // We have to find max sum b/w include and exclude
//         dp[i] = max(include, exclude);
//     }
//     // return dp[n - 1]
//     return dp[n - 1];
// }
// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     // call the solveTab function to get the ans
//     return solveTab(nums);
// }

// House Robbery Problem (T.C -> O(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// // Tabulation (T.C -> O(n) & S.C -> O(n))
// int solveTab(vector<int> &nums){
//     // n have the size of array
//     int n = nums.size();
//     // created a dp array of n size
//     vector<int> dp(n, 0);
//     // Base case
//     dp[0] = nums[0];
//     // Run a loop for remaining elements
//     for (int i = 1; i < n; i++)
//     {
//         // if include then i will move i - 2 + the element at which we are currently present it's value
//         int include = dp[i - 2] + nums[i];
//         // if include then i will move i - 1 + 0
//         int exclude = dp[i - 1] + 0;
//         // We have to find max sum b/w include and exclude
//         dp[i] = max(include, exclude);
//     }
//     // return dp[n - 1]
//     return dp[n - 1];
// }
// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     // call the solveTab function to get the ans
//     return solveTab(nums);
// }
// long long int houseRobber(vector<int> &nums)
// {
//     // n will have size
//     int n = nums.size();
//     // if only one house then we will rob this house only
//     if (n == 1)
//     {
//         return nums[0];
//     }
//     // v1 for first and v2 for second
//     vector<int> v1, v2;
//     // run a loop from start to the end
//     for (int i = 0; i < nums.size(); i++)
//     {
//         // If last index include then skip first index
//         if (i != 0)
//         {
//             v2.push_back(nums[i]);
//         }
//         // In first vector include then skip last index
//         if (i != n - 1)
//         {
//             v1.push_back(nums[i]);
//         }
//     }
//     // return max b/w first vector and second vector
//     return max(solveTab(v1), solveTab(v2));
// }

// Cut Rode Into Segments (T.C -> O(n) & S.C -> O(n))
// Approach 1 : Recursion
// #include <bits/stdc++.h>
// using namespace std;
// int solveRecursion(int n, int x, int y, int z)
// {
//     // Base Condition
//     // if rod length is 0 then return 0
//     if (n == 0){
//         return 0;
//     }
//     // if length is smaller than 0 then return INT_MIN
//     if (n < 0){
//         return INT_MIN;
//     }
//     // a is for x
//     int a = solveRecursion(n - x, x, y, z) + 1;
//     // b is for y
//     int b = solveRecursion(n - y, x, y, z) + 1;
//     // c is for z
//     int c = solveRecursion(n - z, x, y, z) + 1;
//     // ans will have max b/w a and max b/w b and c
//     int ans = max(a, max(b, c));
//     return ans;
// }
// int cutSegments(int n, int x, int y, int z)
// {
//     // ans will have call function
//     int ans = solveRecursion(n, x, y, z);
//     // if ans < 0 then return 0
//     if (ans < 0)
//         return 0;
//     else
//         return ans;
// }
// // Approach 2 : Memoization (T.C -> O(n) & S.C -> O(n))
// int solveMemoization(int n, int x, int y, int z , vector<int> &dp){
//     //Base Condition
//     if(n == 0)
//          return 0;
//     if(n < 0)
//         return INT_MIN;

//     if(dp[n] != -1)
//         return dp[n];

//     int a = solveMemoization(n-x , x , y , z ,dp) + 1;
//     int b = solveMemoization(n-y , x , y , z ,dp) + 1;
//     int c = solveMemoization(n-z , x , y , z,dp) + 1;
//     // Stor in dp array max b/w a and max b.2 b and c
//     dp[n] = max(a , max(b,c));
//     return dp[n];
// }

// int cutSegments(int n, int x, int y, int z) {
//     // created a dp array of size n + 1 size with value -1 initially
//     vector<int>dp(n+1 , -1);
//     int ans = solveMemoization(n, x, y, z, dp);
//     if(ans < 0)
//         return 0 ;
//     else
//         return ans;
// }
// // Approach 3 : Tabulation (T.C -> O(n) & S.C -> O(n))
// int solveTabulation(int n, int x, int y, int z){
//     vector<int>dp(n+1 , INT_MIN);
//     // Base case
//     dp[0] = 0;
//     for(int i = 1 ; i<=n ; i++){
//         if(i-x >= 0)
//             dp[i] = max(dp[i] ,dp[i-x] + 1);
//         if(i-y >= 0)
//             dp[i] = max(dp[i] ,dp[i-y] + 1);
//         if(i-z >= 0)
//             dp[i] = max(dp[i] ,dp[i-z] + 1);
//     }
//     if(dp[n] < 0)
//         return 0;
//     else
//         return dp[n];
// }
// int cutSegments(int n, int x, int y, int z) {
//     return solveTablulation(n, x, y, z);
// }

// Count Dearrangements
// #include <bits/stdc++.h>
// using namespace std;
// #define mod 1000000007
// // Using recursion (T.C -> exponential)
// long long int solve(int n)
// {
//     // base case
//     if (n == 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     long long int ans = (n - 1) % mod * ((solve(n - 1)) % mod + (solve(n - 2)) % mod) % mod;
//     return ans;
// }

// long long int countDerangements(int n)
// {
//     long long int ans = solve(n);
//     return ans;
// }
// // Using recursion + memoization (T.C -> O(n)) && (S.C -> O(n)+O(n))
// long long int solve(int n, vector<long long int> &dp)
// {
//     // base case
//     if (n == 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     if (dp[n] != -1)
//         return dp[n];
//     dp[n] = (n - 1) % mod * ((solve(n - 1, dp)) % mod + (solve(n - 2, dp)) % mod) % mod;
//     return dp[n];
// }
// long long int countDerangements(int n)
// {
//     vector<long long int> dp(n + 1, -1);
//     long long int ans = solve(n, dp);
//     return ans;
// }
// // Using tabulation method (T.C -> O(n) && (S.C -> is O(n))
// long long int solve(int n)
// {
//     vector<long long int> dp(n + 1, 0);
//     dp[1] = 0;
//     dp[2] = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         dp[i] = (i - 1) % mod * ((dp[i - 1]) % mod + (dp[i - 2]) % mod) % mod;
//     }
//     return dp[n];
// }
// long long int countDerangements(int n)
// {
//     long long int ans = solve(n);
//     return ans;
// }
// // Using space optimizatation (T.C -> O(n)) && (S.C -> O(1))
// long long int solve(int n)
// {
//     long long int prev2 = 0;
//     long long int prev1 = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         long long int ans = (i - 1) % mod * (prev1 % mod + prev2 % mod) % mod;
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }
// long long int countDerangements(int n)
// {
//     long long int ans = solve(n);
//     return ans;
// }

// Painting fencing algorithm
// #include <bits/stdc++.h>
// using namespace std;
// #define MOD 1000000007
// // This will return the answer in addition format which we want
// int add(int num1, int num2){
//     return ((num1%MOD) + (num2%MOD))%MOD;
// }
// // Multiply function will do the same thing which prev will do but it will multiply
// int mul(int num1, int num2){
//     return ((num1%MOD) * 1LL * (num2%MOD))%MOD;
// }
// // Recursiong (T.C -> exponential)
// // 1LL due to range issues, we use to multiple them by 1LL, long long
// int solveRec(int n, int k){
//     // base case
//     if(n == 1){
//         return k;
//     }
//     if(n == 2){
//        return add(k, mul(k, k - 1));
//     }
//     // calling function
//     return add(mul(solveRec(n-2, k) , k - 1),  mul(solveRec(n-1, k), k - 1));
// }
// // Using Memoization (T.C -> O(n) & S.C -> O(n) + O(n))
// int solveMem(int n, int k, vector<int>&dp){
//     if(n == 1){
//         return k;
//     }
//     if(n == 2){
//        return add(k, mul(k, k - 1));
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     return dp[n] = add(mul(solveMem(n-2, k, dp) , k - 1),  mul(solveMem(n-1, k, dp), k - 1));
// }
// // Tabular method (T.C -> O(n) & S.C -> O(n))
// int solveTab(int n, int k){
//     vector<int>dp(n + 1);
//     dp[1] = k;
//     dp[2] = add(k, mul(k, k - 1));

//     for(int i = 3; i <= n; i++){
//         dp[i] = add(mul(dp[i-2] , k - 1),  mul(dp[i-1], k - 1));
//     }
//     return dp[n];
// }
// // Space Optimization (T.C -> O(n) & S.C -> O(1))
// int solve(int n, int k){
//     //vector<int>dp(n + 1);
//     int prev2 = k;
//     int prev1 = add(k, mul(k, k - 1));

//     for(int i = 3; i <= n; i++){
//         int temp = add(mul(prev2, k - 1),  mul(prev1, k - 1));
//         prev2 = prev1;
//         prev1 = temp;
//     }
//     return prev1;
// }
// int numberOfWays(int n, int k) {
//     return solve(n, k);
// }

// 0/1 KnapSack Problem
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion + Memoization (T.C -> O(n * w) & S.C -> O(n * w))
// int solveMem(vector<int> weight, vector<int> value, int n, int maxWeight, vector<vector<int>> &dp)
// {
//     // Base case
//     if (maxWeight < 0)
//     {
//         return INT_MIN;
//     }
//     // if there is only one item to be stolen, then we will check does our bag have capicity to store that element in the bag
//     // if size == 0 || maxWeight is also 0
//     if (n == 0 || maxWeight == 0)
//     {
//         // then return 0
//         return 0;
//     }
//     if (dp[n][maxWeight] != -1)
//     {
//         return dp[n][maxWeight];
//     }
//     int inc = value[n - 1] + solveMem(weight, value, n - 1, maxWeight - weight[n - 1], dp);
//     int exc = solveMem(weight, value, n - 1, maxWeight, dp);
//     return dp[n][maxWeight] = max(inc, exc);
// }
// // Tabular method (T.C -> O(n * w) & S.C -> O(2 * w))
// int solveTab(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<vector<int>> dp(n + 1, vector<int>(maxWeight + 1, 0));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= maxWeight; j++)
//         {
//             if (j - weight[i - 1] >= 0)
//                 dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
//             else
//                 dp[i][j] = dp[i - 1][j];
//         }
//     }
//     return dp[n][maxWeight];
// }
// // Space Optimization (T.C -> O(n * w) & S.C -> O(w))
// int solveSpace(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<int> prev(maxWeight + 1, 0);
//     vector<int> curr(maxWeight + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= maxWeight; j++)
//         {
//             if (j - weight[i - 1] >= 0)
//                 curr[j] = max(value[i - 1] + prev[j - weight[i - 1]], prev[j]);
//             else
//                 curr[j] = prev[j];
//         }
//         prev = curr;
//     }
//     return curr[maxWeight];
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<vector<int>> dp(n + 1, vector<int>(maxWeight + 1, -1));
//     return solveSpace(weight, value, n, maxWeight);
// }

// n Sum Problem
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion (T.C -> Exponential)
// int solve(vector<int> &num, int tar)
// {
//     // Basse Case
//     if (tar < 0)
//     {
//         return 0;
//     }
//     if (tar == 0)
//     {
//         return 1;
//     }
//     int ans = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         ans += solve(num, tar - num[i]);
//     }
//     return ans;
// }
// // Memoization (T.C -> O(target))
// int solveMem(vector<int> &num, int tar, vector<int> &dp)
// { // Base case
//     // If target is smaller then 0
//     if (tar < 0)
//     {
//         return 0;
//     }
//     // If target is equal to 0
//     if (tar == 0)
//     {
//         return 1;
//     }
//     if (dp[tar] != -1)
//         return dp[tar];
//     int ans = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         ans += solveMem(num, tar - num[i], dp);
//     }
//     dp[tar] = ans;
//     return dp[tar];
// }
// // Tabular form (T.C -> O(target * n))
// int solveTab(vector<int> &num, int tar)
// {
//     vector<int> dp(tar + 1, 0);
//     // Base case
//     dp[0] = 1;
//     // Traversing from target 1 to target
//     for (int i = 1; i <= tar; i++)
//     {
//         // Traverse from start to the end
//         for (int j = 0; j < num.size(); j++)
//         {
//             if (i - num[j] >= 0)
//                 dp[i] += dp[i - num[j]];
//         }
//     }
//     return dp[tar];
// }
// // Here we will do function call
// int findWays(vector<int> &num, int tar)
// {
//     return solveTab(num, tar);
// }

// Get Minimum Squares (T.C -> O(n * sqrt(n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// // (T.C -> O() & S.C -> O())
// class Solution
// {
// public:
//     int help(int n, int w, vector<int> &a, vector<vector<int>> &dp)
//     {
//         // Base case
//         if (w == 0)
//         {
//             return 0;
//         }
//         if (n == 0)
//         {
//             return 1e8;
//         }
//         if (dp[n][w] != -1)
//             return dp[n][w];
//         else
//         {
//             if (a[n - 1] <= w)
//             {
//                 // take will include the previous number formed or number utilized by using + 1
//                 int take = 1 + help(n, w - a[n - 1], a, dp);
//                 int notake = help(n - 1, w, a, dp);
//                 return dp[n][w] = min(take, notake);
//             }
//             else
//                 return dp[n][w] = help(n - 1, w, a, dp);
//         }
//     }
//     int MinSquares(int n)
//     {
//         // Create a vector array
//         vector<int> a;
//         // Run a loop from 1 to the square of i to n
//         for (int i = 1; i * i <= n; i++)
//         {
//             a.push_back(i * i);
//         }
//         // m have the size of vector a
//         int m = a.size();
//         vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
//         return help(m, n, a, dp);
//     }
// };
// // Tabulation (T.C -> O(n * sqrt(n) & S.C -> O(1))
// class Sol
// {
// public:
//     int MinSquares(int n)
//     {
//         vector<int> a;
//         for (int i = 1; i * i <= n; i++)
//         {
//             a.push_back(i * i);
//         }
//         int m = a.size();
//         vector<int> prev(n + 1, 1e8), curr(n + 1, 1e8);
//         // Base case
//         prev[0] = 0;
//         curr[0] = 0;
//         for (int i = 1; i <= m; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (a[i - 1] <= j)
//                 {
//                     int take = 1 + curr[j - a[i - 1]];
//                     int notake = prev[j];
//                     curr[j] = min(take, notake);
//                 }
//                 else
//                 {
//                     curr[j] = prev[j];
//                 }
//             }
//             prev = curr;
//         }
//         return prev[n];
//     }
// };

// Minimum cost for tickets
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion
// int solve_rec(int n, vector<int> &days, vector<int> &cost, int index)
// {
//     // Base Case
//     if (index >= n)
//     {
//         return 0;
//     }
//     // for chosing 1 day pass and add cost[0]
//     int opt1 = cost[0] + solve_rec(n, days, cost, index + 1);

//     // When chosing 7 day pass then move index to 7th day
//     int i;
//     // conditiion is i should be under the array & will move index to the 7th day index
//     for (i = index; i < n && days[i] < days[index] + 7; i++);
//     int opt2 = cost[1] + solve_rec(n, days, cost, i);

//     // When chosing 30 day pass then we will check the condition and move days to the 30th index
//     for (i = index; i < n && days[i] < days[index] + 30; i++);
//     int opt3 = cost[2] + solve_rec(n, days, cost, i);
//     // then we will return min b/w them
//     return min(opt1, min(opt2, opt3));
// }
// // Memoization method (T.C -> O(n) & S.C -> O(n + 1))
// int solve_Mem(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp)
// {
//     // Base Case
//     if (index >= n)
//     {
//         return 0;
//     }
//     if (dp[index] != -1)
//     {
//         return dp[index];
//     }
//     // for chosing 1 day pass and add cost[0]
//     int opt1 = cost[0] + solve_Mem(n, days, cost, index + 1, dp);
//     int i;
//     // When chosing 7 day pass then move index to 7th day
//     for (i = index; i < n && days[i] < days[index] + 7; i++);
//     int opt2 = cost[1] + solve_Mem(n, days, cost, i, dp);

//     // When chosing 30 day pass then we will check the condition and move days to the 30th index
//     for (i = index; i < n && days[i] < days[index] + 30; i++);
//     int opt3 = cost[2] + solve_Mem(n, days, cost, i, dp);
//     dp[n] = min(opt1, min(opt2, opt3));
//     return dp[n];
// }
// // Time complexity = O(n) & Space complexity = O(n + 1)
// int solve_tab(int n, vector<int> &days, vector<int> &cost, int index)
// {
//     vector<int> dp(n + 1, INT_MAX);
//     // Base case
//     dp[n] = 0;
//     for (int k = n - 1; k >= 0; k--)
//     {
//         int opt1 = cost[0] + dp[k + 1];
//         // When chosing 7 day pass
//         int i;
//         for (i = k; i < n && days[i] < days[k] + 7; i++);
//         int opt2 = cost[1] + dp[i];

//         // When chosing 30 day pass
//         for (i = k; i < n && days[i] < days[k] + 30; i++);
//         int opt3 = cost[2] + dp[i];

//         dp[k] = min(opt1, min(opt2, opt3));
//     }
//     return dp[0];
// }
// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     //     return solve_rec(n,days,cost,0);
//     //     vector<int> dp(n+1,-1);
//     //     return solve_Mem(n,days,cost,0,dp);
//     return solve_tab(n, days, cost, 0);
// }
// // Space Optimization
// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     int ans = 0;
//     queue<pair<int, int>> week;
//     queue<pair<int, int>> month;
//     for (int day : days)
//     {
//         while (!week.empty() and week.front().first + 7 <= day)
//             week.pop();
//         while (!month.empty() and month.front().first + 30 <= day)
//             month.pop();
//         week.push({day, cost[1] + ans});
//         month.push({day, cost[2] + ans});
//         int d = cost[0] + ans;
//         ans = min({d, month.front().second, week.front().second});
//     }
//     return ans;
// }

// Largest Square area in matrix
// #include <bits/stdc++.h>
// using namespace std;
// // Recursion
// // m -> row & n -> column
// int solve(vector<vector<int>> &mat, int i, int j, int &maxi)
// {
//     // Base case
//     // for i should be in matrix not outside the limit of matrix
//     if (i >= mat.size() || j >= mat[0].size())
//         return 0;

//     // move to the right side for finding ans
//     int right = solve(mat, i, j + 1, maxi);
//     // move to the digonal side
//     int diagonal = solve(mat, i + 1, j + 1, maxi);
//     // move to the downward side
//     int down = solve(mat, i + 1, j, maxi);

//     // now check current position
//     // if matrix of element is 1 then we can form square
//     if (mat[i][j] == 1)
//     {
//         int ans = 1 + min(right, min(diagonal, down));
//         maxi = max(maxi, ans);
//         return ans;
//     }
//     else
//     {
//         return 0;
//     }
// }
// // Memoization (T.C -> O(m * n) & S.C -> O(m * n))
// int solveMem(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp)
// {
//     // base case
//     if (i >= mat.size() || j >= mat[0].size())
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];

//     // move to the right side
//     int right = solveMem(mat, i, j + 1, maxi, dp);
//     // move to the digonsl side
//     int diagonal = solveMem(mat, i + 1, j + 1, maxi, dp);
//     // move to the downword side
//     int down = solveMem(mat, i + 1, j, maxi, dp);

//     // now check current position
//     if (mat[i][j] == 1)
//     {
//         dp[i][j] = 1 + min(right, min(diagonal, down));
//         maxi = max(maxi, dp[i][j]);
//         return dp[i][j];
//     }
//     else
//     {
//         return dp[i][j] = 0;
//     }
// }
// // Tabulation (T.C -> O(m * n) & S.C -> O(m * n))
// int solveTab(vector<vector<int>> &mat, int &maxi)
// {
//     // create 2d DP array
//     int row = mat.size();
//     int col = mat[0].size();
//     vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));

//     for (int i = row - 1; i >= 0; i--)
//     {
//         for (int j = col - 1; j >= 0; j--)
//         {
//             // move to the right side
//             int right = dp[i][j + 1];
//             // move to the digonsl side
//             int diagonal = dp[i + 1][j + 1];
//             // move to the downword side
//             int down = dp[i + 1][j];

//             // now check current position
//             if (mat[i][j] == 1)
//             {
//                 dp[i][j] = 1 + min(right, min(diagonal, down));
//                 maxi = max(maxi, dp[i][j]);
//             }
//             else
//             {
//                 dp[i][j] = 0;
//             }
//         }
//     }
// }
// // Optimized Solution (T.C -> O(m) & S.C -> O(1))
// int solveOptimized(vector<vector<int>> &mat, int &maxi)
// {
//     int row = mat.size();
//     int col = mat[0].size();

//     vector<int> curr(col + 1, 0);
//     vector<int> next(col + 1, 0);

//     for (int i = row - 1; i >= 0; i--)
//     {
//         for (int j = col - 1; j >= 0; j--)
//         {
//             // move to the right side
//             int right = curr[j + 1];
//             // move to the digonal side
//             int diagonal = next[j + 1];
//             // move to the downword side
//             int down = next[j];

//             // now check current position
//             if (mat[i][j] == 1)
//             {
//                 curr[j] = 1 + min(right, min(diagonal, down));
//                 maxi = max(maxi, curr[j]);
//             }
//             else
//             {
//                 curr[j] = 0;
//             }
//         }
//         next = curr;
//     }
//     return next[0];
// }
// int maxSquare(int n, int m, vector<vector<int>> mat)
// {
//     // solve using recursion
//     // int maxi = 0;
//     // solve(mat,0,0,maxi);
//     // return maxi;

//     // solve using memoisation
//     // step 1st create a 2d dp array
//     // int maxi = 0;
//     // vector<vector<int>> dp(n,vector<int>(m,-1));
//     // solveMem(mat,0,0,maxi,dp);
//     // return maxi;

//     // solve using tabulation method
//     // int maxi = 0;
//     // solveTab(mat,maxi);
//     // return maxi;

//     // solve using space optimization
//     int maxi = 0;
//     solveOptimized(mat, maxi);
//     return maxi;
// }

// Min Score Triangulation of polygon
// #include <bits/stdc++.h>
// using namespace std;
// // Memoization
// class Solution
// {
// public:
//     int solve(vector<int> &values, int i, int j, vector<vector<int>> &dp)
//     {
//         // Base case
//         // If only 2 nodes then triangle cannot be formed so return 0
//         if (i + 1 == j)
//             return 0;
//         if (dp[i][j] != -1)
//         {
//             return dp[i][j];
//         }
//         int minm = INT_MAX;
//         // Run a loop from the current index to the j - 1
//         for (int k = i + 1; k < j; k++)
//         {
//             //
//             int left = solve(values, i, k, dp);
//             int right = solve(values, k, j, dp);
//             int temp = left + right + values[i] * values[k] * values[j];
//             // min b/w temp ans INT_MAX
//             minm = min(minm, temp);
//         }
//         return dp[i][j] = minm;
//     }
//     int minScoreTriangulation(vector<int> &values)
//     {
//         int n = values.size();
//         vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
//         return solve(values, 0, n - 1, dp);
//     }
// };
// // Tabulation Method (T.C -> O(n ^ 3) & s.C -> O(n ^ 2))
// int minScoreTriangulation(vector<int> &values)
// {
//     // n have the size of values vector
//     int n = values.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = i + 2; j < n; j++)
//         {
//             int ans = INT_MAX;
//             for (int k = i + 1; k < j; k++)
//             {
//                 ans = min(ans, values[i] * values[j] * values[k] + dp[i][k] + dp[k][j]);
//             }
//             dp[i][j] = ans;
//         }
//     }
//     return dp[0][n - 1];
// }

// Minimum Sideways Jump
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     // Memoization
//     vector<vector<int>> dpmemo;
//     int SolveByMemo(vector<int> &obstacles, int index, int lane)
//     {
//         // Base case
//         // if obstacle size is equal to n then return 0
//         if (index == obstacles.size() - 1)
//             return 0;
//         // If we already got the ans then return
//         if (dpmemo[index][lane] != -1)
//             return dpmemo[index][lane];
//         // If obstacle is present to next position of same lane
//         if (obstacles[index + 1] != lane + 1)
//             return dpmemo[index][lane] = SolveByMemo(obstacles, index + 1, lane);

//         int ans = 10e5;
//         for (int i = 0; i < 3; i++)
//         {
//             // If the jump is equal to the same lane || obstacle is present
//             if (i == lane || obstacles[index] == i + 1)
//                 continue;
//             ans = min(ans, SolveByMemo(obstacles, index, i));
//             if (ans == 0)
//                 break;
//         }
//         return dpmemo[index][lane] = 1 + ans;
//     }
//     // Tabulation (S.C -> O(4 * n))
//     int SolveByTab(vector<int> obstacles)
//     {
//         vector<vector<int>> dp = vector<vector<int>>(obstacles.size(), vector<int>(3, 10e6));

//         int n = obstacles.size();
//         dp[n - 1][0] = dp[n - 1][1] = dp[n - 1][2] = 0;

//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (obstacles[i + 1] != j + 1)
//                     dp[i][j] = dp[i + 1][j];
//                 else
//                 {
//                     int ans = 10e6;
//                     for (int k = 0; k < 3; k++)
//                     {
//                         if (k != j && obstacles[i] != k + 1)
//                             ans = min(ans, 1 + dp[i + 1][k]);
//                     }
//                     dp[i][j] = ans;
//                 }
//             }
//         }

//         return min(dp[0][1], 1 + min(dp[0][0], dp[0][2]));
//     }
//     // Space Optimization (T.C -> O(n) & S.C -> O(1))
//     int SolveBySpaceOptimisation(vector<int> obstacles)
//     {
//         vector<int> curr(3, 10e6), prev(3, 0);
//         int n = obstacles.size();
//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (obstacles[i + 1] != j + 1)
//                     curr[j] = prev[j];
//                 else
//                 {
//                     int ans = 10e6;
//                     for (int k = 0; k < 3; k++)
//                     {
//                         if (k != j && obstacles[i] != k + 1)
//                             ans = min(ans, 1 + prev[k]);
//                     }
//                     curr[j] = ans;
//                 }
//             }
//             prev = curr;
//         }
//         return min(curr[1], 1 + min(curr[0], curr[2]));
//     }
// public:
//     int minSideJumps(vector<int> &obstacles)
//     {

//         // 1. By Recursion + Memoization
//         // dpmemo = vector<vector<int>> (obstacles.size() , vector<int> (3, -1) );
//         // return SolveByMemo(obstacles, 0 , 1) ;

//         // 2. By Tabulation Method
//         // return SolveByTab(obstacles);
//         // 3. By Tabulation and Space optimisation
//         return SolveBySpaceOptimisation(obstacles);
//     }
// };

// Reducing Dishes
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Memoization (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     int SolveByMemo(vector<int> &satisfaction, int index, int time)
//     {
//         // dpmemo is a vector
//         vector<vector<int>> dpmemo;
//         // if index == satisfaction size that means we are out of array
//         if (index == satisfaction.size())
//             return 0;
//         // for dp array condition that we might already got the ans. then just return
//         if (dpmemo[index][time] != INT_MIN)
//             return dpmemo[index][time];
//         // op1 is include case where we will move to next element
//         int op1 = SolveByMemo(satisfaction, index + 1, time + 1);
//         // op1 is include case where also we will move to next element
//         int op2 = SolveByMemo(satisfaction, index + 1, time);
//         // return max sum of like time
//         return dpmemo[index][time] = max(satisfaction[index] * (time + 1) + op1, op2);
//     }
//     // Tabular (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     int SolveByTab(vector<int> &s)
//     {
//         // Dp vector created with INT_MIN value
//         vector<vector<int>> dp(s.size(), vector<int>(s.size(), INT_MIN));
//         // run a loop for index
//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             // another loop for time, where using j as time
//             for (int j = i; j >= 0; j--)
//             {
//                 if (i == s.size() - 1)
//                     dp[i][j] = max(0, s[i] * (j + 1));
//                 else
//                 {
//                     dp[i][j] = max(dp[i + 1][j], s[i] * (j + 1) + dp[i + 1][j + 1]);
//                 }
//             }
//         }
//         return dp[0][0];
//     }
//     // Optimized (T.C -> O(n ^ 2) & S.C -> O(n))
//     int SolveSpaceOptimised(vector<int> &s)
//     {
//         vector<int> fwd(s.size() + 1, 0), curr(s.size() + 1, 0);
//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             for (int j = i; j >= 0; j--)
//                 curr[j] = max(fwd[j], s[i] * (j + 1) + fwd[j + 1]);

//             fwd = curr;
//         }
//         return fwd[0];
//     }
// public:
//     int maxSatisfaction(vector<int> &satisfaction)
//     {
//         // We have to sort the array of satisfaction before include & exclude
//         sort(satisfaction.begin(), satisfaction.end());
//         // 1. Recursion + Memoization
//         // dpmemo = vector<vector<int>> (satisfaction.size(), vector<int> (satisfaction.size(), INT_MIN ));
//         // return SolveByMemo(satisfaction, 0 , 0);

//         // 2. Tabulation Method
//         // return SolveByTab(satisfaction);

//         // 3. Space Optimised Method
//         return SolveSpaceOptimised(satisfaction);
//     }
// };

// Longest Increasing Subsequence
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> dp;
// class Solution
// {
// public:
//     int solve(int arr[], int curr, int prev, int n)
//     {
//         // Base case
//         // Array traversed already
//         if (curr == n)
//             return 0;

//         int include = 0;
//         // When exclude in array then move curr/i to the next element
//         int exclude = 0 + solve(arr, curr + 1, prev, n);
//         // If include
//         // If prev is -1 initially || arr of curr element or the element at which i is present > arr of prev element of arr having ans
//         if (prev == -1 || arr[curr] > arr[prev])
//         {
//             include = 1 + solve(arr, curr + 1, curr, n);
//         }
//         return max(include, exclude);
//     }
//     // Memoization (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     // We have to make 2-D dp because 2 states will change as curr / i is moving from 0 to the size - 1 & prev is going from -1 to size - 1
//     int solveMem(int n, int arr[], int curr, int prev, vector<vector<int>> &dp)
//     {
//         if (curr == n)
//         {
//             return 0;
//         }
//         if (dp[curr][prev + 1] != -1)
//         {
//             return dp[curr][prev + 1];
//         }
//         int include = 0;
//         // Exclude
//         int exclude = 0 + solveMem(n, arr, curr + 1, prev, dp);
//         // Include
//         if (prev == -1 || arr[curr] > arr[prev])
//         {
//             include = 1 + solveMem(n, arr, curr + 1, prev, dp);
//         }
//         return dp[curr][prev + 1] = max(include, exclude);
//     }
//     // Tabulation (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     int solveTab(int n, int a[])
//     {
//         vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//         for (int curr = n - 1; curr >= 0; curr--)
//         {
//             for (int prev = curr - 1; prev >= -1; prev--)
//             {
//                 // include
//                 int take = 0;
//                 if (prev == -1 || a[curr] > a[prev])
//                     take = 1 + dp[curr + 1][curr + 1];

//                 // exclude
//                 int notTake = 0 + dp[curr + 1][prev + 1];

//                 dp[curr][prev + 1] = max(take, notTake);
//             }
//         }
//         return dp[0][-1 + 1];
//     }
//     // Space Optimized (T.C -> O(n ^ 2) & S.C -> O(n))
//     int solveSpaceOP(int n, int a[])
//     {
//         vector<int> currRow(n + 1, 0);
//         vector<int> nextRow(n + 1, 0);

//         for (int curr = n - 1; curr >= 0; curr--)
//         {
//             for (int prev = curr - 1; prev >= -1; prev--)
//             {

//                 // include
//                 int take = 0;
//                 if (prev == -1 || a[curr] > a[prev])
//                     take = 1 + nextRow[curr + 1];

//                 // exclude
//                 int notTake = 0 + nextRow[prev + 1];

//                 currRow[prev + 1] = max(take, notTake);
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     // Dp with Binary search
//     // Optimal Solution (T.C -> O(n log n) & S.C -> O(n))
//     int solveOptimal(int n, int a[])
//     {
//         // Base case
//         if (n == 0)
//             return 0;
//         // ans vector
//         vector<int> ans;
//         // ans will have first element for sure then only it will compare
//         ans.push_back(a[0]);
//         // Run a loop from 1st index to the last
//         for (int i = 1; i < n; i++)
//         {
//             // if curr is greater than prev stored ans
//             if (a[i] > ans.back())
//             // Push curr in ans
//                 ans.push_back(a[i]);
//             else
//             {
//                 // find index of just bigger element
//                 int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
//                 // Replace each other
//                 ans[index] = a[i];
//             }
//         }
//         // return size of the ans array
//         return ans.size();
//     }
//     // Function to find length of longest increasing subsequence.
//     int longestSubsequence(int n, int a[])
//     {
//         // RECURSION
//         // return solve(n, a, 0, -1);

//         // RECURSION + MEMOIZATION
//         vector<vector<int>> dp(n, vector<int>(n+1, -1));
//         return solveMem(n, a, 0, -1, dp);

//         // TABULATION
//         // return solveTab(n, a);

//         // SPACE OPTIMIZATION
//         // return solveSpaceOP(n, a);

//         // OPTIMAL
//         return solveOptimal(n, a);
//     }
// };

// Maximum height by stacking cuboid
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // This check function checks that the given condition in questions are applied or not
//     bool check(vector<int> base, vector<int> newBox)
//     {
//         if ((newBox[0] <= base[0]) && (newBox[1] <= base[1]) && (newBox[2] <= base[2]))
//         {
//             return true;
//         }
//         else
//             return false;
//     }
//     // Space Optimization (T.C -> O(n ^ 2) & S.C -> O(n)
//     int solveSpaceOP(int n, vector<vector<int>> &a)
//     {
//         vector<int> currRow(n + 1, 0);
//         vector<int> nextRow(n + 1, 0);
//         // Run a loop from end of the vector a to the starting in backward direction
//         for (int curr = n - 1; curr >= 0; curr--)
//         {
//             // Run another loop from 1 less than the current element to the -1 (starting)
//             for (int prev = curr - 1; prev >= -1; prev--)
//             {
//                 // include
//                 int take = 0;
//                 // If condition satisfied then only include
//                 if (prev == -1 || check(a[curr], a[prev]))
//                 {
//                     take = a[curr][2] + nextRow[curr + 1];
//                 }
//                 // exclude
//                 int notTake = 0 + nextRow[prev + 1];
//                 // we have to find max b/w take & notTake
//                 currRow[prev + 1] = max(take, notTake);
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     int maxHeight(vector<vector<int>> &cuboids)
//     {
//         // STEP - 1: Sort all dimensions for every cuboid
//         for (auto &a : cuboids)
//         {
//             sort(a.begin(), a.end());
//         }
//         // STEP - 2: Sort all cuboid basis on w or l
//         sort(cuboids.begin(), cuboids.end());

//         // STEP - 3: Use Longest IS Logic
//         int n = cuboids.size();
//         return solveSpaceOP(n, cuboids);
//     }
// };

// Pizza with 3n slices
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Recursion
//     int solve(int index, int endIndex, vector<int> &slices, int n)
//     {
//         // Base case
//         // If slices we wanted to eat is already done or the index exceeds out of slices array
//         if (n == 0 || index > endIndex)
//         {
//             return 0;
//         }
//         // If curr slice is eaten then pass the next index and one slice will be deducted
//         int take = slices[index] + solve(index + 2, endIndex, slices, n - 1);
//         // If curr not eaten
//         int notTake = 0 + solve(index + 1, endIndex, slices, n);
//         // max b/w them
//         return max(take, notTake);
//     }
//     // Recursion with Memoisation (T.C -> O() & S.C -> O())
//     int solveMem(int index, int endIndex, vector<int> &slices, int n, vector<vector<int>> &dp)
//     {
//         // Base case
//         if (n == 0 || index > endIndex)
//         {
//             return 0;
//         }
//         if (dp[index][n] != -1)
//         {
//             return dp[index][n];
//         }
//         int take = slices[index] + solveMem(index + 2, endIndex, slices, n - 1, dp);
//         int notTake = 0 + solveMem(index + 1, endIndex, slices, n, dp);
//         return dp[index][n] = max(take, notTake);
//     }

//     // Tabulation method (T.C -> O(k ^ 2) & S.C -> O())
//     int solveTab(vector<int> &slices)
//     {
//         // Case 1 : 0 to k - 2 slice
//         // k will have size of slice
//         int k = slices.size();
//         vector<vector<int>> dp1(k + 2, vector<int>(k + 2, 0));
//         vector<vector<int>> dp2(k + 2, vector<int>(k + 2, 0));
//         // Run a loop from size - 2 to the start in backward direction
//         for (int index = k - 2; index >= 0; index--)
//         {
//             // Run a loop from 1 to the size of slice / 3
//             for (int n = 1; n <= k / 3; n++)
//             {
//                 int take = slices[index] + dp1[index + 2][n - 1];
//                 int notTake = 0 + dp1[index + 1][n];
//                 dp1[index][n] = max(take, notTake);
//             }
//         }
//         int case1 = dp1[0][k / 3];
//         // Case 2 : 1 to k - 1
//         for (int index = k - 1; index >= 1; index--)
//         {
//             // Run from 1 to k/3
//             for (int n = 1; n <= k / 3; n++)
//             {
//                 int take = slices[index] + dp2[index + 2][n - 1];
//                 int notTake = 0 + dp2[index + 1][n];
//                 dp2[index][n] = max(take, notTake);
//             }
//         }
//         int case2 = dp2[1][k / 3];
//         return max(case1, case2);
//     }

//     // Space Optimisation (T.C -> O(k ^ 2) & S.C -> O(k))
//     int solveSpaceOptimisation(vector<int> &slices)
//     {
//         int k = slices.size();
//         vector<int> prev1(k + 2, 0);
//         vector<int> curr1(k + 2, 0);
//         vector<int> next1(k + 2, 0);

//         vector<int> prev2(k + 2, 0);
//         vector<int> curr2(k + 2, 0);
//         vector<int> next2(k + 2, 0);

//         for (int index = k - 2; index >= 0; index--)
//         {
//             for (int n = 1; n <= k / 3; n++)
//             {
//                 int take = slices[index] + next1[n - 1];
//                 int notTake = 0 + curr1[n];
//                 prev1[n] = max(take, notTake);
//             }
//             next1 = curr1;
//             curr1 = prev1;
//         }
//         int case1 = curr1[k / 3];
//         for (int index = k - 1; index >= 1; index--)
//         {
//             for (int n = 1; n <= k / 3; n++)
//             {
//                 int take = slices[index] + next2[n - 1];
//                 int notTake = 0 + curr2[n];
//                 prev2[n] = max(take, notTake);
//             }
//             next2 = curr2;
//             curr2 = prev2;
//         }

//         int case2 = curr2[k / 3];
//         return max(case1, case2);
//     }
//     int maxSizeSlices(vector<int> &slices)
//     {
//         Recursion
//         int k=slices.size();
//         int case1=solve(0,k-2,slices,k/3);
//         int case2=solve(1,k-1,slices,k/3);
//         return max(case1,case2);
//
//         Recursion with memoisation
//         int k=slices.size();
//         vector<vector<int>> dp(k,vector<int>(k,-1));
//         int case1=solveMem(0,k-2,slices,k/3,dp);
//         vector<vector<int>> dp2(k,vector<int>(k,-1));
//         int case2=solveMem(1,k-1,slices,k/3,dp2);
//         return max(case1,case2);
//
//         // Tabulation
//         return solveTab(slices);
//         // Space Optimisation
//         return solveSpaceOptimisation(slices);
//     }
// };

// Number of dice rolls with target sum
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// long long solvemem(int dices, int faces, int target, vector<vector<long long>> &dp)
// {
//     // Base case
//     // if target is less than 0 then there is no way to form summation = 0
//     if (target < 0)
//         return 0;
//     // If we have dices is 0 and target should be something
//     if (dices == 0 && target != 0)
//         return 0;
//     // if no dices and target is also 0
//     if (dices == 0 && target == 0)
//     {
//         return 1;
//     }
//     long long ans = 0;
//     // run a loop from 1 face of dice to the remaining all dices
//     for (int i = 1; i <= faces; i++)
//     {
//         // store ans of next remaining faces in our ans, 1 dice is used so deduct and from target we will remove ith face as it is already taken
//         ans = ans + solvemem(dices - 1, faces, target - i, dp);
//     }
//     return ans;
// }
// long long noOfWays(int M, int N, int X)
// {
//     vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, -1));
//     return solvemem(N, M, X, dp);
// }
// // Recursive + Memoization
// long long solvemem(int dices, int faces, int target, vector<vector<long long>> &dp)
// {
//     // Base case
//     // if target is less than 0 then there is no way to form summation = 0
//     if (target < 0)
//         return 0;
//     // If we have dices is 0 and target should be something
//     if (dices == 0 && target != 0)
//         return 0;
//     // if no dices and target is also 0
//     if (dices == 0 && target == 0)
//         return 1;

//     if (dp[dices][target] != -1)
//         return dp[dices][target];

//     long long ans = 0;
//     // run a loop from 1 face of dice to the remaining all dices
//     for (int i = 1; i <= faces; i++)
//     {
//         // store ans of next remaining faces in our ans, 1 dice is used so deduct and from target we will remove ith face as it is already taken
//         ans = ans + solvemem(dices - 1, faces, target - i, dp);
//     }
//     return dp[dices][target] = ans;
// }
// // Tabulation (T.C -> O(n * m * x) & S.C -> O(x))
// long long solveTab(int m, int n, int x, vector<vector<long long>> &dp)
// {
//     // dp array created
//     vector<vector<ll>> dp(n + 1, vector<ll>(x + 1, 0));
//     // Base case
//     dp[0][0] = 1;
//     // will run a loop from 1 to the end
//     for (int i = 1; i <= n; i++)
//     {
//         // j is dice so we will start from first face of dice
//         for (int j = 1; j <= x; j++)
//         {
//             // f is target
//             for (int f = 1; f <= m; f++)
//             {
//                 // if target is <= dice face then
//                 if (f <= j)
//                     dp[i][j] = dp[i][j] + dp[i - 1][j - f];
//             }
//         }
//     }
//     return dp[n][x];
// }
// long long noOfWays(int M, int N, int X)
// {
//     // Recursive + Memoization
//     vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, -1));
//     return solvemem(N, M, X, dp);
//     // Tabulation
//     return solveTab(M, N, X, dp);
// }

// Partition Equal Subset Sum
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Recursion (T.C -> O() & S.C -> O())
//     bool solve(int target, int index, int arr[], int N)
//     {
//         // Base Case
//         // if index is greater than size of array then return 0
//         if (index >= N)
//             return 0;
//         // if target is -ve
//         if (target < 0)
//             return 0;
//         // if target is 0
//         if (target == 0)
//             return 1;
//         // include will substract curr element from target and move curr index to next index
//         bool include = solve(target - arr[index], index + 1, arr, N);
//         // exclude will substract nothing from target and move curr index to next index
//         bool exclude = solve(target - 0, index + 1, arr, N);
//         // ans will be in bool
//         return (include or exclude);
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     bool solveMem(int target, int index, int arr[], int N, vector<vector<int>> &dp)
//     {
//         // Base Case
//         if (index >= N)
//             return 0;

//         if (target < 0)
//             return 0;

//         if (target == 0)
//             return 1;
//         // Here, index & target both are changing hence it is 2D dp
//         if (dp[index][target] != -1)
//             return dp[index][target];

//         bool include = solveMem(target - arr[index], index + 1, arr, N, dp);
//         bool exclude = solveMem(target - 0, index + 1, arr, N, dp);

//         return dp[index][target] = (include or exclude);
//     }
//     // Tabulation (T.C -> O(sum * n) & S.C -> O())
//     bool solveTab(int total, int arr[], int N)
//     {
//         vector<vector<int>> dp(N + 1, vector<int>(total + 1, 0));
//         // run a loop from 0 because column 0 should have 1 to the end & put 1 value
//         for (int i = 0; i <= N; i++)
//         {
//             dp[i][0] = 1;
//         }
//         // run a loop from size - 1 to the start in reverse order
//         for (int index = N - 1; index >= 0; index--)
//         {
//             // run a loop from target to the total / 2 (even)
//             for (int target = 0; target <= (total / 2); target++)
//             {
//                 bool include = 0;
//                 // target - curr index is >= 0 then include
//                 if (target - arr[index] >= 0)
//                     include = dp[index + 1][target - arr[index]];
//                 // else exclude
//                 bool exclude = dp[index + 1][target - 0];
//                 dp[index][target] = (include or exclude);
//             }
//         }
//         return dp[0][total / 2];
//     }
//     // Space Optimization (T.C -> O() & S.C -> O(n))
//     bool solveSpaceOP(int total, int arr[], int N)
//     {
//         vector<int> curr(total / 2 + 1);
//         vector<int> next(total / 2 + 1);

//         curr[0] = 1;
//         next[0] = 1;

//         for (int index = N - 1; index >= 0; index--)
//         {
//             for (int target = 0; target <= (total / 2); target++)
//             {
//                 bool include = 0;
//                 if (target - arr[index] >= 0)
//                     include = next[target - arr[index]];

//                 bool exclude = next[target - 0];

//                 curr[target] = (include or exclude);
//             }
//             next = curr;
//         }
//         return next[total / 2];
//     }
//     int equalPartition(int N, int arr[])
//     {
//         int total = 0;
//         for (int i = 0; i < N; i++)
//         {
//             total += arr[i];
//         }
//         //
//         if (total & 1)
//             return 0;

//         int target = total / 2;

//         // RECURSION
//         /*
//         return solve(target, 0, arr, N);
//         */

//         // RECURSION + MEMOIZATION
//         // vector<vector<int>> dp(target+1, vector<int> (N+1, -1));
//         /*
//         vector<vector<int>> dp(N+1, vector<int> (target+1, -1));
//         return solveMem(target, 0, arr, N, dp); */

//         // TABULATION
//         // return solveTab(total, arr, N);

//         // SPACE OPTIMIZATION
//         return solveSpaceOP(total, arr, N);
//     }
// };

// Minimum Swaps to make Subsequences Increasing
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Recursive
//     int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped)
//     {
//         // if i is at end
//         if (index == nums1.size())
//             return 0;

//         int ans = INT_MAX;
//         // prev1 will be pointing at -1
//         int prev1 = nums1[index - 1];
//         // prev2 will be pointing at -1
//         int prev2 = nums2[index - 1];
//         // if swap
//         if (swapped)
//         {
//             // Then prev1 & prev2 of num1 & num2 will swap
//             swap(prev1, prev2);
//         }
//         // if arr1[i] > prev1 & same for 2nd arr then return ans & move to next index & return 0 in snap count which is 0 as there was no swap
//         if (nums1[index] > prev1 && nums2[index] > prev2)
//             ans = min(ans, solve(nums1, nums2, index + 1, 0));
//         if (nums1[index] > prev2 && nums2[index] > prev1)
//         // if arr1[i] > prev2 diagonally & same for 2nd arr then return ans & move to next index & return 1 in swap count which is 1 as there was swap
//             ans = min(ans, 1 + solve(nums1, nums2, index + 1, 1));
//         return ans;
//     }
//     int minSwap(vector<int> &nums1, vector<int> &nums2)
//     {
//         // It means that previous index were swapped or not
//         nums1.insert(nums1.begin(), -1);
//         nums2.insert(nums2.begin(), -1);
//         bool swapped = 0;
//         return solve(nums1, nums2, 1, swapped);
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solve(vector<int> &nums1, vector<int> &nums2, int index, int swapped, vector<vector<int>> &dp)
//     {
//         if (index >= nums1.size())
//             return 0;

//         if (dp[index][swapped] != -1)
//             return dp[index][swapped];

//         int prev1 = nums1[index - 1];
//         int prev2 = nums2[index - 1];
//         int ans = INT_MAX;
//         // if elements at last index were swapped then we need to swap our prev1 and prev2, logically.
//         if (swapped)
//             swap(prev1, prev2);

//         // check if swap needed for elements at 'index'.
//         if (nums1[index] > prev1 && nums2[index] > prev2)
//         {
//             // no need of swap
//             ans = min(ans, solve(nums1, nums2, index + 1, 0, dp));
//         }
//         if (nums1[index] > prev2 && nums2[index] > prev1)
//         {
//             // swap
//             ans = min(ans, 1 + solve(nums1, nums2, index + 1, 1, dp));
//         }
//         return dp[index][swapped] = ans;
//     }
//     int minSwap(vector<int> &nums1, vector<int> &nums2)
//     {
//         // we put some -1 at the start of each array to make comparison easy.
//         nums1.insert(nums1.begin(), -1);
//         nums2.insert(nums2.begin(), -1);

//         // this variable will show if the last index was swapped or not(if swapped 1, else 0);
//         int swapped = 0, index = 1;
//         vector<vector<int>> dp(nums1.size(), vector<int>(2, -1));
//         return solve(nums1, nums2, index, swapped, dp);
//     }
//     // Tabulation (T.C -> O(n) & S.C -> O(n))
//     int minSwap(vector<int> &nums1, vector<int> &nums2)
//     {
//         // we put some -1 at the start of each array to make comparison easy.
//         int n = nums1.size();
//         nums1.insert(nums1.begin(), -1);
//         nums2.insert(nums2.begin(), -1);
//         // 2-D will be created
//         vector<vector<int>> dp(n + 2, vector<int>(2, 0));
//         // run a loop from end to the 1 in reverse order
//         for (int index = n; index >= 1; index--)
//         {
//             // run a loop from swapped i.e 0 to the 2 i.e value of 2-D
//             for (int swapped = 0; swapped < 2; swapped++)
//             {
//                 int prev1 = nums1[index - 1];
//                 int prev2 = nums2[index - 1];
//                 int ans = INT_MAX;
//                 // if elements at last index were swapped then we need to swap our prev1 and prev2, logically.
//                 if (swapped)
//                     swap(prev1, prev2);

//                 // check if swap needed for elements at 'index'.
//                 if (nums1[index] > prev1 && nums2[index] > prev2)
//                 {
//                     // no need of swap
//                     ans = min(ans, dp[index + 1][0]);
//                 }
//                 if (nums1[index] > prev2 && nums2[index] > prev1)
//                 {
//                     // swap, count +1;
//                     ans = min(ans, 1 + dp[index + 1][1]);
//                 }
//                 dp[index][swapped] = ans;
//             }
//         }
//         return dp[1][0];
//     }
//     // Space Optimization (T.C -> O(n) & S.C -> O(1))
//     int minSwap(vector<int> &nums1, vector<int> &nums2)
//     {
//         int n = nums1.size(), prev1, prev2, ans;

//         // we put some -1 at the start of each array to make comparison easy
//         nums1.insert(nums1.begin(), -1);
//         nums2.insert(nums2.begin(), -1);

//         vector<int> next(2, 0);
//         vector<int> cur(2, 0);

//         for (int index = n; index >= 1; index--)
//         {
//             for (int swapped = 0; swapped < 2; swapped++)
//             {
//                 prev1 = nums1[index - 1];
//                 prev2 = nums2[index - 1];
//                 ans = INT_MAX;
//                 // if elements at last index were swapped then we need to swap our prev1 and prev2, logically.
//                 if (swapped)
//                     swap(prev1, prev2);

//                 // check if swap needed for elements at 'index'.
//                 if (nums1[index] > prev1 && nums2[index] > prev2)
//                 {
//                     // no need of swap
//                     ans = min(ans, next[0]);
//                 }
//                 if (nums1[index] > prev2 && nums2[index] > prev1)
//                 {
//                     // swap, count +1;
//                     ans = min(ans, 1 + next[1]);
//                 }
//                 cur[swapped] = ans;
//             }
//             next = cur;
//         }
//         return next[0];
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Recursion (T.C -> O() & S.C -> O())
//     int solve(int index, int diff, int A[])
//     {
//         // Backward check
//         if (index < 0)
//             return 0;

//         int ans = 0;
//         // Run a loop from index - 1 to the starting in reverse order for backward checking
//         for (int j = index - 1; j >= 0; j--)
//         {
//             // If diff. b/w curr element & prev element == common difference then return ans
//             if (A[index] - A[j] == diff)
//             {
//                 ans = max(ans, 1 + solve(j, diff, A));
//             }
//         }
//         return ans;
//     }
//     int lengthOfLongestAP(int A[], int n)
//     {
//         // Base case
//         if (n <= 2)
//             return n;
//         int ans = 0;
//         // Recursion
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 ans = max(ans, 2 + solve(i, A[j] - A[i], A));
//             }
//         }
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int index, int diff, int A[], unordered_map<int, int> dp[])
//     {
//         // Backward check
//         if (index < 0)
//             return 0;

//         if (dp[index].count(diff))
//             return dp[index][diff];

//         int ans = 0;
//         for (int j = index - 1; j >= 0; j--)
//         {
//             if (A[index] - A[j] == diff)
//             {
//                 ans = max(ans, 1 + solveMem(j, diff, A, dp));
//             }
//         }
//         return dp[index][diff] = ans;
//     }
//     int lengthOfLongestAP(int A[], int n)
//     {
//         // Base case
//         if (n <= 2)
//             return n;
//         int ans = 0;
//         // RECURSION + MEMOIZATION
//         unordered_map<int, int> dp[n + 1];

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {

//                 ans = max(ans, 2 + solveMem(i, A[j] - A[i], A, dp));
//             }
//         }
//     }
//     // Tabulation (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     int lengthOfLongestAP(int A[], int n)
//     {
//         // Base case
//         if (n <= 2)
//             return n;
//         int ans = 0;
//         // TABULATION
//         unordered_map<int, int> dp[n + 1];
//         // run a loop from 1 to the end
//         for (int i = 1; i < n; i++)
//         {
//             // run a loop from starting to the i
//             for (int j = 0; j < i; j++)
//             {
//                 int diff = A[i] - A[j];
//                 int cnt = 1;

//                 // check if answer already present
//                 if (dp[j].count(diff))
//                 {
//                     cnt = dp[j][diff];
//                 }
//                 dp[i][diff] = 1 + cnt;
//                 ans = max(ans, dp[i][diff]);
//             }
//         }
//         return ans;
//     }
// };

// Unique Binary Search Tree
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(int n)
//     {
//         // Base case
//         if (n <= 1)
//             return 1;

//         int ans = 0;

//         // think i as root node
//         // run loop from 1 to the end
//         for (int i = 1; i <= n; i++)
//         {
//             // recursive call from 1 to i - 1 * n - i
//             ans += solve(i - 1) * solve(n - i);
//         }
//         return ans;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int n, vector<int> &dp)
//     {
//         if (n <= 1)
//             return 1;

//         if (dp[n] != -1)
//             return dp[n];

//         int ans = 0;
//         // think i as root nodes
//         for (int i = 1; i <= n; i++)
//         {
//             ans += solveMem(i - 1, dp) * solveMem(n - i, dp);
//         }
//         return dp[n] = ans;
//     }
//     // Tabulation (T.C -> O(n ^ 2) & S.C -> O(n))
//     int solveTab(int n)
//     {
//         vector<int> dp(n + 1, 0);
//         // Base case
//         dp[0] = 1;
//         dp[1] = 1;
//         // Run a loop from i (number of nodes) i.e 2 as (1 will return 0)
//         for (int i = 2; i <= n; i++)
//         {
//             // j(root node) to number of node
//             for (int j = 1; j <= i; j++)
//             {
//                 dp[i] += dp[j - 1] * dp[i - j];
//             }
//         }
//         return dp[n];
//     }
//     int numTrees(int n)
//     {
//         // RECURSION
//         // return solve(n);
//         // RECURSION + MEMOIZATION
//         /*
//         vector<int> dp(n+1, -1);
//         return solveMem(n, dp);
//         */
//         // TABULATION
//         // return solveTab(n);
//     }
// };

// Guess Number Higher or Lower
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(int start, int end)
//     {
//         // Base case
//         if (start >= end)
//             return 0;
//         int maxi = INT_MAX;
//         // Run a loop from start to end
//         for (int i = start; i <= end; i++)
//         {
//             // maxi will have ans
//             maxi = min(maxi, i + max(solve(start, i - 1), solve(i + 1, end)));
//         }
//         return maxi;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int start, int end, vector<vector<int>> &dp)
//     {
//         if (start >= end)
//             return 0;

//         if (dp[start][end] != -1)
//             return dp[start][end];

//         int maxi = INT_MAX;
//         for (int i = start; i <= end; i++)
//         {
//             maxi = min(maxi, i + max(solveMem(start, i - 1, dp), solveMem(i + 1, end, dp)));
//         }
//         return dp[start][end] = maxi;
//     }
//     // Tabulation (T.C -> O(n ^ 2) & S.C -> O(n ^ 2))
//     int solveTab(int n)
//     {
//         vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
//         // Run a loop from size / end to start in reverse order
//         for (int start = n; start >= 1; start--)
//         {
//             // run loop where end will start from start & end at end
//             for (int end = start; end <= n; end++)
//             {
//                 // if we already at end
//                 if (start == end)
//                     continue;
//                 else
//                 {
//                     int maxi = INT_MAX;
//                     // run loop from start to the end
//                     for (int i = start; i <= end; i++)
//                     {
//                         // maxi will have ans
//                         maxi = min(maxi, i + max(dp[start][i - 1], dp[i + 1][end]));
//                     }
//                     dp[start][end] = maxi;
//                 }
//             }
//         }
//         return dp[1][n];
//     }
//     int getMoneyAmount(int n)
//     {
//         // RECURSION
//         // return solve(1, n);

//         // RECURSION + MEMOIZATION
//         /*
//         vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
//         return solveMem(1, n, dp);
//
//         // TABULATION
//         return solveTab(n);
//     }
// };

// Buy & Sell Stock (T.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         // mini will have 0 price
//         int mini = prices[0];
//         int n = prices.size();
//         int profit = 0;
//         // run a loop from 1 to the end
//         for (int i = 1; i < n; i++)
//         {
//             int diff = prices[i] - mini;
//             profit = max(profit, diff);
//             mini = min(mini, prices[i]);
//         }
//         return profit;
//     }
// };

// Buy & Sell Stock 2nd Approach
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(int index, int buy, vector<int> &prices)
//     {
//         // Base case
//         // If already traversed
//         if (index == prices.size())
//             return 0;
//         int profit = 0;
//         if (buy)
//         {
//             // In buy case we will add -ve of prices of current index
//             profit = max((-prices[index] + solve(index + 1, 0, prices)), (0 + solve(index + 1, 1, prices)));
//         }
//         // When buy == 0
//         else
//         {
//             profit = max((+prices[index] + solve(index + 1, 1, prices)), (0 + solve(index + 1, 0, prices)));
//         }
//         return profit;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int index, int buy, vector<int> &prices, vector<vector<int>> &dp)
//     {
//         if (index == prices.size())
//             return 0;

//         if (dp[index][buy] != -1)
//             return dp[index][buy];

//         int profit = 0;

//         if (buy)
//         {
//             profit = max((-prices[index] + solveMem(index + 1, 0, prices, dp)),
//                          (0 + solveMem(index + 1, 1, prices, dp)));
//         }
//         // buy == 0
//         else
//         {
//             profit = max((+prices[index] + solveMem(index + 1, 1, prices, dp)),
//                          (0 + solveMem(index + 1, 0, prices, dp)));
//         }
//         return dp[index][buy] = profit;
//     }
//     // Tabulation (T.C -> O(n) & S.C -> O(n))
//     int solveTab(vector<int> &prices)
//     {
//         int n = prices.size();

//         vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//         // Run a loop from n - 1 to start in reverse order
//         for (int index = n - 1; index >= 0; index--)
//         {
//             // Run a loop where buy = 1 to start in reverse order
//             for (int buy = 1; buy >= 0; buy--)
//             {
//                 int profit = 0;
//                 if (buy)
//                 {
//                     profit = max((-prices[index] + dp[index + 1][0]),
//                                  (0 + dp[index + 1][1]));
//                 }
//                 // buy == 0
//                 else
//                 {
//                     profit = max((+prices[index] + dp[index + 1][1]),
//                                  (0 + dp[index + 1][0]));
//                 }
//                 dp[index][buy] = profit;
//             }
//         }
//         return dp[0][1];
//     }
//     // Space Optimization (T.C -> O(n) & S.C -> O(1))
//     int solveSpaceOP(vector<int> &prices)
//     {
//         int n = prices.size();
//         vector<int> curr(2, 0);
//         vector<int> next(2, 0);
//         for (int index = n - 1; index >= 0; index--)
//         {
//             for (int buy = 1; buy >= 0; buy--)
//             {
//                 int profit = 0;
//                 if (buy)
//                 {
//                     profit = max((-prices[index] + next[0]),
//                                  (0 + next[1]));
//                 }
//                 // buy == 0
//                 else
//                 {
//                     profit = max((+prices[index] + next[1]),
//                                  (0 + next[0]));
//                 }
//                 curr[buy] = profit;
//             }
//             next = curr;
//         }
//         return next[1];
//     }

//     int maxProfit(vector<int> &prices)
//     {

//         // RECURSION
//         // return solve(0, 1, prices);

//         // RECURSION + MEMOIZATION
//         /*
//         int n = prices.size();
//         vector<vector<int>> dp(n+1, vector<int> (2, -1));
//         return solveMem(0, 1, prices, dp);
//         */

//         // TABULATION
//         // return solveTab(prices);
//         // SPACE OPTIMIZATION
//         return solveSpaceOP(prices);
//     }
// };

// Buy & Sell [Part 3rd]
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(int index, int buy, vector<int> &prices, int limit)
//     {
//         // Base case
//         if (index == prices.size())
//             return 0;
//         // Base case
//         if (limit == 0)
//             return 0;

//         int profit = 0;
//         if (buy)
//         {
//             profit = max((-prices[index] + solve(index + 1, 0, prices, limit)), (0 + solve(index + 1, 1, prices, limit)));
//         }
//         // buy == 0
//         else
//         {
//             profit = max((+prices[index] + solve(index + 1, 1, prices, limit - 1)), (0 + solve(index + 1, 0, prices, limit)));
//         }
//         return profit;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int index, int buy, vector<int> &prices, vector<vector<vector<int>>> &dp, int limit)
//     {
//         if (index == prices.size())
//             return 0;

//         if (limit == 0)
//             return 0;

//         if (dp[index][buy][limit] != -1)
//             return dp[index][buy][limit];

//         int profit = 0;
//         if (buy)
//         {
//             profit = max((-prices[index] + solveMem(index + 1, 0, prices, dp, limit)),
//                          (0 + solveMem(index + 1, 1, prices, dp, limit)));
//         }
//         // buy == 0
//         else
//         {
//             profit = max((+prices[index] + solveMem(index + 1, 1, prices, dp, limit - 1)),
//                          (0 + solveMem(index + 1, 0, prices, dp, limit)));
//         }
//         return dp[index][buy][limit] = profit;
//     }
//     // Tabulation (T.C -> O(n * 2 * 3) & S.C -> O(n * 2 * 3))
//     int solveTab(vector<int> &prices)
//     {
//         int n = prices.size();
//         // We have to make 3-D dp because three things are changing i.e limit, buy & index
//         vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0))); // 3D - DP
//         // Run a loop in reverse order
//         for (int index = n - 1; index >= 0; index--)
//         {
//             // run a loop for traversing buy from 0 to <= 1
//             for (int buy = 0; buy <= 1; buy++)
//             {
//                 // run a loop for traversing limit from 1 to <= 2 not greater than 2 as condition given in the question
//                 for (int limit = 1; limit <= 2; limit++)
//                 {
//                     int profit = 0;
//                     if (buy)
//                     {
//                         profit = max((-prices[index] + dp[index + 1][0][limit]),
//                                      (0 + dp[index + 1][1][limit]));
//                     }
//                     // buy == 0
//                     else
//                     {
//                         profit = max((+prices[index] + dp[index + 1][1][limit - 1]),
//                                      (0 + dp[index + 1][0][limit]));
//                     }
//                     dp[index][buy][limit] = profit;
//                 }
//             }
//         }
//         return dp[0][1][2];
//     }
//     // Space Optimization (T.C -> O(n) & S.C -> O(1))
//     int solveSpaceOP(vector<int> &prices)
//     {
//         int n = prices.size();
//         vector<vector<int>> curr(2, vector<int>(3, 0));
//         vector<vector<int>> next(2, vector<int>(3, 0));
//         for (int index = n - 1; index >= 0; index--)
//         {
//             for (int buy = 0; buy <= 1; buy++)
//             {
//                 for (int limit = 1; limit <= 2; limit++)
//                 {

//                     int profit = 0;

//                     if (buy)
//                     {
//                         profit = max((-prices[index] + next[0][limit]),
//                                      (0 + next[1][limit]));
//                     }
//                     // buy == 0
//                     else
//                     {
//                         profit = max((+prices[index] + next[1][limit - 1]),
//                                      (0 + next[0][limit]));
//                     }
//                     curr[buy][limit] = profit;
//                 }
//             }
//             next = curr;
//         }
//         return next[1][2];
//     }

//     int maxProfit(vector<int> &prices)
//     {

//         // RECURSION
//         // return solve(0, 1, prices, 2);

//         // RECURSION + MEMOIZATION
//         /*
//         int n = prices.size();

//         vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (3, -1)));   // 3D - DP
//         return solveMem(0, 1, prices, dp, 2);
//         */

//         // TABULATION
//         // return solveTab(prices);

//         // SPACE OPTIMIZATION
//         return solveSpaceOP(prices);
//     }
// };

// Buy & Sell [Part 4th]
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(int index, int operationNo, int k, vector<int> &prices)
//     {
//         // Base case
//         if (index == prices.size())
//             return 0;
//         // Base case
//         if (operationNo == 2 * k)
//             return 0;

//         int profit = 0;
//         // For Buy
//         if (operationNo % 2 == 0)
//         {
//             // Buy Allowed
//             profit = max((-prices[index] + solve(index + 1, operationNo + 1, k, prices)),
//                          (0 + solve(index + 1, operationNo, k, prices)));
//         }
//         // Buy Not Allowed
//         else
//         {
//             profit = max((+prices[index] + solve(index + 1, operationNo + 1, k, prices)),
//                          (0 + solve(index + 1, operationNo, k, prices)));
//         }
//         return profit;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(int index, int operationNo, int k, vector<int> &prices, vector<vector<int>> &dp)
//     {
//         if (index == prices.size())
//             return 0;

//         if (operationNo == 2 * k)
//             return 0;

//         if (dp[index][operationNo] != -1)
//             return dp[index][operationNo];

//         int profit = 0;

//         if (operationNo % 2 == 0)
//         {
//             // Buy Allowed
//             profit = max((-prices[index] + solveMem(index + 1, operationNo + 1, k, prices, dp)),
//                          (0 + solveMem(index + 1, operationNo, k, prices, dp)));
//         }

//         // Buy Not Allowed
//         else
//         {
//             profit = max((+prices[index] + solveMem(index + 1, operationNo + 1, k, prices, dp)),
//                          (0 + solveMem(index + 1, operationNo, k, prices, dp)));
//         }
//         return dp[index][operationNo] = profit;
//     }
//     // Tabulation  (T.C -> O(n * k) & S.C -> O(n * k))
//     int solveTab(int k, vector<int> &prices)
//     {
//         int n = prices.size();
//         // Here, prices & k are same only index & operation no.
//         vector<vector<int>> dp(n + 1, vector<int>(2 * k + 1, 0));
//         // Run a loop in reverse order
//         for (int index = n - 1; index >= 0; index--)
//         {
//             // Run a loop for operation no.
//             for (int operationNo = 0; operationNo < 2 * k; operationNo++)
//             {
//                 int profit = 0;
//                 if (operationNo % 2 == 0)
//                 {
//                     // Buy Allowed
//                     profit = max((-prices[index] + dp[index + 1][operationNo + 1]),
//                                  (0 + dp[index + 1][operationNo]));
//                 }
//                 // Buy Not Allowed
//                 else
//                 {
//                     profit = max((+prices[index] + dp[index + 1][operationNo + 1]),
//                                  (0 + dp[index + 1][operationNo]));
//                 }
//                 dp[index][operationNo] = profit;
//             }
//         }
//         return dp[0][0];
//     }
//     // Space Optimization (T.C -> O(n * k) & S.C -> O(k))
//     int solveSpaceOP(int k, vector<int> &prices)
//     {
//         int n = prices.size();

//         vector<int> curr(2 * k + 1, 0);
//         vector<int> next(2 * k + 1, 0);

//         for (int index = n - 1; index >= 0; index--)
//         {
//             for (int operationNo = 0; operationNo < 2 * k; operationNo++)
//             {
//                 int profit = 0;

//                 if (operationNo % 2 == 0)
//                 {
//                     // Buy Allowed
//                     profit = max((-prices[index] + next[operationNo + 1]),
//                                  (0 + next[operationNo]));
//                 }
//                 // Buy Not Allowed
//                 else
//                 {
//                     profit = max((+prices[index] + next[operationNo + 1]),
//                                  (0 + next[operationNo]));
//                 }
//                 curr[operationNo] = profit;
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int maxProfit(int k, vector<int> &prices)
//     {
//         // RECURSION
//         // return solve(0, 0, k, prices);

//         // RECURSION + MEMOIZATION
//         int n = prices.size();
//         vector<vector<int>> dp(n+1, vector<int> (2*k, -1));
//         return solveMem(0, 0, k, prices, dp);
//         // TABULATION
//         // return solveTab(k, prices);
//         // SPACE OPTIMIZATION
//         return solveSpaceOP(k, prices);
//     }
// };

// Longest Common Subsequence
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(string &a, string &b, int i, int j)
//     {
//         // Base Case
//         if (i == a.length())
//             return 0;

//         // Base Case
//         if (j == b.length())
//             return 0;

//         int ans = 0;
//         // if both matched
//         if (a[i] == b[j])
//             ans = 1 + solve(a, b, i + 1, j + 1);
//         else
//         {
//             // find max. b/w increasing i & by increasing j
//             ans = max(solve(a, b, i + 1, j), solve(a, b, i, j + 1));
//         }
//         return ans;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(string &a, string &b, int i, int j, vector<vector<int>> &dp)
//     {
//         // Base Case
//         if (i == a.length())
//             return 0;

//         if (j == b.length())
//             return 0;

//         if (dp[i][j] != -1)
//             return dp[i][j];

//         int ans = 0;

//         if (a[i] == b[j])
//             ans = 1 + solveMem(a, b, i + 1, j + 1, dp);

//         else
//         {
//             ans = max(solveMem(a, b, i + 1, j, dp), solveMem(a, b, i, j + 1, dp));
//         }
//         return dp[i][j] = ans;
//     }
//     // Tabulation (T.C -> O() & S.C -> O())
//     int solveTab(string &a, string &b)
//     {
//         int n1 = a.length();
//         int n2 = b.length();
//         // Create a 2-D vector because i & j are changing
//         vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
//         // In bottom - up approach we do opposite of top down
//         // run a loop in reverse order
//         for (int i = n1 - 1; i >= 0; i--)
//         {
//             // again opposite of j in top down
//             for (int j = n2 - 1; j >= 0; j--)
//             {
//                 int ans = 0;

//                 if (a[i] == b[j])
//                     ans = 1 + dp[i + 1][j + 1];
//                 else
//                 {
//                     ans = max(dp[i + 1][j], dp[i][j + 1]);
//                 }
//                 dp[i][j] = ans;
//             }
//         }
//         return dp[0][0];
//     }
//     // Space Optimization (T.C -> O(n * m) & S.C -> O(m))
//     int solveSpaceOP(string &a, string &b)
//     {
//         int n1 = a.length();
//         int n2 = b.length();
//         vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));

//         vector<int> currRow(n2 + 1, 0);
//         vector<int> nextRow(n2 + 1, 0);

//         for (int i = n1 - 1; i >= 0; i--)
//         {
//             for (int j = n2 - 1; j >= 0; j--)
//             {
//                 int ans = 0;

//                 if (a[i] == b[j])
//                     ans = 1 + nextRow[j + 1];

//                 else
//                 {
//                     ans = max(nextRow[j], currRow[j + 1]);
//                 }

//                 currRow[j] = ans;
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     int longestCommonSubsequence(string text1, string text2)
//     {
//         // RECURSION
//         // return solve(text1, text2, 0, 0);

//         // RECURSION + MEMOIZATION
//         /*
//         int n1 = text1.length();
//         int n2 = text2.length();

//         vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));

//         return solveMem(text1, text2, 0, 0, dp);
//         */

//         // TABULATION
//         // return solveTab(text1, text2);

//         // SPACE OPTIMIZATION
//         return solveSpaceOP(text1, text2);
//     }
// };

// Longest Palindrome Subsequence
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     // Space Optimized (T.C -> O(n * m) & S.C -> O(m))
//     int solveSpaceOP(string& a, string& b){

//         int n1 = a.length();
//         int n2 = b.length();

//         vector<vector<int>> dp(n1+1, vector<int> (n2+1, 0));

//         vector<int> currRow(n2+1, 0);
//         vector<int> nextRow(n2+1, 0);

//         for(int i = n1-1; i>=0; i--){
//             for(int j = n2-1; j>=0; j--){
//                 int ans = 0;

//                 if(a[i] == b[j])
//                     ans = 1 + nextRow[j+1];

//                 else
//                 {
//                     ans = max(nextRow[j], currRow[j+1]);
//                 }

//                 currRow[j] = ans;
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     int longestPalindromeSubseq(string s) {

//         string revS = s;
//         // int n = s.length();
//         // for(int i=n-1; i>=0; i--){
//         //     revS += s[i];
//         // }
//         reverse(revS.begin(), revS.end());
//         return solveSpaceOP(s, revS);
//     }
// };

// EDIT Distance
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int solve(string &a, string &b, int i, int j)
//     {
//         // Base case
//         if (i == a.length())
//             // if index is at the end of string then it means a word1 is < than word2 then the ans is 2nd word - extra part which is not in a
//             return (b.length() - j);
//         // if j does the same like i then a - i
//         if (j == b.length())
//             return (a.length() - i);

//         int ans = 0;
//         // if same words found then move next for the next element
//         if (a[i] == b[j])
//             return solve(a, b, i + 1, j + 1);
//         else
//         {
//             // insert
//             int insertAns = 1 + solve(a, b, i, j + 1);

//             // delete
//             int deleteAns = 1 + solve(a, b, i + 1, j);

//             // update
//             int replaceAns = 1 + solve(a, b, i + 1, j + 1);
//             // Calculate min. b/w them
//             ans = min(insertAns, min(deleteAns, replaceAns));
//         }
//         return ans;
//     }
//     // Memoization (T.C -> O() & S.C -> O())
//     int solveMem(string &a, string &b, int i, int j, vector<vector<int>> &dp)
//     {
//         // Base case
//         if (i == a.length())
//             return (b.length() - j);

//         if (j == b.length())
//             return (a.length() - i);

//         if (dp[i][j] != -1)
//             return dp[i][j];

//         int ans = 0;

//         if (a[i] == b[j])
//             return solveMem(a, b, i + 1, j + 1, dp);

//         else
//         {
//             // insert
//             int insertAns = 1 + solveMem(a, b, i, j + 1, dp);

//             // delete
//             int deleteAns = 1 + solveMem(a, b, i + 1, j, dp);

//             // update
//             int replaceAns = 1 + solveMem(a, b, i + 1, j + 1, dp);

//             ans = min(insertAns, min(deleteAns, replaceAns));
//         }
//         return dp[i][j] = ans;
//     }
//     // Tabulation (T.C -> O() & S.C -> O())
//     int solveTab(string &a, string &b)
//     {
//         int n1 = a.length();
//         int n2 = b.length();
//         // Create a 2-D vector because i & j are changing
//         vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
//         // we want b - j from j start to end
//         for (int j = 0; j < n2; j++)
//         {
//             dp[n1][j] = b.length() - j;
//         }
//         // we want a - i from i start to end
//         for (int i = 0; i < n1; i++)
//         {
//             dp[i][n2] = a.length() - i;
//         }
//         // Run a loop in reverse order as it is bottom up approach
//         for (int i = n1 - 1; i >= 0; i--)
//         {
//             // same for j
//             for (int j = n2 - 1; j >= 0; j--)
//             {
//                 int ans = 0;

//                 if (a[i] == b[j])
//                     ans = dp[i + 1][j + 1];

//                 else
//                 {
//                     // insert
//                     int insertAns = 1 + dp[i][j + 1];

//                     // delete
//                     int deleteAns = 1 + dp[i + 1][j];

//                     // update
//                     int replaceAns = 1 + dp[i + 1][j + 1];

//                     ans = min(insertAns, min(deleteAns, replaceAns));
//                 }
//                 dp[i][j] = ans;
//             }
//         }
//         return dp[0][0];
//     }
//     // Space Optimization (T.C -> O(n * m) & S.C -> O(min. of n or m))
//     int solveSpaceOP(string &a, string &b)
//     {
//         int n1 = a.length();
//         int n2 = b.length();

//         vector<int> curr(n2 + 1, 0);
//         vector<int> next(n2 + 1, 0);

//         for (int j = 0; j < n2; j++)
//         {
//             next[j] = b.length() - j; // as last row is showed by next
//         }

//         for (int i = n1 - 1; i >= 0; i--)
//         {
//             for (int j = n2 - 1; j >= 0; j--)
//             {

//                 // Important catch from base case
//                 curr[b.length()] = a.length() - i;

//                 int ans = 0;

//                 if (a[i] == b[j])
//                     ans = next[j + 1];

//                 else
//                 {
//                     // insert
//                     int insertAns = 1 + curr[j + 1];

//                     // delete
//                     int deleteAns = 1 + next[j];

//                     // update
//                     int replaceAns = 1 + next[j + 1];

//                     ans = min(insertAns, min(deleteAns, replaceAns));
//                 }
//                 curr[j] = ans;
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int minDistance(string word1, string word2)
//     {
//         // RECURSION
//         // return solve(word1, word2, 0, 0);

//         // RECURSION + MEMOIZATION
//         /*
//         int n1 = word1.length();
//         int n2 = word2.length();

//         vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));

//         return solveMem(word1, word2, 0, 0, dp);
//         */

//         // TABULATION
//         // return solveTab(word1, word2);

//         // SPACE OPTIMIZATION
//         if (word1.length() == 0)
//             return word2.length();

//         if (word2.length() == 0)
//             return word1.length();

//         return solveSpaceOP(word1, word2);
//     }
// };

// Maximum Rectangle with all 1's (T.C -> O(n * m + n))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     // Using longest histogram method
//     vector<int> nextsmall(vector<int> &arr, int n)
//     {
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             int c = arr[i];
//             while (s.top() != -1 && arr[s.top()] >= c)
//             {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     vector<int> prevsmall(vector<int> &arr, int n)
//     {
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
//         for (int i = 0; i < n; i++)
//         {
//             int c = arr[i];
//             while (s.top() != -1 && arr[s.top()] >= c)
//             {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int large(vector<int> &height, int n)
//     {
//         int area = INT_MIN;

//         vector<int> prev(n);
//         vector<int> next(n);
//         prev = prevsmall(height, n);
//         next = nextsmall(height, n);
//         for (int i = 0; i < n; i++)
//         {
//             if (next[i] == -1)
//             {
//                 next[i] = n;
//             }
//             int l = height[i];
//             int b = next[i] - prev[i] - 1;
//             int newarea = l * b;
//             area = max(area, newarea);
//         }
//         return area;
//     }

// public:
//     int maximalRectangle(vector<vector<char>> &matrix)
//     {
//         // Base case
//         if (matrix.empty())
//         {
//             return 0;
//         }
//         int maxRec = 0;
//         // histogram for height
//         vector<int> height(matrix[0].size(), 0);
//         // run a loop to traverse in 2-D matrix
//         // Traverse in each row
//         for (int i = 0; i < matrix.size(); i++)
//         {
//             // Traverse in each column
//             for (int j = 0; j < matrix[0].size(); j++)
//             {
//                 // If 0 height then height of column = 0
//                 if (matrix[i][j] == '0')
//                 {
//                     height[j] = 0;
//                 }
//                 else
//                 {
//                     // We got 1 so we will increment height
//                     height[j]++;
//                 }
//             }
//             // Return max. rectangle containing 1's
//             maxRec = max(maxRec, large(height, matrix[0].size()));
//         }
//         return maxRec;
//     }
// };

// Wildcard Pattern Matching
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Recursive
//     bool f(int i, int j, string &p, string &s)
//     {
//         // Base case
//         // If both string & pattern are consumed
//         if (i < 0 && j < 0)
//             return true;
//         // If string is consumed but pattern is not consumed (so, it is invalid pattern)
//         if (i < 0 && j >= 0)
//             return false;
//         // If pattern is consumed but string is not consumed
//         if (j < 0 && i >= 0)
//         {
//             // Run a loop for pattern in reverse order
//             for (int k = i; k >= 0; k--)
//             {
//                 // If except star anything is found
//                 if (p[k] != '*')
//                     return false;
//             }
//             return true;
//         }
//         // Match then move string and pattern one step before
//         if (p[i] == s[j] || p[i] == '?')
//             return f(i - 1, j - 1, p, s);
//         // if pattern has star
//         if (p[i] == '*')
//             return f(i - 1, j, p, s) || f(i, j - 1, p, s);
//         // NotMatch
//         return false;
//     }
//     bool isMatch(string s, string p)
//     {
//         int n = p.size();
//         int m = s.size();
//         return f(n - 1, m - 1, p, s);
//     }
//     // Memoization
//     bool f(int i, int j, string &p, string &s, vector<vector<int>> &dp)
//     {
//         if (i < 0 && j < 0)
//             return true;
//         if (i < 0 && j >= 0)
//             return false;
//         if (j < 0 && i >= 0)
//         {
//             for (int k = i; k >= 0; k--)
//             {
//                 if (p[k] != '*')
//                     return false;
//             }
//             return true;
//         }
//         if (dp[i][j] != -1)
//             return dp[i][j];
//         // Match
//         if (p[i] == s[j] || p[i] == '?')
//             return dp[i][j] = f(i - 1, j - 1, p, s, dp);
//         if (p[i] == '*')
//             return dp[i][j] = f(i - 1, j, p, s, dp) || f(i, j - 1, p, s, dp);
//         // NotMatch
//         return dp[i][j] = false;
//     }
//     bool isMatch(string s, string p)
//     {
//         int n = p.size();
//         int m = s.size();
//         vector<vector<int>> dp(n, vector<int>(m, -1));
//         return f(n - 1, m - 1, p, s, dp);
//     }
//     // Tabulation (T.C -> O(n * m) & S.C -> O(m * n))
//     bool isMatch(string s, string p)
//     {
//         // n has size of p
//         int n = p.size();
//         // m has size of s
//         int m = s.size();
//         // Create a 2-D dp because i and j both are changing
//         vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
//         // Base case
//         dp[0][0] = true;
//         // Bottom up will run loop in o/p order of top down
//         for (int j = 1; j <= m; j++)
//             dp[0][j] = false;
//         // Bottom up will run loop in o/p order of top down
//         for (int i = 1; i <= n; i++)
//         {
//             bool flag = true;
//             for (int k = 1; k <= i; k++)
//             {
//                 if (p[k - 1] != '*')
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             dp[i][0] = flag;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= m; j++)
//             {
//                 if (p[i - 1] == s[j - 1] || p[i - 1] == '?')
//                     dp[i][j] = dp[i - 1][j - 1];
//                 else if (p[i - 1] == '*')
//                     dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//                 else
//                     dp[i][j] = false;
//             }
//         }
//         return dp[n][m];
//     }
//     // Space Optimization T.C -> O(n * m) & S.C -> O(m)
//     bool isMatch(string s, string p)
//     {
//         int n = p.size();
//         int m = s.size();
//         vector<bool> prev(m + 1, false), curr(m + 1, false);
//         prev[0] = true;
//         for (int i = 1; i <= n; i++)
//         {
//             bool flag = true;
//             for (int k = 1; k <= i; k++)
//             {
//                 if (p[k - 1] != '*')
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             curr[0] = flag;
//             for (int j = 1; j <= m; j++)
//             {
//                 if (p[i - 1] == s[j - 1] || p[i - 1] == '?')
//                     curr[j] = prev[j - 1];
//                 else if (p[i - 1] == '*')
//                     curr[j] = prev[j] || curr[j - 1];
//                 else
//                     curr[j] = false;
//             }
//             prev = curr;
//         }
//         return prev[m];
//     }
// };

// Greedy Method
// N meetings in one room (T.C -> O(n log n) & S.C -> O(n))
// #include <bits/stdc++.h>
// using namespace std;
// int maxMeetings(int start[], int end[], int n)
// {
//     // count intially == 1
//     int cnt = 1;
//     int maxx;
//     // 2-D vector one for starting time & 2nd for end time
//     vector<vector<int>> v;
//     // Run a loop from start to end
//     for (int i = 0; i < n; i++)
//     {
//         // push pair of start and end in v
//         v.push_back({end[i], start[i]});
//     }
//     // Sort the vector with there pairs
//     sort(v.begin(), v.end());
//     // maxx is ansEnd
//     maxx = v[0][0];

//     for (int i = 1; i < n; i++)
//     {
//         if (v[i][1] > maxx)
//         {

//             cnt++;

//             maxx = v[i][0];
//         }
//     }
//     return cnt;
// }

// Shop in candy store (T.C -> O(n log n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> candyStore(int price[], int n, int k)
// {
//     // sort the price array
//     sort(price, price + n);

//     int mini = 0;
//     // i is buy candies and j is free
//     int i = 0, j = n - 1;
//     // run a loop until we reach to the end
//     while (i <= j)
//     {
//         // Add price array each index value in ans
//         mini += price[i];
//         // Move to next index after adding of current is done
//         i++;
//         // j is free candies
//         j = j - k;
//     }
//     // For max. candy buy the expensive one and take minimum one as free
//     // sort the price array
//     sort(price, price + n, greater<int>());
//     int maxi = 0;
//     i = 0, j = n - 1;

//     while (i <= j)
//     {
//         // ans2 will have prices
//         maxi = maxi + price[i];
//         i++;
//         j = j - k;
//     }
//     return {mini, maxi};
// }

// Check if it possible to survive on island (T.C -> O(1) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int minimumDays(int s, int n, int m)
// {
//     int ans = 0;
//     // buy days = s(days for survival) - sunday
//     int buy = s - s / 7;
//     // if totalfood is multiple of n
//     if ((s * m) % n == 0)
//         ans = (s * m) / n;
//     else
//         ans = (s * m) / n + 1;
//     // if ans <= buy then return ans because then survival is possible
//     if (ans <= buy)
//         return ans;
//     else
//         // survival is not possible
//         return -1;
// }

// Reverse words in a given string (T.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     // Function to reverse words in a given string.
//     string reverseWords(string S)
//     {
//         // code here
//         string ans = "";
//         string temp = "";
//         for (int i = S.length() - 1; i >= 0; i--)
//         {
//             if (S[i] == '.')
//             {
//                 reverse(temp.begin(), temp.end());
//                 ans = ans + temp;
//                 ans.push_back('.');
//                 temp = "";
//             }
//             else
//             {
//                 temp.push_back(S[i]);
//             }
//         }
//         reverse(temp.begin(), temp.end());
//         ans = ans + temp;
//         return ans;
//     }
// };

// Choclate Distribution Problem (T.C -> O(n) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     long long find(vector<long long> a, long long n, long long m)
//     {
//         sort(a.begin(), a.end());
//         // Base case
//         if (n == 1 && m == 1)

//             return 0;

//         int i = 0;
//         int j = m - 1;

//         int mini = INT_MAX;

//         while (j < a.size())
//         {
//             int diff = a[j] - a[i];
//             mini = min(diff, mini);
//             i++;
//             j++;
//         }
//         return mini;
//     }
// };

// Huffman Encoding (T.C -> O(O(N * LogN) ) & S.C -> O(N))
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     class node
//     {
//     public:
//         // created a priority queue
//         int data;
//         node *left;
//         node *right;
//         node(int data)
//         {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };
//     //  create a minheap
//     class cmp
//     {
//     public:
//         bool operator()(node *a, node *b)
//         {
//             return a->data > b->data;
//         }
//     };
//     void solve(node *root, string temp, vector<string> &ans)
//     {
//         // If no child node
//         if (root->left == NULL && root->right == NULL)
//         {
//             ans.push_back(temp);
//             return;
//         }
//         // Otherwise give call for left side
//         solve(root->left, temp + '0', ans);
//         // Otherwise give call for right side
//         solve(root->right, temp + '1', ans);
//     }
//     vector<string> huffmanCodes(string S, vector<int> f, int N)
//     {
//         // Created a minHeap
//         priority_queue<node *, vector<node *>, cmp> p;
//         for (int i = 0; i < N; i++)
//         {
//             // temp will have new node with f[at ith value]
//             node *temp = new node(f[i]);
//             p.push(temp);
//         }
//         while (p.size() > 1)
//         {
//             node *left = p.top();
//             p.pop();

//             node *right = p.top();
//             p.pop();

//             node *newnode = new node(left->data + right->data);
//             newnode->left = left;
//             newnode->right = right;

//             p.push(newnode);
//         }
//         node *root = p.top();
//         vector<string> ans;
//         // temp is empty string which will add 0 on going left whereas 1 for right node
//         string temp = "";
//         solve(root, temp, ans);
//         return ans;
//     }
// };

// Fractional Knapsack (T.C -> O(N logN) & S.C -> O(1))
// #include <bits/stdc++.h>
// using namespace std;
// struct Item
// {
//     int value;
//     int weight;
// };
// class Solution
// {
// public:
//     static bool cmp(Item a, Item b)
//     {
//         return a.value * b.weight > b.value * a.weight;
//     }
//     // Function to get the maximum total value in the knapsack
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         double ans = 0;
//         // First sort the arr
//         sort(arr, arr + n, cmp);
//         // Run a loop from start to the end
//         for (int i = 0; i < n; i++)
//         {
//             if (W - arr[i].weight >= 0)
//             {
//                 ans += arr[i].value;
//                 W -= arr[i].weight;
//             }
//             else
//             {
//                 double r = (W * arr[i].value * 1.0) / arr[i].weight;
//                 // add r in ans and return it
//                 ans += r;
//                 break;
//             }
//         }
//         return ans;
//     }
// };

// Job Sequencing Problem (T.C -> O(N logN) & S.C -> O(N))
// #include <bits/stdc++.h>
// using namespace std;
// struct Job
// {
//     int id;     // Job Id
//     int dead;   // Deadline of job
//     int profit; // Profit if job is over before or on deadline
// };
// class Solution
// {
// public:
//     static bool comp(Job a, Job b)
//     {
//         return a.profit > b.profit;
//     }
//     // Function to find the maximum profit and the number of jobs done
//     vector<int> JobScheduling(Job arr[], int n)
//     {
//         // sort the array
//         sort(arr, arr + n, comp);

//         bool done[n] = {0};

//         int day = 0, profit = 0;
//         // run a loop
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = min(n, arr[i].dead - 1); j >= 0; j--)
//             {
//                 // if done[j] is false then add + 1 in day
//                 if (done[j] == false)
//                 {
//                     day += 1;
//                     // add current index profit in profit
//                     profit += arr[i].profit;
//                     done[j] = true;
//                     break;
//                 }
//             }
//         }
//         return {day, profit};
//     }
// };




















