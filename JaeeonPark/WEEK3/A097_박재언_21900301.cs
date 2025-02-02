
using System.Security.Cryptography.X509Certificates;

namespace PPS
{

    class A097
    {
       
        public static int[] TwoSum(int[] numbers, int target) {
            int left=0;
            int right = numbers.Length-1;
            while(left < right){
                int sum = numbers[left] + numbers[right];
                if(sum < target){
                    left++;
                }
                else if (sum > target){
                    right--;
                }
                else{
                    return [left+1,right+1];
                }
            }
            return [-1,-1];
        }
    }
}