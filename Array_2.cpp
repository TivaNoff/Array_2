#include <iostream>
#include <vector>

int countNumbersWithEvenDigits(const std::vector<int>& nums) {
    int count = 0;

    for (int num : nums) {
        int digitCount = 0;
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            digitCount++;
        }

        if (digitCount % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> nums1 = { 12, 345, 2, 6, 7896 };
    std::cout << "Example 1 Output: " << countNumbersWithEvenDigits(nums1) << std::endl;

    std::vector<int> nums2 = { 555, 901, 482, 1771 };
    std::cout << "Example 2 Output: " << countNumbersWithEvenDigits(nums2) << std::endl;

    return 0;
}
