namespace PPS
{
    public class A121
    {
        public int FindShortestSubArray(int[] nums)
        {
            Dictionary<int, int> count = new Dictionary<int, int>();
            Dictionary<int, int> first = new Dictionary<int, int>();
            int res = 0, degree = 0;

            for (int i = 0; i < nums.Length; i++)
            {
                if (!first.ContainsKey(nums[i]))
                    first[nums[i]] = i;

                if (!count.ContainsKey(nums[i]))
                    count[nums[i]] = 0;

                count[nums[i]]++;

                if (count[nums[i]] > degree)
                {
                    degree = count[nums[i]];
                    res = i - first[nums[i]] + 1;
                }
                else if (count[nums[i]] == degree)
                {
                    res = Math.Min(res, i - first[nums[i]] + 1);
                }
            }

            return res;
        }

    }
}