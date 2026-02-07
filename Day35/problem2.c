//problem Codeforces A. Line trip

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
 
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
 
        int ans = a[0];              // start → first
        for (int i = 0; i < n - 1; i++) {
            int gap = a[i + 1] - a[i];   // middle gaps
            if (gap > ans)
                ans = gap;
        }
 
        int lastGap = (x - a[n - 1]) * 2; // last → end
        if (lastGap > ans)
            ans = lastGap;
 
        printf("%d\n", ans);
    }
 
    return 0;
}


