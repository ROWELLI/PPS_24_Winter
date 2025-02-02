

namespace PPS{

    public class A101{

        public int[] FairCandySwap(int[] aliceSizes, int[] bobSizes) {
            int dif = ( aliceSizes.Sum() - bobSizes.Sum() )/ 2;
            
            foreach(int i in bobSizes){
                int temp = i + dif;
                if(aliceSizes.Contains(temp))
                    return [temp,i];
            }
            return [0,0];
        }

    }
}