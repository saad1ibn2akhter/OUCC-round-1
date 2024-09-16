#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();

    while (test_case--)
    {
        vector<int> vec1, vec2;
        string line;

        getline(cin, line);
        stringstream ss1(line);
        int n;
        while (ss1 >> n)
        {
            vec1.push_back(n);
        }

        getline(cin, line);
        stringstream ss2(line);
        int m;
        while (ss2 >> m)
        {
            vec2.push_back(m);
        }

        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        if (vec1 == vec2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
