
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<long long> arrival(n);
    vector<long long> leaving(n);

    for (int i = 0; i < n; i++) cin >> arrival[i] >> leaving[i];

    sort(arrival.begin(), arrival.end());
    sort(leaving.begin(), leaving.end());

    int i = 0, j = 0;

    int cnt = 0, maximum = 0;

    while (i < n) {
        if (arrival[i] < leaving[j]) {
            cnt++;
            maximum = max(maximum, cnt);
            i++;
        } else {
            cnt--; j++;
        }
    }

    cout << maximum << '\n';

    return 0;
}


/*
Approach: Everytime a customer arrives cnt++, when leaves cnt--

Can also do this by taking input as vector<pair<long long>> times , {time, +1} is arrival, {time, -1} is departure.
sort the entire vector, then calculate current
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<long long, int>> events;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        events.push_back({a, 1});   // arrival
        events.push_back({b, -1});  // leaving
    }

    sort(events.begin(), events.end());

    int current = 0;
    int maximum = 0;

    for (auto [time, change] : events) {
        current += change;
        maximum = max(maximum, current);
    }

    cout << maximum << '\n';

    return 0;
}
*/