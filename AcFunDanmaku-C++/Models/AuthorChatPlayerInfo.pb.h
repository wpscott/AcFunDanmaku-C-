// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthorChatPlayerInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AuthorChatPlayerInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AuthorChatPlayerInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ZtLiveUserInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AuthorChatPlayerInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AuthorChatPlayerInfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AuthorChatPlayerInfo_2eproto;
namespace AcFunDanmu {
class AuthorChatPlayerInfo;
class AuthorChatPlayerInfoDefaultTypeInternal;
extern AuthorChatPlayerInfoDefaultTypeInternal _AuthorChatPlayerInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::AuthorChatPlayerInfo* Arena::CreateMaybeMessage<::AcFunDanmu::AuthorChatPlayerInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class AuthorChatPlayerInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.AuthorChatPlayerInfo) */ {
 public:
  inline AuthorChatPlayerInfo() : AuthorChatPlayerInfo(nullptr) {}
  virtual ~AuthorChatPlayerInfo();

  AuthorChatPlayerInfo(const AuthorChatPlayerInfo& from);
  AuthorChatPlayerInfo(AuthorChatPlayerInfo&& from) noexcept
    : AuthorChatPlayerInfo() {
    *this = ::std::move(from);
  }

  inline AuthorChatPlayerInfo& operator=(const AuthorChatPlayerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline AuthorChatPlayerInfo& operator=(AuthorChatPlayerInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AuthorChatPlayerInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthorChatPlayerInfo* internal_default_instance() {
    return reinterpret_cast<const AuthorChatPlayerInfo*>(
               &_AuthorChatPlayerInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AuthorChatPlayerInfo& a, AuthorChatPlayerInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(AuthorChatPlayerInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AuthorChatPlayerInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AuthorChatPlayerInfo* New() const final {
    return CreateMaybeMessage<AuthorChatPlayerInfo>(nullptr);
  }

  AuthorChatPlayerInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AuthorChatPlayerInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AuthorChatPlayerInfo& from);
  void MergeFrom(const AuthorChatPlayerInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AuthorChatPlayerInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.AuthorChatPlayerInfo";
  }
  protected:
  explicit AuthorChatPlayerInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AuthorChatPlayerInfo_2eproto);
    return ::descriptor_table_AuthorChatPlayerInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBFieldNumber = 2,
    kUserFieldNumber = 1,
    kCFieldNumber = 3,
  };
  // string b = 2;
  void clear_b();
  const std::string& b() const;
  void set_b(const std::string& value);
  void set_b(std::string&& value);
  void set_b(const char* value);
  void set_b(const char* value, size_t size);
  std::string* mutable_b();
  std::string* release_b();
  void set_allocated_b(std::string* b);
  private:
  const std::string& _internal_b() const;
  void _internal_set_b(const std::string& value);
  std::string* _internal_mutable_b();
  public:

  // .AcFunDanmu.ZtLiveUserInfo user = 1;
  bool has_user() const;
  private:
  bool _internal_has_user() const;
  public:
  void clear_user();
  const ::AcFunDanmu::ZtLiveUserInfo& user() const;
  ::AcFunDanmu::ZtLiveUserInfo* release_user();
  ::AcFunDanmu::ZtLiveUserInfo* mutable_user();
  void set_allocated_user(::AcFunDanmu::ZtLiveUserInfo* user);
  private:
  const ::AcFunDanmu::ZtLiveUserInfo& _internal_user() const;
  ::AcFunDanmu::ZtLiveUserInfo* _internal_mutable_user();
  public:
  void unsafe_arena_set_allocated_user(
      ::AcFunDanmu::ZtLiveUserInfo* user);
  ::AcFunDanmu::ZtLiveUserInfo* unsafe_arena_release_user();

  // bool c = 3;
  void clear_c();
  bool c() const;
  void set_c(bool value);
  private:
  bool _internal_c() const;
  void _internal_set_c(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.AuthorChatPlayerInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
  ::AcFunDanmu::ZtLiveUserInfo* user_;
  bool c_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AuthorChatPlayerInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuthorChatPlayerInfo

// .AcFunDanmu.ZtLiveUserInfo user = 1;
inline bool AuthorChatPlayerInfo::_internal_has_user() const {
  return this != internal_default_instance() && user_ != nullptr;
}
inline bool AuthorChatPlayerInfo::has_user() const {
  return _internal_has_user();
}
inline const ::AcFunDanmu::ZtLiveUserInfo& AuthorChatPlayerInfo::_internal_user() const {
  const ::AcFunDanmu::ZtLiveUserInfo* p = user_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::ZtLiveUserInfo*>(
      &::AcFunDanmu::_ZtLiveUserInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserInfo& AuthorChatPlayerInfo::user() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.AuthorChatPlayerInfo.user)
  return _internal_user();
}
inline void AuthorChatPlayerInfo::unsafe_arena_set_allocated_user(
    ::AcFunDanmu::ZtLiveUserInfo* user) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user_);
  }
  user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.AuthorChatPlayerInfo.user)
}
inline ::AcFunDanmu::ZtLiveUserInfo* AuthorChatPlayerInfo::release_user() {
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = user_;
  user_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* AuthorChatPlayerInfo::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.AuthorChatPlayerInfo.user)
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = user_;
  user_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* AuthorChatPlayerInfo::_internal_mutable_user() {
  
  if (user_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(GetArena());
    user_ = p;
  }
  return user_;
}
inline ::AcFunDanmu::ZtLiveUserInfo* AuthorChatPlayerInfo::mutable_user() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.AuthorChatPlayerInfo.user)
  return _internal_mutable_user();
}
inline void AuthorChatPlayerInfo::set_allocated_user(::AcFunDanmu::ZtLiveUserInfo* user) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(user_);
  }
  if (user) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user)->GetArena();
    if (message_arena != submessage_arena) {
      user = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    
  } else {
    
  }
  user_ = user;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.AuthorChatPlayerInfo.user)
}

// string b = 2;
inline void AuthorChatPlayerInfo::clear_b() {
  b_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AuthorChatPlayerInfo::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.AuthorChatPlayerInfo.b)
  return _internal_b();
}
inline void AuthorChatPlayerInfo::set_b(const std::string& value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.AuthorChatPlayerInfo.b)
}
inline std::string* AuthorChatPlayerInfo::mutable_b() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.AuthorChatPlayerInfo.b)
  return _internal_mutable_b();
}
inline const std::string& AuthorChatPlayerInfo::_internal_b() const {
  return b_.Get();
}
inline void AuthorChatPlayerInfo::_internal_set_b(const std::string& value) {
  
  b_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AuthorChatPlayerInfo::set_b(std::string&& value) {
  
  b_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.AuthorChatPlayerInfo.b)
}
inline void AuthorChatPlayerInfo::set_b(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  b_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.AuthorChatPlayerInfo.b)
}
inline void AuthorChatPlayerInfo::set_b(const char* value,
    size_t size) {
  
  b_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.AuthorChatPlayerInfo.b)
}
inline std::string* AuthorChatPlayerInfo::_internal_mutable_b() {
  
  return b_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AuthorChatPlayerInfo::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.AuthorChatPlayerInfo.b)
  return b_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AuthorChatPlayerInfo::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  b_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), b,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.AuthorChatPlayerInfo.b)
}

// bool c = 3;
inline void AuthorChatPlayerInfo::clear_c() {
  c_ = false;
}
inline bool AuthorChatPlayerInfo::_internal_c() const {
  return c_;
}
inline bool AuthorChatPlayerInfo::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.AuthorChatPlayerInfo.c)
  return _internal_c();
}
inline void AuthorChatPlayerInfo::_internal_set_c(bool value) {
  
  c_ = value;
}
inline void AuthorChatPlayerInfo::set_c(bool value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.AuthorChatPlayerInfo.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AuthorChatPlayerInfo_2eproto