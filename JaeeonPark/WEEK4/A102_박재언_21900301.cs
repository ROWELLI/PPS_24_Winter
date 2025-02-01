

namespace PPS{

    public class A102{

        public int[][] Transpose(int[][] matrix) {
            int rows = matrix.Length;
            int columns = matrix[0].Length;
            int[][] result = new int[columns][];

            for(int i=0;i<columns;i++){
                result[i] = new int[rows];
            }

            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    result[j][i] = matrix[i][j];
                }
            }
            return result;
        }

    }
}