// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalChatReady.proto

#include "CommonStateSignalChatReady.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ZtLiveUserInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto;
namespace AcFunDanmu {
class CommonStateSignalChatReadyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommonStateSignalChatReady> _instance;
} _CommonStateSignalChatReady_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_CommonStateSignalChatReady_default_instance_;
    new (ptr) ::AcFunDanmu::CommonStateSignalChatReady();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::CommonStateSignalChatReady::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto}, {
      &scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonStateSignalChatReady_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalChatReady_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalChatReady_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonStateSignalChatReady_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, chatid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, guestuserinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, mediatype_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonStateSignalChatReady)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonStateSignalChatReady_default_instance_),
};

const char descriptor_table_protodef_CommonStateSignalChatReady_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n CommonStateSignalChatReady.proto\022\nAcFu"
  "nDanmu\032\023ChatMediaType.proto\032\024ZtLiveUserI"
  "nfo.proto\"\215\001\n\032CommonStateSignalChatReady"
  "\022\016\n\006chatId\030\001 \001(\t\0221\n\rguestUserInfo\030\002 \001(\0132"
  "\032.AcFunDanmu.ZtLiveUserInfo\022,\n\tmediaType"
  "\030\003 \001(\0162\031.AcFunDanmu.ChatMediaTypeb\006proto"
  "3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonStateSignalChatReady_2eproto_deps[2] = {
  &::descriptor_table_ChatMediaType_2eproto,
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonStateSignalChatReady_2eproto_sccs[1] = {
  &scc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonStateSignalChatReady_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalChatReady_2eproto = {
  false, false, descriptor_table_protodef_CommonStateSignalChatReady_2eproto, "CommonStateSignalChatReady.proto", 241,
  &descriptor_table_CommonStateSignalChatReady_2eproto_once, descriptor_table_CommonStateSignalChatReady_2eproto_sccs, descriptor_table_CommonStateSignalChatReady_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_CommonStateSignalChatReady_2eproto::offsets,
  file_level_metadata_CommonStateSignalChatReady_2eproto, 1, file_level_enum_descriptors_CommonStateSignalChatReady_2eproto, file_level_service_descriptors_CommonStateSignalChatReady_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonStateSignalChatReady_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonStateSignalChatReady_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

void CommonStateSignalChatReady::InitAsDefaultInstance() {
  ::AcFunDanmu::_CommonStateSignalChatReady_default_instance_._instance.get_mutable()->guestuserinfo_ = const_cast< ::AcFunDanmu::ZtLiveUserInfo*>(
      ::AcFunDanmu::ZtLiveUserInfo::internal_default_instance());
}
class CommonStateSignalChatReady::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& guestuserinfo(const CommonStateSignalChatReady* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
CommonStateSignalChatReady::_Internal::guestuserinfo(const CommonStateSignalChatReady* msg) {
  return *msg->guestuserinfo_;
}
void CommonStateSignalChatReady::clear_guestuserinfo() {
  if (GetArena() == nullptr && guestuserinfo_ != nullptr) {
    delete guestuserinfo_;
  }
  guestuserinfo_ = nullptr;
}
CommonStateSignalChatReady::CommonStateSignalChatReady(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalChatReady)
}
CommonStateSignalChatReady::CommonStateSignalChatReady(const CommonStateSignalChatReady& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  chatid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_chatid().empty()) {
    chatid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_chatid(),
      GetArena());
  }
  if (from._internal_has_guestuserinfo()) {
    guestuserinfo_ = new ::AcFunDanmu::ZtLiveUserInfo(*from.guestuserinfo_);
  } else {
    guestuserinfo_ = nullptr;
  }
  mediatype_ = from.mediatype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalChatReady)
}

void CommonStateSignalChatReady::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto.base);
  chatid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&guestuserinfo_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mediatype_) -
      reinterpret_cast<char*>(&guestuserinfo_)) + sizeof(mediatype_));
}

CommonStateSignalChatReady::~CommonStateSignalChatReady() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalChatReady)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonStateSignalChatReady::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  chatid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete guestuserinfo_;
}

void CommonStateSignalChatReady::ArenaDtor(void* object) {
  CommonStateSignalChatReady* _this = reinterpret_cast< CommonStateSignalChatReady* >(object);
  (void)_this;
}
void CommonStateSignalChatReady::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonStateSignalChatReady::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonStateSignalChatReady& CommonStateSignalChatReady::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommonStateSignalChatReady_CommonStateSignalChatReady_2eproto.base);
  return *internal_default_instance();
}


void CommonStateSignalChatReady::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalChatReady)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  chatid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && guestuserinfo_ != nullptr) {
    delete guestuserinfo_;
  }
  guestuserinfo_ = nullptr;
  mediatype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalChatReady::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string chatId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_chatid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalChatReady.chatId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_guestuserinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.ChatMediaType mediaType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_mediatype(static_cast<::AcFunDanmu::ChatMediaType>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonStateSignalChatReady::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalChatReady)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string chatId = 1;
  if (this->chatid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_chatid().data(), static_cast<int>(this->_internal_chatid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalChatReady.chatId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_chatid(), target);
  }

  // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
  if (this->has_guestuserinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::guestuserinfo(this), target, stream);
  }

  // .AcFunDanmu.ChatMediaType mediaType = 3;
  if (this->mediatype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_mediatype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalChatReady)
  return target;
}

size_t CommonStateSignalChatReady::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalChatReady)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string chatId = 1;
  if (this->chatid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_chatid());
  }

  // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
  if (this->has_guestuserinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *guestuserinfo_);
  }

  // .AcFunDanmu.ChatMediaType mediaType = 3;
  if (this->mediatype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_mediatype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonStateSignalChatReady::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonStateSignalChatReady)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonStateSignalChatReady* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonStateSignalChatReady>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonStateSignalChatReady)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonStateSignalChatReady)
    MergeFrom(*source);
  }
}

void CommonStateSignalChatReady::MergeFrom(const CommonStateSignalChatReady& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalChatReady)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.chatid().size() > 0) {
    _internal_set_chatid(from._internal_chatid());
  }
  if (from.has_guestuserinfo()) {
    _internal_mutable_guestuserinfo()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(from._internal_guestuserinfo());
  }
  if (from.mediatype() != 0) {
    _internal_set_mediatype(from._internal_mediatype());
  }
}

void CommonStateSignalChatReady::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonStateSignalChatReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonStateSignalChatReady::CopyFrom(const CommonStateSignalChatReady& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalChatReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalChatReady::IsInitialized() const {
  return true;
}

void CommonStateSignalChatReady::InternalSwap(CommonStateSignalChatReady* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  chatid_.Swap(&other->chatid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonStateSignalChatReady, mediatype_)
      + sizeof(CommonStateSignalChatReady::mediatype_)
      - PROTOBUF_FIELD_OFFSET(CommonStateSignalChatReady, guestuserinfo_)>(
          reinterpret_cast<char*>(&guestuserinfo_),
          reinterpret_cast<char*>(&other->guestuserinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalChatReady::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalChatReady* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalChatReady >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalChatReady >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
