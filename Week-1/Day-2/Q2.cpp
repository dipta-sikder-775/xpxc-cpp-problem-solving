/*
https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int count = 0;
    for (int i = A; i <= B; i++)
        count++;
    cout << count << endl;

    return 0;
}