// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonNotifySignalLiveManagerState.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalLiveManagerState_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalLiveManagerState_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonNotifySignalLiveManagerState_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonNotifySignalLiveManagerState_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonNotifySignalLiveManagerState_2eproto;
namespace AcFunDanmu {
class CommonNotifySignalLiveManagerState;
class CommonNotifySignalLiveManagerStateDefaultTypeInternal;
extern CommonNotifySignalLiveManagerStateDefaultTypeInternal _CommonNotifySignalLiveManagerState_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonNotifySignalLiveManagerState* Arena::CreateMaybeMessage<::AcFunDanmu::CommonNotifySignalLiveManagerState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum CommonNotifySignalLiveManagerState_ManagerState : int {
  CommonNotifySignalLiveManagerState_ManagerState_MANAGER_STATE_UNKNOWN = 0,
  CommonNotifySignalLiveManagerState_ManagerState_MANAGER_ADDED = 1,
  CommonNotifySignalLiveManagerState_ManagerState_MANAGER_REMOVED = 2,
  CommonNotifySignalLiveManagerState_ManagerState_IS_MANAGER = 3,
  CommonNotifySignalLiveManagerState_ManagerState_CommonNotifySignalLiveManagerState_ManagerState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CommonNotifySignalLiveManagerState_ManagerState_CommonNotifySignalLiveManagerState_ManagerState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CommonNotifySignalLiveManagerState_ManagerState_IsValid(int value);
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState_ManagerState_ManagerState_MIN = CommonNotifySignalLiveManagerState_ManagerState_MANAGER_STATE_UNKNOWN;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState_ManagerState_ManagerState_MAX = CommonNotifySignalLiveManagerState_ManagerState_IS_MANAGER;
constexpr int CommonNotifySignalLiveManagerState_ManagerState_ManagerState_ARRAYSIZE = CommonNotifySignalLiveManagerState_ManagerState_ManagerState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonNotifySignalLiveManagerState_ManagerState_descriptor();
template<typename T>
inline const std::string& CommonNotifySignalLiveManagerState_ManagerState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommonNotifySignalLiveManagerState_ManagerState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommonNotifySignalLiveManagerState_ManagerState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CommonNotifySignalLiveManagerState_ManagerState_descriptor(), enum_t_value);
}
inline bool CommonNotifySignalLiveManagerState_ManagerState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CommonNotifySignalLiveManagerState_ManagerState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CommonNotifySignalLiveManagerState_ManagerState>(
    CommonNotifySignalLiveManagerState_ManagerState_descriptor(), name, value);
}
// ===================================================================

class CommonNotifySignalLiveManagerState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonNotifySignalLiveManagerState) */ {
 public:
  inline CommonNotifySignalLiveManagerState() : CommonNotifySignalLiveManagerState(nullptr) {}
  virtual ~CommonNotifySignalLiveManagerState();

  CommonNotifySignalLiveManagerState(const CommonNotifySignalLiveManagerState& from);
  CommonNotifySignalLiveManagerState(CommonNotifySignalLiveManagerState&& from) noexcept
    : CommonNotifySignalLiveManagerState() {
    *this = ::std::move(from);
  }

  inline CommonNotifySignalLiveManagerState& operator=(const CommonNotifySignalLiveManagerState& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonNotifySignalLiveManagerState& operator=(CommonNotifySignalLiveManagerState&& from) noexcept {
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
  static const CommonNotifySignalLiveManagerState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommonNotifySignalLiveManagerState* internal_default_instance() {
    return reinterpret_cast<const CommonNotifySignalLiveManagerState*>(
               &_CommonNotifySignalLiveManagerState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonNotifySignalLiveManagerState& a, CommonNotifySignalLiveManagerState& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonNotifySignalLiveManagerState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonNotifySignalLiveManagerState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonNotifySignalLiveManagerState* New() const final {
    return CreateMaybeMessage<CommonNotifySignalLiveManagerState>(nullptr);
  }

  CommonNotifySignalLiveManagerState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonNotifySignalLiveManagerState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonNotifySignalLiveManagerState& from);
  void MergeFrom(const CommonNotifySignalLiveManagerState& from);
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
  void InternalSwap(CommonNotifySignalLiveManagerState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonNotifySignalLiveManagerState";
  }
  protected:
  explicit CommonNotifySignalLiveManagerState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonNotifySignalLiveManagerState_2eproto);
    return ::descriptor_table_CommonNotifySignalLiveManagerState_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CommonNotifySignalLiveManagerState_ManagerState ManagerState;
  static constexpr ManagerState MANAGER_STATE_UNKNOWN =
    CommonNotifySignalLiveManagerState_ManagerState_MANAGER_STATE_UNKNOWN;
  static constexpr ManagerState MANAGER_ADDED =
    CommonNotifySignalLiveManagerState_ManagerState_MANAGER_ADDED;
  static constexpr ManagerState MANAGER_REMOVED =
    CommonNotifySignalLiveManagerState_ManagerState_MANAGER_REMOVED;
  static constexpr ManagerState IS_MANAGER =
    CommonNotifySignalLiveManagerState_ManagerState_IS_MANAGER;
  static inline bool ManagerState_IsValid(int value) {
    return CommonNotifySignalLiveManagerState_ManagerState_IsValid(value);
  }
  static constexpr ManagerState ManagerState_MIN =
    CommonNotifySignalLiveManagerState_ManagerState_ManagerState_MIN;
  static constexpr ManagerState ManagerState_MAX =
    CommonNotifySignalLiveManagerState_ManagerState_ManagerState_MAX;
  static constexpr int ManagerState_ARRAYSIZE =
    CommonNotifySignalLiveManagerState_ManagerState_ManagerState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ManagerState_descriptor() {
    return CommonNotifySignalLiveManagerState_ManagerState_descriptor();
  }
  template<typename T>
  static inline const std::string& ManagerState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ManagerState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ManagerState_Name.");
    return CommonNotifySignalLiveManagerState_ManagerState_Name(enum_t_value);
  }
  static inline bool ManagerState_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ManagerState* value) {
    return CommonNotifySignalLiveManagerState_ManagerState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStateFieldNumber = 1,
  };
  // .AcFunDanmu.CommonNotifySignalLiveManagerState.ManagerState state = 1;
  void clear_state();
  ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState state() const;
  void set_state(::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState value);
  private:
  ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState _internal_state() const;
  void _internal_set_state(::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonNotifySignalLiveManagerState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonNotifySignalLiveManagerState_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonNotifySignalLiveManagerState

// .AcFunDanmu.CommonNotifySignalLiveManagerState.ManagerState state = 1;
inline void CommonNotifySignalLiveManagerState::clear_state() {
  state_ = 0;
}
inline ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::_internal_state() const {
  return static_cast< ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState >(state_);
}
inline ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::state() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonNotifySignalLiveManagerState.state)
  return _internal_state();
}
inline void CommonNotifySignalLiveManagerState::_internal_set_state(::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState value) {
  
  state_ = value;
}
inline void CommonNotifySignalLiveManagerState::set_state(::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonNotifySignalLiveManagerState.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState>() {
  return ::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonNotifySignalLiveManagerState_2eproto
