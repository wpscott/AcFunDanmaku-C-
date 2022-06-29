// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CSessionListRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_B2CSessionListRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_B2CSessionListRequest_2eproto

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
#include "SyncCookie.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_B2CSessionListRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_B2CSessionListRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_B2CSessionListRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class B2CSessionListRequest;
struct B2CSessionListRequestDefaultTypeInternal;
extern B2CSessionListRequestDefaultTypeInternal _B2CSessionListRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::B2CSessionListRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::B2CSessionListRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CSessionListRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.B2CSessionListRequest) */ {
 public:
  inline B2CSessionListRequest() : B2CSessionListRequest(nullptr) {}
  ~B2CSessionListRequest() override;
  explicit PROTOBUF_CONSTEXPR B2CSessionListRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  B2CSessionListRequest(const B2CSessionListRequest& from);
  B2CSessionListRequest(B2CSessionListRequest&& from) noexcept
    : B2CSessionListRequest() {
    *this = ::std::move(from);
  }

  inline B2CSessionListRequest& operator=(const B2CSessionListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline B2CSessionListRequest& operator=(B2CSessionListRequest&& from) noexcept {
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
  static const B2CSessionListRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const B2CSessionListRequest* internal_default_instance() {
    return reinterpret_cast<const B2CSessionListRequest*>(
               &_B2CSessionListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(B2CSessionListRequest& a, B2CSessionListRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(B2CSessionListRequest* other) {
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
  void UnsafeArenaSwap(B2CSessionListRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  B2CSessionListRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<B2CSessionListRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const B2CSessionListRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const B2CSessionListRequest& from) {
    B2CSessionListRequest::MergeImpl(*this, from);
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
  void InternalSwap(B2CSessionListRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.B2CSessionListRequest";
  }
  protected:
  explicit B2CSessionListRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSyncCookieFieldNumber = 1,
    kCategoryIdFieldNumber = 2,
    kLocalDataStatusFieldNumber = 3,
  };
  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  bool has_synccookie() const;
  private:
  bool _internal_has_synccookie() const;
  public:
  void clear_synccookie();
  const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::SyncCookie* release_synccookie();
  ::AcFunDanmu::Im::Basic::SyncCookie* mutable_synccookie();
  void set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  private:
  const ::AcFunDanmu::Im::Basic::SyncCookie& _internal_synccookie() const;
  ::AcFunDanmu::Im::Basic::SyncCookie* _internal_mutable_synccookie();
  public:
  void unsafe_arena_set_allocated_synccookie(
      ::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  ::AcFunDanmu::Im::Basic::SyncCookie* unsafe_arena_release_synccookie();

  // int32 categoryId = 2;
  void clear_categoryid();
  int32_t categoryid() const;
  void set_categoryid(int32_t value);
  private:
  int32_t _internal_categoryid() const;
  void _internal_set_categoryid(int32_t value);
  public:

  // int32 localDataStatus = 3;
  void clear_localdatastatus();
  int32_t localdatastatus() const;
  void set_localdatastatus(int32_t value);
  private:
  int32_t _internal_localdatastatus() const;
  void _internal_set_localdatastatus(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.B2CSessionListRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie_;
    int32_t categoryid_;
    int32_t localdatastatus_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_B2CSessionListRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// B2CSessionListRequest

// .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
inline bool B2CSessionListRequest::_internal_has_synccookie() const {
  return this != internal_default_instance() && _impl_.synccookie_ != nullptr;
}
inline bool B2CSessionListRequest::has_synccookie() const {
  return _internal_has_synccookie();
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& B2CSessionListRequest::_internal_synccookie() const {
  const ::AcFunDanmu::Im::Basic::SyncCookie* p = _impl_.synccookie_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::SyncCookie&>(
      ::AcFunDanmu::Im::Basic::_SyncCookie_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& B2CSessionListRequest::synccookie() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListRequest.syncCookie)
  return _internal_synccookie();
}
inline void B2CSessionListRequest::unsafe_arena_set_allocated_synccookie(
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  _impl_.synccookie_ = synccookie;
  if (synccookie) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.B2CSessionListRequest.syncCookie)
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListRequest::release_synccookie() {
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListRequest::unsafe_arena_release_synccookie() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.B2CSessionListRequest.syncCookie)
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListRequest::_internal_mutable_synccookie() {
  
  if (_impl_.synccookie_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::SyncCookie>(GetArenaForAllocation());
    _impl_.synccookie_ = p;
  }
  return _impl_.synccookie_;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListRequest::mutable_synccookie() {
  ::AcFunDanmu::Im::Basic::SyncCookie* _msg = _internal_mutable_synccookie();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.B2CSessionListRequest.syncCookie)
  return _msg;
}
inline void B2CSessionListRequest::set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  if (synccookie) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(synccookie));
    if (message_arena != submessage_arena) {
      synccookie = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, synccookie, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.synccookie_ = synccookie;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.B2CSessionListRequest.syncCookie)
}

// int32 categoryId = 2;
inline void B2CSessionListRequest::clear_categoryid() {
  _impl_.categoryid_ = 0;
}
inline int32_t B2CSessionListRequest::_internal_categoryid() const {
  return _impl_.categoryid_;
}
inline int32_t B2CSessionListRequest::categoryid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListRequest.categoryId)
  return _internal_categoryid();
}
inline void B2CSessionListRequest::_internal_set_categoryid(int32_t value) {
  
  _impl_.categoryid_ = value;
}
inline void B2CSessionListRequest::set_categoryid(int32_t value) {
  _internal_set_categoryid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListRequest.categoryId)
}

// int32 localDataStatus = 3;
inline void B2CSessionListRequest::clear_localdatastatus() {
  _impl_.localdatastatus_ = 0;
}
inline int32_t B2CSessionListRequest::_internal_localdatastatus() const {
  return _impl_.localdatastatus_;
}
inline int32_t B2CSessionListRequest::localdatastatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListRequest.localDataStatus)
  return _internal_localdatastatus();
}
inline void B2CSessionListRequest::_internal_set_localdatastatus(int32_t value) {
  
  _impl_.localdatastatus_ = value;
}
inline void B2CSessionListRequest::set_localdatastatus(int32_t value) {
  _internal_set_localdatastatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListRequest.localDataStatus)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_B2CSessionListRequest_2eproto