using System;

namespace RAM.Client
{
    public class RAMClient
    {
        public static void Main(string[] args)
        {
            APIFactory factory;
            IConceptAPI api;

            //Create the factory.
            factory = new APIFactory();

            //Create a concept API.
            api = factory.createConceptAPI();

            //Get the file path.
            Console.WriteLine("File Path = " + api.filePath);

            //Print the concrete mixes.
            foreach(IConceptConcreteMix mix in api.criteria.concreteMixes)
            {
                Console.WriteLine("Concrete Mix: name = " + mix.name + ", f'c = " + mix.fprimec.ToString());
            }

            //Don't close the application right away.
            Console.ReadLine();
        }
    }
}
