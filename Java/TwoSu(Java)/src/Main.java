public class Main {
    public static void main(String[] args) {
        int nums[] = new int[]{3, 2, 3};
        int target = 6;

        Solution s = new Solution();
        int res[] = s.twoSum(nums, target);

        for (int val : res) {
            System.out.println(val + " ");
        }
    }
}

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length + 1; ++i) {
            if(i > nums.length ) {
                break;
            }
            else{
                for (int j = i + 1; j < nums.length; ++j) {
                    if (j > nums.length ) {
                        break;
                    } else if ((nums[i] + nums[j]) == target) {
                        return new int[]{i, j};
                    }
                }
            }
        }
        return new int[]{};
    }
}