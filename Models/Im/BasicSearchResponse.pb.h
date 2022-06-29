// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BasicSearchResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_BasicSearchResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_BasicSearchResponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "GroupSearchResult.pb.h"
#include "UserSearchResult.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_BasicSearchResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_BasicSearchResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BasicSearchResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {
class BasicSearchResponse;
struct BasicSearchResponseDefaultTypeInternal;
extern BasicSearchResponseDefaultTypeInternal _BasicSearchResponse_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Search::BasicSearchResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Search::BasicSearchResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class BasicSearchResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse) */ {
 public:
  inline BasicSearchResponse() : BasicSearchResponse(nullptr) {}
  ~BasicSearchResponse() override;
  explicit PROTOBUF_CONSTEXPR BasicSearchResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BasicSearchResponse(const BasicSearchResponse& from);
  BasicSearchResponse(BasicSearchResponse&& from) noexcept
    : BasicSearchResponse() {
    *this = ::std::move(from);
  }

  inline BasicSearchResponse& operator=(const BasicSearchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline BasicSearchResponse& operator=(BasicSearchResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const BasicSearchResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const BasicSearchResponse* internal_default_instance() {
    return reinterpret_cast<const BasicSearchResponse*>(
               &_BasicSearchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BasicSearchResponse& a, BasicSearchResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(BasicSearchResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BasicSearchResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BasicSearchResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BasicSearchResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BasicSearchResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BasicSearchResponse& from) {
    BasicSearchResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BasicSearchResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Search.BasicSearchResponse";
  }
  protected:
  explicit BasicSearchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserResultFieldNumber = 1,
    kGroupResultFieldNumber = 2,
  };
  // repeated .AcFunDanmu.Im.Cloud.Search.UserSearchResult userResult = 1;
  int userresult_size() const;
  private:
  int _internal_userresult_size() const;
  public:
  void clear_userresult();
  ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* mutable_userresult(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::UserSearchResult >*
      mutable_userresult();
  private:
  const ::AcFunDanmu::Im::Cloud::Search::UserSearchResult& _internal_userresult(int index) const;
  ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* _internal_add_userresult();
  public:
  const ::AcFunDanmu::Im::Cloud::Search::UserSearchResult& userresult(int index) const;
  ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* add_userresult();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::UserSearchResult >&
      userresult() const;

  // repeated .AcFunDanmu.Im.Cloud.Search.GroupSearchResult groupResult = 2;
  int groupresult_size() const;
  private:
  int _internal_groupresult_size() const;
  public:
  void clear_groupresult();
  ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* mutable_groupresult(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult >*
      mutable_groupresult();
  private:
  const ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult& _internal_groupresult(int index) const;
  ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* _internal_add_groupresult();
  public:
  const ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult& groupresult(int index) const;
  ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* add_groupresult();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult >&
      groupresult() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::UserSearchResult > userresult_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult > groupresult_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_BasicSearchResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BasicSearchResponse

// repeated .AcFunDanmu.Im.Cloud.Search.UserSearchResult userResult = 1;
inline int BasicSearchResponse::_internal_userresult_size() const {
  return _impl_.userresult_.size();
}
inline int BasicSearchResponse::userresult_size() const {
  return _internal_userresult_size();
}
inline ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* BasicSearchResponse::mutable_userresult(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.userResult)
  return _impl_.userresult_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::UserSearchResult >*
BasicSearchResponse::mutable_userresult() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.userResult)
  return &_impl_.userresult_;
}
inline const ::AcFunDanmu::Im::Cloud::Search::UserSearchResult& BasicSearchResponse::_internal_userresult(int index) const {
  return _impl_.userresult_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Search::UserSearchResult& BasicSearchResponse::userresult(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.userResult)
  return _internal_userresult(index);
}
inline ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* BasicSearchResponse::_internal_add_userresult() {
  return _impl_.userresult_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* BasicSearchResponse::add_userresult() {
  ::AcFunDanmu::Im::Cloud::Search::UserSearchResult* _add = _internal_add_userresult();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.userResult)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::UserSearchResult >&
BasicSearchResponse::userresult() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.userResult)
  return _impl_.userresult_;
}

// repeated .AcFunDanmu.Im.Cloud.Search.GroupSearchResult groupResult = 2;
inline int BasicSearchResponse::_internal_groupresult_size() const {
  return _impl_.groupresult_.size();
}
inline int BasicSearchResponse::groupresult_size() const {
  return _internal_groupresult_size();
}
inline ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* BasicSearchResponse::mutable_groupresult(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.groupResult)
  return _impl_.groupresult_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult >*
BasicSearchResponse::mutable_groupresult() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.groupResult)
  return &_impl_.groupresult_;
}
inline const ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult& BasicSearchResponse::_internal_groupresult(int index) const {
  return _impl_.groupresult_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult& BasicSearchResponse::groupresult(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.groupResult)
  return _internal_groupresult(index);
}
inline ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* BasicSearchResponse::_internal_add_groupresult() {
  return _impl_.groupresult_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* BasicSearchResponse::add_groupresult() {
  ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult* _add = _internal_add_groupresult();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.groupResult)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Search::GroupSearchResult >&
BasicSearchResponse::groupresult() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Search.BasicSearchResponse.groupResult)
  return _impl_.groupresult_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_BasicSearchResponse_2eproto