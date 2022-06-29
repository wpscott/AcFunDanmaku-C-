// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderSyncRequest.proto

#include "SessionFolderSyncRequest.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
PROTOBUF_CONSTEXPR SessionFolderSyncRequest::SessionFolderSyncRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.synccookie_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionFolderSyncRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionFolderSyncRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionFolderSyncRequestDefaultTypeInternal() {}
  union {
    SessionFolderSyncRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionFolderSyncRequestDefaultTypeInternal _SessionFolderSyncRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionFolderSyncRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionFolderSyncRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionFolderSyncRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionFolderSyncRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest, _impl_.synccookie_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionFolder::_SessionFolderSyncRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionFolderSyncRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036SessionFolderSyncRequest.proto\022!AcFunD"
  "anmu.Im.Cloud.SessionFolder\032\020SyncCookie."
  "proto\"O\n\030SessionFolderSyncRequest\0223\n\nsyn"
  "cCookie\030\001 \001(\0132\037.AcFunDanmu.Im.Basic.Sync"
  "Cookieb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionFolderSyncRequest_2eproto_deps[1] = {
  &::descriptor_table_SyncCookie_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionFolderSyncRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionFolderSyncRequest_2eproto = {
    false, false, 174, descriptor_table_protodef_SessionFolderSyncRequest_2eproto,
    "SessionFolderSyncRequest.proto",
    &descriptor_table_SessionFolderSyncRequest_2eproto_once, descriptor_table_SessionFolderSyncRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionFolderSyncRequest_2eproto::offsets,
    file_level_metadata_SessionFolderSyncRequest_2eproto, file_level_enum_descriptors_SessionFolderSyncRequest_2eproto,
    file_level_service_descriptors_SessionFolderSyncRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionFolderSyncRequest_2eproto_getter() {
  return &descriptor_table_SessionFolderSyncRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionFolderSyncRequest_2eproto(&descriptor_table_SessionFolderSyncRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderSyncRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie(const SessionFolderSyncRequest* msg);
};

const ::AcFunDanmu::Im::Basic::SyncCookie&
SessionFolderSyncRequest::_Internal::synccookie(const SessionFolderSyncRequest* msg) {
  return *msg->_impl_.synccookie_;
}
void SessionFolderSyncRequest::clear_synccookie() {
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
}
SessionFolderSyncRequest::SessionFolderSyncRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
}
SessionFolderSyncRequest::SessionFolderSyncRequest(const SessionFolderSyncRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionFolderSyncRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.synccookie_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_synccookie()) {
    _this->_impl_.synccookie_ = new ::AcFunDanmu::Im::Basic::SyncCookie(*from._impl_.synccookie_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
}

inline void SessionFolderSyncRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.synccookie_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionFolderSyncRequest::~SessionFolderSyncRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionFolderSyncRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.synccookie_;
}

void SessionFolderSyncRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionFolderSyncRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionFolderSyncRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_synccookie(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SessionFolderSyncRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  if (this->_internal_has_synccookie()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::synccookie(this),
        _Internal::synccookie(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  return target;
}

size_t SessionFolderSyncRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  if (this->_internal_has_synccookie()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.synccookie_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionFolderSyncRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionFolderSyncRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionFolderSyncRequest::GetClassData() const { return &_class_data_; }


void SessionFolderSyncRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionFolderSyncRequest*>(&to_msg);
  auto& from = static_cast<const SessionFolderSyncRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_synccookie()) {
    _this->_internal_mutable_synccookie()->::AcFunDanmu::Im::Basic::SyncCookie::MergeFrom(
        from._internal_synccookie());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionFolderSyncRequest::CopyFrom(const SessionFolderSyncRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionFolderSyncRequest::IsInitialized() const {
  return true;
}

void SessionFolderSyncRequest::InternalSwap(SessionFolderSyncRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.synccookie_, other->_impl_.synccookie_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionFolderSyncRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionFolderSyncRequest_2eproto_getter, &descriptor_table_SessionFolderSyncRequest_2eproto_once,
      file_level_metadata_SessionFolderSyncRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>