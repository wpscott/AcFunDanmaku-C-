// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PkPlayerInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PkPlayerInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PkPlayerInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ZtLiveUserInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PkPlayerInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PkPlayerInfo_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PkPlayerInfo_2eproto;
namespace AcFunDanmu {
class PkPlayerInfo;
class PkPlayerInfoDefaultTypeInternal;
extern PkPlayerInfoDefaultTypeInternal _PkPlayerInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::PkPlayerInfo* Arena::CreateMaybeMessage<::AcFunDanmu::PkPlayerInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class PkPlayerInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.PkPlayerInfo) */ {
 public:
  inline PkPlayerInfo() : PkPlayerInfo(nullptr) {}
  virtual ~PkPlayerInfo();

  PkPlayerInfo(const PkPlayerInfo& from);
  PkPlayerInfo(PkPlayerInfo&& from) noexcept
    : PkPlayerInfo() {
    *this = ::std::move(from);
  }

  inline PkPlayerInfo& operator=(const PkPlayerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PkPlayerInfo& operator=(PkPlayerInfo&& from) noexcept {
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
  static const PkPlayerInfo& default_instance();

  static inline const PkPlayerInfo* internal_default_instance() {
    return reinterpret_cast<const PkPlayerInfo*>(
               &_PkPlayerInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PkPlayerInfo& a, PkPlayerInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PkPlayerInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PkPlayerInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PkPlayerInfo* New() const final {
    return CreateMaybeMessage<PkPlayerInfo>(nullptr);
  }

  PkPlayerInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PkPlayerInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PkPlayerInfo& from);
  void MergeFrom(const PkPlayerInfo& from);
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
  void InternalSwap(PkPlayerInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.PkPlayerInfo";
  }
  protected:
  explicit PkPlayerInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PkPlayerInfo_2eproto);
    return ::descriptor_table_PkPlayerInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBFieldNumber = 2,
    kAFieldNumber = 1,
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

  // .AcFunDanmu.ZtLiveUserInfo a = 1;
  bool has_a() const;
  private:
  bool _internal_has_a() const;
  public:
  void clear_a();
  const ::AcFunDanmu::ZtLiveUserInfo& a() const;
  ::AcFunDanmu::ZtLiveUserInfo* release_a();
  ::AcFunDanmu::ZtLiveUserInfo* mutable_a();
  void set_allocated_a(::AcFunDanmu::ZtLiveUserInfo* a);
  private:
  const ::AcFunDanmu::ZtLiveUserInfo& _internal_a() const;
  ::AcFunDanmu::ZtLiveUserInfo* _internal_mutable_a();
  public:
  void unsafe_arena_set_allocated_a(
      ::AcFunDanmu::ZtLiveUserInfo* a);
  ::AcFunDanmu::ZtLiveUserInfo* unsafe_arena_release_a();

  // bool c = 3;
  void clear_c();
  bool c() const;
  void set_c(bool value);
  private:
  bool _internal_c() const;
  void _internal_set_c(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.PkPlayerInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
  ::AcFunDanmu::ZtLiveUserInfo* a_;
  bool c_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PkPlayerInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PkPlayerInfo

// .AcFunDanmu.ZtLiveUserInfo a = 1;
inline bool PkPlayerInfo::_internal_has_a() const {
  return this != internal_default_instance() && a_ != nullptr;
}
inline bool PkPlayerInfo::has_a() const {
  return _internal_has_a();
}
inline const ::AcFunDanmu::ZtLiveUserInfo& PkPlayerInfo::_internal_a() const {
  const ::AcFunDanmu::ZtLiveUserInfo* p = a_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveUserInfo&>(
      ::AcFunDanmu::_ZtLiveUserInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserInfo& PkPlayerInfo::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PkPlayerInfo.a)
  return _internal_a();
}
inline void PkPlayerInfo::unsafe_arena_set_allocated_a(
    ::AcFunDanmu::ZtLiveUserInfo* a) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(a_);
  }
  a_ = a;
  if (a) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.PkPlayerInfo.a)
}
inline ::AcFunDanmu::ZtLiveUserInfo* PkPlayerInfo::release_a() {
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = a_;
  a_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* PkPlayerInfo::unsafe_arena_release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.PkPlayerInfo.a)
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = a_;
  a_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* PkPlayerInfo::_internal_mutable_a() {
  
  if (a_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(GetArena());
    a_ = p;
  }
  return a_;
}
inline ::AcFunDanmu::ZtLiveUserInfo* PkPlayerInfo::mutable_a() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.PkPlayerInfo.a)
  return _internal_mutable_a();
}
inline void PkPlayerInfo::set_allocated_a(::AcFunDanmu::ZtLiveUserInfo* a) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(a_);
  }
  if (a) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(a)->GetArena();
    if (message_arena != submessage_arena) {
      a = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, a, submessage_arena);
    }
    
  } else {
    
  }
  a_ = a;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.PkPlayerInfo.a)
}

// string b = 2;
inline void PkPlayerInfo::clear_b() {
  b_.ClearToEmpty();
}
inline const std::string& PkPlayerInfo::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PkPlayerInfo.b)
  return _internal_b();
}
inline void PkPlayerInfo::set_b(const std::string& value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PkPlayerInfo.b)
}
inline std::string* PkPlayerInfo::mutable_b() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.PkPlayerInfo.b)
  return _internal_mutable_b();
}
inline const std::string& PkPlayerInfo::_internal_b() const {
  return b_.Get();
}
inline void PkPlayerInfo::_internal_set_b(const std::string& value) {
  
  b_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PkPlayerInfo::set_b(std::string&& value) {
  
  b_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.PkPlayerInfo.b)
}
inline void PkPlayerInfo::set_b(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  b_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.PkPlayerInfo.b)
}
inline void PkPlayerInfo::set_b(const char* value,
    size_t size) {
  
  b_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.PkPlayerInfo.b)
}
inline std::string* PkPlayerInfo::_internal_mutable_b() {
  
  return b_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PkPlayerInfo::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.PkPlayerInfo.b)
  return b_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PkPlayerInfo::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  b_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), b,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.PkPlayerInfo.b)
}

// bool c = 3;
inline void PkPlayerInfo::clear_c() {
  c_ = false;
}
inline bool PkPlayerInfo::_internal_c() const {
  return c_;
}
inline bool PkPlayerInfo::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PkPlayerInfo.c)
  return _internal_c();
}
inline void PkPlayerInfo::_internal_set_c(bool value) {
  
  c_ = value;
}
inline void PkPlayerInfo::set_c(bool value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PkPlayerInfo.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PkPlayerInfo_2eproto