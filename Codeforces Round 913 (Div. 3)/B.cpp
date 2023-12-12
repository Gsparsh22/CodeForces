#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string keys;
        cin >> keys;

        vector<char> result;
        for (int i = 0; i < keys.length(); i++)
        {
            if (keys[i] != 'B' && keys[i] != 'b')
            {
                result.push_back(keys[i]);
            }
            if (keys[i] == 'B')
            {
                for (int j = result.size() - 1; j >= 0; --j)
                {
                    if (result[j] >= 'A' && result[j] <= 'Z')
                    {
                        result.erase(result.begin() + j);
                        break;
                    }
                }
            }
            if (keys[i] == 'b')
            {
                for (int j = result.size() - 1; j >= 0; --j)
                {
                    if (result[j] >= 'a' && result[j] <= 'z')
                    {
                        result.erase(result.begin() + j);
                        break;
                    }
                }
            }
        }

        for (char ch : result)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
