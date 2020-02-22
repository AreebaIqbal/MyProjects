import javax.swing.*;
import java.util.*;
import java.awt.event.*;
import java.awt.*;
class MyException24 extends Exception
{
	
}

class act extends WindowAdapter implements ActionListener {
	JLabel jl;
	Frame j;
	String name[]=new String[3];
	int num;
	int u_input;
	ArrayList<Integer> a=new ArrayList<Integer>();
	
	Scanner s=new Scanner(System.in);
	
	
	public void actionPerformed(ActionEvent e)
	{
		
		
	try
	{
		
		do
		{
		Random draw=new Random();
		
		
		num=draw.nextInt(a.size());
		//System.out.print(a.get(num));
		JOptionPane.showMessageDialog(null,"number is " +a.get(num));
		a.remove(num);
		System.out.println(a.size());
		//u_input=s.next().charAt(0);
		u_input=JOptionPane.showConfirmDialog(null, "Want to draw again?");
		
		}
		while(u_input == JOptionPane.YES_OPTION);
		if(a.isEmpty())
		{
			throw new MyException24();
		}
	}
	catch(MyException24 obj)
	{
		JOptionPane.showMessageDialog(null,"All the draws have been taken out!");
	}
		
		//jl.setText(num);

		/*for(int i=0; i<a.size(); i++)
		{
			if(num==i)
			//System.out.println(a.get(i));
			System.out.println(name[i]);
			
		}*/
		
		
		//u_input=s.next().charAt(0);
		
		

	}

	act(ArrayList<Integer> c)
	{
		a=c;
		//super("project");
		
		j=new Frame();
		
		Image icon = Toolkit.getDefaultToolkit().getImage("C:\\Users\\Aqib\\Desktop\\New folder\\luckydraw_project\\src\\icon.png");		
		j.setIconImage(icon);
		
		j.setBackground(Color.pink);
		Button b=new Button("Click to draw!");
		j.add(b);
		
		
		j.setBounds(400,270,250,120);
		//j.setSize(400,400);
		b.addActionListener(this);
		j.setLocationRelativeTo(null);
		j.setTitle("LuckyDraw");
		j.setVisible(true);
		j.addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent e){
				System.out.println("Closed Fired!");
				j.dispose();
			}
		});
		
		
	
		//j.show();
		
	}
	
	
	public static void main(String[] args) {
		//act obj=new act();
		//obj.func();
		ArrayList<Integer> a=new ArrayList<Integer>();
		for(int i=0; i<3; i++)
		{
		a.add(i);
		if(i==2)
			break;
		//name[i]=s.nextLine();
		}
		new act(a);
	// obj.actionPerformed(e,a);
		
	}

}
