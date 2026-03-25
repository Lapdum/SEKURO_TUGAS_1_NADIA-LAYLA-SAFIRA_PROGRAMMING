#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> coor_x;
vector<int> id;
bool flag[1000000005];
vector<pair<int, int>> vec_robot;
map<int, int> map_robot;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        coor_x.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int id_package;
        cin >> id_package;
        flag[id_package] = false;
        id.push_back(id_package);
    }
    coor_x.shrink_to_fit();
    id.shrink_to_fit();
    vec_robot.resize(n);

    for (int i = 0; i < n; i++)
    {
        vec_robot[i].first = coor_x[i];
        vec_robot[i].second = id[i];
    }

    vec_robot.shrink_to_fit();
    sort(vec_robot.begin(), vec_robot.end());

    for (int i = 0; i < 5; i++)
    {
        map_robot.insert({vec_robot[i].first, vec_robot[i].second});
    }

    for (int i = 0; i < n; i++)
    {
        if (!flag[map_robot[vec_robot[i].first]])
        {
            flag[map_robot[vec_robot[i].first]] = true;
            cnt++;
        }
        // cout << map_robot[vec_robot[i].first] << " ";
    }

    cout << cnt;

    return 0;
}