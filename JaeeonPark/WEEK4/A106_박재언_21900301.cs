

namespace PPS
{

    public class A106
    {

        public static void SumOfNonOccuringAlphabet()
        {
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            int count = int.Parse(input.ReadLine() ?? throw new ArgumentNullException("No"));
            
            while(count-->0){
                int total = 2015;
                string alphabet = input.ReadLine() ?? throw new ArgumentNullException("No");
                alphabet = string.Join("",alphabet.Distinct());
                for(int i=0;i<alphabet.Length;i++){
                    total -= alphabet[i];
                }

                result.WriteLine(total);
            }
            result.Close();
            input.Close();
        }


    }
}