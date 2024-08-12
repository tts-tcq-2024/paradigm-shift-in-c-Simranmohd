int main() {
  // Test cases
  assert(batteryIsOk(25, 70, 0.7));  // This should pass
  assert(!batteryIsOk(50, 85, 0));   // This should pass (battery is not okay)

  printf("All tests passed!\n");
  return 0;
}
