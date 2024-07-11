using system;

namespace genericos
{
   class program
   {
      static void Main(string[] args)
      {
         AlmacenObjetos archivos = new AlmacenObjetos(4);
         archivos.agregar("Juan");
         archivos.agregar("Elena");
         archivos.agregar("Antonio");
         archivos.agregar("Sandra");
         String NombrePersona = (string)archivos.getElemento(2);
		 archivos.agregar(new empleado(1500));
		 archivos.agregar(new empleado(2500));
		 archivos.agregar(new empleado(3500));
		 archivos.agregar(new empleado(4500));
		 Empleado salarioEmpleado = (Empleado)archivos.getElemento(2);
		 Console.WriteLine(nombrePersona);
      } 
   }
   class almacenobjetos
   {
		public AlmacenObjetos(int z)
		{
			datosElemento = new Object[z];
		}	
		public void agregar(Object obj)
		{
			datosElemento[i] = obj;
			i++;
		}
		public Object getElemento(int i)
		{
			return datosElemento[i];
		}
		private Object[] datosElemento;
		private int i = 0;
   }
   class Empleado
   {
		public Empleado(double Salario)
		{
			this.salario = salario;
		}
		public double getSalario()
		{
			return salario;
		}
		private double salario;
   }
}