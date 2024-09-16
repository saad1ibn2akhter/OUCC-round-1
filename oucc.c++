#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test_case;
    cin >> test_case;
    while (test_case--)
    {

        vector<char> vec = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        //  reverse(vec.begin(), vec.end());
        // this reversion is needed for question 2
        // int n ;
        vector<int> vec_num;

        string input;

        getline(cin, input);

        stringstream ss(input);
        int n;
        while (ss >> n)
        {
            vec_num.push_back(n);
        }
        for (int i = 0; i < vec_num.size(); i++)
        {
            cout << vec[vec_num[i] - 1];
        }
    }

    return 0;
}
