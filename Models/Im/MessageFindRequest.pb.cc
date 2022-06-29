// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageFindRequest.proto

#include "MessageFindRequest.pb.h"

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
namespace Message {
PROTOBUF_CONSTEXPR MessageFindRequest::MessageFindRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.messageseqids_)*/{}
  , /*decltype(_impl_._messageseqids_cached_byte_size_)*/{0}
  , /*decltype(_impl_.strtargetid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageFindRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageFindRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageFindRequestDefaultTypeInternal() {}
  union {
    MessageFindRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageFindRequestDefaultTypeInternal _MessageFindRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageFindRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageFindRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageFindRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageFindRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageFindRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageFindRequest, _impl_.strtargetid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageFindRequest, _impl_.messageseqids_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageFindRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageFindRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageFindRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030MessageFindRequest.proto\022\025AcFunDanmu.I"
  "m.Message\"@\n\022MessageFindRequest\022\023\n\013strTa"
  "rgetId\030\001 \001(\t\022\025\n\rmessageSeqIds\030\002 \003(\003b\006pro"
  "to3"
  ;
static ::_pbi::once_flag descriptor_table_MessageFindRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageFindRequest_2eproto = {
    false, false, 123, descriptor_table_protodef_MessageFindRequest_2eproto,
    "MessageFindRequest.proto",
    &descriptor_table_MessageFindRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_MessageFindRequest_2eproto::offsets,
    file_level_metadata_MessageFindRequest_2eproto, file_level_enum_descriptors_MessageFindRequest_2eproto,
    file_level_service_descriptors_MessageFindRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageFindRequest_2eproto_getter() {
  return &descriptor_table_MessageFindRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageFindRequest_2eproto(&descriptor_table_MessageFindRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageFindRequest::_Internal {
 public:
};

MessageFindRequest::MessageFindRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageFindRequest)
}
MessageFindRequest::MessageFindRequest(const MessageFindRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageFindRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.messageseqids_){from._impl_.messageseqids_}
    , /*decltype(_impl_._messageseqids_cached_byte_size_)*/{0}
    , decltype(_impl_.strtargetid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strtargetid().empty()) {
    _this->_impl_.strtargetid_.Set(from._internal_strtargetid(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageFindRequest)
}

inline void MessageFindRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.messageseqids_){arena}
    , /*decltype(_impl_._messageseqids_cached_byte_size_)*/{0}
    , decltype(_impl_.strtargetid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MessageFindRequest::~MessageFindRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageFindRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageFindRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.messageseqids_.~RepeatedField();
  _impl_.strtargetid_.Destroy();
}

void MessageFindRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageFindRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageFindRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.messageseqids_.Clear();
  _impl_.strtargetid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageFindRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string strTargetId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_strtargetid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.MessageFindRequest.strTargetId"));
        } else
          goto handle_unusual;
        continue;
      // repeated int64 messageSeqIds = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_messageseqids(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_messageseqids(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

uint8_t* MessageFindRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageFindRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strtargetid().data(), static_cast<int>(this->_internal_strtargetid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.MessageFindRequest.strTargetId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_strtargetid(), target);
  }

  // repeated int64 messageSeqIds = 2;
  {
    int byte_size = _impl_._messageseqids_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          2, _internal_messageseqids(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageFindRequest)
  return target;
}

size_t MessageFindRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageFindRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 messageSeqIds = 2;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int64Size(this->_impl_.messageseqids_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._messageseqids_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strtargetid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageFindRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageFindRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageFindRequest::GetClassData() const { return &_class_data_; }


void MessageFindRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageFindRequest*>(&to_msg);
  auto& from = static_cast<const MessageFindRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageFindRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.messageseqids_.MergeFrom(from._impl_.messageseqids_);
  if (!from._internal_strtargetid().empty()) {
    _this->_internal_set_strtargetid(from._internal_strtargetid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageFindRequest::CopyFrom(const MessageFindRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageFindRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageFindRequest::IsInitialized() const {
  return true;
}

void MessageFindRequest::InternalSwap(MessageFindRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.messageseqids_.InternalSwap(&other->_impl_.messageseqids_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strtargetid_, lhs_arena,
      &other->_impl_.strtargetid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageFindRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageFindRequest_2eproto_getter, &descriptor_table_MessageFindRequest_2eproto_once,
      file_level_metadata_MessageFindRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageFindRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageFindRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageFindRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>