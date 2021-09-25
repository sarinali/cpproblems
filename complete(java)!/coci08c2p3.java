import java.io.*;
import java.util.*;

public class coci08c2p3 {
    
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    static int ans = Integer.MAX_VALUE, sourAr[], bitAr[];
    public static void main(String[] args) throws IOException {
        int n = readInt(); 

        sourAr = new int[n+1]; bitAr = new int[n+1];

        for (int i = 1; i <=n; i++) {
            sourAr[i] = readInt(); bitAr[i] = readInt();
        }
        
        ArrayList<Integer> comb = new ArrayList();
        fun(1, n, comb);
        System.out.println(ans);
    }
    static void fun(int i, int n, ArrayList<Integer>comb) {
        if (i>n) {
            // same as printing the combo, instead you increment on the 
            // answers
            if (comb.isEmpty()) {
                return;
            }
            int sour = 1, bitter = 0;
            for (int x:comb) {
                sour*=sourAr[x]; bitter+=bitAr[x];
            }
            // MIN OF SOUR - BITTER 
            ans = Math.min(ans, Math.abs(sour-bitter));
            return;
        }
        // dont choose
        fun(i+1, n, comb);
        //choose 
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