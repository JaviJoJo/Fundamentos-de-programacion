using system;
using System.collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Colecciones01
{
	class Program
	{
		Static void Marin(string[] args)
		{
			//Colecciones adentro de system.collections
			//Arraylist
			//BitArray
			//Hashtable (k,v)
			//Queue
			//SortedList (k,v) ;,[]
			//Stack
			
			ArrayList palabras = new Arraylist();
			int n = 0;
			int r = 0;
			
		palabras.AddRange(new string[] {"hola", "como", "estan?"});
		Console.WriteLine("Cantidad de elementos en el ArrayList es {0}", palabras.count);
		for (n = 0; n < palabras.Count; n++)
			Console.Write(" {0}",palabras[n]);
		Console.WriteLine();
		Console.WriteLine("----");
		
		ArrayList valores = new ArrayList();
		valores.add(5);
		valores.add(7);
		valores.add(4);
		
		for (n = 0; n < valores.count; n++)
		{
			r =(int) valores [n];
			Console.WriteLine(r);
		}
		Console.WriteLine("----");
		Console.WriteLine(valores.Contains(5))
		Console.WriteLine(valores.Contains(17))
		Console.WriteLine("----");
		valores.insert(2, 55);
		for (n = 0; n < valores.Count; n++)
		{
			r = (int)valores[n];
			Console.WriteLine(r);
		}
		Console.WriteLine("----");
		valores.Remove(55);
		for (n = 0; n < valores.Count; n++)
		{
			r = (int)valores[n];
			Console.WriteLine(r);
		}
		Console.WriteLine("----");
		}
	}
}