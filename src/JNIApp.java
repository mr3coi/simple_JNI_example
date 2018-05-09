
public class JNIApp {
	private native int factorial(int num);
	private native int power(int b, int e);
	private static native void print_string(String txt);
	private static native boolean num_to_bool(int num);

	// Load library from 'java.library.path'
	static { System.loadLibrary("JNIAppImpl"); }

	public static void main(String[] args) {
		String input = "Hello world!";
		JNIApp app = new JNIApp();
		System.out.println("5! = " + app.factorial(5));
		System.out.println("3^5 = " + app.power(3,5));
		app.print_string(input);
		System.out.println("3 = " + app.num_to_bool(3));
	}
}

