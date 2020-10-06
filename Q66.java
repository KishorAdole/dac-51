import java.io.*;

class Shopping implements Serializable{
	private String itemName;
	private float price;
        private int qauntity;
	public Shopping () {

	}
	public Shopping(String itemName,float price,int qauntity ) {
		this.itemName = itemName;
		this.price = price;
                this.quantity=quantity;
	}
	@Override
	public String toString() {
		return itemName + " " + price + " " + quantity;
	}
	
	
}

public class Q66 {

	public static void main(String[] args)throws IOException {
		FileOutputStream f = 
				new FileOutputStream("E:\\cdac20\\dir\\shopping.dat");
		
		ObjectOutputStream o = new ObjectOutputStream(f);
		
		o.writeObject(new Shopping("abc",2300f,5));
				
		f.close();
		System.out.println("success");
	}

}
