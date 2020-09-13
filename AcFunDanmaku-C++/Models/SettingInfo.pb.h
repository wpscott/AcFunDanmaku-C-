// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SettingInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SettingInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SettingInfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_SettingInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SettingInfo_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SettingInfo_2eproto;
namespace AcFunDanmu {
class SettingInfo;
class SettingInfoDefaultTypeInternal;
extern SettingInfoDefaultTypeInternal _SettingInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::SettingInfo* Arena::CreateMaybeMessage<::AcFunDanmu::SettingInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class SettingInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.SettingInfo) */ {
 public:
  inline SettingInfo() : SettingInfo(nullptr) {}
  virtual ~SettingInfo();

  SettingInfo(const SettingInfo& from);
  SettingInfo(SettingInfo&& from) noexcept
    : SettingInfo() {
    *this = ::std::move(from);
  }

  inline SettingInfo& operator=(const SettingInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SettingInfo& operator=(SettingInfo&& from) noexcept {
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
  static const SettingInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SettingInfo* internal_default_instance() {
    return reinterpret_cast<const SettingInfo*>(
               &_SettingInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SettingInfo& a, SettingInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SettingInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SettingInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SettingInfo* New() const final {
    return CreateMaybeMessage<SettingInfo>(nullptr);
  }

  SettingInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SettingInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SettingInfo& from);
  void MergeFrom(const SettingInfo& from);
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
  void InternalSwap(SettingInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.SettingInfo";
  }
  protected:
  explicit SettingInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_SettingInfo_2eproto);
    return ::descriptor_table_SettingInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLocaleFieldNumber = 1,
    kTimezoneFieldNumber = 2,
  };
  // string locale = 1;
  void clear_locale();
  const std::string& locale() const;
  void set_locale(const std::string& value);
  void set_locale(std::string&& value);
  void set_locale(const char* value);
  void set_locale(const char* value, size_t size);
  std::string* mutable_locale();
  std::string* release_locale();
  void set_allocated_locale(std::string* locale);
  private:
  const std::string& _internal_locale() const;
  void _internal_set_locale(const std::string& value);
  std::string* _internal_mutable_locale();
  public:

  // sint32 timezone = 2;
  void clear_timezone();
  ::PROTOBUF_NAMESPACE_ID::int32 timezone() const;
  void set_timezone(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_timezone() const;
  void _internal_set_timezone(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.SettingInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr locale_;
  ::PROTOBUF_NAMESPACE_ID::int32 timezone_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_SettingInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SettingInfo

// string locale = 1;
inline void SettingInfo::clear_locale() {
  locale_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SettingInfo::locale() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.SettingInfo.locale)
  return _internal_locale();
}
inline void SettingInfo::set_locale(const std::string& value) {
  _internal_set_locale(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.SettingInfo.locale)
}
inline std::string* SettingInfo::mutable_locale() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.SettingInfo.locale)
  return _internal_mutable_locale();
}
inline const std::string& SettingInfo::_internal_locale() const {
  return locale_.Get();
}
inline void SettingInfo::_internal_set_locale(const std::string& value) {
  
  locale_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SettingInfo::set_locale(std::string&& value) {
  
  locale_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.SettingInfo.locale)
}
inline void SettingInfo::set_locale(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  locale_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.SettingInfo.locale)
}
inline void SettingInfo::set_locale(const char* value,
    size_t size) {
  
  locale_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.SettingInfo.locale)
}
inline std::string* SettingInfo::_internal_mutable_locale() {
  
  return locale_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SettingInfo::release_locale() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.SettingInfo.locale)
  return locale_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SettingInfo::set_allocated_locale(std::string* locale) {
  if (locale != nullptr) {
    
  } else {
    
  }
  locale_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), locale,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.SettingInfo.locale)
}

// sint32 timezone = 2;
inline void SettingInfo::clear_timezone() {
  timezone_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SettingInfo::_internal_timezone() const {
  return timezone_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SettingInfo::timezone() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.SettingInfo.timezone)
  return _internal_timezone();
}
inline void SettingInfo::_internal_set_timezone(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  timezone_ = value;
}
inline void SettingInfo::set_timezone(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_timezone(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.SettingInfo.timezone)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SettingInfo_2eproto
