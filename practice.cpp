// 1. Prime Number in Range
// Problem:
// Print all prime numbers between L and R.

// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int L = 10, R = 30;

//     for (int i = L; i <= R; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


// 🔹 2. Second Largest Element

// Problem:
// Find second largest number in array.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 5, 20, 8};
//     int n = 4;

//     int first = -1, second = -1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         } else if (arr[i] > second && arr[i] != first) {
//             second = arr[i];
//         }
//     }

//     cout << "Second Largest: " << second;
//     return 0;
// }


// 🔹 3. Reverse a Number

// Problem:
// Reverse digits of a number.

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1234, rev = 0;

//     while (n > 0) {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n /= 10;
//     }

//     cout << rev;
//     return 0;
// }


// 🔹 4. Count Vowels in String

// Problem:
// Count number of vowels.

// ✅ C++ Solution
// #include <iostream>
// using namespace std;

// int main() {
//     string str = "Priyanka";
//     int count = 0;

//     for (char c : str) {
//         c = tolower(c);
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             count++;
//         }
//     }

//     cout << "Vowels: " << count;
//     return 0;
// }



// 5. Armstrong Number
// Problem:
// Check if number is Armstrong.

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n = 153, sum = 0, temp = n;

//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, 3);
//         temp /= 10;
//     }

//     if (sum == n)
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";

//     return 0;
// }

// 🔹 6. Fibonacci Series
// Problem:
// Print first n Fibonacci numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     int a = 0, b = 1;

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }

//     return 0;
// }
// 🔹 7. Sum of Digits

// Problem:
// Find sum of digits of a number.

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1234, sum = 0;

//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }

//     cout << sum;
//     return 0;
// }



// 🔥 1. Remove Duplicates & Sort (Very Common)

// Problem:
// Given an array, remove duplicates and print sorted array.

// 🧠 Example
// Input: 5 3 5 2 3 1
// Output: 1 2 3 5

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int arr[] = {5, 3, 5, 2, 3, 1};
//     int n = 6;

//     set<int> s;

//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);
//     }

//     for (auto x : s) {
//         cout << x << " ";
//     }

//     return 0;
// }


// 🔥 2. Move All Zeros to End

// Problem:
// Move all 0s to end without changing order of other elements.

// 🧠 Example

// Input: 1 0 2 0 4 0
// Output: 1 2 4 0 0 0

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 0, 2, 0, 4, 0};
//     int n = 6;

//     int index = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             arr[index++] = arr[i];
//         }
//     }

//     while (index < n) {
//         arr[index++] = 0;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// 🔥 3. String Compression (TCS Favorite)

// Problem:
// Compress string like "aaabbc" → "a3b2c1"

// #include <iostream>
// using namespace std;

// int main() {
//     string str = "aaabbc";
//     int n = str.length();

//     for (int i = 0; i < n; i++) {
//         int count = 1;

//         while (i < n - 1 && str[i] == str[i + 1]) {
//             count++;
//             i++;
//         }

//         cout << str[i] << count;
//     }

//     return 0;
// }

// 🔥 4. Find Missing Number (1 to N)

// Problem:
// Array contains numbers from 1 to N, one missing.

// 🧠 Example

// Input: 1 2 4 5
// Output: 3

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 4, 5};
//     int n = 5;

//     int total = n * (n + 1) / 2;
//     int sum = 0;

//     for (int i = 0; i < n - 1; i++) {
//         sum += arr[i];
//     }

//     cout << "Missing: " << total - sum;

//     return 0;
// }

// 🔥 5. Check Anagram

// Problem:
// Check if two strings are anagrams.

// 🧠 Example

// listen & silent → Yes

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s1 = "listen", s2 = "silent";

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     if (s1 == s2)
//         cout << "Anagram";
//     else
//         cout << "Not Anagram";

//     return 0;
// }

// 🔥 6. Majority Element (Important Logic)

// Problem:
// Find element appearing more than n/2 times.

// ✅ C++ Solution (Boyer-Moore)
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 2, 1, 2, 3, 2, 2};
//     int n = 7;

//     int count = 0, candidate;

//     for (int i = 0; i < n; i++) {
//         if (count == 0) {
//             candidate = arr[i];
//         }
//         count += (arr[i] == candidate) ? 1 : -1;
//     }

//     cout << "Majority: " << candidate;

//     return 0;
// }

// 🔥 7. Palindrome String (Tricky Input Cases)

// Problem:
// Check if string is palindrome (ignore case).

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s = "Madam";

//     string temp = s;

//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     reverse(temp.begin(), temp.end());
//     transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

//     if (s == temp)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }


// 🟢 EASY
// 1. Reverse Number
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1234, rev = 0;
//     while (n != 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     cout << rev;
// }
// 2. Palindrome String
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "madam";
//     string t = s;
//     reverse(t.begin(), t.end());

//     if (s == t) cout << "Yes";
//     else cout << "No";
// }
// 3. Armstrong Number
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n = 153, sum = 0, temp = n;

//     while (temp) {
//         int d = temp % 10;
//         sum += d * d * d;
//         temp /= 10;
//     }

//     cout << (sum == n ? "Yes" : "No");
// }
// 4. Fibonacci
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6, a = 0, b = 1;
//     for (int i = 0; i < n; i++) {
//         cout << a << " ";
//         int c = a + b;
//         a = b;
//         b = c;
//     }
// }
// 5. Sum of Digits
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1234, sum = 0;
//     while (n) {
//         sum += n % 10;
//         n /= 10;
//     }
//     cout << sum;
// }
// 6. Prime Number
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 29;
//     bool prime = true;

//     if (n <= 1) prime = false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) prime = false;
//     }

//     cout << (prime ? "Prime" : "Not Prime");
// }
// 🟡 MEDIUM
// 7. Second Largest
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 4, 45};
//     int n = 4, first = -1, second = -1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         } else if (arr[i] > second && arr[i] != first) {
//             second = arr[i];
//         }
//     }
//     cout << second;
// }
// 8. Move Zeros
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {0,1,0,3,12};
//     int n = 5, j = 0;

//     for (int i = 0; i < n; i++)
//         if (arr[i] != 0)
//             swap(arr[i], arr[j++]);

//     for (int x : arr) cout << x << " ";
// }
// 9. Remove Duplicates
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int arr[] = {1,2,2,3,4,4};
//     set<int> s(arr, arr + 6);

//     for (int x : s) cout << x << " ";
// }
// 10. Missing Number
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,4,5};
//     int n = 5, sum = 0;

//     for (int i = 0; i < n - 1; i++)
//         sum += arr[i];

//     cout << n*(n+1)/2 - sum;
// }
// 11. Anagram
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string a = "listen", b = "silent";
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     cout << (a == b ? "Yes" : "No");
// }
// 12. String Compression
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "aaabbc";

//     for (int i = 0; i < s.length(); i++) {
//         int count = 1;
//         while (i < s.length() - 1 && s[i] == s[i+1]) {
//             count++; i++;
//         }
//         cout << s[i] << count;
//     }
// }
// 13. Count Vowels
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "Priyanka";
//     int count = 0;

//     for (char c : s) {
//         c = tolower(c);
//         if (string("aeiou").find(c) != string::npos)
//             count++;
//     }
//     cout << count;
// }
// 14. Factorial
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     long long fact = 1;

//     for (int i = 1; i <= n; i++)
//         fact *= i;

//     cout << fact;
// }
// 🔴 HARD
// 15. Majority Element
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,2,1,2,3,2,2};
//     int count = 0, candidate;

//     for (int x : arr) {
//         if (count == 0) candidate = x;
//         count += (x == candidate) ? 1 : -1;
//     }

//     cout << candidate;
// }
// 16. Longest Substring (No Repeat)
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {
//     string s = "abcabcbb";
//     unordered_set<char> st;
//     int l = 0, maxLen = 0;

//     for (int r = 0; r < s.size(); r++) {
//         while (st.count(s[r])) {
//             st.erase(s[l++]);
//         }
//         st.insert(s[r]);
//         maxLen = max(maxLen, r - l + 1);
//     }

//     cout << maxLen;
// }
// 17. Kadane’s Algorithm
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
//     int maxSum = arr[0], curr = arr[0];

//     for (int i = 1; i < 9; i++) {
//         curr = max(arr[i], curr + arr[i]);
//         maxSum = max(maxSum, curr);
//     }

//     cout << maxSum;
// }
// 18. Leaders in Array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {16,17,4,3,5,2};
//     int n = 6, maxR = arr[n-1];

//     cout << maxR << " ";

//     for (int i = n-2; i >= 0; i--) {
//         if (arr[i] > maxR) {
//             maxR = arr[i];
//             cout << maxR << " ";
//         }
//     }
// }
// 19. Equilibrium Index
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,3,5,2,2};
//     int total = 0, left = 0;

//     for (int x : arr) total += x;

//     for (int i = 0; i < 5; i++) {
//         total -= arr[i];
//         if (left == total) {
//             cout << i;
//             break;
//         }
//         left += arr[i];
//     }
// }
// 20. Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << j;
//         cout << endl;
//     }
// }