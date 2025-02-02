

namespace PPS{

    public class A091{

        public static int RemoveElement(int[] nums, int val) {
            int index=0;
            for(int i=0;i<nums.Length;i++){
                if(nums[i] != val){
                    nums[index++] = nums[i];
                }
            }
            return index;
        }
    }
}