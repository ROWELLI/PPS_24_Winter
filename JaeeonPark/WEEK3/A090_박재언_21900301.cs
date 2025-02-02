using System.Runtime.InteropServices;

namespace PPS{

    public class A090{
        
        
        public static int RemoveDuplicates(int[] nums) {
            int index=1;
            for(int i=1;i<nums.Length;i++){
                if(nums[i] != nums[i-1]){
                    nums[index++] = nums[i];
                }
            }
            return index;
        }

        public static int RemoveDuplicates_1(int[] nums) {
            List<int> result = new List<int>();
            int remember=int.MinValue;
            for(int i=0;i<nums.Length;i++){
                if(nums[i] != remember){
                    remember = nums[i];
                    result.Add(nums[i]);
                }
            }
            return result.Count;
        }

    }


}