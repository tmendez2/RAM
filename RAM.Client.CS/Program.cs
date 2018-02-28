using System;

using RAM;

public class Program
{
    public static void Main(string[] args)
    {
        APIFactory factory;
        IConceptAPI api;
        IConceptConcreteMix concreteMixToRemove;

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
            Console.WriteLine("Getting Concrete Mixes...");
            concreteMixToRemove = null;
            foreach (IConceptConcreteMix concreteMix in api.criteria.concreteMixes)
            {
                if(concreteMixToRemove == null)
                {
                    concreteMixToRemove = concreteMix;
                }
                Console.WriteLine("Concrete Mix: name = " + concreteMix.name + ", f'c = " + concreteMix.fprimec.ToString());
            }

            //Add a concrete mix, and print again.
            Console.WriteLine("Adding Concrete Mix...");
            api.criteria.concreteMixes.add("7000 psi", 7000);
            foreach (IConceptConcreteMix concreteMix in api.criteria.concreteMixes)
            {
                Console.WriteLine("Concrete Mix: name = " + concreteMix.name + ", f'c = " + concreteMix.fprimec.ToString());
            }

            //Remove a concrete mix and print again.
            Console.WriteLine("Removing Concrete Mix...");
            api.criteria.concreteMixes.remove(concreteMixToRemove.guid);
            foreach (IConceptConcreteMix concreteMix in api.criteria.concreteMixes)
            {
                Console.WriteLine("Concrete Mix: name = " + concreteMix.name + ", f'c = " + concreteMix.fprimec.ToString());
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