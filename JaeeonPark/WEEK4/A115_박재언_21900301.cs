
namespace PPS
{
    public class A115
    {
        public int MaxNumberOfBalloons(string text)
        {
            Dictionary<char,int> keyValuePairs = new Dictionary<char, int>{{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};

            foreach(char ch in text){
                if(keyValuePairs.ContainsKey(ch)){
                    keyValuePairs[ch]++;
                }
            }

            keyValuePairs['l']/=2;
            keyValuePairs['o']/=2;
            
            return keyValuePairs.Values.Min();
        }
    }

}