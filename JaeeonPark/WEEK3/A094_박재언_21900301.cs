
namespace PPS
{

    class A094
    {
        public static List<string> alphabet = new List<string>{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

        public static void CroatianAlphabet(){
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader (new BufferedStream(Console.OpenStandardInput()));
            string str = input.ReadLine() ?? throw new ArgumentNullException("Input cannot be null");
            foreach (string item in alphabet)
            {
                while (str.Contains(item))
                {
                    str = str.Replace(item, "a");
                }
            }
            result.WriteLine(str.Length);
            result.Close();
            input.Close();
        }
    }
}