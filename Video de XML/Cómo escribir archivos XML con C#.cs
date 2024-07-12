using System;
using System.Xml;

namespace WorkingWithXL
{
    class Program
    {
        static void Main(string[] args)
        {
            UsingXmlWriter();
        }

        private static void UsingXmlWriter()
        {
            using (XmlWriter xmlWriter = XmlWriter.Create("UsingXmlWriter.xml"))
            {
                xmlWriter.WriteStartDocument();
                xmlWriter.WriteStartElement("Contacts");
                
                xmlWriter.WriteStartElement("Contact");
                xmlWriter.WriteAttributeString("Phone", "02578962");
                xmlWriter.WriteString("Junior Brito");
                xmlWriter.WriteEndElement();

                xmlWriter.WriteStartElement("Contact");
                xmlWriter.WriteAttributeString("Phone", "12345678");
                xmlWriter.WriteString("Javier Martinez");
                xmlWriter.WriteEndElement(); 

                xmlWriter.WriteEndDocument();
            }
        }
    }
}
