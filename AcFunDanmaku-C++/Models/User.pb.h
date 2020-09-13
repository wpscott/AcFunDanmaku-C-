// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: User.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_User_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_User_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_User_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_User_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_User_2eproto;
namespace AcFunDanmu {
class User;
class UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::User* Arena::CreateMaybeMessage<::AcFunDanmu::User>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class User PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.User) */ {
 public:
  inline User() : User(nullptr) {}
  virtual ~User();

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
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
  static const User& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline User* New() const final {
    return CreateMaybeMessage<User>(nullptr);
  }

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<User>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
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
  void InternalSwap(User* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.User";
  }
  protected:
  explicit User(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_User_2eproto);
    return ::descriptor_table_User_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 2,
    kAppIdFieldNumber = 1,
  };
  // int64 uid = 2;
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::int64 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 appId = 1;
  void clear_appid();
  ::PROTOBUF_NAMESPACE_ID::int32 appid() const;
  void set_appid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_appid() const;
  void _internal_set_appid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.User)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 uid_;
  ::PROTOBUF_NAMESPACE_ID::int32 appid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_User_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// User

// int32 appId = 1;
inline void User::clear_appid() {
  appid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 User::_internal_appid() const {
  return appid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 User::appid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.User.appId)
  return _internal_appid();
}
inline void User::_internal_set_appid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  appid_ = value;
}
inline void User::set_appid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_appid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.User.appId)
}

// int64 uid = 2;
inline void User::clear_uid() {
  uid_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 User::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 User::uid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.User.uid)
  return _internal_uid();
}
inline void User::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  uid_ = value;
}
inline void User::set_uid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.User.uid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_User_2eproto
