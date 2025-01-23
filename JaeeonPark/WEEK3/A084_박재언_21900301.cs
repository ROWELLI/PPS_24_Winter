namespace PPS{
    public class A084{
        
        public static void PrefixArray(){
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            string original = input.ReadLine()??throw new ArgumentNullException("Input cannot be null.");
            int length = original.Length;
            List<string> prefixes = new List<string>(length);

            for(int i=0;i<length;i++){
                prefixes.Add(original.Substring(i));
            }

            prefixes.Sort();

            foreach(string prefix in prefixes){
                result.WriteLine(prefix);
            }

            result.Close();
            input.Close();
        }       

    }
}