#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// SimpleJSON.JSONArray
struct JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2;
// SimpleJSON.JSONBool
struct JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C;
// SimpleJSON.JSONNode
struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653;
// SimpleJSON.JSONNull
struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595;
// SimpleJSON.JSONNumber
struct JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA;
// SimpleJSON.JSONObject
struct JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118;
// SimpleJSON.JSONString
struct JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// SimpleJSON.JSON
struct JSON_tE597692294F0F0CD8F25BE27A4C9D44F0ACCBE86  : public RuntimeObject
{
};

// SimpleJSON.JSONNode
struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653  : public RuntimeObject
{
};

struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields
{
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// System.Boolean SimpleJSON.JSONNode::allowLineComments
	bool ___allowLineComments_2;
	// System.Byte SimpleJSON.JSONNode::Color32DefaultAlpha
	uint8_t ___Color32DefaultAlpha_4;
	// System.Single SimpleJSON.JSONNode::ColorDefaultAlpha
	float ___ColorDefaultAlpha_5;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::VectorContainerType
	int32_t ___VectorContainerType_6;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::QuaternionContainerType
	int32_t ___QuaternionContainerType_7;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::RectContainerType
	int32_t ___RectContainerType_8;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::ColorContainerType
	int32_t ___ColorContainerType_9;
};

struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_ThreadStaticFields
{
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t* ___m_EscapeBuilder_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// SimpleJSON.JSONArray
struct JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* ___m_List_10;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_11;
};

// SimpleJSON.JSONBool
struct JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Boolean SimpleJSON.JSONBool::m_Data
	bool ___m_Data_10;
};

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___m_Node_10;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_11;
};

// SimpleJSON.JSONNull
struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
};

struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields
{
	// SimpleJSON.JSONNull SimpleJSON.JSONNull::m_StaticInstance
	JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* ___m_StaticInstance_10;
	// System.Boolean SimpleJSON.JSONNull::reuseSameInstance
	bool ___reuseSameInstance_11;
};

// SimpleJSON.JSONNumber
struct JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Double SimpleJSON.JSONNumber::m_Data
	double ___m_Data_10;
};

// SimpleJSON.JSONObject
struct JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ___m_Dict_10;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_11;
};

// SimpleJSON.JSONString
struct JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_10;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 
{
	// SimpleJSON.JSONNode/Enumerator/Type SimpleJSON.JSONNode/Enumerator::type
	int32_t ___type_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Object
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Array
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke
{
	int32_t ___type_0;
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com
{
	int32_t ___type_0;
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T SimpleJSON.JSONLazyCreator::Set<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, RuntimeObject* ___aVal0, const RuntimeMethod* method) ;

// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___aData0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_mC20A370D25C7B269E4707FF5CEC7062C470C416A (String_t* ___aText0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___aData0, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___aData0, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105 (const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONArray>(T)
inline JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* (*) (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*, JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared)(__this, ___aVal0, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONObject>(T)
inline JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* (*) (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*, JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared)(__this, ___aVal0, method);
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONNumber>(T)
inline JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* (*) (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*, JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared)(__this, ___aVal0, method);
}
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONString>(T)
inline JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* (*) (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*, JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared)(__this, ___aVal0, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F (uint64_t* __this, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONBool>(T)
inline JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* (*) (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*, JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mDE75FB21AB138620F2297E91D8E57AA0255E09BE_gshared)(__this, ___aVal0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONNode_Parse_m51FFFB4953A8D875B9D2DD5E032D131A149956E0 (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_get_Tag_m68B0FF9ADDC3E203E5D60BB10639AEABACA34D44 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		V_0 = 3;
		goto IL_0005;
	}

IL_0005:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONString::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_get_IsString_m933985E37AE8A887A2039A9BAC7698F083BCD6E3 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool IsString { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool IsString { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONString_GetEnumerator_m1CB9E437FC8622F3FE05D0AC12024D144747E0B8 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONString_get_Value_mEAD2BD372A2C517E83233BA5F6E309745AA5E9B4 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_Data; }
		String_t* L_0 = __this->___m_Data_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Data; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_set_Value_mB974D9B82AB8F9FAB84DCA99B8BD4B7C1C08ED00 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Data = value;
		String_t* L_0 = ___value0;
		__this->___m_Data_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONString(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		String_t* L_0 = ___aData0;
		__this->___m_Data_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_10), (void*)L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONString::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONString_Clone_m59FCBC159496A334397171CF5127205C82C30A73 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// return new JSONString(m_Data);
		String_t* L_0 = __this->___m_Data_10;
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_1 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_WriteToStringBuilder_mDF24D860FBF8E71F6F04799DD70F7700CE41D818 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = __this->___m_Data_10;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JSONNode_Escape_mC20A370D25C7B269E4707FF5CEC7062C470C416A(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_Equals_m1C60B537E558E6DF85ACF3EF9FF43BF9A3CF5435 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (base.Equals(obj))
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE(__this, L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_005c;
	}

IL_0010:
	{
		// string s = obj as string;
		RuntimeObject* L_3 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		// if (s != null)
		String_t* L_4 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// return m_Data == s;
		String_t* L_6 = __this->___m_Data_10;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		V_3 = L_8;
		goto IL_005c;
	}

IL_0030:
	{
		// JSONString s2 = obj as JSONString;
		RuntimeObject* L_9 = ___obj0;
		V_1 = ((JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)IsInstClass((RuntimeObject*)L_9, JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_10, NULL, NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// return m_Data == s2.m_Data;
		String_t* L_13 = __this->___m_Data_10;
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = L_14->___m_Data_10;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, L_15, NULL);
		V_3 = L_16;
		goto IL_005c;
	}

IL_0058:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Int32 SimpleJSON.JSONString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_GetHashCode_m979A74F84B4C0F45BF63D75DE1146490F743EE00 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		String_t* L_0 = __this->___m_Data_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONString::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_Clear_m3E9CBF4AB37C6FD0011E19CA99E074FEA129FED7 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Data = "";
		__this->___m_Data_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_SerializeBinary_m326D7A86B47F8CD093FCC4738ACB1DED2FED53A1 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.String);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)3);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		String_t* L_2 = __this->___m_Data_10;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONNumber::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_get_Tag_m7C6E217E85B6161812496B63E5D371B910AAC856 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		V_0 = 4;
		goto IL_0005;
	}

IL_0005:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_get_IsNumber_mFABFD0C9C4905CFB34A62700A1BD335F53E4214E (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool IsNumber { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool IsNumber { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNumber::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONNumber_GetEnumerator_m4D13E84756AEED9FCD7EFEEE4D01187DD049C596 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONNumber::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNumber_get_Value_mBC5AB046D134B1E54C228C9C1C2231F8448CD56D (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		double* L_0 = (&__this->___m_Data_10);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_Value_m2264762BBD76F39DDC5DF3160910A44FBEFDE54C (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	{
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_0, ((int32_t)167), L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// m_Data = v;
		double L_4 = V_0;
		__this->___m_Data_10 = L_4;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNumber_get_AsDouble_m8C004121700A7E7EB2B77ED223187227E33DE60B (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// get { return m_Data; }
		double L_0 = __this->___m_Data_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Data; }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsDouble_m8E17AF8C0E9AE0EF6E25D86CB1B119904ADC0558 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		double L_0 = ___value0;
		__this->___m_Data_10 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNumber::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNumber_get_AsLong_mF96069F806F51121CBFE8847D9E0D312F05986BB (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return (long)m_Data; }
		double L_0 = __this->___m_Data_10;
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(L_0);
		goto IL_000b;
	}

IL_000b:
	{
		// get { return (long)m_Data; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsLong_m541EF4E20CD8683CA860E0B969CECF7B71E2A357 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		int64_t L_0 = ___value0;
		__this->___m_Data_10 = ((double)L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONNumber::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNumber_get_AsULong_mD1EB0D23B9143C4CC1AA4BF75F17E326C08785CA (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return (ulong)m_Data; }
		double L_0 = __this->___m_Data_10;
		V_0 = il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_0);
		goto IL_000b;
	}

IL_000b:
	{
		// get { return (ulong)m_Data; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsULong_m320EA0ACC4B63183B5223CFCF0B25B8DA383C0DA (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		uint64_t L_0 = ___value0;
		__this->___m_Data_10 = ((double)((double)(uint64_t)L_0));
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(double aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		double L_0 = ___aData0;
		__this->___m_Data_10 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m39FDDE1A9EFEE9C4F2498E531D12B97AA49A1BA5 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNumber::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONNumber_Clone_m1C9DD94EB3011E55E840B55B4D4F3EAB63AF8A52 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// return new JSONNumber(m_Data);
		double L_0 = __this->___m_Data_10;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_WriteToStringBuilder_mD311BC3C1EE3E159C43801EB214F084E567367F2 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	{
		// aSB.Append(Value);
		StringBuilder_t* L_0 = ___aSB0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		// return value is int || value is uint
		//     || value is float || value is double
		//     || value is decimal
		//     || value is long || value is ulong
		//     || value is short || value is ushort
		//     || value is sbyte || value is byte;
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		G_B12_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 1;
	}

IL_005d:
	{
		V_0 = (bool)G_B12_0;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_Equals_mC04BB811CCAF20E70AE696AE74ECFDF5DA888688 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0062;
	}

IL_000d:
	{
		// if (base.Equals(obj))
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE(__this, L_2, NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0062;
	}

IL_001c:
	{
		// JSONNumber s2 = obj as JSONNumber;
		RuntimeObject* L_5 = ___obj0;
		V_0 = ((JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)IsInstClass((RuntimeObject*)L_5, JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_6, NULL, NULL);
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// return m_Data == s2.m_Data;
		double L_9 = __this->___m_Data_10;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_10 = V_0;
		NullCheck(L_10);
		double L_11 = L_10->___m_Data_10;
		V_2 = (bool)((((double)L_9) == ((double)L_11))? 1 : 0);
		goto IL_0062;
	}

IL_0041:
	{
		// if (IsNumeric(obj))
		RuntimeObject* L_12 = ___obj0;
		bool L_13;
		L_13 = JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D(L_12, NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		// return Convert.ToDouble(obj) == m_Data;
		RuntimeObject* L_15 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_15, NULL);
		double L_17 = __this->___m_Data_10;
		V_2 = (bool)((((double)L_16) == ((double)L_17))? 1 : 0);
		goto IL_0062;
	}

IL_005e:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		bool L_18 = V_2;
		return L_18;
	}
}
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_GetHashCode_m976ADFE41037830524798C7E6AFE08006B5F77AD (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		double* L_0 = (&__this->___m_Data_10);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_Clear_mEB7835A2B2D433CE017CFD91CAE974ADB27CE72C (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// m_Data = 0;
		__this->___m_Data_10 = (0.0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_SerializeBinary_m9DCA81AEB0FE16CD13559FFD2B98A869E3874F3B (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.Number);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)4);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		double L_2 = __this->___m_Data_10;
		NullCheck(L_1);
		VirtualActionInvoker1< double >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONBool::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_get_Tag_m82CE84C4C89E157D4DB036B9F0745343C005C338 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		V_0 = 6;
		goto IL_0005;
	}

IL_0005:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_IsBoolean_m2671AE98710859611DF47E6BC58E6582C3A5B445 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool IsBoolean { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool IsBoolean { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONBool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONBool_GetEnumerator_mA07A10A6111713F7AD09FF03D09A6028556094D9 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONBool_get_Value_mBEA89869448B0B597758D5BF2A3B576CA0BB64E3 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_Data.ToString(); }
		bool* L_0 = (&__this->___m_Data_10);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return m_Data.ToString(); }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_Value_mC960EE4083CA91D0059BE24661AFC06E131E2CFC (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (bool.TryParse(value, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// m_Data = v;
		bool L_3 = V_0;
		__this->___m_Data_10 = L_3;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_AsBool_mE04224144EAD0A9AD2F3B14BC0C68557A3BF22AC (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_Data; }
		bool L_0 = __this->___m_Data_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Data; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_AsBool_m88EDF61A5ABBFF3ECF723312852E14F3C60AE365 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		bool L_0 = ___value0;
		__this->___m_Data_10 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(bool aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		bool L_0 = ___aData0;
		__this->___m_Data_10 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_m8CFB6AA78095EA003AB9B5EDD8932E8E0B01A1B9 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONBool::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONBool_Clone_m0B98A17130A9A6FCEC5A92408F551E344CB80274 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// return new JSONBool(m_Data);
		bool L_0 = __this->___m_Data_10;
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_1 = (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*)il2cpp_codegen_object_new(JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_WriteToStringBuilder_m82C70C80863730E8A22EE7A5B099C765F2E1D91E (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// aSB.Append((m_Data) ? "true" : "false");
		StringBuilder_t* L_0 = ___aSB0;
		bool L_1 = __this->___m_Data_10;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_Equals_m2671F40DA8F1128BA1451FE7066515C6E0C50D45 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_000d:
	{
		// if (obj is bool)
		RuntimeObject* L_2 = ___obj0;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// return m_Data == (bool)obj;
		bool L_4 = __this->___m_Data_10;
		RuntimeObject* L_5 = ___obj0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)((*(bool*)((bool*)(bool*)UnBox(L_5, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))))? 1 : 0);
		goto IL_002f;
	}

IL_002b:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_GetHashCode_mC5B59375A9EE9978A5ADD1A24ECEE3FC920836DB (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		bool* L_0 = (&__this->___m_Data_10);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONBool::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_Clear_m7841012AB307EA72DCFA23305AF45E45ACF7B7DE (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// m_Data = false;
		__this->___m_Data_10 = (bool)0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_SerializeBinary_m05BDBCE5030787C8E16A18F69E8CC58AAE8B967C (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.Boolean);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)6);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		bool L_2 = __this->___m_Data_10;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* V_1 = NULL;
	{
		// if (reuseSameInstance)
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___reuseSameInstance_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return m_StaticInstance;
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2 = ((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_10;
		V_1 = L_2;
		goto IL_001a;
	}

IL_0012:
	{
		// return new JSONNull();
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_3 = (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)il2cpp_codegen_object_new(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B(L_3, NULL);
		V_1 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_4 = V_1;
		return L_4;
	}
}
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNull() { }
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// private JSONNull() { }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_get_Tag_m89A7F368EA6269874235F85E43AE82254AAFD41E (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		V_0 = 5;
		goto IL_0005;
	}

IL_0005:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_IsNull_m1174212D6379871AC361EF06FA05DD510FC55595 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool IsNull { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool IsNull { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNull::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONNull_GetEnumerator_m16D254C74386D1A0AB2EFD1DE0EAF409C73B7686 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONNull::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNull_get_Value_mB15431220D7D0B45CE002A204DF9E070CF78DBE0 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// get { return "null"; }
		V_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return "null"; }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_Value_mAF0CD2E912EF772E0892EB4ABB77294F689CF20A (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_AsBool_m6F3817CD49ED7CC10C180D31D84ED4B0151C78CE (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_AsBool_m5717BC3921B7DE0683E9160B3816628B5CBC663D (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNull::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONNull_Clone_m103493F0850508FB95CCA260491BAA283658289F (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// return CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_0;
		L_0 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_Equals_m8A39CAD3A41E9584C434B90A1360C62B3E158DE6 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (object.ReferenceEquals(this, obj))
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0019;
	}

IL_000d:
	{
		// return (obj is JSONNull);
		RuntimeObject* L_2 = ___obj0;
		V_1 = (bool)((!(((RuntimeObject*)(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)IsInstClass((RuntimeObject*)L_2, JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_GetHashCode_m74BE6286F06C6E7D5E35381E8BD27215117D9061 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_WriteToStringBuilder_mB5B78BFA6A4943319926C1B2AE93F68C7B9B5FFD (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_SerializeBinary_mDF2ACD3562B41C7FE9346E65742B91684FCB2054 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.NullValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)5);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__cctor_m49F440C5442212437C3A1CDAF32B864961BE534B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static JSONNull m_StaticInstance = new JSONNull();
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_0 = (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)il2cpp_codegen_object_new(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B(L_0, NULL);
		((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_10), (void*)L_0);
		// public static bool reuseSameInstance = true;
		((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___reuseSameInstance_11 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_Tag_m1CB86FEA25328F1BE9CC01F6D020C9450E9F466E (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		V_0 = 7;
		goto IL_0005;
	}

IL_0005:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONLazyCreator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONLazyCreator_GetEnumerator_m720BF0642A079A8BD44F6D650CF4D833DEF67757 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1 = V_1;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNode m_Node = null;
		__this->___m_Node_10 = (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_10), (void*)(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL);
		// private string m_Key = null;
		__this->___m_Key_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_11), (void*)(String_t*)NULL);
		// public JSONLazyCreator(JSONNode aNode)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Node = aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aNode0;
		__this->___m_Node_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_10), (void*)L_0);
		// m_Key = null;
		__this->___m_Key_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_11), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNode m_Node = null;
		__this->___m_Node_10 = (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_10), (void*)(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL);
		// private string m_Key = null;
		__this->___m_Key_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_11), (void*)(String_t*)NULL);
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Node = aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aNode0;
		__this->___m_Node_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_10), (void*)L_0);
		// m_Key = aKey;
		String_t* L_1 = ___aKey1;
		__this->___m_Key_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_11), (void*)L_1);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONLazyCreator_get_Item_m562D16AE7F1F0CACA5ED050B390B63F98EBC77B1 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_0 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return new JSONLazyCreator(this); }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m42894F9D00193BC7138C5D451E1B0BBD1BFE1084 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___aIndex0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONArray()).Add(value); }
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754(__this, L_0, JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// set { Set(new JSONArray()).Add(value); }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONLazyCreator_get_Item_mF7AE3ADFBE062BF3B83FECCE0EF10F10996DE0CD (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// get { return new JSONLazyCreator(this, aKey); }
		String_t* L_0 = ___aKey0;
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_1 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4(L_1, __this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// get { return new JSONLazyCreator(this, aKey); }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m0107997E3B3CB75FACD86FB487C5D9416171CBEC (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONObject()).Add(aKey, value); }
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C(__this, L_0, JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// set { Set(new JSONObject()).Add(aKey, value); }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mA8451EE34FEA0205B6BD6527AB46E5926451F49F (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONArray()).Add(aItem);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754(__this, L_0, JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___aItem0;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mDC69A4E203B73054072D1575EC4CF20D95064F61 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONObject()).Add(aKey, aItem);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C(__this, L_0, JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = ___aItem1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (b == null)
		RuntimeObject* L_0 = ___b1;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0014;
	}

IL_000d:
	{
		// return System.Object.ReferenceEquals(a, b);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_2 = ___a0;
		RuntimeObject* L_3 = ___b1;
		V_1 = (bool)((((RuntimeObject*)(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m8E4E9C09E420FE4E5A0AB54B63CFAEF2244B5F3B (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !(a == b);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_m753939907CFDB1548B0DAAB38E4737EF17B50066 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0014;
	}

IL_000d:
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject* L_2 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_m878E7AFF42AE5C43F4F643B6AEB25662491316F9 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_mE1404FBC99CE4E8EF4ABBE0BDF661206BAC2C44D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { Set(new JSONNumber(0)); return 0; }
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// get { Set(new JSONNumber(0)); return 0; }
		V_0 = 0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { Set(new JSONNumber(0)); return 0; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_m13146E53FD6A2F7573B752BFF079E0AF6A5FAE74 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		int32_t L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, ((double)L_0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_m2600D4B0E1179583EFE268070C66EAC11D380E04 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		V_0 = (0.0f);
		goto IL_001e;
	}

IL_001e:
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_m9DCF79C70D4ED3728C12B709A6D95A0F0A057DE0 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		float L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, ((double)L_0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_m41D6DF89CD7CEC00F36962068EE072D391EC0B38 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		V_0 = (0.0);
		goto IL_0022;
	}

IL_0022:
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		double L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_mB7ABE38136DBEDA7CC9AC12A381322D6C49ADED9 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		double L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, L_0, NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONLazyCreator_get_AsLong_mFBA0000985629FA20509FA45A6A8B751C9CAC2B8 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_2 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_3;
		L_3 = JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5(__this, L_2, JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		goto IL_0032;
	}

IL_001d:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_4 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_4, (0.0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_5;
		L_5 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_4, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
	}

IL_0032:
	{
		// return 0L;
		V_1 = ((int64_t)0);
		goto IL_0037;
	}

IL_0037:
	{
		// }
		int64_t L_6 = V_1;
		return L_6;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsLong_mBD4640D2F347DEF793A631A44026A03D3D5D73A4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___value0), NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_3 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_3, L_2, NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5(__this, L_3, JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		goto IL_002d;
	}

IL_001f:
	{
		// Set(new JSONNumber(value));
		int64_t L_5 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_6 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_6, ((double)L_5), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_7;
		L_7 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_6, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONLazyCreator::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONLazyCreator_get_AsULong_m09F6B8D28F383D9A0F857339A6663B24D6AB97A2 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_2 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_3;
		L_3 = JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5(__this, L_2, JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		goto IL_0032;
	}

IL_001d:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_4 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_4, (0.0), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_5;
		L_5 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_4, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
	}

IL_0032:
	{
		// return 0L;
		V_1 = ((int64_t)0);
		goto IL_0037;
	}

IL_0037:
	{
		// }
		uint64_t L_6 = V_1;
		return L_6;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsULong_m5514AFD97B29BBA5D1A4EC80F7086929DE977A7D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		String_t* L_2;
		L_2 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F((&___value0), NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_3 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_3, L_2, NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5(__this, L_3, JSONLazyCreator_Set_TisJSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_m51A8DB1E8E2EB1E7B5F9728031E4E0541F08FFF5_RuntimeMethod_var);
		goto IL_002e;
	}

IL_001f:
	{
		// Set(new JSONNumber(value));
		uint64_t L_5 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_6 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_6, ((double)((double)(uint64_t)L_5)), NULL);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_7;
		L_7 = JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096(__this, L_6, JSONLazyCreator_Set_TisJSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_m8C33070CD4F0C90111C70AFB690E54223414C096_RuntimeMethod_var);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_m7D8AF5879C2C8036916AA6B15E22CB4B80412CF4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { Set(new JSONBool(false)); return false; }
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_0 = (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*)il2cpp_codegen_object_new(JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58(L_0, (bool)0, NULL);
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67(__this, L_0, JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67_RuntimeMethod_var);
		// get { Set(new JSONBool(false)); return false; }
		V_0 = (bool)0;
		goto IL_0012;
	}

IL_0012:
	{
		// get { Set(new JSONBool(false)); return false; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m4DB409DB959182CAA610147A51A2ECDBAFEA6092 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONBool(value)); }
		bool L_0 = ___value0;
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_1 = (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*)il2cpp_codegen_object_new(JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58(L_1, L_0, NULL);
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67(__this, L_1, JSONLazyCreator_Set_TisJSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_m5A38F09CCB8976010F7168CFC5A9F788A5F68A67_RuntimeMethod_var);
		// set { Set(new JSONBool(value)); }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* JSONLazyCreator_get_AsArray_m493C069A3624597885A7B6E00C82E829A84B47C4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* V_0 = NULL;
	{
		// get { return Set(new JSONArray()); }
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754(__this, L_0, JSONLazyCreator_Set_TisJSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_m428557FC0F29B09A0970AADC36FDF8B30F636754_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return Set(new JSONArray()); }
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* JSONLazyCreator_get_AsObject_mE01B43B261A6A56F4FCE40AB11F3AAF90B7C292D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* V_0 = NULL;
	{
		// get { return Set(new JSONObject()); }
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C(__this, L_0, JSONLazyCreator_Set_TisJSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_m9BBDB9EC7FE28C52FD344910B02F90542B72401C_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return Set(new JSONObject()); }
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_WriteToStringBuilder_mC9975859B1C42C9F5E507E604121D10B2FB2D93D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_SerializeBinary_m46EC80C4622EAC174B1729946A5F6EBB73F36A3B (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSON_Parse_m9E6F3A67011C765E4352E350D1F400C9A52DC5F6 (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_0 = NULL;
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1;
		L_1 = JSONNode_Parse_m51FFFB4953A8D875B9D2DD5E032D131A149956E0(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
