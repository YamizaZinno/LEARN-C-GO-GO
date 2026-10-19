#include <stdio.h>
#include <string.h>

typedef struct {
    int dig[100];
    int len;
} BigInt;

BigInt ans[105];

int base(int n) {
    for (int p = 2; p <= n; p++) {
        if (n % p == 0) {
            int temp = n;
            while (temp % p == 0) {
                temp /= p;
            }
            if (temp == 1) return p;
            return 1;
        }
    }
    return 1;
}

BigInt mul(BigInt a, int b) {
    BigInt ans;
    memset(&ans, 0, sizeof(ans));
    ans.len = a.len;
    int carry = 0;
    for (int i = 0; i < a.len; i++) {
        int prod = a.dig[i] * b + carry;
        ans.dig[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry > 0) {
        ans.dig[ans.len++] = carry % 10;
        carry /= 10;
    }
    return ans;
}
void prep() {
    ans[1].dig[0] = 1;
    ans[1].len = 1;
    for (int i = 2; i <= 100; i++) {
        ans[i] = mul(ans[i-1], base(i));
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = ans[n].len - 1; i >= 0; i--) printf("%d", ans[n].dig[i]);
    printf("\n");
}

int main() {
    prep(); 
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}