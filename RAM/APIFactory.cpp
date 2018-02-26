#include "APIFactory.h"

namespace RAM
{
	//CONSTRUCTOR//
	APIFactory::APIFactory() { }

	//METHODS//
	IConceptAPI^ APIFactory::createConceptAPI()
	{
		System::Random^ random;
		int conceptProcessID;

		//TODO:
		//Instantiate an instance of RAM Concept
		//and note some sort of identifier. We've assumed
		//the process ID will be used to identify
		//RAM Concept instances. Throw exceptions 
		//describing anything that prevents an 
		//instantiation (licensing, installation, etc).
		random = gcnew System::Random();
		conceptProcessID = random->Next();

		return gcnew ConceptAPI(conceptProcessID);
	}

	//PROPERTIES//
	System::Collections::IEnumerable^ APIFactory::conceptAPIs::get()
	{
		System::Collections::Generic::List<IConceptAPI^>^ conceptAPIs;

		conceptAPIs = gcnew System::Collections::Generic::List<IConceptAPI^>();

		//TODO:
		//Find all of the process ID's for the 
		//instantiated instances of RAM Concept.
		//We've assumed the process ID will be 
		//used to identify RAM Concept instances.
		conceptAPIs->Add(gcnew ConceptAPI(0));
		conceptAPIs->Add(gcnew ConceptAPI(1));
		conceptAPIs->Add(gcnew ConceptAPI(2));

		return conceptAPIs;
	}
}