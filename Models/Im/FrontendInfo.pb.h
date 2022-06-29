// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FrontendInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FrontendInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FrontendInfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_FrontendInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FrontendInfo_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FrontendInfo_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class FrontendInfo;
struct FrontendInfoDefaultTypeInternal;
extern FrontendInfoDefaultTypeInternal _FrontendInfo_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::FrontendInfo* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::FrontendInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class FrontendInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.FrontendInfo) */ {
 public:
  inline FrontendInfo() : FrontendInfo(nullptr) {}
  ~FrontendInfo() override;
  explicit PROTOBUF_CONSTEXPR FrontendInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FrontendInfo(const FrontendInfo& from);
  FrontendInfo(FrontendInfo&& from) noexcept
    : FrontendInfo() {
    *this = ::std::move(from);
  }

  inline FrontendInfo& operator=(const FrontendInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline FrontendInfo& operator=(FrontendInfo&& from) noexcept {
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
  static const FrontendInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const FrontendInfo* internal_default_instance() {
    return reinterpret_cast<const FrontendInfo*>(
               &_FrontendInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FrontendInfo& a, FrontendInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(FrontendInfo* other) {
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
  void UnsafeArenaSwap(FrontendInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FrontendInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FrontendInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FrontendInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FrontendInfo& from) {
    FrontendInfo::MergeImpl(*this, from);
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
  void InternalSwap(FrontendInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.FrontendInfo";
  }
  protected:
  explicit FrontendInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpFieldNumber = 1,
    kPortFieldNumber = 2,
  };
  // string ip = 1;
  void clear_ip();
  const std::string& ip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ip();
  PROTOBUF_NODISCARD std::string* release_ip();
  void set_allocated_ip(std::string* ip);
  private:
  const std::string& _internal_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ip(const std::string& value);
  std::string* _internal_mutable_ip();
  public:

  // int32 port = 2;
  void clear_port();
  int32_t port() const;
  void set_port(int32_t value);
  private:
  int32_t _internal_port() const;
  void _internal_set_port(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.FrontendInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ip_;
    int32_t port_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_FrontendInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FrontendInfo

// string ip = 1;
inline void FrontendInfo::clear_ip() {
  _impl_.ip_.ClearToEmpty();
}
inline const std::string& FrontendInfo::ip() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.FrontendInfo.ip)
  return _internal_ip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FrontendInfo::set_ip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.ip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.FrontendInfo.ip)
}
inline std::string* FrontendInfo::mutable_ip() {
  std::string* _s = _internal_mutable_ip();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.FrontendInfo.ip)
  return _s;
}
inline const std::string& FrontendInfo::_internal_ip() const {
  return _impl_.ip_.Get();
}
inline void FrontendInfo::_internal_set_ip(const std::string& value) {
  
  _impl_.ip_.Set(value, GetArenaForAllocation());
}
inline std::string* FrontendInfo::_internal_mutable_ip() {
  
  return _impl_.ip_.Mutable(GetArenaForAllocation());
}
inline std::string* FrontendInfo::release_ip() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.FrontendInfo.ip)
  return _impl_.ip_.Release();
}
inline void FrontendInfo::set_allocated_ip(std::string* ip) {
  if (ip != nullptr) {
    
  } else {
    
  }
  _impl_.ip_.SetAllocated(ip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.ip_.IsDefault()) {
    _impl_.ip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.FrontendInfo.ip)
}

// int32 port = 2;
inline void FrontendInfo::clear_port() {
  _impl_.port_ = 0;
}
inline int32_t FrontendInfo::_internal_port() const {
  return _impl_.port_;
}
inline int32_t FrontendInfo::port() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.FrontendInfo.port)
  return _internal_port();
}
inline void FrontendInfo::_internal_set_port(int32_t value) {
  
  _impl_.port_ = value;
}
inline void FrontendInfo::set_port(int32_t value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.FrontendInfo.port)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FrontendInfo_2eproto