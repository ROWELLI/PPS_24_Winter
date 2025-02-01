

namespace PPS{

    public class A103{
        
         public int UniqueMorseRepresentations(string[] words) {
            string[]morse=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."];
            HashSet<string> result = new HashSet<string>();
            foreach(string word in words){
                string temp="";
                foreach(char ch in word){
                    temp+=morse[ch-'a'];
                }
                result.Add(temp);
            }
            return result.Count;
        }


    }
}