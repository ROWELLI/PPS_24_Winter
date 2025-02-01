
namespace PPS
{

    public class A108
    {

        public static void FlipNum()
        {
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            int count = int.Parse(input.ReadLine() ?? throw new ArgumentNullException("No"));

            while(count-- >0){
                string num = input.ReadLine() ?? throw new ArgumentNullException("No");
                string num_reverse = new string(num.Reverse().ToArray());
                bool same = true;
                int sum = int.Parse(num) + int.Parse(num_reverse);
                string sum_string = sum.ToString();
                int begin = 0;
                int end = sum_string.Length-1;
                while(begin < end){
                    if(sum_string[begin] != sum_string[end]){
                        same = false;
                        break;
                    }
                    begin++;
                    end--;
                }

                result.WriteLine(same? "YES":"NO");                
            }

            result.Close();
            input.Close();
        }
        
    }
}