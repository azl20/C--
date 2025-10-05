#include <bits/stdc++.h>
using namespace std;

void showResult(int rating) { cout << "Result (int): " << rating << "\n"; }
void showResult(double avg) { cout << fixed << setprecision(1)
                                   << "Result (double): " << avg << "\n"; }

void inputRatings(int ratings[][4], int users) {
    for (int u = 0; u < users; ++u) {
        for (int m = 0; m < 4; ++m) {
            int r; 
            if (!(cin >> r)) { cerr << "Bad input. Exiting.\n"; exit(0); }
            if (r < 1 || r > 5) { cerr << "Rating out of range. Exiting.\n"; exit(0); }
            ratings[u][m] = r;
        }
    }
}

double averageMovieRating(const int ratings[][4], int users, int movieIndex) {
    int sum = 0;
    for (int u = 0; u < users; ++u) sum += ratings[u][movieIndex];
    return static_cast<double>(sum) / users;
}

void displayRatings(const int ratings[][4], int users) {
    cout << "Ratings table:\n";
    for (int u = 0; u < users; ++u) {
        for (int m = 0; m < 4; ++m) {
            cout << ratings[u][m] << (m==3?'\n':' ');
        }
    }
}

int main() {
    const int USERS = 3, MOVIES = 4;
    int ratings[USERS][MOVIES];

    inputRatings(ratings, USERS);

    displayRatings(ratings, USERS);

    double avg0 = averageMovieRating(ratings, USERS, 0);
    cout << fixed << setprecision(1)
         << "Average rating for Movie 0 = " << avg0 << "\n";

    vector<int> highest;
    highest.reserve(USERS);
    for (int u = 0; u < USERS; ++u) {
        int mx = ratings[u][0];
        for (int m = 1; m < MOVIES; ++m) mx = max(mx, ratings[u][m]);
        highest.push_back(mx);
    }

    cout << "Highest ratings per user = [";
    for (size_t i = 0; i < highest.size(); ++i) {
        cout << highest[i] << (i + 1 == highest.size() ? "" : ", ");
    }
    cout << "]\n";

    showResult(highest[0]);
    showResult(avg0);
    return 0;
}
