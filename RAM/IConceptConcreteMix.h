#pragma once

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("4F62FDC1-884B-4936-8862-35512405506E")]
	public interface class IConceptConcreteMix
	{
	public:
		property System::String^ guid
		{
			virtual System::String^ get();
		}
		property System::String^ name
		{
			virtual System::String^ get();
			virtual void set(System::String^ value);
		}
		property double fprimec
		{
			virtual double get();
			virtual void set(double value);
		}
	};
}