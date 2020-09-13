// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonNotifySignalViolationAlert.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalViolationAlert_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalViolationAlert_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CommonNotifySignalViolationAlert_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonNotifySignalViolationAlert_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonNotifySignalViolationAlert_2eproto;
namespace AcFunDanmu {
class CommonNotifySignalViolationAlert;
class CommonNotifySignalViolationAlertDefaultTypeInternal;
extern CommonNotifySignalViolationAlertDefaultTypeInternal _CommonNotifySignalViolationAlert_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonNotifySignalViolationAlert* Arena::CreateMaybeMessage<::AcFunDanmu::CommonNotifySignalViolationAlert>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonNotifySignalViolationAlert PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonNotifySignalViolationAlert) */ {
 public:
  inline CommonNotifySignalViolationAlert() : CommonNotifySignalViolationAlert(nullptr) {}
  virtual ~CommonNotifySignalViolationAlert();

  CommonNotifySignalViolationAlert(const CommonNotifySignalViolationAlert& from);
  CommonNotifySignalViolationAlert(CommonNotifySignalViolationAlert&& from) noexcept
    : CommonNotifySignalViolationAlert() {
    *this = ::std::move(from);
  }

  inline CommonNotifySignalViolationAlert& operator=(const CommonNotifySignalViolationAlert& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonNotifySignalViolationAlert& operator=(CommonNotifySignalViolationAlert&& from) noexcept {
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
  static const CommonNotifySignalViolationAlert& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommonNotifySignalViolationAlert* internal_default_instance() {
    return reinterpret_cast<const CommonNotifySignalViolationAlert*>(
               &_CommonNotifySignalViolationAlert_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonNotifySignalViolationAlert& a, CommonNotifySignalViolationAlert& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonNotifySignalViolationAlert* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonNotifySignalViolationAlert* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonNotifySignalViolationAlert* New() const final {
    return CreateMaybeMessage<CommonNotifySignalViolationAlert>(nullptr);
  }

  CommonNotifySignalViolationAlert* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonNotifySignalViolationAlert>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonNotifySignalViolationAlert& from);
  void MergeFrom(const CommonNotifySignalViolationAlert& from);
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
  void InternalSwap(CommonNotifySignalViolationAlert* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonNotifySignalViolationAlert";
  }
  protected:
  explicit CommonNotifySignalViolationAlert(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonNotifySignalViolationAlert_2eproto);
    return ::descriptor_table_CommonNotifySignalViolationAlert_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kViolationContentFieldNumber = 1,
  };
  // string violationContent = 1;
  void clear_violationcontent();
  const std::string& violationcontent() const;
  void set_violationcontent(const std::string& value);
  void set_violationcontent(std::string&& value);
  void set_violationcontent(const char* value);
  void set_violationcontent(const char* value, size_t size);
  std::string* mutable_violationcontent();
  std::string* release_violationcontent();
  void set_allocated_violationcontent(std::string* violationcontent);
  private:
  const std::string& _internal_violationcontent() const;
  void _internal_set_violationcontent(const std::string& value);
  std::string* _internal_mutable_violationcontent();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonNotifySignalViolationAlert)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr violationcontent_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonNotifySignalViolationAlert_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonNotifySignalViolationAlert

// string violationContent = 1;
inline void CommonNotifySignalViolationAlert::clear_violationcontent() {
  violationcontent_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommonNotifySignalViolationAlert::violationcontent() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
  return _internal_violationcontent();
}
inline void CommonNotifySignalViolationAlert::set_violationcontent(const std::string& value) {
  _internal_set_violationcontent(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
}
inline std::string* CommonNotifySignalViolationAlert::mutable_violationcontent() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
  return _internal_mutable_violationcontent();
}
inline const std::string& CommonNotifySignalViolationAlert::_internal_violationcontent() const {
  return violationcontent_.Get();
}
inline void CommonNotifySignalViolationAlert::_internal_set_violationcontent(const std::string& value) {
  
  violationcontent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommonNotifySignalViolationAlert::set_violationcontent(std::string&& value) {
  
  violationcontent_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
}
inline void CommonNotifySignalViolationAlert::set_violationcontent(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  violationcontent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
}
inline void CommonNotifySignalViolationAlert::set_violationcontent(const char* value,
    size_t size) {
  
  violationcontent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
}
inline std::string* CommonNotifySignalViolationAlert::_internal_mutable_violationcontent() {
  
  return violationcontent_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommonNotifySignalViolationAlert::release_violationcontent() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
  return violationcontent_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonNotifySignalViolationAlert::set_allocated_violationcontent(std::string* violationcontent) {
  if (violationcontent != nullptr) {
    
  } else {
    
  }
  violationcontent_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), violationcontent,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonNotifySignalViolationAlert.violationContent)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalViolationAlert_2eproto
