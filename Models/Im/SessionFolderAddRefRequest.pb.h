// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderAddRefRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionFolderAddRefRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionFolderAddRefRequest_2eproto

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
#include "SessionReference.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionFolderAddRefRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionFolderAddRefRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionFolderAddRefRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
class SessionFolderAddRefRequest;
struct SessionFolderAddRefRequestDefaultTypeInternal;
extern SessionFolderAddRefRequestDefaultTypeInternal _SessionFolderAddRefRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderAddRefRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest) */ {
 public:
  inline SessionFolderAddRefRequest() : SessionFolderAddRefRequest(nullptr) {}
  ~SessionFolderAddRefRequest() override;
  explicit PROTOBUF_CONSTEXPR SessionFolderAddRefRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionFolderAddRefRequest(const SessionFolderAddRefRequest& from);
  SessionFolderAddRefRequest(SessionFolderAddRefRequest&& from) noexcept
    : SessionFolderAddRefRequest() {
    *this = ::std::move(from);
  }

  inline SessionFolderAddRefRequest& operator=(const SessionFolderAddRefRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionFolderAddRefRequest& operator=(SessionFolderAddRefRequest&& from) noexcept {
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
  static const SessionFolderAddRefRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionFolderAddRefRequest* internal_default_instance() {
    return reinterpret_cast<const SessionFolderAddRefRequest*>(
               &_SessionFolderAddRefRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionFolderAddRefRequest& a, SessionFolderAddRefRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionFolderAddRefRequest* other) {
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
  void UnsafeArenaSwap(SessionFolderAddRefRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionFolderAddRefRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionFolderAddRefRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionFolderAddRefRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionFolderAddRefRequest& from) {
    SessionFolderAddRefRequest::MergeImpl(*this, from);
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
  void InternalSwap(SessionFolderAddRefRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest";
  }
  protected:
  explicit SessionFolderAddRefRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionReferenceFieldNumber = 1,
    kTargetSessionFolderIdFieldNumber = 2,
  };
  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
  int sessionreference_size() const;
  private:
  int _internal_sessionreference_size() const;
  public:
  void clear_sessionreference();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* mutable_sessionreference(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference >*
      mutable_sessionreference();
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& _internal_sessionreference(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* _internal_add_sessionreference();
  public:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& sessionreference(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* add_sessionreference();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference >&
      sessionreference() const;

  // string targetSessionFolderId = 2;
  void clear_targetsessionfolderid();
  const std::string& targetsessionfolderid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_targetsessionfolderid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_targetsessionfolderid();
  PROTOBUF_NODISCARD std::string* release_targetsessionfolderid();
  void set_allocated_targetsessionfolderid(std::string* targetsessionfolderid);
  private:
  const std::string& _internal_targetsessionfolderid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_targetsessionfolderid(const std::string& value);
  std::string* _internal_mutable_targetsessionfolderid();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference > sessionreference_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr targetsessionfolderid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionFolderAddRefRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionFolderAddRefRequest

// repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
inline int SessionFolderAddRefRequest::_internal_sessionreference_size() const {
  return _impl_.sessionreference_.size();
}
inline int SessionFolderAddRefRequest::sessionreference_size() const {
  return _internal_sessionreference_size();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderAddRefRequest::mutable_sessionreference(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.sessionReference)
  return _impl_.sessionreference_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference >*
SessionFolderAddRefRequest::mutable_sessionreference() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.sessionReference)
  return &_impl_.sessionreference_;
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& SessionFolderAddRefRequest::_internal_sessionreference(int index) const {
  return _impl_.sessionreference_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& SessionFolderAddRefRequest::sessionreference(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.sessionReference)
  return _internal_sessionreference(index);
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderAddRefRequest::_internal_add_sessionreference() {
  return _impl_.sessionreference_.Add();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderAddRefRequest::add_sessionreference() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* _add = _internal_add_sessionreference();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.sessionReference)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference >&
SessionFolderAddRefRequest::sessionreference() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.sessionReference)
  return _impl_.sessionreference_;
}

// string targetSessionFolderId = 2;
inline void SessionFolderAddRefRequest::clear_targetsessionfolderid() {
  _impl_.targetsessionfolderid_.ClearToEmpty();
}
inline const std::string& SessionFolderAddRefRequest::targetsessionfolderid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId)
  return _internal_targetsessionfolderid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionFolderAddRefRequest::set_targetsessionfolderid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.targetsessionfolderid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId)
}
inline std::string* SessionFolderAddRefRequest::mutable_targetsessionfolderid() {
  std::string* _s = _internal_mutable_targetsessionfolderid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId)
  return _s;
}
inline const std::string& SessionFolderAddRefRequest::_internal_targetsessionfolderid() const {
  return _impl_.targetsessionfolderid_.Get();
}
inline void SessionFolderAddRefRequest::_internal_set_targetsessionfolderid(const std::string& value) {
  
  _impl_.targetsessionfolderid_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionFolderAddRefRequest::_internal_mutable_targetsessionfolderid() {
  
  return _impl_.targetsessionfolderid_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionFolderAddRefRequest::release_targetsessionfolderid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId)
  return _impl_.targetsessionfolderid_.Release();
}
inline void SessionFolderAddRefRequest::set_allocated_targetsessionfolderid(std::string* targetsessionfolderid) {
  if (targetsessionfolderid != nullptr) {
    
  } else {
    
  }
  _impl_.targetsessionfolderid_.SetAllocated(targetsessionfolderid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.targetsessionfolderid_.IsDefault()) {
    _impl_.targetsessionfolderid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionFolderAddRefRequest_2eproto