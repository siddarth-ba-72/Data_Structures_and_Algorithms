package _10_STRINGS;

public class strJava {
	public static void main(String[] args) {
		// String str = "Hello World";
		// System.out.println(str);
		// System.out.println(str.length());
		// System.out.println(str.charAt(0));
		// System.out.println(str.substring(2));
		// System.out.println(str.substring(0, 5));

		// String str1 = "geeks";
		// String str2 = "geeks"; // doesn't allocate new memory as both str1 and str2
		// are pointing to same memory
		// // location
		// if (str1 == str2) {
		// System.out.println("Strings are equal");
		// } else {
		// System.out.println("Strings are not equal");
		// }
		// String str3 = new String("geeks"); // new memory is allocated for str3
		// because we are creating new object
		// // for str3
		// if (str1 == str3) {
		// System.out.println("Strings are equal");
		// } else {
		// System.out.println("Strings are not equal");
		// }

		// String s1 = "GeeksforGeeks";
		// String s2 = "for";
		// String s3 = "GeeksforGeeks";
		// System.out.println(s1.contains(s2));
		// System.out.println(s1.equals(s2));
		// System.out.println(s1.equals(s3));
		// int res = s1.compareTo(s2); // lexocographic order
		// System.out.println(res);
		// System.out.println(s1.indexOf(s2));
		// System.out.println(s1.indexOf(s2, 2)); // starts searching from index 2

		String s1 = "Geeks";
		String s2 = s1;
		s1 = s1 + "forgeeks"; // s1 is now the new object pointing to new value
		System.out.println(s1);
		System.out.println(s1 == s2);

	}
}