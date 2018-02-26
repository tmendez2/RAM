#pragma once

namespace RAM
{
	interface class IConceptAPI;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("11AE3B1F-DFCE-480D-8DFE-2238F73D103E")]
	public interface class IAPIFactory
	{
	public:
		IConceptAPI ^ createConceptAPI();
		property System::Collections::IEnumerable^ conceptAPIs
		{
			System::Collections::IEnumerable^ get();
		}
	};
}