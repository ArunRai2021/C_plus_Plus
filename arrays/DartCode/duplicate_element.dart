void main() {
  print(checkDuplicateElement([1, 1, 2], false)); // Output: true
  print(checkDuplicateElement([1, 2, 3], false)); // Output: false
}

bool checkDuplicateElement(List<int> nums, bool isCheck) {
  for (int i = 0; i < nums.length - 1; i++) {  // last index tak loop chalega
    for (int j = i + 1; j < nums.length; j++) { // next index se check karna hai
      if (nums[i] == nums[j]) {
        return true; // duplicate milte hi true return karenge
      }
    }
  }
  return false; // koi duplicate nahi mila to false return hoga
}