using System;

using RAM;

public class Program
{
    public static void Main(string[] args)
    {
        APIFactory factory;
        IConceptAPI api;

        try
        {
            //Create the factory.
            factory = new APIFactory();

            //Cycle through the attached apis.
            Console.WriteLine("Attaching...");
            foreach (IConceptAPI attachedAPI in factory.conceptAPIs)
            {
                Console.WriteLine("File Path = " + attachedAPI.filePath);
            }

            //Create an API.
            Console.WriteLine("Creating...");
            api = factory.createConceptAPI();
            Console.WriteLine("File Path = " + api.filePath);

            //Print the concrete mixes.
            foreach (IConceptConcreteMix mix in api.criteria.concreteMixes)
            {
                Console.WriteLine("Concrete Mix: name = " + mix.name + ", f'c = " + mix.fprimec.ToString());
            }
        }
        catch(Exception e)
        {
            Console.WriteLine("There was an error: " + e.Message);
        }

        //Don't close the application right away.
        Console.ReadLine();
    }
}