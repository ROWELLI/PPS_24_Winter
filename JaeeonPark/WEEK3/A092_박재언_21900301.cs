
namespace PPS{

    public class A092{
        public static int[] SortArrayByParityII(int[] nums) {
            int evenCounter=0;
            int oddCounter=1;
            int[] result = new int[nums.Length];
            for(int i=0;i<nums.Length;i++){
                if(int.IsEvenInteger(nums[i])){
                    result[evenCounter] = nums[i];
                    evenCounter+=2;
                }
                else{
                    result[oddCounter] = nums[i];
                    oddCounter+=2;
                }
            }
        
            return result;
        }
    }
}