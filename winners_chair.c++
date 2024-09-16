#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();

    while (test_case--)
    {
        int count = 0;
        vector<int> vec1;
        string line;

        getline(cin, line);
        stringstream ss1(line);
        int n;
        while (ss1 >> n)
        {
            vec1.push_back(n);
        }

        for (int i = 0; i < vec1.size(); i++)
        {
            if (i != vec1.size())
            {
                if (vec1[i] < vec1[i + 1])
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
