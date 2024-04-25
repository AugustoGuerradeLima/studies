int radix(int x, int w) {
    return (x >> w) & 1;
}

void radix_sortB(int *a, int l, int r, int w) {
    if (r <= l || w < 0) return;

    int i = l, j = r;

    while (j >= i) {
        while (i <= j && radix(a[i], w) == 0) i++;
        while (i <= j && radix(a[j], w) == 1) j--;

        if (i <= j) {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }

    radix_sortB(a, l, j, w - 1);
    radix_sortB(a, i, r, w - 1);
}