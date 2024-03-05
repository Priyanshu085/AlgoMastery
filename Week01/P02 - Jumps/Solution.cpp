#include <iostream>
#include <cmath>
using namespace std;

int minJumps(int x) {
    // Calculate the absolute value of x
    int absX = abs(x);
    
    // Calculate the sum of the first k positive integers where k is the smallest integer such that k(k+1)/2 >= absX
    int k = ceil((-1 + sqrt(1 + 8 * (long long)absX)) / 2);

    // Calculate the total number of jumps needed
    int totalJumps = k;
    if ((k * (k + 1)) / 2 - absX == 1) {
        // If the sum of the first k positive integers overshoots absX by exactly 1, an additional jump is needed
        totalJumps++;
    }

    return totalJumps;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        // Output the minimum number of jumps to reach x
        cout << minJumps(x) << endl;
    }

    return 0;
}
