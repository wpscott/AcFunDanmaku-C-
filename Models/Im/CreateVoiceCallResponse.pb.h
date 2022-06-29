// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CreateVoiceCallResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CreateVoiceCallResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CreateVoiceCallResponse_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CreateVoiceCallResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CreateVoiceCallResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CreateVoiceCallResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
class CreateVoiceCallResponse;
struct CreateVoiceCallResponseDefaultTypeInternal;
extern CreateVoiceCallResponseDefaultTypeInternal _CreateVoiceCallResponse_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Voice::Call::CreateVoiceCallResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Voice::Call::CreateVoiceCallResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class CreateVoiceCallResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse) */ {
 public:
  inline CreateVoiceCallResponse() : CreateVoiceCallResponse(nullptr) {}
  ~CreateVoiceCallResponse() override;
  explicit PROTOBUF_CONSTEXPR CreateVoiceCallResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CreateVoiceCallResponse(const CreateVoiceCallResponse& from);
  CreateVoiceCallResponse(CreateVoiceCallResponse&& from) noexcept
    : CreateVoiceCallResponse() {
    *this = ::std::move(from);
  }

  inline CreateVoiceCallResponse& operator=(const CreateVoiceCallResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CreateVoiceCallResponse& operator=(CreateVoiceCallResponse&& from) noexcept {
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
  static const CreateVoiceCallResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const CreateVoiceCallResponse* internal_default_instance() {
    return reinterpret_cast<const CreateVoiceCallResponse*>(
               &_CreateVoiceCallResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CreateVoiceCallResponse& a, CreateVoiceCallResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(CreateVoiceCallResponse* other) {
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
  void UnsafeArenaSwap(CreateVoiceCallResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CreateVoiceCallResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CreateVoiceCallResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CreateVoiceCallResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CreateVoiceCallResponse& from) {
    CreateVoiceCallResponse::MergeImpl(*this, from);
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
  void InternalSwap(CreateVoiceCallResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse";
  }
  protected:
  explicit CreateVoiceCallResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoomIdFieldNumber = 1,
    kSignalDataFieldNumber = 2,
  };
  // string roomId = 1;
  void clear_roomid();
  const std::string& roomid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_roomid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_roomid();
  PROTOBUF_NODISCARD std::string* release_roomid();
  void set_allocated_roomid(std::string* roomid);
  private:
  const std::string& _internal_roomid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_roomid(const std::string& value);
  std::string* _internal_mutable_roomid();
  public:

  // bytes signalData = 2;
  void clear_signaldata();
  const std::string& signaldata() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_signaldata(ArgT0&& arg0, ArgT... args);
  std::string* mutable_signaldata();
  PROTOBUF_NODISCARD std::string* release_signaldata();
  void set_allocated_signaldata(std::string* signaldata);
  private:
  const std::string& _internal_signaldata() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_signaldata(const std::string& value);
  std::string* _internal_mutable_signaldata();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr roomid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr signaldata_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CreateVoiceCallResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CreateVoiceCallResponse

// string roomId = 1;
inline void CreateVoiceCallResponse::clear_roomid() {
  _impl_.roomid_.ClearToEmpty();
}
inline const std::string& CreateVoiceCallResponse::roomid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.roomId)
  return _internal_roomid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CreateVoiceCallResponse::set_roomid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.roomid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.roomId)
}
inline std::string* CreateVoiceCallResponse::mutable_roomid() {
  std::string* _s = _internal_mutable_roomid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.roomId)
  return _s;
}
inline const std::string& CreateVoiceCallResponse::_internal_roomid() const {
  return _impl_.roomid_.Get();
}
inline void CreateVoiceCallResponse::_internal_set_roomid(const std::string& value) {
  
  _impl_.roomid_.Set(value, GetArenaForAllocation());
}
inline std::string* CreateVoiceCallResponse::_internal_mutable_roomid() {
  
  return _impl_.roomid_.Mutable(GetArenaForAllocation());
}
inline std::string* CreateVoiceCallResponse::release_roomid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.roomId)
  return _impl_.roomid_.Release();
}
inline void CreateVoiceCallResponse::set_allocated_roomid(std::string* roomid) {
  if (roomid != nullptr) {
    
  } else {
    
  }
  _impl_.roomid_.SetAllocated(roomid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.roomid_.IsDefault()) {
    _impl_.roomid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.roomId)
}

// bytes signalData = 2;
inline void CreateVoiceCallResponse::clear_signaldata() {
  _impl_.signaldata_.ClearToEmpty();
}
inline const std::string& CreateVoiceCallResponse::signaldata() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.signalData)
  return _internal_signaldata();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CreateVoiceCallResponse::set_signaldata(ArgT0&& arg0, ArgT... args) {
 
 _impl_.signaldata_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.signalData)
}
inline std::string* CreateVoiceCallResponse::mutable_signaldata() {
  std::string* _s = _internal_mutable_signaldata();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.signalData)
  return _s;
}
inline const std::string& CreateVoiceCallResponse::_internal_signaldata() const {
  return _impl_.signaldata_.Get();
}
inline void CreateVoiceCallResponse::_internal_set_signaldata(const std::string& value) {
  
  _impl_.signaldata_.Set(value, GetArenaForAllocation());
}
inline std::string* CreateVoiceCallResponse::_internal_mutable_signaldata() {
  
  return _impl_.signaldata_.Mutable(GetArenaForAllocation());
}
inline std::string* CreateVoiceCallResponse::release_signaldata() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.signalData)
  return _impl_.signaldata_.Release();
}
inline void CreateVoiceCallResponse::set_allocated_signaldata(std::string* signaldata) {
  if (signaldata != nullptr) {
    
  } else {
    
  }
  _impl_.signaldata_.SetAllocated(signaldata, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.signaldata_.IsDefault()) {
    _impl_.signaldata_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.CreateVoiceCallResponse.signalData)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CreateVoiceCallResponse_2eproto