#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll test_case, n, i;
    cin >> test_case;
    while (test_case--)
    {
        cin >> n;
        vector<ll> ve10(n), ve20(n);
        for (i = 0; i < n; i++)
        {
            cin >> ve10[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> ve20[i];
        }
        vector<ll> v;
        ll c, mi = INT_MAX;
        for (i = 0; i < n; i++)
        {
            c = ve10[0] + ve20[i];
            c = c % n;
            mi = std::min(mi, c);
        }
        for (i = 0; i < n; i++)
        {
            c = ve10[0] + ve20[i];
            c = c % n;
            if (c == mi)
            {
                v.push_back(i);
            }
        }
        if (v.size() == 1)
        {
            ll a = v[0];
            ll p = 0;
            for (ll j = a; j < n; j++, p++)
            {
                cout << (ve10[p] + ve20[j]) % n << " ";
            }
            for (ll j = 0; j < a; j++, p++)
            {
                cout << (ve10[p] + ve20[j]) % n << " ";
            }
        }
        else
        {
            vector<ll> array_1;
            vector<ll> array_2;
            ll a = v[0], p = 0;
            for (ll j = a; j < n; j++, p++)
            {

                array_1.push_back((ve10[p] + ve20[j]) % n);
            }
            for (ll j = 0; j < a; j++, p++)
            {

                array_1.push_back((ve10[p] + ve20[j]) % n);
            }
            a = v[1];
            p = 0;
            for (ll j = a; j < n; j++, p++)
            {

                array_2.push_back((ve10[p] + ve20[j]) % n);
            }
            for (ll j = 0; j < a; j++, p++)
            {

                array_2.push_back((ve10[p] + ve20[j]) % n);
            }
            if (array_1 < array_2)
            {
                for (i = 0; i < n; i++)
                {
                    cout << array_1[i] << " ";
                }
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    cout << array_2[i] << " ";
                }
            }
        }
        cout << endl;
    }
}