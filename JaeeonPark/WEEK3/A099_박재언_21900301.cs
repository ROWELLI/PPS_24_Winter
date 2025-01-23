
namespace PPS
{

    public class A099
    {
        public Dictionary<char,char> dictionary = new Dictionary<char, char>{
          {'}','{'},
          {')','('},
          {']','['},
        };
        public bool IsValid(string s)
        {

            Stack<char> chars = new Stack<char>();
            for (int i = 0; i < s.Length; i++)
            {
                switch (s[i])
                {
                    case '(':
                    case '{':
                    case '[':
                        chars.Push(s[i]);
                        break;
                    default:
                        if(chars.Count==0 || chars.Pop() != dictionary[s[i]]){
                            return false;
                        }
                        break;
                }
            }

            return chars.Count==0;
        }
    }
}