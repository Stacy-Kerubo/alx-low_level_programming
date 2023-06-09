#include "main.h"
int _sqrt_recursion(int n) {
  int mid;

  /* Check if the number is negative */
  if (n < 0) {
    return -1;
  }

  /* Check if the number is 0 */
  if (n == 0) {
    return 0;
  }

  /* Find the middle of the range of possible values */
  mid = (n / 2) + 1;

  /* Check if the middle value is the square root */
  if (mid * mid == n) {
    return mid;
  }

  /* If the middle value is not the square root, recurse on the lower half of the range */
  if (mid * mid > n) {
    return _sqrt_recursion(mid - 1);
  }

  /* If the middle value is not the square root, recurse on the upper half of the range */
  return _sqrt_recursion(mid);
}

