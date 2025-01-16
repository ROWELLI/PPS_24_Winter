using System;
using System.ComponentModel.DataAnnotations;
using System.Runtime.InteropServices.Marshalling;

namespace PPS{

    public class A075 {
        // static void Main(){
        //     int[] nums = { 3, 3, 4, 2, 4, 4, 2, 4, 4 };
        //     Console.WriteLine("Majority Element: " + MajorityElement(nums));
        // }

        static public int MajorityElement(int[] nums) {
            Dictionary<int,int> keyValuePairs = new Dictionary<int, int>();
            int lenHalf = nums.Length/2;
            foreach(int num in nums){
                if(keyValuePairs.ContainsKey(num)){
                    keyValuePairs[num]++;
                }
                else{
                    keyValuePairs[num]=1;
                }
            }

            var sortedByIncrease = from item in keyValuePairs orderby item.Value descending select item;
            var result = sortedByIncrease.First();

            return result.Key;
        }
    }
}