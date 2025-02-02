
using System.ComponentModel;

namespace PPS{
    public class A085{
        public static int CompareSerials(string a, string b){
            if(a.Length != b.Length){
                return a.Length - b.Length;
            }

            int aSum = a.Where(char.IsDigit).Sum(c=>c-'0');
            int bSum = b.Where(char.IsDigit).Sum(c=>c-'0');
            if(aSum != bSum){
                return aSum - bSum;
            }

            return string.Compare(a,b);
        }

        public static void SerialNumber(){
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader (new BufferedStream(Console.OpenStandardInput()));

            int count = int.Parse(input.ReadLine()?? throw new ArgumentNullException("Input cannot be null"));
            List<string> serials = new List<string>(count);

            for(int i=0;i<count;i++){
                string serial = input.ReadLine()?? throw new ArgumentNullException("Input cannot be null");
                serials.Add(serial);
            }

            serials.Sort(CompareSerials);

            foreach(string index in serials){
                result.WriteLine(index);
            }

            result.Close();
            input.Close();
        }

    }
}