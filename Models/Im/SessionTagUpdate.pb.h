// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionTagUpdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionTagUpdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionTagUpdate_2eproto

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
#include "SessionTagBasic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionTagUpdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionTagUpdate_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionTagUpdate_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class SessionTagUpdate;
struct SessionTagUpdateDefaultTypeInternal;
extern SessionTagUpdateDefaultTypeInternal _SessionTagUpdate_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::SessionTagUpdate* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::SessionTagUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

// ===================================================================

class SessionTagUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate) */ {
 public:
  inline SessionTagUpdate() : SessionTagUpdate(nullptr) {}
  ~SessionTagUpdate() override;
  explicit PROTOBUF_CONSTEXPR SessionTagUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionTagUpdate(const SessionTagUpdate& from);
  SessionTagUpdate(SessionTagUpdate&& from) noexcept
    : SessionTagUpdate() {
    *this = ::std::move(from);
  }

  inline SessionTagUpdate& operator=(const SessionTagUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionTagUpdate& operator=(SessionTagUpdate&& from) noexcept {
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
  static const SessionTagUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionTagUpdate* internal_default_instance() {
    return reinterpret_cast<const SessionTagUpdate*>(
               &_SessionTagUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionTagUpdate& a, SessionTagUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionTagUpdate* other) {
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
  void UnsafeArenaSwap(SessionTagUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionTagUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionTagUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionTagUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionTagUpdate& from) {
    SessionTagUpdate::MergeImpl(*this, from);
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
  void InternalSwap(SessionTagUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate";
  }
  protected:
  explicit SessionTagUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionTagBasicFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Cloud.SessionTag.SessionTagBasic sessionTagBasic = 1;
  bool has_sessiontagbasic() const;
  private:
  bool _internal_has_sessiontagbasic() const;
  public:
  void clear_sessiontagbasic();
  const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic& sessiontagbasic() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* release_sessiontagbasic();
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* mutable_sessiontagbasic();
  void set_allocated_sessiontagbasic(::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* sessiontagbasic);
  private:
  const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic& _internal_sessiontagbasic() const;
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* _internal_mutable_sessiontagbasic();
  public:
  void unsafe_arena_set_allocated_sessiontagbasic(
      ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* sessiontagbasic);
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* unsafe_arena_release_sessiontagbasic();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* sessiontagbasic_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionTagUpdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionTagUpdate

// .AcFunDanmu.Im.Cloud.SessionTag.SessionTagBasic sessionTagBasic = 1;
inline bool SessionTagUpdate::_internal_has_sessiontagbasic() const {
  return this != internal_default_instance() && _impl_.sessiontagbasic_ != nullptr;
}
inline bool SessionTagUpdate::has_sessiontagbasic() const {
  return _internal_has_sessiontagbasic();
}
inline const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic& SessionTagUpdate::_internal_sessiontagbasic() const {
  const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* p = _impl_.sessiontagbasic_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic&>(
      ::AcFunDanmu::Im::Cloud::SessionTag::_SessionTagBasic_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic& SessionTagUpdate::sessiontagbasic() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate.sessionTagBasic)
  return _internal_sessiontagbasic();
}
inline void SessionTagUpdate::unsafe_arena_set_allocated_sessiontagbasic(
    ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* sessiontagbasic) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.sessiontagbasic_);
  }
  _impl_.sessiontagbasic_ = sessiontagbasic;
  if (sessiontagbasic) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate.sessionTagBasic)
}
inline ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* SessionTagUpdate::release_sessiontagbasic() {
  
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* temp = _impl_.sessiontagbasic_;
  _impl_.sessiontagbasic_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* SessionTagUpdate::unsafe_arena_release_sessiontagbasic() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate.sessionTagBasic)
  
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* temp = _impl_.sessiontagbasic_;
  _impl_.sessiontagbasic_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* SessionTagUpdate::_internal_mutable_sessiontagbasic() {
  
  if (_impl_.sessiontagbasic_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic>(GetArenaForAllocation());
    _impl_.sessiontagbasic_ = p;
  }
  return _impl_.sessiontagbasic_;
}
inline ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* SessionTagUpdate::mutable_sessiontagbasic() {
  ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* _msg = _internal_mutable_sessiontagbasic();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate.sessionTagBasic)
  return _msg;
}
inline void SessionTagUpdate::set_allocated_sessiontagbasic(::AcFunDanmu::Im::Cloud::SessionTag::SessionTagBasic* sessiontagbasic) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.sessiontagbasic_);
  }
  if (sessiontagbasic) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(sessiontagbasic));
    if (message_arena != submessage_arena) {
      sessiontagbasic = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sessiontagbasic, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.sessiontagbasic_ = sessiontagbasic;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.SessionTagUpdate.sessionTagBasic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionTagUpdate_2eproto