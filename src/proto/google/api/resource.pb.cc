#include "ProtoDisableWarning.h"
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/resource.proto

#include "google/api/resource.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fresource_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fresource_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResourceReference_google_2fapi_2fresource_2eproto;
namespace google {
namespace api {
class ResourceDescriptorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResourceDescriptor> _instance;
} _ResourceDescriptor_default_instance_;
class ResourceReferenceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResourceReference> _instance;
} _ResourceReference_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_ResourceDescriptor_default_instance_;
    new (ptr) ::google::api::ResourceDescriptor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto}, {}};

static void InitDefaultsscc_info_ResourceReference_google_2fapi_2fresource_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_ResourceReference_default_instance_;
    new (ptr) ::google::api::ResourceReference();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResourceReference_google_2fapi_2fresource_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResourceReference_google_2fapi_2fresource_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fresource_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2fresource_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fresource_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fresource_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, type_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, pattern_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, name_field_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, history_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, plural_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, singular_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, style_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, type_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, child_type_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::ResourceDescriptor)},
  { 12, -1, sizeof(::google::api::ResourceReference)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_ResourceDescriptor_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_ResourceReference_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fresource_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031google/api/resource.proto\022\ngoogle.api\032"
  " google/protobuf/descriptor.proto\"\356\002\n\022Re"
  "sourceDescriptor\022\014\n\004type\030\001 \001(\t\022\017\n\007patter"
  "n\030\002 \003(\t\022\022\n\nname_field\030\003 \001(\t\0227\n\007history\030\004"
  " \001(\0162&.google.api.ResourceDescriptor.His"
  "tory\022\016\n\006plural\030\005 \001(\t\022\020\n\010singular\030\006 \001(\t\0223"
  "\n\005style\030\n \003(\0162$.google.api.ResourceDescr"
  "iptor.Style\"[\n\007History\022\027\n\023HISTORY_UNSPEC"
  "IFIED\020\000\022\035\n\031ORIGINALLY_SINGLE_PATTERN\020\001\022\030"
  "\n\024FUTURE_MULTI_PATTERN\020\002\"8\n\005Style\022\025\n\021STY"
  "LE_UNSPECIFIED\020\000\022\030\n\024DECLARATIVE_FRIENDLY"
  "\020\001\"5\n\021ResourceReference\022\014\n\004type\030\001 \001(\t\022\022\n"
  "\nchild_type\030\002 \001(\t:Y\n\022resource_reference\022"
  "\035.google.protobuf.FieldOptions\030\237\010 \001(\0132\035."
  "google.api.ResourceReference:Z\n\023resource"
  "_definition\022\034.google.protobuf.FileOption"
  "s\030\235\010 \003(\0132\036.google.api.ResourceDescriptor"
  ":R\n\010resource\022\037.google.protobuf.MessageOp"
  "tions\030\235\010 \001(\0132\036.google.api.ResourceDescri"
  "ptorBn\n\016com.google.apiB\rResourceProtoP\001Z"
  "Agoogle.golang.org/genproto/googleapis/a"
  "pi/annotations;annotations\370\001\001\242\002\004GAPIb\006pr"
  "oto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fresource_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fresource_2eproto_sccs[2] = {
  &scc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto.base,
  &scc_info_ResourceReference_google_2fapi_2fresource_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fresource_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fresource_2eproto = {
  false, false, descriptor_table_protodef_google_2fapi_2fresource_2eproto, "google/api/resource.proto", 884,
  &descriptor_table_google_2fapi_2fresource_2eproto_once, descriptor_table_google_2fapi_2fresource_2eproto_sccs, descriptor_table_google_2fapi_2fresource_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fresource_2eproto::offsets,
  file_level_metadata_google_2fapi_2fresource_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fresource_2eproto, file_level_service_descriptors_google_2fapi_2fresource_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fresource_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto)), true);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResourceDescriptor_History_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[0];
}
bool ResourceDescriptor_History_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ResourceDescriptor_History ResourceDescriptor::HISTORY_UNSPECIFIED;
constexpr ResourceDescriptor_History ResourceDescriptor::ORIGINALLY_SINGLE_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::FUTURE_MULTI_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MIN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MAX;
constexpr int ResourceDescriptor::History_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResourceDescriptor_Style_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[1];
}
bool ResourceDescriptor_Style_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ResourceDescriptor_Style ResourceDescriptor::STYLE_UNSPECIFIED;
constexpr ResourceDescriptor_Style ResourceDescriptor::DECLARATIVE_FRIENDLY;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MIN;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MAX;
constexpr int ResourceDescriptor::Style_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class ResourceDescriptor::_Internal {
 public:
};

ResourceDescriptor::ResourceDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  pattern_(arena),
  style_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceDescriptor)
}
ResourceDescriptor::ResourceDescriptor(const ResourceDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      pattern_(from.pattern_),
      style_(from.style_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type(), 
      GetArena());
  }
  name_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name_field().empty()) {
    name_field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name_field(), 
      GetArena());
  }
  plural_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_plural().empty()) {
    plural_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_plural(), 
      GetArena());
  }
  singular_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_singular().empty()) {
    singular_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_singular(), 
      GetArena());
  }
  history_ = from.history_;
  // @@protoc_insertion_point(copy_constructor:google.api.ResourceDescriptor)
}

void ResourceDescriptor::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto.base);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  plural_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  singular_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  history_ = 0;
}

ResourceDescriptor::~ResourceDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.ResourceDescriptor)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ResourceDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_field_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  plural_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  singular_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResourceDescriptor::ArenaDtor(void* object) {
  ResourceDescriptor* _this = reinterpret_cast< ResourceDescriptor* >(object);
  (void)_this;
}
void ResourceDescriptor::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResourceDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResourceDescriptor& ResourceDescriptor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResourceDescriptor_google_2fapi_2fresource_2eproto.base);
  return *internal_default_instance();
}


void ResourceDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pattern_.Clear();
  style_.Clear();
  type_.ClearToEmpty();
  name_field_.ClearToEmpty();
  plural_.ClearToEmpty();
  singular_.ClearToEmpty();
  history_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceDescriptor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceDescriptor.type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string pattern = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_pattern();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceDescriptor.pattern"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // string name_field = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_name_field();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceDescriptor.name_field"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.api.ResourceDescriptor.History history = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_history(static_cast<::google::api::ResourceDescriptor_History>(val));
        } else goto handle_unusual;
        continue;
      // string plural = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_plural();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceDescriptor.plural"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string singular = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_singular();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceDescriptor.singular"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.api.ResourceDescriptor.Style style = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_style(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_style(static_cast<::google::api::ResourceDescriptor_Style>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResourceDescriptor::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // repeated string pattern = 2;
  for (int i = 0, n = this->_internal_pattern_size(); i < n; i++) {
    const auto& s = this->_internal_pattern(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.pattern");
    target = stream->WriteString(2, s, target);
  }

  // string name_field = 3;
  if (this->name_field().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name_field().data(), static_cast<int>(this->_internal_name_field().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.name_field");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name_field(), target);
  }

  // .google.api.ResourceDescriptor.History history = 4;
  if (this->history() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_history(), target);
  }

  // string plural = 5;
  if (this->plural().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_plural().data(), static_cast<int>(this->_internal_plural().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.plural");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_plural(), target);
  }

  // string singular = 6;
  if (this->singular().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_singular().data(), static_cast<int>(this->_internal_singular().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.singular");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_singular(), target);
  }

  // repeated .google.api.ResourceDescriptor.Style style = 10;
  {
    int byte_size = _style_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          10, style_, byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceDescriptor)
  return target;
}

size_t ResourceDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceDescriptor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string pattern = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(pattern_.size());
  for (int i = 0, n = pattern_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      pattern_.Get(i));
  }

  // repeated .google.api.ResourceDescriptor.Style style = 10;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_style_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_style(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _style_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // string name_field = 3;
  if (this->name_field().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name_field());
  }

  // string plural = 5;
  if (this->plural().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_plural());
  }

  // string singular = 6;
  if (this->singular().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_singular());
  }

  // .google.api.ResourceDescriptor.History history = 4;
  if (this->history() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_history());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResourceDescriptor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.ResourceDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const ResourceDescriptor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResourceDescriptor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.ResourceDescriptor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.ResourceDescriptor)
    MergeFrom(*source);
  }
}

void ResourceDescriptor::MergeFrom(const ResourceDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  pattern_.MergeFrom(from.pattern_);
  style_.MergeFrom(from.style_);
  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.name_field().size() > 0) {
    _internal_set_name_field(from._internal_name_field());
  }
  if (from.plural().size() > 0) {
    _internal_set_plural(from._internal_plural());
  }
  if (from.singular().size() > 0) {
    _internal_set_singular(from._internal_singular());
  }
  if (from.history() != 0) {
    _internal_set_history(from._internal_history());
  }
}

void ResourceDescriptor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.ResourceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResourceDescriptor::CopyFrom(const ResourceDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceDescriptor::IsInitialized() const {
  return true;
}

void ResourceDescriptor::InternalSwap(ResourceDescriptor* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  pattern_.InternalSwap(&other->pattern_);
  style_.InternalSwap(&other->style_);
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  name_field_.Swap(&other->name_field_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  plural_.Swap(&other->plural_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  singular_.Swap(&other->singular_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(history_, other->history_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceDescriptor::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class ResourceReference::_Internal {
 public:
};

ResourceReference::ResourceReference(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceReference)
}
ResourceReference::ResourceReference(const ResourceReference& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type(), 
      GetArena());
  }
  child_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_child_type().empty()) {
    child_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_child_type(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.ResourceReference)
}

void ResourceReference::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResourceReference_google_2fapi_2fresource_2eproto.base);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  child_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ResourceReference::~ResourceReference() {
  // @@protoc_insertion_point(destructor:google.api.ResourceReference)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ResourceReference::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  child_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResourceReference::ArenaDtor(void* object) {
  ResourceReference* _this = reinterpret_cast< ResourceReference* >(object);
  (void)_this;
}
void ResourceReference::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResourceReference::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResourceReference& ResourceReference::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResourceReference_google_2fapi_2fresource_2eproto.base);
  return *internal_default_instance();
}


void ResourceReference::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceReference)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.ClearToEmpty();
  child_type_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceReference::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceReference.type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string child_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_child_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ResourceReference.child_type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResourceReference::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceReference)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceReference.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // string child_type = 2;
  if (this->child_type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_child_type().data(), static_cast<int>(this->_internal_child_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceReference.child_type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_child_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceReference)
  return target;
}

size_t ResourceReference::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceReference)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // string child_type = 2;
  if (this->child_type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_child_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResourceReference::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.ResourceReference)
  GOOGLE_DCHECK_NE(&from, this);
  const ResourceReference* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResourceReference>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.ResourceReference)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.ResourceReference)
    MergeFrom(*source);
  }
}

void ResourceReference::MergeFrom(const ResourceReference& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceReference)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.child_type().size() > 0) {
    _internal_set_child_type(from._internal_child_type());
  }
}

void ResourceReference::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.ResourceReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResourceReference::CopyFrom(const ResourceReference& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceReference::IsInitialized() const {
  return true;
}

void ResourceReference::InternalSwap(ResourceReference* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  child_type_.Swap(&other->child_type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceReference::GetMetadata() const {
  return GetMetadataStatic();
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::ResourceReference >, 11, false >
  resource_reference(kResourceReferenceFieldNumber, ::google::api::ResourceReference::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedMessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false >
  resource_definition(kResourceDefinitionFieldNumber, ::google::api::ResourceDescriptor::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false >
  resource(kResourceFieldNumber, ::google::api::ResourceDescriptor::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::ResourceDescriptor* Arena::CreateMaybeMessage< ::google::api::ResourceDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::ResourceDescriptor >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::ResourceReference* Arena::CreateMaybeMessage< ::google::api::ResourceReference >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::ResourceReference >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
