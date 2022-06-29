// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BasicSearchRequest.proto

#include "BasicSearchRequest.pb.h"

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
namespace Search {
PROTOBUF_CONSTEXPR BasicSearchRequest::BasicSearchRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sessionfolderid_)*/{}
  , /*decltype(_impl_.query_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BasicSearchRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BasicSearchRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BasicSearchRequestDefaultTypeInternal() {}
  union {
    BasicSearchRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BasicSearchRequestDefaultTypeInternal _BasicSearchRequest_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_BasicSearchRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_BasicSearchRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_BasicSearchRequest_2eproto = nullptr;

const uint32_t TableStruct_BasicSearchRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest, _impl_.query_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest, _impl_.sessionfolderid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_BasicSearchRequest_default_instance_._instance,
};

const char descriptor_table_protodef_BasicSearchRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030BasicSearchRequest.proto\022\032AcFunDanmu.I"
  "m.Cloud.Search\"<\n\022BasicSearchRequest\022\r\n\005"
  "query\030\001 \001(\t\022\027\n\017sessionFolderId\030\002 \003(\tb\006pr"
  "oto3"
  ;
static ::_pbi::once_flag descriptor_table_BasicSearchRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_BasicSearchRequest_2eproto = {
    false, false, 124, descriptor_table_protodef_BasicSearchRequest_2eproto,
    "BasicSearchRequest.proto",
    &descriptor_table_BasicSearchRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_BasicSearchRequest_2eproto::offsets,
    file_level_metadata_BasicSearchRequest_2eproto, file_level_enum_descriptors_BasicSearchRequest_2eproto,
    file_level_service_descriptors_BasicSearchRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_BasicSearchRequest_2eproto_getter() {
  return &descriptor_table_BasicSearchRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_BasicSearchRequest_2eproto(&descriptor_table_BasicSearchRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class BasicSearchRequest::_Internal {
 public:
};

BasicSearchRequest::BasicSearchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
}
BasicSearchRequest::BasicSearchRequest(const BasicSearchRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BasicSearchRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderid_){from._impl_.sessionfolderid_}
    , decltype(_impl_.query_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.query_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.query_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_query().empty()) {
    _this->_impl_.query_.Set(from._internal_query(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
}

inline void BasicSearchRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderid_){arena}
    , decltype(_impl_.query_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.query_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.query_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

BasicSearchRequest::~BasicSearchRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BasicSearchRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sessionfolderid_.~RepeatedPtrField();
  _impl_.query_.Destroy();
}

void BasicSearchRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BasicSearchRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sessionfolderid_.Clear();
  _impl_.query_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BasicSearchRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string query = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_query();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.BasicSearchRequest.query"));
        } else
          goto handle_unusual;
        continue;
      // repeated string sessionFolderId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_sessionfolderid();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.BasicSearchRequest.sessionFolderId"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* BasicSearchRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string query = 1;
  if (!this->_internal_query().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_query().data(), static_cast<int>(this->_internal_query().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.BasicSearchRequest.query");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_query(), target);
  }

  // repeated string sessionFolderId = 2;
  for (int i = 0, n = this->_internal_sessionfolderid_size(); i < n; i++) {
    const auto& s = this->_internal_sessionfolderid(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.BasicSearchRequest.sessionFolderId");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  return target;
}

size_t BasicSearchRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string sessionFolderId = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.sessionfolderid_.size());
  for (int i = 0, n = _impl_.sessionfolderid_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.sessionfolderid_.Get(i));
  }

  // string query = 1;
  if (!this->_internal_query().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_query());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BasicSearchRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BasicSearchRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BasicSearchRequest::GetClassData() const { return &_class_data_; }


void BasicSearchRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BasicSearchRequest*>(&to_msg);
  auto& from = static_cast<const BasicSearchRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sessionfolderid_.MergeFrom(from._impl_.sessionfolderid_);
  if (!from._internal_query().empty()) {
    _this->_internal_set_query(from._internal_query());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BasicSearchRequest::CopyFrom(const BasicSearchRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.BasicSearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BasicSearchRequest::IsInitialized() const {
  return true;
}

void BasicSearchRequest::InternalSwap(BasicSearchRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sessionfolderid_.InternalSwap(&other->_impl_.sessionfolderid_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.query_, lhs_arena,
      &other->_impl_.query_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata BasicSearchRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_BasicSearchRequest_2eproto_getter, &descriptor_table_BasicSearchRequest_2eproto_once,
      file_level_metadata_BasicSearchRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::BasicSearchRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>