// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderDeleteRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionFolderDeleteRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionFolderDeleteRequest_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionFolderDeleteRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionFolderDeleteRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionFolderDeleteRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
class SessionFolderDeleteRequest;
struct SessionFolderDeleteRequestDefaultTypeInternal;
extern SessionFolderDeleteRequestDefaultTypeInternal _SessionFolderDeleteRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderDeleteRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderDeleteRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderDeleteRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest) */ {
 public:
  inline SessionFolderDeleteRequest() : SessionFolderDeleteRequest(nullptr) {}
  ~SessionFolderDeleteRequest() override;
  explicit PROTOBUF_CONSTEXPR SessionFolderDeleteRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionFolderDeleteRequest(const SessionFolderDeleteRequest& from);
  SessionFolderDeleteRequest(SessionFolderDeleteRequest&& from) noexcept
    : SessionFolderDeleteRequest() {
    *this = ::std::move(from);
  }

  inline SessionFolderDeleteRequest& operator=(const SessionFolderDeleteRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionFolderDeleteRequest& operator=(SessionFolderDeleteRequest&& from) noexcept {
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
  static const SessionFolderDeleteRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionFolderDeleteRequest* internal_default_instance() {
    return reinterpret_cast<const SessionFolderDeleteRequest*>(
               &_SessionFolderDeleteRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionFolderDeleteRequest& a, SessionFolderDeleteRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionFolderDeleteRequest* other) {
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
  void UnsafeArenaSwap(SessionFolderDeleteRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionFolderDeleteRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionFolderDeleteRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionFolderDeleteRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionFolderDeleteRequest& from) {
    SessionFolderDeleteRequest::MergeImpl(*this, from);
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
  void InternalSwap(SessionFolderDeleteRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest";
  }
  protected:
  explicit SessionFolderDeleteRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionFolderIdFieldNumber = 1,
  };
  // string sessionFolderId = 1;
  void clear_sessionfolderid();
  const std::string& sessionfolderid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sessionfolderid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sessionfolderid();
  PROTOBUF_NODISCARD std::string* release_sessionfolderid();
  void set_allocated_sessionfolderid(std::string* sessionfolderid);
  private:
  const std::string& _internal_sessionfolderid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sessionfolderid(const std::string& value);
  std::string* _internal_mutable_sessionfolderid();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sessionfolderid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionFolderDeleteRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionFolderDeleteRequest

// string sessionFolderId = 1;
inline void SessionFolderDeleteRequest::clear_sessionfolderid() {
  _impl_.sessionfolderid_.ClearToEmpty();
}
inline const std::string& SessionFolderDeleteRequest::sessionfolderid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest.sessionFolderId)
  return _internal_sessionfolderid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionFolderDeleteRequest::set_sessionfolderid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sessionfolderid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest.sessionFolderId)
}
inline std::string* SessionFolderDeleteRequest::mutable_sessionfolderid() {
  std::string* _s = _internal_mutable_sessionfolderid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest.sessionFolderId)
  return _s;
}
inline const std::string& SessionFolderDeleteRequest::_internal_sessionfolderid() const {
  return _impl_.sessionfolderid_.Get();
}
inline void SessionFolderDeleteRequest::_internal_set_sessionfolderid(const std::string& value) {
  
  _impl_.sessionfolderid_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionFolderDeleteRequest::_internal_mutable_sessionfolderid() {
  
  return _impl_.sessionfolderid_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionFolderDeleteRequest::release_sessionfolderid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest.sessionFolderId)
  return _impl_.sessionfolderid_.Release();
}
inline void SessionFolderDeleteRequest::set_allocated_sessionfolderid(std::string* sessionfolderid) {
  if (sessionfolderid != nullptr) {
    
  } else {
    
  }
  _impl_.sessionfolderid_.SetAllocated(sessionfolderid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sessionfolderid_.IsDefault()) {
    _impl_.sessionfolderid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderDeleteRequest.sessionFolderId)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionFolderDeleteRequest_2eproto