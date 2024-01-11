#include "function.h"

int binarySearchForZero(Function<int, int> * f, int low, int high) {
  // if (f->invoke(low) >= 0)
  //   return low;
  // if (f->invoke(high - 1) <= 0)
  //   return high - 1;

  high--;
  while (low < high) {
    int mid = low + (high - low + 1) / 2;
    int val = f->invoke(mid);
    if (val == 0)
      return mid;
    if (val > 0) {
      high = mid - 1;
    }
    else {
      low = mid;
    }
  }

  return low;
}
