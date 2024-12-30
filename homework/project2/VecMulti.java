public class VecMulti{
    public static void main(String[] args) {
        double res = 0;
        double[] vec1 = {3.14, 4.68, 47.8903, 123.833, -3213.45};
        double[] vec2 = {-313.451, 13233.3213, -4213.1451, -3.1415926, +2323.90023};
        for (int i = 0; i < 5; i++){
            res += vec1[i] * vec2[i];
        }
        System.out.println(res + "\n");
    }
}