using System;
using System.Security.Cryptography.X509Certificates;

namespace PPS{
    public class A082{
    
        public static void SortByAge(){
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int count =int.Parse(input.ReadLine()??throw new ArgumentNullException("Input cannot be null."));

            Dictionary<int, List<string>> values = new Dictionary<int, List<string>>();
            for(int i=1;i<= 200;i++){
                values.Add(i, new List<string>());
            }
            for(int i=0;i<count; i++){
                string[] strs = (input.ReadLine()??throw new ArgumentNullException("Input cannot be null.")).Split(' ');
                values[int.Parse(strs[0])].Add(strs[1]); 
            }

            for(int i=1;i<= 200; i++){
                if(values.ContainsKey(i))
                    values[i].ForEach(item=>result.WriteLine($"{i} {item}"));
            }

            input.Close();
            result.Close();
        }

    }
}