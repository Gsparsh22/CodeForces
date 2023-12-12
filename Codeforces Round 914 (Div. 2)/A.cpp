#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int x_k, y_k;
        cin >> x_k >> y_k;

        int x_q, y_q;
        cin >> x_q >> y_q;

        int a_k[8], b_k[8];
        a_k[0] = x_k - a;
        b_k[0] = y_k - b;
        a_k[1] = x_k - a;
        b_k[1] = y_k + b;
        a_k[2] = x_k - b;
        b_k[2] = y_k - a;
        a_k[3] = x_k + b;
        b_k[3] = y_k - a;
        a_k[4] = x_k - b;
        b_k[4] = y_k + a;
        a_k[5] = x_k + b;
        b_k[5] = y_k + a;
        a_k[6] = x_k + a;
        b_k[6] = y_k + b;
        a_k[7] = x_k + a;
        b_k[7] = y_k - b;

        int a_q[8], b_q[8];
        a_q[0] = x_q - a;
        b_q[0] = y_q - b;
        a_q[1] = x_q - a;
        b_q[1] = y_q + b;
        a_q[2] = x_q - b;
        b_q[2] = y_q - a;
        a_q[3] = x_q + b;
        b_q[3] = y_q - a;
        a_q[4] = x_q - b;
        b_q[4] = y_q + a;
        a_q[5] = x_q + b;
        b_q[5] = y_q + a;
        a_q[6] = x_q + a;
        b_q[6] = y_q + b;
        a_q[7] = x_q + a;
        b_q[7] = y_q - b;

        // Printing the table
        // cout << "Position   a_k   b_k   a_q   b_q" << endl;
        // for (int i = 0; i < 8; i++)
        // {
        //     cout << setw(5) << i + 1 << setw(9) << a_k[i] << setw(6) << b_k[i] << setw(6) << a_q[i] << setw(6) << b_q[i] << endl;
        // }

        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a_k[i] == a_q[j] && b_k[i] == b_q[j])
                {
                    flag++;
                }
            }
        }
        if(a == b){
            flag = flag / 4;
        }
        cout << flag << endl;
    }
    return 0;
}
