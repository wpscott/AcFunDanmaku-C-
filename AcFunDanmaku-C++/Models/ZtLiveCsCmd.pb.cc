// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveCsCmd.proto

#include "ZtLiveCsCmd.pb.h"

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
class ZtLiveCsCmdDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtLiveCsCmd> _instance;
} _ZtLiveCsCmd_default_instance_;
class ZtLiveCsCmdAckDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtLiveCsCmdAck> _instance;
} _ZtLiveCsCmdAck_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtLiveCsCmd_default_instance_;
    new (ptr) ::AcFunDanmu::ZtLiveCsCmd();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::ZtLiveCsCmd::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto}, {}};

static void InitDefaultsscc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtLiveCsCmdAck_default_instance_;
    new (ptr) ::AcFunDanmu::ZtLiveCsCmdAck();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::ZtLiveCsCmdAck::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtLiveCsCmd_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ZtLiveCsCmd_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtLiveCsCmd_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtLiveCsCmd_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmd, cmdtype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmd, payload_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmd, ticket_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmd, liveid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmdAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmdAck, cmdacktype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmdAck, errorcode_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmdAck, errormsg_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsCmdAck, payload_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtLiveCsCmd)},
  { 9, -1, sizeof(::AcFunDanmu::ZtLiveCsCmdAck)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveCsCmd_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveCsCmdAck_default_instance_),
};

const char descriptor_table_protodef_ZtLiveCsCmd_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021ZtLiveCsCmd.proto\022\nAcFunDanmu\"O\n\013ZtLiv"
  "eCsCmd\022\017\n\007cmdType\030\001 \001(\t\022\017\n\007payload\030\002 \001(\014"
  "\022\016\n\006ticket\030\003 \001(\t\022\016\n\006liveId\030\004 \001(\t\"Z\n\016ZtLi"
  "veCsCmdAck\022\022\n\ncmdAckType\030\001 \001(\t\022\021\n\terrorC"
  "ode\030\002 \001(\003\022\020\n\010errorMsg\030\003 \001(\t\022\017\n\007payload\030\004"
  " \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ZtLiveCsCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ZtLiveCsCmd_2eproto_sccs[2] = {
  &scc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto.base,
  &scc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtLiveCsCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveCsCmd_2eproto = {
  false, false, descriptor_table_protodef_ZtLiveCsCmd_2eproto, "ZtLiveCsCmd.proto", 212,
  &descriptor_table_ZtLiveCsCmd_2eproto_once, descriptor_table_ZtLiveCsCmd_2eproto_sccs, descriptor_table_ZtLiveCsCmd_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_ZtLiveCsCmd_2eproto::offsets,
  file_level_metadata_ZtLiveCsCmd_2eproto, 2, file_level_enum_descriptors_ZtLiveCsCmd_2eproto, file_level_service_descriptors_ZtLiveCsCmd_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ZtLiveCsCmd_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ZtLiveCsCmd_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

void ZtLiveCsCmd::InitAsDefaultInstance() {
}
class ZtLiveCsCmd::_Internal {
 public:
};

ZtLiveCsCmd::ZtLiveCsCmd(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveCsCmd)
}
ZtLiveCsCmd::ZtLiveCsCmd(const ZtLiveCsCmd& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  cmdtype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_cmdtype().empty()) {
    cmdtype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_cmdtype(),
      GetArena());
  }
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_payload().empty()) {
    payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_payload(),
      GetArena());
  }
  ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_ticket().empty()) {
    ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_ticket(),
      GetArena());
  }
  liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_liveid().empty()) {
    liveid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_liveid(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveCsCmd)
}

void ZtLiveCsCmd::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto.base);
  cmdtype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ZtLiveCsCmd::~ZtLiveCsCmd() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveCsCmd)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveCsCmd::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  cmdtype_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ticket_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  liveid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ZtLiveCsCmd::ArenaDtor(void* object) {
  ZtLiveCsCmd* _this = reinterpret_cast< ZtLiveCsCmd* >(object);
  (void)_this;
}
void ZtLiveCsCmd::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveCsCmd::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtLiveCsCmd& ZtLiveCsCmd::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtLiveCsCmd_ZtLiveCsCmd_2eproto.base);
  return *internal_default_instance();
}


void ZtLiveCsCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveCsCmd)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cmdtype_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ticket_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  liveid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveCsCmd::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string cmdType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_cmdtype();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveCsCmd.cmdType"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_payload();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string ticket = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_ticket();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveCsCmd.ticket"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string liveId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_liveid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveCsCmd.liveId"));
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveCsCmd::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveCsCmd)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string cmdType = 1;
  if (this->cmdtype().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_cmdtype().data(), static_cast<int>(this->_internal_cmdtype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveCsCmd.cmdType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_cmdtype(), target);
  }

  // bytes payload = 2;
  if (this->payload().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_payload(), target);
  }

  // string ticket = 3;
  if (this->ticket().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ticket().data(), static_cast<int>(this->_internal_ticket().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveCsCmd.ticket");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_ticket(), target);
  }

  // string liveId = 4;
  if (this->liveid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_liveid().data(), static_cast<int>(this->_internal_liveid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveCsCmd.liveId");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_liveid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveCsCmd)
  return target;
}

size_t ZtLiveCsCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveCsCmd)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string cmdType = 1;
  if (this->cmdtype().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_cmdtype());
  }

  // bytes payload = 2;
  if (this->payload().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  // string ticket = 3;
  if (this->ticket().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ticket());
  }

  // string liveId = 4;
  if (this->liveid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_liveid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveCsCmd::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveCsCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveCsCmd* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveCsCmd>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveCsCmd)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveCsCmd)
    MergeFrom(*source);
  }
}

void ZtLiveCsCmd::MergeFrom(const ZtLiveCsCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveCsCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.cmdtype().size() > 0) {
    _internal_set_cmdtype(from._internal_cmdtype());
  }
  if (from.payload().size() > 0) {
    _internal_set_payload(from._internal_payload());
  }
  if (from.ticket().size() > 0) {
    _internal_set_ticket(from._internal_ticket());
  }
  if (from.liveid().size() > 0) {
    _internal_set_liveid(from._internal_liveid());
  }
}

void ZtLiveCsCmd::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveCsCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveCsCmd::CopyFrom(const ZtLiveCsCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveCsCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveCsCmd::IsInitialized() const {
  return true;
}

void ZtLiveCsCmd::InternalSwap(ZtLiveCsCmd* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  cmdtype_.Swap(&other->cmdtype_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.Swap(&other->payload_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ticket_.Swap(&other->ticket_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  liveid_.Swap(&other->liveid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveCsCmd::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ZtLiveCsCmdAck::InitAsDefaultInstance() {
}
class ZtLiveCsCmdAck::_Internal {
 public:
};

ZtLiveCsCmdAck::ZtLiveCsCmdAck(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveCsCmdAck)
}
ZtLiveCsCmdAck::ZtLiveCsCmdAck(const ZtLiveCsCmdAck& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  cmdacktype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_cmdacktype().empty()) {
    cmdacktype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_cmdacktype(),
      GetArena());
  }
  errormsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_errormsg().empty()) {
    errormsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_errormsg(),
      GetArena());
  }
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_payload().empty()) {
    payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_payload(),
      GetArena());
  }
  errorcode_ = from.errorcode_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveCsCmdAck)
}

void ZtLiveCsCmdAck::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto.base);
  cmdacktype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errormsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errorcode_ = PROTOBUF_LONGLONG(0);
}

ZtLiveCsCmdAck::~ZtLiveCsCmdAck() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveCsCmdAck)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveCsCmdAck::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  cmdacktype_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errormsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ZtLiveCsCmdAck::ArenaDtor(void* object) {
  ZtLiveCsCmdAck* _this = reinterpret_cast< ZtLiveCsCmdAck* >(object);
  (void)_this;
}
void ZtLiveCsCmdAck::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveCsCmdAck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtLiveCsCmdAck& ZtLiveCsCmdAck::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtLiveCsCmdAck_ZtLiveCsCmd_2eproto.base);
  return *internal_default_instance();
}


void ZtLiveCsCmdAck::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveCsCmdAck)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cmdacktype_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  errormsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  errorcode_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveCsCmdAck::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string cmdAckType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_cmdacktype();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveCsCmdAck.cmdAckType"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 errorCode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          errorcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string errorMsg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_errormsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveCsCmdAck.errorMsg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes payload = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_payload();
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveCsCmdAck::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveCsCmdAck)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string cmdAckType = 1;
  if (this->cmdacktype().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_cmdacktype().data(), static_cast<int>(this->_internal_cmdacktype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveCsCmdAck.cmdAckType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_cmdacktype(), target);
  }

  // int64 errorCode = 2;
  if (this->errorcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_errorcode(), target);
  }

  // string errorMsg = 3;
  if (this->errormsg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_errormsg().data(), static_cast<int>(this->_internal_errormsg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveCsCmdAck.errorMsg");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_errormsg(), target);
  }

  // bytes payload = 4;
  if (this->payload().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_payload(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveCsCmdAck)
  return target;
}

size_t ZtLiveCsCmdAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveCsCmdAck)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string cmdAckType = 1;
  if (this->cmdacktype().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_cmdacktype());
  }

  // string errorMsg = 3;
  if (this->errormsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_errormsg());
  }

  // bytes payload = 4;
  if (this->payload().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  // int64 errorCode = 2;
  if (this->errorcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_errorcode());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveCsCmdAck::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveCsCmdAck)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveCsCmdAck* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveCsCmdAck>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveCsCmdAck)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveCsCmdAck)
    MergeFrom(*source);
  }
}

void ZtLiveCsCmdAck::MergeFrom(const ZtLiveCsCmdAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveCsCmdAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.cmdacktype().size() > 0) {
    _internal_set_cmdacktype(from._internal_cmdacktype());
  }
  if (from.errormsg().size() > 0) {
    _internal_set_errormsg(from._internal_errormsg());
  }
  if (from.payload().size() > 0) {
    _internal_set_payload(from._internal_payload());
  }
  if (from.errorcode() != 0) {
    _internal_set_errorcode(from._internal_errorcode());
  }
}

void ZtLiveCsCmdAck::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveCsCmdAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveCsCmdAck::CopyFrom(const ZtLiveCsCmdAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveCsCmdAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveCsCmdAck::IsInitialized() const {
  return true;
}

void ZtLiveCsCmdAck::InternalSwap(ZtLiveCsCmdAck* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  cmdacktype_.Swap(&other->cmdacktype_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  errormsg_.Swap(&other->errormsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.Swap(&other->payload_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(errorcode_, other->errorcode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveCsCmdAck::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveCsCmd* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveCsCmd >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveCsCmd >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveCsCmdAck* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveCsCmdAck >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveCsCmdAck >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
