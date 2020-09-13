// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TokenInfo.proto

#include "TokenInfo.pb.h"

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
namespace AcFunDanmu {
class TokenInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TokenInfo> _instance;
} _TokenInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_TokenInfo_TokenInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_TokenInfo_default_instance_;
    new (ptr) ::AcFunDanmu::TokenInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::TokenInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TokenInfo_TokenInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TokenInfo_TokenInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_TokenInfo_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_TokenInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_TokenInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_TokenInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::TokenInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::TokenInfo, tokentype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::TokenInfo, token_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::TokenInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_TokenInfo_default_instance_),
};

const char descriptor_table_protodef_TokenInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017TokenInfo.proto\022\nAcFunDanmu\"|\n\tTokenIn"
  "fo\0222\n\ttokenType\030\001 \001(\0162\037.AcFunDanmu.Token"
  "Info.TokenType\022\r\n\005token\030\002 \001(\014\",\n\tTokenTy"
  "pe\022\014\n\010kInvalid\020\000\022\021\n\rkServiceToken\020\001b\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_TokenInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_TokenInfo_2eproto_sccs[1] = {
  &scc_info_TokenInfo_TokenInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_TokenInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TokenInfo_2eproto = {
  false, false, descriptor_table_protodef_TokenInfo_2eproto, "TokenInfo.proto", 163,
  &descriptor_table_TokenInfo_2eproto_once, descriptor_table_TokenInfo_2eproto_sccs, descriptor_table_TokenInfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_TokenInfo_2eproto::offsets,
  file_level_metadata_TokenInfo_2eproto, 1, file_level_enum_descriptors_TokenInfo_2eproto, file_level_service_descriptors_TokenInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_TokenInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_TokenInfo_2eproto)), true);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TokenInfo_TokenType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_TokenInfo_2eproto);
  return file_level_enum_descriptors_TokenInfo_2eproto[0];
}
bool TokenInfo_TokenType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr TokenInfo_TokenType TokenInfo::kInvalid;
constexpr TokenInfo_TokenType TokenInfo::kServiceToken;
constexpr TokenInfo_TokenType TokenInfo::TokenType_MIN;
constexpr TokenInfo_TokenType TokenInfo::TokenType_MAX;
constexpr int TokenInfo::TokenType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void TokenInfo::InitAsDefaultInstance() {
}
class TokenInfo::_Internal {
 public:
};

TokenInfo::TokenInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.TokenInfo)
}
TokenInfo::TokenInfo(const TokenInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_token().empty()) {
    token_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_token(),
      GetArena());
  }
  tokentype_ = from.tokentype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.TokenInfo)
}

void TokenInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TokenInfo_TokenInfo_2eproto.base);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  tokentype_ = 0;
}

TokenInfo::~TokenInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.TokenInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TokenInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  token_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TokenInfo::ArenaDtor(void* object) {
  TokenInfo* _this = reinterpret_cast< TokenInfo* >(object);
  (void)_this;
}
void TokenInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TokenInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TokenInfo& TokenInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TokenInfo_TokenInfo_2eproto.base);
  return *internal_default_instance();
}


void TokenInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.TokenInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  token_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  tokentype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TokenInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.TokenInfo.TokenType tokenType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_tokentype(static_cast<::AcFunDanmu::TokenInfo_TokenType>(val));
        } else goto handle_unusual;
        continue;
      // bytes token = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_token();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* TokenInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.TokenInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.TokenInfo.TokenType tokenType = 1;
  if (this->tokentype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_tokentype(), target);
  }

  // bytes token = 2;
  if (this->token().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_token(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.TokenInfo)
  return target;
}

size_t TokenInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.TokenInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes token = 2;
  if (this->token().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_token());
  }

  // .AcFunDanmu.TokenInfo.TokenType tokenType = 1;
  if (this->tokentype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_tokentype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TokenInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.TokenInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const TokenInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TokenInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.TokenInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.TokenInfo)
    MergeFrom(*source);
  }
}

void TokenInfo::MergeFrom(const TokenInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.TokenInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.token().size() > 0) {
    _internal_set_token(from._internal_token());
  }
  if (from.tokentype() != 0) {
    _internal_set_tokentype(from._internal_tokentype());
  }
}

void TokenInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.TokenInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TokenInfo::CopyFrom(const TokenInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.TokenInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TokenInfo::IsInitialized() const {
  return true;
}

void TokenInfo::InternalSwap(TokenInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  token_.Swap(&other->token_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(tokentype_, other->tokentype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TokenInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::TokenInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::TokenInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::TokenInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
