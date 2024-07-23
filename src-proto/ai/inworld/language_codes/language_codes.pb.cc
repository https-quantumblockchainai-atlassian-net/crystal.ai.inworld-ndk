#include "ProtoDisableWarning.h"
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai/inworld/language_codes/language_codes.proto

#include "ai/inworld/language_codes/language_codes.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace ai {
namespace inworld {
namespace language_codes {
}  // namespace language_codes
}  // namespace inworld
}  // namespace ai
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.ai/inworld/language_codes/language_cod"
  "es.proto\022\031ai.inworld.language_codes\032 goo"
  "gle/protobuf/descriptor.proto*\322\001\n\014Langua"
  "geCode\022\035\n\031LANGUAGE_CODE_UNSPECIFIED\020\000\022\037\n"
  "\005EN_US\020\001\032\024\212\3520\005en-US\222\3520\007English\022\037\n\005ZH_CN\020"
  "\002\032\024\212\3520\005zh-CN\222\3520\007Chinese\022\036\n\005KO_KR\020\003\032\023\212\3520\005"
  "ko-KR\222\3520\006Korean\022 \n\005JA_JP\020\004\032\025\212\3520\005ja-JP\222\3520"
  "\010Japanese\022\037\n\005RU_RU\020\005\032\024\212\3520\005ru-RU\222\3520\007Russi"
  "an:D\n\024language_code_string\022!.google.prot"
  "obuf.EnumValueOptions\030\241\215\006 \001(\t\210\001\001:=\n\rlang"
  "uage_name\022!.google.protobuf.EnumValueOpt"
  "ions\030\242\215\006 \001(\t\210\001\001B~\n\031ai.inworld.language_c"
  "odesB\022LanguageCodesProtoP\001ZKgithub.com/i"
  "nworld-ai/inworld-proto-golang/src/go/ai"
  "/inworld/engine/v1alphab\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto = {
  false, false, descriptor_table_protodef_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto, "ai/inworld/language_codes/language_codes.proto", 591,
  &descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_once, descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_sccs, descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto::offsets,
  file_level_metadata_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto, 0, file_level_enum_descriptors_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto, file_level_service_descriptors_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto)), true);
namespace ai {
namespace inworld {
namespace language_codes {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LanguageCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto);
  return file_level_enum_descriptors_ai_2finworld_2flanguage_5fcodes_2flanguage_5fcodes_2eproto[0];
}
bool LanguageCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const std::string language_code_string_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  language_code_string(kLanguageCodeStringFieldNumber, language_code_string_default);
const std::string language_name_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  language_name(kLanguageNameFieldNumber, language_name_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace language_codes
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
