using namespace std;

#include <iomanip>
#include <iostream>

typedef long double ld;

ld A, B, C, D;

ld goodChance, badChance;

int main() {
    int nDays;
    int startMood;
	cin >> nDays >> startMood >> A >> B >> C >> D;

	if (startMood == 0) goodChance = 1;
	else badChance = 1;

	while (nDays--) {
		ld good = goodChance * A + badChance * C;
		ld bad = goodChance * B + badChance * D;
		goodChance = good, badChance = bad;
	}

	cout << fixed << setprecision(0) << goodChance * 1000 << ' ' << badChance * 1000;
}