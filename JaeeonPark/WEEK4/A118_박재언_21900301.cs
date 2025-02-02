using System.Security.Cryptography.X509Certificates;

namespace PPS
{
    public class A118
    {

        public void MoveZeroes(int[] nums) {
            int left=0;
            for(int right=0;right<nums.Length;right++){
                if(nums[right]!=0){
                    int temp = nums[right];
                    nums[right] = nums[left];
                    nums[left] = temp;
                    left++;
                }
            }
        }
    }
}