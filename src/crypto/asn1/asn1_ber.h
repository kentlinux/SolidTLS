#pragma once

#include <map>
#include <string>
#if (__cplusplus == 201103L)
#	include <cstdint>
#else
	typedef unsigned char uint8_t;
#endif

/*
typedef struct
{
	char	*TagName;
	uint8_t	TagNumber;
}BERTagDescription
*/

class BEREncodingRules
{
private:
	enum BERPrimitives{
		End_Of_Content, 			
		BOOLEAN,			
		INTEGER, 			
		BIT_STRING, 			
		OCTET_STRING, 			
		NULL_TAG, 			
		OBJECT_IDENTIFIER, 			
		Object_Descriptor, 			
		EXTERNAL, 			
		REAL, 			
		ENUMERATED, 			
		EMBEDDED_PDV, 			
		UTF8String, 			
		RELATIVE_OID, 			
		reserved1, 			
		reserved2, 			
		SEQUENCE, 			
		SET, 			
		NumericString, 			
		PrintableString, 			
		T61String, 			
		VideotexString, 			
		IA5String, 			
		UTCTime, 			
		GeneralizedTime, 			
		GraphicString, 			
		VisibleString, 			
		GeneralString, 			
		UniversalString, 			
		CHARACTER_STRING, 			
		BMPString, 			
		long_form 			
	};
	static std::map<enum BERPrimitives, uint8_t> BERPrimitiveTagNumbers;
public:
	BEREncodingRules() {

	BERPrimitiveTagNumbers[End_Of_Content]		= 0x0; 			
	BERPrimitiveTagNumbers[BOOLEAN]			= 0x1;			
	BERPrimitiveTagNumbers[INTEGER]			= 0x2; 			
	BERPrimitiveTagNumbers[BIT_STRING]		= 0x3; 			
	BERPrimitiveTagNumbers[OCTET_STRING]		= 0x4; 			
	BERPrimitiveTagNumbers[NULL_TAG]		= 0x5; 			
	BERPrimitiveTagNumbers[OBJECT_IDENTIFIER]	= 0x6;
	BERPrimitiveTagNumbers[Object_Descriptor]	= 0x7; 			
	BERPrimitiveTagNumbers[EXTERNAL]		= 0x8; 			
	BERPrimitiveTagNumbers[REAL]			= 0x9; 			
	BERPrimitiveTagNumbers[ENUMERATED]		= 0xA;
	BERPrimitiveTagNumbers[EMBEDDED_PDV]		= 0xB;
	BERPrimitiveTagNumbers[UTF8String]		= 0xC; 			
	BERPrimitiveTagNumbers[RELATIVE_OID]		= 0xD; 			
	BERPrimitiveTagNumbers[reserved1]		= 0xE; 			
	BERPrimitiveTagNumbers[reserved2]		= 0xF; 			
	BERPrimitiveTagNumbers[SEQUENCE]		= 0x10; 			
	BERPrimitiveTagNumbers[SET]			= 0x11; 			
	BERPrimitiveTagNumbers[NumericString]		= 0x12;
	BERPrimitiveTagNumbers[PrintableString]		= 0x13; 			
	BERPrimitiveTagNumbers[T61String]		= 0x14; 			
	BERPrimitiveTagNumbers[VideotexString]		= 0x15; 			
	BERPrimitiveTagNumbers[IA5String]		= 0x16;			
	BERPrimitiveTagNumbers[UTCTime]			= 0x17;			
	BERPrimitiveTagNumbers[GeneralizedTime]		= 0x18;
	BERPrimitiveTagNumbers[GraphicString]		= 0x19;			
	BERPrimitiveTagNumbers[VisibleString]		= 0x1A; 			
	BERPrimitiveTagNumbers[GeneralString]		= 0x1B; 			
	BERPrimitiveTagNumbers[UniversalString]		= 0x1C; 			
	BERPrimitiveTagNumbers[CHARACTER_STRING]	= 0x1D; 			
	BERPrimitiveTagNumbers[BMPString]		= 0x1E;			
	BERPrimitiveTagNumbers[long_form]		= 0x1F; 			
	};
};
/*
const std::map<BERPrimitiveTags, uint8_t> BERPrimitiveTagNumbers = {
	End_Of_Content		= 0x0, 			
	BOOLEAN			= 0x1,			
	INTEGER			= 0x2, 			
	BIT_STRING		= 0x3, 			
	OCTET_STRING 		= 0x4, 			
	NULL_TAG		= 0x5, 			
	OBJECT_IDENTIFIER 	= 0x6, 			
	Object_Descriptor 	= 0x7, 			
	EXTERNAL 		= 0x8, 			
	REAL 			= 0x9, 			
	ENUMERATED 		= 0xA, 			
	EMBEDDED_PDV 		= 0xB, 			
	UTF8String 		= 0xC, 			
	RELATIVE_OID 		= 0xD, 			
	reserved1 		= 0xE, 			
	reserved2 		= 0xF, 			
	SEQUENCE 		= 0x10, 			
	SET 			= 0x11, 			
	NumericString 		= 0x12, 			
	PrintableString 	= 0x13, 			
	T61String 		= 0x14, 			
	VideotexString 		= 0x15, 			
	IA5String 		= 0x16, 			
	UTCTime 		= 0x17, 			
	GeneralizedTime 	= 0x18, 			
	GraphicString 		= 0x19, 			
	VisibleString 		= 0x1A, 			
	GeneralString 		= 0x1B, 			
	UniversalString 	= 0x1C, 			
	CHARACTER_STRING 	= 0x1D, 			
	BMPString 		= 0x1E, 			
	long_form 		= 0x1F 			
}
*/
/*
const map<BERPrimitiveTags, string>  BERPrimitiveTagNumbers = {
{
	"End-Of-Content" 	, "End-Of-Content"; 			
	"BOOLEAN" 		, "BOOLEAN"; 			
	"INTEGER" 		, "INTEGER"; 			
	"BIT STRING" 		, "BIT STRING"; 			
	"OCTET STRING" 		, 0x4; 			
	"NULL" 			, 0x5; 			
	"OBJECT IDENTIFIER" 	, 0x6; 			
	"Object Descriptor" 	, 0x7; 			
	"EXTERNAL" 		, 0x8; 			
	"REAL" 			, 0x9; 			
	"ENUMERATED" 		, 0xA; 			
	"EMBEDDED PDV" 		, 0xB; 			
	"UTF8String" 		, 0xC; 			
	"RELATIVE-OID" 		, 0xD; 			
	"reserved1" 		, 0xE; 			
	"reserved2" 		, 0xF; 			
	"SEQUENCE" 		, 0x10; 			
	"SET" 			, 0x11; 			
	"NumericString" 	, 0x12; 			
	"PrintableString" 	, 0x13; 			
	"T61String" 		, 0x14; 			
	"VideotexString" 	, 0x15; 			
	"IA5String" 		, 0x16; 			
	"UTCTime" 		, 0x17; 			
	"GeneralizedTime" 	, 0x18; 			
	"GraphicString" 	, 0x19; 			
	"VisibleString" 	, 0x1A; 			
	"GeneralString" 	, 0x1B; 			
	"UniversalString" 	, 0x1C; 			
	"CHARACTER STRING" 	, 0x1D; 			
	"BMPString" 		, 0x1E; 			
	"long form" 		, 0x1F; 			
}
*/
/*
class BERRecord
{
private:
	uint8_t	*IdentifierOctets;
	uint8_t	*LengthOctets;
	uint8_t	*ContentsOctets;
	uint8_t	*EndOfContentsOctets;
	
	// Class
	static const uint8_t	ClassMask = 0xC0; 			// 11000000 

	static const uint8_t	UniversalClass = 0; 			// 0 0
	static const uint8_t	ApplicationClass = 0x40; 		// 0 1
	static const uint8_t	ContextSpecificClass = 0x80; 		// 1 0
	static const uint8_t	PrivateClass = 0xC0; 			// 1 1

	// Type
	static const uint8_t	TypeMask = 0x20; 			// 00100000

	static const uint8_t	PrimitiveType = 0; 			// 0
	static const uint8_t	ConstructedType = 0x20; 		// 1

	// Tag
	static const uint8_t	TagMask = 0x1F;				// 00011111

	static const uint8_t	EndOfContentTag 	= 0; 			
	static const uint8_t	BOOLEANTag 		= 0x1; 			
	static const uint8_t	INTEGERTag 		= 0x2; 			
	static const uint8_t	BITSTRINGTag 		= 0x3; 			
	static const uint8_t	OCTETSTRINGTag 		= 0x4; 			
	static const uint8_t	NULLTag 		= 0x5; 			
	static const uint8_t	OBJECTIDENTIFIERTag 	= 0x6; 			
	static const uint8_t	ObjectDescriptorTag 	= 0x7; 			
	static const uint8_t	EXTERNALTag 		= 0x8; 			
	static const uint8_t	REALTag 		= 0x9; 			
	static const uint8_t	ENUMERATEDTag 		= 0xA; 			
	static const uint8_t	EMBEDDEDPDVTag 		= 0xB; 			
	static const uint8_t	UTF8StringTag 		= 0xC; 			
	static const uint8_t	RELATIVE_OIDTag 	= 0xD; 			
	static const uint8_t	reserved1Tag 		= 0xE; 			
	static const uint8_t	reserved2Tag 		= 0xF; 			
	static const uint8_t	SEQUENCETag 		= 0x10; 			
	static const uint8_t	SEQUENCEOFTag 		= 0x10; 			
	static const uint8_t	SETTag 			= 0x11; 			
	static const uint8_t	SETOFTag 		= 0x11; 			
	static const uint8_t	NumericStringTag 	= 0x12; 			
	static const uint8_t	PrintableStringTag 	= 0x13; 			
	static const uint8_t	T61StringTag 		= 0x14; 			
	static const uint8_t	VideotexStringTag 	= 0x15; 			
	static const uint8_t	IA5StringTag 		= 0x16; 			
	static const uint8_t	UTCTimeTag 		= 0x17; 			
	static const uint8_t	GeneralizedTimeTag 	= 0x18; 			
	static const uint8_t	GraphicStringTag 	= 0x19; 			
	static const uint8_t	VisibleStringTag 	= 0x1A; 			
	static const uint8_t	GeneralStringTag 	= 0x1B; 			
	static const uint8_t	UniversalStringTag 	= 0x1C; 			
	static const uint8_t	CHARACTERSTRINGTag 	= 0x1D; 			
	static const uint8_t	BMPStringTag 		= 0x1E; 			
	static const uint8_t	LONGFORMTag 		= 0x1F; 			

public:
	BERRecord() {};
	~BERRecord() {};
}
*/
