#import "C:\Users\tmendez\Desktop\RAM\RAM\RAM\Debug\RAM.tlb" raw_interfaces_only
#include <string>
#include <iostream>

using namespace std;
using namespace RAM;

int main()
{
	IAPIFactoryPtr factory;
	IConceptAPIsPtr apis;
	IConceptAPIPtr api;
	IConceptCriteriaPtr criteria;
	IConceptConcreteMixesPtr concreteMixes;
	IConceptConcreteMixPtr concreteMix;
	long apiCount, apiIndex, concreteMixCount, concreteMixIndex;
	BSTR apiFilePath, concreteMixName;
	double concreteMixFprimec;

	try
	{
		//Initialize com, and create the factory.
		_com_util::CheckError(CoInitialize(NULL));
		_com_util::CheckError(factory.CreateInstance("RAM.APIFactory"));

		//Cycle through the attached apis.
		cout << "Attaching..." << endl;
		_com_util::CheckError(factory->get_ConceptAPIs(&apis));
		_com_util::CheckError(apis->get_count(&apiCount));
		for (apiIndex = 0; apiIndex < apiCount; apiIndex++)
		{
			_com_util::CheckError(apis->get_Item(apiIndex, &api));
			_com_util::CheckError(api->get_filePath(&apiFilePath));
			wcout << "File Path = " << apiFilePath << endl;
		}

		//Create an API.
		cout << "Creating..." << endl;
		_com_util::CheckError(factory->createConceptAPI(&api));
		_com_util::CheckError(api->get_filePath(&apiFilePath));
		wcout << "File Path = " << apiFilePath << endl;

		//Print the concrete mixes.
		_com_util::CheckError(api->get_criteria(&criteria));
		_com_util::CheckError(criteria->get_concreteMixes(&concreteMixes));
		_com_util::CheckError(concreteMixes->get_count(&concreteMixCount));
		for (concreteMixIndex = 0; concreteMixIndex < concreteMixCount; concreteMixIndex++)
		{
			_com_util::CheckError(concreteMixes->get_Item(concreteMixIndex, &concreteMix));
			_com_util::CheckError(concreteMix->get_name(&concreteMixName));
			_com_util::CheckError(concreteMix->get_fprimec(&concreteMixFprimec));
			wcout << "Concrete Mix: name = " << concreteMixName << ", f'c = " << concreteMixFprimec << endl;
		}
	}
	catch (_com_error& e)
	{
		wcerr << "There was an error: " << e.ErrorMessage() << endl;
	}

	//Uninitialize COM.
	CoUninitialize();

	//Wait for the user.
	cin.ignore();
	return 0;
}