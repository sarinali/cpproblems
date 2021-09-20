import java.awt.List;
import java.io.*;
import java.util.*;

public class combinations {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int n = readInt(); ArrayList<Integer> comb = new ArrayList();
        fun(1, n, comb);
    }
    static void fun(int i, int n, ArrayList<Integer>comb) {
        if (i>n) {
            System.out.println(comb);
            return;
        }
        fun(i+1, n, comb);
        comb.add(i); fun(i+1, n, comb); comb.remove(comb.size()-1);
    }

    static String next() throws IOException {
		while (st == null || !st.hasMoreTokens())
			st = new StringTokenizer(br.readLine().trim());
		return st.nextToken();
	}

	static long readLong() throws IOException {
		return Long.parseLong(next());
	}

	static int readInt() throws IOException {
		return Integer.parseInt(next());
	}

	static double readDouble() throws IOException {
		return Double.parseDouble(next());
	}

	static char readCharacter() throws IOException {
		return next().charAt(0);
	}

	static String readLine() throws IOException {
		return br.readLine().trim();
	}
}
