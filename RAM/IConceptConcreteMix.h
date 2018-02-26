#pragma once

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("4F62FDC1-884B-4936-8862-35512405506E")]
	public interface class IConceptConcreteMix
	{
	public:
		property System::String^ name
		{
			System::String^ get();
			void set(System::String^ value);
		}
		property double fprimec
		{
			double get();
			void set(double value);
		}
	};
}