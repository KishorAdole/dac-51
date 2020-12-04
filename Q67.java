import java.io.*;



public class Q67 {

	public static void main(String[] args)throws IOException, ClassNotFoundException {
		FileInputStream f = 
				new FileInputStream("E:\\cdac20\\dir\\shopping.dat");
		
		ObjectInputStream o = new ObjectInputStream(f);
		
		Shopping s = (Shopping)o.readObject();
		
		System.out.println(s); 
				
		f.close();
		System.out.println("success");
	}

}
