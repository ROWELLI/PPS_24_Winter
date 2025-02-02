namespace PPS
{

    public class A086
    {

        public static string[] numToLetterArray = {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine"
            };

        public static string GetWordRep(int num)
        {
            string temp = num.ToString();
            return string.Join(" ", temp.Select(c => numToLetterArray[c - '0']));
        }
        public static int CompareLetterAsWord(int a, int b)
        {
            return string.Compare(GetWordRep(a), GetWordRep(b));
        }

        public static void NumberPlay()
        {
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            int[] nums = (input.ReadLine() ?? throw new ArgumentNullException("Input cannot be null")).Split().Select(int.Parse).ToArray();

            List<int> numList = new List<int>(nums[1] - nums[0] + 1);
            for (int i = nums[0]; i <= nums[1]; i++)
            {
                numList.Add(i);
            }

            numList.Sort(CompareLetterAsWord);

            int counter = 0;
            foreach (int index in numList)
            {
                result.Write($"{index} ");
                if (++counter % 10 == 0)
                {
                    result.WriteLine();
                }
            }

            result.Close();
            input.Close();
        }
    }
}