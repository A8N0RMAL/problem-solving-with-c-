#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        // Initialize the intersection area to a very large rectangle
        int x1 = -100000, y1 = -100000, x2 = 100000, y2 = 100000;

        for (int i = 0; i < N; ++i) {
            int rect_x1, rect_y1, rect_x2, rect_y2;
            cin >> rect_x1 >> rect_y1 >> rect_x2 >> rect_y2;

            // Update the intersection boundaries
            x1 = max(x1, rect_x1);
            y1 = max(y1, rect_y1);
            x2 = min(x2, rect_x2);
            y2 = min(y2, rect_y2);
        }

        // Calculate the intersection area
        int intersection_width = x2 - x1;
        int intersection_height = y2 - y1;
        int common_area = max(0, intersection_width) * max(0, intersection_height);

        cout << "Case #" << t << ": " << common_area << endl;
    }

    return 0;
}
