#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = n;
    //     while (j > 0)
    //     {
    //         cout << j << " ";
    //         j--;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //     5
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    // int n;
    // cin >> n;
    // int count = 1;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //     5
    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25

    //     int n;
    //     cin >> n;
    //     int i = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= i)
    //         {
    //             cout << '*' << " ";
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    //     }

    //     5
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    //     int n;
    //     cin >> n;

    //     int i = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= i)
    //         {
    //             cout << i << ' ';
    //             j++;
    //         }
    //         i++;
    //         cout << endl;
    //     }
    //     4
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    //     int n;
    //     cin >> n;
    //     int i = 1;
    //     int count = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= i)
    //         {
    //             cout << count++ << " ";
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    //     }
    //     6
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int s = i;
    //     while (j <= i)
    //     {
    //         cout << s++ << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // without this var s

    //     int n;
    //     cin >> n;
    //     int i = 1;
    //     while (i <= n)
    //     {
    //         int j = i;
    //         while (j < i * 2)
    //         {
    //             cout << j << " ";
    //             j++;
    //         }
    //         i++;
    //         cout << endl;
    //     }

    //     5
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // 5 6 7 8 9

    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //     4
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    //     int n;
    //     cin >> n;
    //     int i = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= n)
    //         {
    //             char ch = 'A' + i - 1;
    //             cout << ch << " ";
    //             j++;
    //         }
    //         i++;
    //         cout << endl;
    //     }
    //     4
    // A A A A
    // B B B B
    // C C C C
    // D D D D

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    // 4
    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // int n;
    // cin >> n;

    // int i = 1;
    // char ch = 'A';

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    // 3
    // A B C
    // D E F
    // G H I

    // for new pattern the logic will be
    // i+j-1 = 1
    // adding both side A-1
    //'A'+i+j-2 = 'A'

    // int n;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //     4
    // A B C D
    // B C D E
    // C D E F
    // D E F G
    // int n;
    // cin >> n;

    // int i = 1;
    // // char ch = 'A';

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    //     3
    // A
    // B B
    // C C C

    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << ch++ << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    // 4
    //    *
    //   **
    //  ***
    // ****

    //     int n;
    //     cin >> n;

    //     int i = 1;

    //     while (i <= n)
    //     {

    //         int j = 1;

    //         while (j <= (n - i + 1))
    //         {
    //             cout << j;
    //             j++;
    //         }
    //         int start = 2 * (i - 1);
    //         while (start)
    //         {
    //             cout << '*';
    //             start--;
    //         }
    //         j = j - 1;
    //         while (j)
    //         {
    //             cout << j;
    //             j--;
    //         }
    //         i++;
    //         cout << endl;
    //     }
    //     5
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1
}