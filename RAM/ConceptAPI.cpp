#include "ConceptAPI.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptAPI::ConceptAPI(int conceptProcessID)
	{
		processID = conceptProcessID;
		criteriaObject = safe_cast<IConceptCriteria^>(gcnew ConceptCriteria());
	}

	//PROPERTIES//
	System::String^ ConceptAPI::filePath::get()
	{
		//TODO:
		//Return the path of the current file open 
		//in RAM Concept. Return an empty string if the
		//file has not yet been saved.
		return "C:\\level" + processID.ToString() + ".cpt";
	}
	IConceptCriteria^ ConceptAPI::criteria::get()
	{
		return criteriaObject;
	}
}