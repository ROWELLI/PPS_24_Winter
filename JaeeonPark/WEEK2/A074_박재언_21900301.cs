using System;
using System.Runtime.InteropServices.Marshalling;

namespace PPS{

    public class A074 {
        // static void Main(){
        //     Console.WriteLine(IsPalindrome("A man, a plan, a canal: Panama"));
        // }

        public static bool IsPalindrome(string s) {
            bool result = true;
            int start = 0;
            int end = s.Length -1 ;

            while(start <= end){
                if(!char.IsLetterOrDigit(s[start])){
                    start++;
                    continue;
                }
                if(!char.IsLetterOrDigit(s[end])){
                    end--;
                    continue;
                }
                if(char.ToLower(s[start]) != char.ToLower(s[end])){
                    result = false;
                    break;
                }
                else{
                    start++;
                    end--;
                }
            }            

            return result;
        }
    }
}