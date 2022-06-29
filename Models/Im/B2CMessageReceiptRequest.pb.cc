// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CMessageReceiptRequest.proto

#include "B2CMessageReceiptRequest.pb.h"

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
PROTOBUF_CONSTEXPR B2CMessageReceiptRequest::B2CMessageReceiptRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.messagereceiptinfo_)*/{}
  , /*decltype(_impl_.strtargetid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct B2CMessageReceiptRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR B2CMessageReceiptRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~B2CMessageReceiptRequestDefaultTypeInternal() {}
  union {
    B2CMessageReceiptRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 B2CMessageReceiptRequestDefaultTypeInternal _B2CMessageReceiptRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_B2CMessageReceiptRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_B2CMessageReceiptRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_B2CMessageReceiptRequest_2eproto = nullptr;

const uint32_t TableStruct_B2CMessageReceiptRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptRequest, _impl_.messagereceiptinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptRequest, _impl_.strtargetid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::B2CMessageReceiptRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_B2CMessageReceiptRequest_default_instance_._instance,
};

const char descriptor_table_protodef_B2CMessageReceiptRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036B2CMessageReceiptRequest.proto\022\025AcFunD"
  "anmu.Im.Message\032\033B2CMessageReceiptInfo.p"
  "roto\"y\n\030B2CMessageReceiptRequest\022H\n\022mess"
  "ageReceiptInfo\030\001 \003(\0132,.AcFunDanmu.Im.Mes"
  "sage.B2CMessageReceiptInfo\022\023\n\013strTargetI"
  "d\030\002 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_B2CMessageReceiptRequest_2eproto_deps[1] = {
  &::descriptor_table_B2CMessageReceiptInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_B2CMessageReceiptRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_B2CMessageReceiptRequest_2eproto = {
    false, false, 215, descriptor_table_protodef_B2CMessageReceiptRequest_2eproto,
    "B2CMessageReceiptRequest.proto",
    &descriptor_table_B2CMessageReceiptRequest_2eproto_once, descriptor_table_B2CMessageReceiptRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_B2CMessageReceiptRequest_2eproto::offsets,
    file_level_metadata_B2CMessageReceiptRequest_2eproto, file_level_enum_descriptors_B2CMessageReceiptRequest_2eproto,
    file_level_service_descriptors_B2CMessageReceiptRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_B2CMessageReceiptRequest_2eproto_getter() {
  return &descriptor_table_B2CMessageReceiptRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_B2CMessageReceiptRequest_2eproto(&descriptor_table_B2CMessageReceiptRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CMessageReceiptRequest::_Internal {
 public:
};

void B2CMessageReceiptRequest::clear_messagereceiptinfo() {
  _impl_.messagereceiptinfo_.Clear();
}
B2CMessageReceiptRequest::B2CMessageReceiptRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
}
B2CMessageReceiptRequest::B2CMessageReceiptRequest(const B2CMessageReceiptRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  B2CMessageReceiptRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.messagereceiptinfo_){from._impl_.messagereceiptinfo_}
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
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
}

inline void B2CMessageReceiptRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.messagereceiptinfo_){arena}
    , decltype(_impl_.strtargetid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

B2CMessageReceiptRequest::~B2CMessageReceiptRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void B2CMessageReceiptRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.messagereceiptinfo_.~RepeatedPtrField();
  _impl_.strtargetid_.Destroy();
}

void B2CMessageReceiptRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void B2CMessageReceiptRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.messagereceiptinfo_.Clear();
  _impl_.strtargetid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* B2CMessageReceiptRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Message.B2CMessageReceiptInfo messageReceiptInfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_messagereceiptinfo(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string strTargetId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_strtargetid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.B2CMessageReceiptRequest.strTargetId"));
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

uint8_t* B2CMessageReceiptRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.B2CMessageReceiptInfo messageReceiptInfo = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_messagereceiptinfo_size()); i < n; i++) {
    const auto& repfield = this->_internal_messagereceiptinfo(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string strTargetId = 2;
  if (!this->_internal_strtargetid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strtargetid().data(), static_cast<int>(this->_internal_strtargetid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.B2CMessageReceiptRequest.strTargetId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_strtargetid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  return target;
}

size_t B2CMessageReceiptRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.B2CMessageReceiptInfo messageReceiptInfo = 1;
  total_size += 1UL * this->_internal_messagereceiptinfo_size();
  for (const auto& msg : this->_impl_.messagereceiptinfo_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string strTargetId = 2;
  if (!this->_internal_strtargetid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strtargetid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData B2CMessageReceiptRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    B2CMessageReceiptRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*B2CMessageReceiptRequest::GetClassData() const { return &_class_data_; }


void B2CMessageReceiptRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<B2CMessageReceiptRequest*>(&to_msg);
  auto& from = static_cast<const B2CMessageReceiptRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.messagereceiptinfo_.MergeFrom(from._impl_.messagereceiptinfo_);
  if (!from._internal_strtargetid().empty()) {
    _this->_internal_set_strtargetid(from._internal_strtargetid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void B2CMessageReceiptRequest::CopyFrom(const B2CMessageReceiptRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.B2CMessageReceiptRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool B2CMessageReceiptRequest::IsInitialized() const {
  return true;
}

void B2CMessageReceiptRequest::InternalSwap(B2CMessageReceiptRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.messagereceiptinfo_.InternalSwap(&other->_impl_.messagereceiptinfo_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strtargetid_, lhs_arena,
      &other->_impl_.strtargetid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata B2CMessageReceiptRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_B2CMessageReceiptRequest_2eproto_getter, &descriptor_table_B2CMessageReceiptRequest_2eproto_once,
      file_level_metadata_B2CMessageReceiptRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::B2CMessageReceiptRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::B2CMessageReceiptRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::B2CMessageReceiptRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>