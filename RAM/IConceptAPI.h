#pragma once

namespace RAM
{
	interface class IConceptCriteria;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("0D5C2F3F-C88C-441C-9E02-237F69917950")]
	public interface class IConceptAPI
	{
	public:
		property System::String^ filePath
		{
			System::String^ get();
		}
		property IConceptCriteria^ criteria
		{
			IConceptCriteria^ get();
		}
	};
}