/*package holamundo;*/
import java.awt.*;
import java.awt.event.*;

public class Ventana {
	Frame F;
	Button B1, B2, B3, B4;
	public Ventana (){
		F=new Frame("Ventana");
		F.setLayout(new GridLayout(2,2));
		F.add(B1=new Button("Boton 1"));
		F.add(B2=new Button("Boton 2"));
		F.add(B3=new Button("Boton 3"));
		F.add(B4=new Button("Boton 4"));
		
		
		F.setSize(600,400);
		F.setVisible(true);
	}
	public static void main (String arr[]){
			new Ventana();
	}
}
