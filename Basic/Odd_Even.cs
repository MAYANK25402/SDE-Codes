using System; 

class Number { 

	public static bool isEven(int n) 
	{ 
		return (n % 2 == 0); 
	} 

	public static void Main() 
	{ 
		int n = 101; 
		if (isEven(n) == true) 
			Console.WriteLine("Even"); 
		else
			Console.WriteLine("Odd"); 
	} 
} 

