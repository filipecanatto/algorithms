public class Main{

	public static void main(String[] args){

		// create the tree
		Node a = new Node("a");
		Node b = new Node("b");
		Node c = new Node("c");
		Node d = new Node("d");
		Node e = new Node("e");
		Node f = new Node("f");
		Node g = new Node("g");

		a.left_n = b;
		a.right_n = c;
		b.left_n = d;
		b.right_n = e;
		c.left_n = f;
		c.right_n = g;

		printNodes(a, "");

	}

	public static void printNodes(Node node, String label){

		String aux = label+node.label;

		if (node.left_n != null && node.right_n != null){
			printNodes(node.left_n, aux);
			printNodes(node.right_n, aux);
		}else{
			System.out.println(aux);
		}

	}
}

class Node{
	String label;
	Node left_n;
	Node right_n;

	Node(String label){
		this.label = label;
	}
}