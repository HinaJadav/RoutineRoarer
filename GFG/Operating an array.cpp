// Operating an array

#include <bits/stdc++.h>
#include <streambuf>
using namespace std;

class Solution
{
public:
    bool searchEle(vector<int> &a, int x)
    {
        if (find(a.begin(), a.end(), x) != a.end())
            return true;
        return false;
    }
    void insertEle(vector<int> &a, int y, int yi)
    {
        a.insert(a.begin() + yi, y);
    }
    bool deleteEle(vector<int> &a, int z)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (z == a[i])
            {
                a.erase(a.begin() + i);
                return true;
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x, y, yi, z;
        cin >> x >> y >> yi >> z;

        Solution s1;

        bool b = s1.searchEle(a, x);
        if (b)
            cout << "1 ";
        else
            cout << "0 ";

        s1.insertEle(a, y, yi);
        if (a[yi] == y)
            cout << "1 ";
        else
            cout << "0 ";

        b = s1.deleteEle(a, z);
        if (b)
            cout << "1 \n";
        else
            cout << "0 \n";
    }
}