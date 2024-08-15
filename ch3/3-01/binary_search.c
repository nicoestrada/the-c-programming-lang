#include <stdio.h>

//write binary search first 

int binsearch(int x, int v[], int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid + 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}

// 3.1 wants to write a test with one test in the inner loop

int binary_search(int x, int v[], int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid + 1;
    } else {
      low = mid + 1;
      if (x == v[mid]) {
        return mid;
      }
    }
  }
  return -1;
}

int main() {
    int x = 5;
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(v) / sizeof(v[0]);

    int ans = binary_search(x, v, n);

    if (ans != -1) {
      printf("%d found at index %d\n", x, ans);
    }

    return 0;
}
