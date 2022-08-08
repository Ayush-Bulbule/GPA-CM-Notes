
//19CM007 Ayush Shashikant Bulbule
//Write programs to practice the useof multidimensional array
public class Practical12 {
    public static void main(String[] args) {
        int rows = 2;
        int columns = 3;

        int [][] firstMatrix = {{1,2,3},{1,3,5},{5,7,2}};
        int [][] secondMatrix = {{9,8,4},{1,5,3},{2,9,5}};

        int[][] sum = new int[rows][columns];

        for(int i = 0;i<rows;i++){
            for(int j = 0;j<columns;j++){
                sum[i][j] = firstMatrix[i][j]+secondMatrix[i][j];

            }
        }

        System.out.println("Sum of the two matrices is: ");
        for(int []row:sum){
            for(int col:row){
                System.out.print(col+"\t");
            }
            System.out.println();
        }
    }
}
